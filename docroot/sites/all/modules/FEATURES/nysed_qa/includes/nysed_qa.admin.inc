<?php

/**
 *	@file
 *		provide admin setting fucntions for nysed_qa module
 */
 
function nysed_qa_admin_settings($form, &$form_state) {
	ctools_include('dependent');
	$form['nysed_qa_mail_redirect_enabled'] = array (
		'#type' => 'checkbox',
		'#title' => t('Enable mail redirection'),
		'#default_value' => variable_get('nysed_qa_mail_redirect_enabled', FALSE)
	);
	$form['nysed_qa_mail_redirect_to'] = array (
		'#type' => 'textfield',
		'#title' => t('Mail redirection recipients'),
		'#process' => array('ctools_dependent_process'),
		'#dependency' => array('edit-nysed-qa-mail-redirect-enabled' => array(1)),
		'#default_value' => variable_get('nysed_qa_mail_redirect_to', NULL),
		'#description' => t('Separate each recipients by comma')
	);
	return system_settings_form($form);
}