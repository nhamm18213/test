<?php
/**
 * @file
 * Install script
 */

/**
 * Update Common Core Curriculum Page Body
 */
function nysed_cache_configuration_update_7004() {
  $text = '<p><strong><span style="font-family: arial, helvetica, sans-serif;">Common Core Curriculum</span></strong></p>
<p>In order to assist schools and districts with the implementation of the Common Core, NYSED has provided curriculum modules and units in P-12 ELA and math that can be adopted or adapted for local purposes. All remaining modules and units necessary for the first semester of the 2013-14 school year will be posted by the summer. Modules and units necessary for the second semester will be posted by early winter.</p>
<table style="width: 620px; margin: 0 auto;" border="0" cellspacing="0" cellpadding="0" align="left">
<tbody>
<tr style="padding: 0;">
<td style="padding: 0;" align="center" width="50%" height="250"><a href="ela-math-landing"><img src="/sites/all/themes/engageny/images/ela-curriculum-structure-graph.png" alt="ELA Map" width="310" height="250" /></a></td>
<td style="padding: 0;" align="center" width="50%" height="250"><a href="ela-math-landing"><img src="/sites/all/themes/engageny/images/math-curriculum-structure-graph.png" alt="Math Map" width="310" height="250" /></a></td>
</tr>
<tr>
<td>
<div style="padding: 5px;"><span style="font-family: arial, helvetica, sans-serif; font-size: 13px; line-height: 20px;"><a href="ela-math-landing">Curriculum materials for <strong>ELA subjects</strong></a> are structured into 4 levels of hierarchy. You can navigate by grade, then by various modules within the grade. Each module is divided into units, and each unit is further divided into lessons.&nbsp;</span></div>
</td>
<td>
<div style="padding: 5px;"><span style="font-family: arial, helvetica, sans-serif; font-size: 13px; line-height: 20px;"><a href="ela-math-landing">Curriculum materials for <strong>Mathematics subjects</strong></a> are structured into 3 levels of hierarchy. You can navigate by grade, then by various modules within the grade. Each module is then divided into lessons.&nbsp;</span></div>
</td>
</tr>
</tbody>
</table>
<div style="clear: both;">&nbsp;</div>
<p><strong><span style="font-family: arial, helvetica, sans-serif;">These optional curriculum materials will:</span></strong></p>
<ul>
<li><span style="font-family: arial, helvetica, sans-serif;">Support teaching and learning in Pre-Kindergarten (Pre-K) through Grade 12 classrooms across New York State and provide access to sequenced, spiraled, content-rich statewide curriculum programming and instructional practices that support the attainment of the CCLS and align to the Board of Regents’ strategic goals.&nbsp;</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Include teaching and learning experiences that scaffold P-12 grade levels, are focused on P-12 learning progressions, and project a trajectory of learning standards in each content area (English Language Arts &amp; Literacy and Mathematics).&nbsp;</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Incorporate curriculum maps, lesson plans, performance tasks, scaffolding materials, samples of student work, and other classroom artifacts. Newly developed modules will provide curriculum and instructional resources targeted to address all learners within any classroom setting.&nbsp;&nbsp;</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Emphasize resources that are planned and developed according to the principles of Universal Design for Learning (UDL), and are able to be used by all students, including:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>
<ul>
<li><span style="font-family: arial, helvetica, sans-serif;">English language learners (ELL)</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Students with disabilities (SWD)</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Accelerated learners</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Students achieving and performing below grade level (up to two grade levels behind through grade 8, and up to four grade levels behind in high school, grades 9-12).&nbsp;</span></li>
</ul>
</li>
</ul>
<p><strong><span style="font-family: arial, helvetica, sans-serif;">Curriculum modules will include:</span></strong></p>
<ul>
<li><span style="font-family: arial, helvetica, sans-serif;">Year-long scope and sequence documents</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Module framing/overview documents</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Performance tasks (for administration in the middle and at the end of each module)</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Lesson plans</span></li>
<li><span style="font-family: arial, helvetica, sans-serif;">Lesson plan supporting materials (class work, homework, etc.)</span></li>
</ul>';
  $result = db_query('SELECT nid FROM {node} WHERE nid = :nid', array(':nid' => 236));
  foreach($result as $record) {
    $node = node_load($record->nid);
    $node->body[LANGUAGE_NONE][0]['value'] = $text;
    node_save($node);
  }
}
