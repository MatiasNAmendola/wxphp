/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * wxWidgets php extension declarations file
 * 
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

//Prevent double inclusion 
#ifndef WXPHP_PHP_WXWIDGETS_H_GUARD
#define WXPHP_PHP_WXWIDGETS_H_GUARD

#include "common.h"

/**
 * Define Extension Properties 
 */
#define PHP_WXWIDGETS_EXTNAME    "wxWidgets"
#define PHP_WXWIDGETS_EXTVER    "2.9.4.0"
#define PHP_WXWIDGETS_VERSION	"2.9.4 SVN"

/**
 * Import configure options when building outside 
 * of the PHP source tree 
 */
#ifdef HAVE_CONFIG_H
	#include "config.h"
#endif

/** 
 * Include PHP Standard Header 
 */
#include "php.h"

/**
 * Define the entry point symbol
 * Zend will use when loading this module
 */
extern zend_module_entry wxWidgets_module_entry;
#define phpext_sample_ptr &wxWidgets_module_entry

/**
 * Custom function to register objects as constants
 */
#define wxPHP_REGISTER_RESOURCE_CONSTANT(name, resource, class_entry, list_entry, flags)  wxphp_register_resource_constant((name), sizeof(name), (resource), (class_entry), (list_entry), (flags), module_number TSRMLS_CC)
BEGIN_EXTERN_C()
void wxphp_register_resource_constant(const char *name, uint name_len, void* resource, zend_class_entry* class_entry, int list_entry, int flags, int module_number TSRMLS_DC);
END_EXTERN_C()


class wxPhpClientData : public wxClientData
{
	public:
	wxPhpClientData(zval* phpObj)
	{
			this->phpObj = phpObj;
	}
	zval* phpObj;
};

/**
 * Predefined wxApp class method bindings
 */
PHP_METHOD(php_wxApp, __construct);
PHP_METHOD(php_wxApp, SetInstance);
PHP_METHOD(php_wxApp, Yield);

/**
 * Space reserved for autogenerated class method binding declarations 
 */
// entries --->
// <--- entries


#endif //WXPHP_PHP_WXWIDGETS_H_GUARD
