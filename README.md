
Block Reference
===============
Defines a field type Block reference which creates a relationship to a block
and allows the block to be displayed as the content of the field.

Installation
------------
- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules

- Create a new blockreference field on any fieldable entity (node,
taxonomy_term, etc.)

Theming
-------
To assist in themeing blocks that are displayed using the block reference
module, the block reference element is available in the $variables array in
template_preprocess_block().

The element can be found at:

    $variables['elements']['#blockreference_element']

Note that the element will not be there for non-blockreference blocks so you
should first check the existence of the element before using its contents.

Notes
-----
- Relationships are saved using the block's `delta` + `module`.
- Block configuration visibility settings are respected.
  If a referenced block does not appear when viewing a node, check
  the block's visibility settings on /admin/structure/block.
  Note that visibility settings are evaluated regardless of whether
  the block is assigned to a region.

Issues
------
Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/blockreference/issues

Current Maintainers
-------------------
- [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons](https://www.systemhorizons.co.uk)

Credits
-------
- Ported to Backdrop CMS by opi (https://github.com/opi).
- Originally written for Drupal by DanielB (https://www.drupal.org/u/danielb) and rudiedirkx (https://www.drupal.org/u/rudiedirkx).

License
-------
This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
