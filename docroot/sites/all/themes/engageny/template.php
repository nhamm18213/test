<?php

function yourtheme_css_alter(&$css) {
  // Turn off some styles from the system module
  unset($css[drupal_get_path('module', 'system') . '/system.messages.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.base.css']);
}


require_once 'includes/engageny_menu.inc';

function engageny_preprocess_page(&$vars) {

  if (variable_get('theme_engageny_first_install', TRUE)) {
    include_once 'theme-settings.php';
    _engageny_install();
  }


  $vars['slider_usage'] = (theme_get_setting('slider_usage') != 0) ? TRUE : FALSE;

  $vars['slider_display'] = (theme_get_setting('slider_display') != 0) ? TRUE : FALSE; //slider_display
  $banners = engageny_show_banners();

  // Banners section
  $vars['slider_output'] = engageny_banners_markup($banners);
  $vars['slider_left_text'] = theme_get_setting('slider_left_text');

  $engageny_main_menu = engageny_main_menu_render_superfish();
  if (!empty($engageny_main_menu['content'])) {
    $vars['navigation'] = $engageny_main_menu['content'];
  }

 // Setup IE meta tag to force IE rendering mode <-- Need this to avoid disqus error
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    )
  );

  // Add header meta tag for IE to head
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}

function engageny_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];



  if (!empty($breadcrumb)) {
    $breadcrumb[] = '<span class="current">' . drupal_get_title() . '</span>';

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

function engageny_preprocess_html(&$variables) {
  engageny_banners_add_js();
}

/**
 * Get banner settings.
 *
 * @param <bool> $all
 *    Return all banners or only active.
 *
 * @return <array>
 *    Settings information
 */
function engageny_get_banners($all = TRUE) {
  // Get all banners
  $banners = variable_get('theme_engageny_banner_settings', array());

  // Create list of banner to return
  $banners_value = array();
  foreach ($banners as $banner) {
    if ($all || $banner['image_published']) {
      // Add weight param to use `drupal_sort_weight`
      $banner['weight'] = $banner['image_weight'];
      $banners_value[] = $banner;
    }
  }

  // Sort image by weight
  usort($banners_value, 'drupal_sort_weight');

  return $banners_value;
}

/**
 * Set banner settings.
 *
 * @param <array> $value
 *    Settings to save
 */
function engageny_set_banners($value) {
  variable_set('theme_engageny_banner_settings', $value);
}

function engageny_banners_markup($banners) {

  if ($banners && theme_get_setting('slider_display') != 0) {
    // Add javascript to manage banners
    // Generate HTML markup for banners
    return engageny_banner_markup($banners);
  } else {
    return '';
  }
}

function engageny_banners_add_js() {
  drupal_add_js(
          array(
      'engageny' => array(
          'slider_use' => theme_get_setting('slider_use'),
      ),
          ), array('type' => 'setting')
  );


  if (theme_get_setting('slider_use') == 0) {
    // add nivo javascript

    drupal_add_js(path_to_theme() . '/js/jquery.nivo.slider.pack.js');
    drupal_add_js(
            array(
        'nivo_slider' => array(
            'effect' => theme_get_setting('nivo_effect'),
            'slices' => theme_get_setting('nivo_slices'),
            'boxCols' => theme_get_setting('nivo_boxCols'),
            'boxRows' => theme_get_setting('nivo_boxRows'),
            'animSpeed' => theme_get_setting('nivo_animSpeed'),
            'pauseTime' => theme_get_setting('nivo_pauseTime'),
            'directionNav' => theme_get_setting('nivo_directionNav'),
            'controlNav' => theme_get_setting('nivo_controlNav'),
            'keyboardNav' => theme_get_setting('nivo_keyboardNav'),
            'pauseOnHover' => theme_get_setting('nivo_pauseOnHover'),
            'captionOpacity' => theme_get_setting('nivo_captionOpacity'),
        ),
            ), array('type' => 'setting')
    );
  } else {

    // use polaroid slider
    drupal_add_js(path_to_theme() . '/js/jquery.polaroid.js');
    drupal_add_js(path_to_theme() . '/js/jquery.backopacity.js');
    drupal_add_js(path_to_theme() . '/js/jquery.preloader.js');
    drupal_add_js(path_to_theme() . '/js/jquery.transform-0.8.0.min.js');
    drupal_add_css(path_to_theme() . '/css/polaroid.css');
  }

  drupal_add_js(path_to_theme() . '/js/settings.js');
}

/**
 * Generate banners markup.
 *
 * @return <string>
 *    HTML code to display banner markup.
 */
function engageny_banner_markup($banners) {

  if (theme_get_setting('slider_use') == 0) {
    return engageny_nivo_slider_markup($banners);
  } else {






    $output = '<div id="polaroid"><div id="texture"><a id="goto"></a></div><div id="thumbs">';

    foreach ($banners as $i => $banner) {

      $image_path = $banner['image_path'];
      $image_url = file_create_url($image_path);


      $variables = array(
          'path' => $banner['image_thumb'],
          'alt' => t('@image_desc', array('@image_desc' => $image_url)),
          'title' => isset($banner['image_url']) ? url($banner['image_url']) : FALSE,
          'attributes' => array(
              'class' => 'slide' . ($i != 0 ? ' engageny-hide-no-js' : ''), // hide all the slides except #1
              'id' => 'slide-number-' . $i,
              'longdesc' => t('@image_desc', array('@image_desc' => $banner['image_description']))
          ),
      );
      // Draw image
      $image = theme('image', $variables);

      // Remove link if is the same page
      $banner['image_url'] = ($banner['image_url'] == current_path()) ? FALSE : $banner['image_url'];

      // Add link (if required)
      $output .= '<div class="thumb">';
      $output .= $image;
      $output .= '</div>';
    }

    $output .= '</div></div>';
    return $output;
  }
}

function engageny_nivo_slider_markup($banners) {
  $output = '<div id="nivo" class="nivoSlider">';

  foreach ($banners as $i => $banner) {
    $variables = array(
        'path' => $banner['image_path'],
        'alt' => t('@image_desc', array('@image_desc' => $banner['image_description'])),
        'title' => t('@image_title', array('@image_title' => $banner['image_title'])),
        'attributes' => array(
            'class' => 'slide' . ($i != 0 ? ' engageny-hide-no-js' : ''), // hide all the slides except #1
            'id' => 'slide-number-' . $i,
            'longdesc' => t('@image_desc', array('@image_desc' => $banner['image_description']))
        ),
    );
    // Draw image
    $image = theme('image', $variables);

    // Remove link if is the same page
    $banner['image_url'] = ($banner['image_url'] == current_path()) ? FALSE : $banner['image_url'];

    // Add link (if required)
    $output .= $banner['image_url'] ? l($image, $banner['image_url'], array('html' => TRUE)) : $image;
  }

  $output .=' </div>';
  return $output;
}

/**
 * Get banner to show into current page in accord with settings
 *
 * @return <array>
 *    Banners to show
 */
function engageny_show_banners() {
  $banners = engageny_get_banners(FALSE);
  $display_banners = array();

  // Current path alias
  $path = drupal_strtolower(drupal_get_path_alias($_GET['q']));

  // Check visibility for each banner
  foreach ($banners as $banner) {
    // Pages
    $pages = drupal_strtolower($banner['image_visibility']);

    // Check path for alias, and (if required) for path
    $page_match = drupal_match_path($path, $pages);
    if ($path != $_GET['q']) {
      $page_match = $page_match || drupal_match_path($_GET['q'], $pages);
    }

    // Add banner to visible banner
    if ($page_match) {
      $display_banners[] = $banner;
    }
  }
  return $display_banners;
}

function engageny_privatemsg_new_block($count) {
  $count = $count['count'];
  if ($count == 0) {
    $text = '0';
    return l($text, 'messages', array('attributes' => array('id' => 'privatemsg-new-link-0')));
  }
  else {
    $text = format_plural($count, '1',
                        '@count');
  return l($text, 'messages', array('attributes' => array('id' => 'privatemsg-new-link')));
  }
}

/**
 * Preprocess an RSS feed.
 */
function engageny_preprocess_views_view_rss(&$vars) {
  // During live preview we don't want to output the header since the contents
  // of the feed are being displayed inside a normal HTML page.
  if (empty($vars['view']->live_preview)) {
    // Change header so Chrome understands this is an RSS feed.
    drupal_add_http_header('Content-Type', 'application/xml; charset=utf-8');
  }
}
