
<div id="wrapper" class="container_12">

<div id="top_header">
    <?php if ($page['top_header_left'] || $page['top_header_right']): ?>
        <div class="section clearfix">
          <?php if ($page['top_header_left']): ?>
            <div id="top_header_left">
              <?php print render($page['top_header_left']); ?>
            </div>
          <?php endif; ?>



          <?php if ($page['top_header_right']): ?>
            <div id="top_header_right">
              <?php print render($page['top_header_right']); ?>
            </div>
          <?php endif; ?>

        </div>
    <?php endif; ?>

    <div class="clear"></div>
  </div><!-- #top_header -->

  <div id="header-holder">

    <div id="header">

      <?php if ($navigation): ?>
        <div id="nav">
          <?php print $navigation; ?>

        </div>
      <?php endif; ?>


      <?php if ($logo): ?>
        <div id="logo">

          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>

        </div>
      <?php endif; ?>

    </div><!-- #header -->

  </div><!-- #header-holder -->





    <div id="main-holder">

      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 id="page-title" class="big-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>


      <?php if ($breadcrumb): ?>
        <div id="breadcrumb" class="grid_12 omega alpha">
 <?php
//This section added by kirpaul to handle breadcrumbs for group pages. Couldn't find a way to do this well with views or another module. If a better way comes along this section can be removed.
$breadcrumbwritten=0;
$url=explode("/",$_SERVER["REQUEST_URI"]);
if (array_key_exists(3,$url) && ($url[1]=='community')) {
	if ($url[3]=='discussions') {		
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; Recent Discussions';
	}
	elseif (array_key_exists(3,$url) && ($url[3]=='resources')) {		
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; Recent Resources';
	}
	elseif (array_key_exists(3,$url) && ($url[3]=='links') && (count($url)==4)){		
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; Recent Links';
	}
	elseif (array_key_exists(3,$url) && ($url[3]=='discussion')) {
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$pagepath = drupal_get_normal_path(arg(0) . '/' . arg(1));
		$pagepath = explode('/', $pagepath);
		$pagepath=$pagepath[1];
		$node3 = node_load($pagepath);
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; <a href="/community/'.$url[2].'/'.$url[3].'">Recent Discussions</a> &raquo; '.$node3->title;
		}
	elseif (array_key_exists(3,$url) && ($url[3]=='resource')) {
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$pagepath = drupal_get_normal_path(arg(0) . '/' . arg(1));
		$pagepath = explode('/', $pagepath);
		$pagepath=$pagepath[1];
		$node3 = node_load($pagepath);
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; <a href="/community/'.$url[2].'/'.$url[3].'">Recent Resources</a> &raquo; '.$node3->title;
		}
	elseif (array_key_exists(3,$url) && ($url[3]=='links') && (count($url)==5)){
		$path = drupal_lookup_path('source',$url[1].'/'.$url[2]);
		$path = explode('/', $path);
		$path=$path[1];
		$node2 = node_load($path);		
		$pagepath = drupal_get_normal_path(arg(0) . '/' . arg(1));
		$pagepath = explode('/', $pagepath);
		$pagepath=$pagepath[1];
		$node3 = node_load($pagepath);
		$breadcrumbwritten=1;
		echo '<a href="/">Home</a> &raquo; <a href="/community/'.$url[2].'">'.$node2->title .'</a> &raquo; <a href="/community/'.$url[2].'/'.$url[3].'">Recent Links</a> &raquo; '.$node3->title;
		}
	}
if ($breadcrumbwritten==0) {
 print $breadcrumb; 
}?>
        </div>
      <?php endif; ?>


      <?php
      $content_class = 'grid_12';
      if ($page['sidebar_second'] || $page['sidebar_first']) {
        $content_class = 'centercontent';
      }
      if ($page['sidebar_second'] && $page['sidebar_first']) {
        $content_class = 'grid_4';
      }
      ?>

      <?php
      if ($slider_output):
        ?>		
        <div id="slide">
          <div id="sleft" class="grid_4 alpha omega">
            <?php print $slider_left_text; ?>
          </div>
          <div id="sright" class="grid_8 alpha omega" style="position:relative;">
            <?php print $slider_output; ?>

          </div>
        </div> <!-- slide -->
		<div class="clear"></div>
		<div id="slide_shadow">
		</div><!--slide_shadow-->
        <div class="clear"></div>
      <?php endif; ?>
	<?php
      if ($slider_output):
    ?>		
	  <div id="below_slider">	
    <?php endif; ?>
      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar" class="sidebar_width">
          <?php print render($page['sidebar_first']); ?>
        </div><!-- #sidebar -->		
      <?php endif; ?>

      <div id="main" class="<?php print $content_class; ?>">

        <div id="page_content">
          <?php if ($messages): ?>
            <div id="messages" class="message"><div class="message_box_content section clearfix">
                <?php print $messages; ?>
              </div></div> <!-- /.section, /#messages -->
          <?php endif; ?>
            <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </div>

      </div>



      <?php if ($page['sidebar_second']): ?>
        <div id="right_sidebar" class="grid_3">
          <?php print render($page['sidebar_second']); ?>
        </div><!-- #sidebar -->		

      <?php endif; ?>
      <div class="clear"></div>
	
    </div>
	<?php
      if ($slider_output):
    ?>
  </div> <!--below_slider-->
  <?php endif; ?>



  <div id="footer">
    <?php if ($page['footer_firstcolumn'] || $page['footer_secondcolumn'] || $page['footer_thirdcolumn'] || $page['footer_fourthcolumn']): ?>
      <div id="footer-top">
        <div class="section clearfix">
          <?php if ($page['footer_firstcolumn']): ?>
            <div class="grid_3">
              <?php print render($page['footer_firstcolumn']); ?>
            </div>
          <?php endif; ?>



          <?php if ($page['footer_secondcolumn']): ?>
            <div class="grid_3">
              <?php print render($page['footer_secondcolumn']); ?>
            </div>
          <?php endif; ?>


          <?php if ($page['footer_thirdcolumn']): ?>
            <div class="grid_3">
              <?php print render($page['footer_thirdcolumn']); ?>
            </div>
          <?php endif; ?>


          <?php if ($page['footer_fourthcolumn']): ?>
            <div class="grid_3">
              <?php print render($page['footer_fourthcolumn']); ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    <?php endif; ?>


    <div class="clear"></div>
    <?php if ($page['footer']): ?>
      <div id="footer-bottom">
        <div class="section clearfix">
          <?php print render($page['footer']); ?>  
        </div>
      </div>
    <?php endif; ?>


  </div><!-- #footer -->

</div><!-- #wrapper -->
