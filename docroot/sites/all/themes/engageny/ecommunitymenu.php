<?php 
$path = drupal_get_normal_path(arg(0) . '/' . arg(1));
if ($router_item = menu_get_item($path)) {
  if ($router_item['access']) {
$path = explode('/', $_SERVER["REQUEST_URI"]);
$path = drupal_lookup_path('source',$path[1].'/'.$path[2]);
$path = explode('/', $path);
$path=$path[1];
$node2 = node_load($path);
      echo '<h2><a href="/'.drupal_lookup_path('alias','node/'.$path).'">'.$node2->title .'</a></h2>';
      echo '<div class="groupmenucontentwrapper">';
      echo '<div class="groupmenucontent">';
      echo '<ul class="menu">';
      echo '<li class="first leaf"><a href="/'.drupal_lookup_path('alias','node/'.$path).'/resources">Resources</a></li>';
      echo '<li class="leaf"><a href="/'.drupal_lookup_path('alias','node/'.$path).'/discussions">Discussions</a></li>';
      echo '<li class="last leaf"><a href="/'.drupal_lookup_path('alias','node/'.$path).'/links">Links</a></li>';
      echo '</ul>';
      echo '</div>';
      echo '</div>';
  }
}
?>