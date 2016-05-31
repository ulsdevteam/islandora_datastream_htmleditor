<?php

/** 
 * Renders a link to allow editing of a datatream.
 *
 * @param array $vars
 *   An array containing:
 *   - datastream: An AbstractDatastream for which to generate a edit link.
 *
 * @return string
 *   Markup containing the url to edit a datastream, or empty if inaccessible.
 */
function islandora_datastream_htmleditor_islandora_datastream_edit_link(array $vars) {
  $datastream = $vars['datastream'];

  $edit_registry = module_invoke_all('islandora_edit_datastream_registry', $datastream->parent, $datastream);

  $can_edit = count($edit_registry) > 0 && islandora_datastream_access(ISLANDORA_EDIT_DATASTREAM_CONTENT, $datastream);

  return $can_edit ?
    l(t('edit'), "islandora/object/{$datastream->parent->id}/datastream_content/{$datastream->id}/htmledit") :
    '';
}

?>
