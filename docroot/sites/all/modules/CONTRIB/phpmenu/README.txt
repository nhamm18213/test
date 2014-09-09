
A small module initially made for embedding some views in a menu
item. This module can execute custom PHP code and output the result in
a menu item.


Installation 
------------

Place the php_menu folder in the modules directory for your site and
enable it on the `admin/modules` page. You will probably need to enable
the corresponding permission.


Example 
-------

You want to insert a dynamic view in your main menu which displays a list
of nodes filtered by type. Simply create your new view and add a custom
filter for node type then change the output to generate a standard html
list. Then go to your menu and insert a new link.  At the bottom of the
page, you will see a new field called 'PHP Code'. Copy paste the following
snippet and replace 'YOUR_VIEW_NAME' by the real name of your view:

return views_embed_view('YOUR_VIEW_NAME');

For more information about views_embed_view() :
http://drupalcontrib.org/api/drupal/contributions--views--views.module/function/views_embed_view/7

Maintainer 
----------

- Pierre Cornier

