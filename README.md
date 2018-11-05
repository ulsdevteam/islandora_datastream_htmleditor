islandora_datastream_htmleditor
==============

Provides a way to directly edit the datastream HTML values.

This module works nicely with the [islandora_datastream_blocks](https://github.com/ulsdevteam/islandora_datastream_blocks) module to be able to create, edit, and display HTML metadata related to any islandora object.

A separate module has been written [islandora_datastream_blocks_html_teaser](https://github.com/ulsdevteam/islandora_datastream_blocks_html_teaser) to manage a teaser version of the full HTML by inserting a configurable "break" that renders as a "Read more..." link.

## Configuration

The configuration at `admin/islandora/tools/islandora_datastream_htmleditor` simply sets up which datastream/s can use the HTML editor.  There is also a permission setting to Edit html metadata at `admin/people/permissions` to set who is able to edit HTML datastreams.  

After this step, these blocks will be exposed to Drupal -- and they can be assigned to a region in any theme using the Drupal at `admin/structure/block`.

## Requires a WYSIWYG Editor 

The CKEditor module is used to edit the HTML blocks.  Any other WYSIWYG editor could be used as long as Drupal can be configured to use it.  This module requires the [ckeditor library](http://ckeditor.com/download) to be installed under `sites/libraries` as well as the Drupal [ckeditor module](https://www.drupal.org/project/ckeditor) to be installed in the `sites/modules` folder.

## Author / License

Written by [Willow Gillingham](https://github.com/bgilling) for the [University of Pittsburgh](http://www.pitt.edu).  Copyright (c) University of Pittsburgh.

Released under a license of GPL v2 or later.
