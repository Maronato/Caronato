
#include "nuitka/prelude.hpp"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_int_pos_8;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_str_chr_45;
PyObject *const_str_chr_58;
PyObject *const_bytes_empty;
PyObject *const_str_plain__;
PyObject *const_str_plain_e;
PyObject *const_tuple_empty;
PyObject *const_str_plain_fn;
PyObject *const_str_plain_gi;
PyObject *const_str_plain_os;
PyObject *const_str_plain__gi;
PyObject *const_str_plain_arg;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_do_;
PyObject *const_str_plain_doc;
PyObject *const_str_plain_end;
PyObject *const_str_plain_get;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_obj;
PyObject *const_str_plain_str;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_args;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_data;
PyObject *const_str_plain_dict;
PyObject *const_str_plain_file;
PyObject *const_str_plain_func;
PyObject *const_str_plain_info;
PyObject *const_str_plain_is_a;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_join;
PyObject *const_str_plain_keys;
PyObject *const_str_plain_list;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_path;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_self;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_str_plain_void;
PyObject *const_str_plain_warn;
PyObject *const_str_plain_GEnum;
PyObject *const_str_plain_bases;
PyObject *const_str_plain_close;
PyObject *const_str_plain_dict_;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_float;
PyObject *const_str_plain_items;
PyObject *const_str_plain_klass;
PyObject *const_str_plain_owner;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_split;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_tuple;
PyObject *const_str_plain_type_;
PyObject *const_str_plain_types;
PyObject *const_str_plain_value;
PyObject *const_str_plain_GBoxed;
PyObject *const_str_plain_GFlags;
PyObject *const_str_plain_append;
PyObject *const_str_plain_g_type;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_method;
PyObject *const_str_plain_module;
PyObject *const_str_plain_object;
PyObject *const_str_plain_pytype;
PyObject *const_str_plain_result;
PyObject *const_str_plain_rsplit;
PyObject *const_str_plain_string;
PyObject *const_str_plain_update;
PyObject *const_tuple_none_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_plain_GObject;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___dir__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain___get__;
PyObject *const_str_plain___new__;
PyObject *const_str_plain___set__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_dirname;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_message;
PyObject *const_str_plain_modules;
PyObject *const_str_plain_pkgutil;
PyObject *const_str_plain_replace;
PyObject *const_str_plain_version;
PyObject *const_str_plain_wrapper;
PyObject *const_str_plain_TYPE_INT;
PyObject *const_str_plain___call__;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___info__;
PyObject *const_str_plain___init__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain___repr__;
PyObject *const_str_plain__gobject;
PyObject *const_str_plain_callable;
PyObject *const_str_plain_get_name;
PyObject *const_str_plain_get_size;
PyObject *const_str_plain_importer;
PyObject *const_str_plain_instance;
PyObject *const_str_plain_override;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_TYPE_CHAR;
PyObject *const_str_plain_TYPE_ENUM;
PyObject *const_str_plain_TYPE_LONG;
PyObject *const_str_plain_TYPE_NONE;
PyObject *const_str_plain_TYPE_STRV;
PyObject *const_str_plain_TYPE_UINT;
PyObject *const_str_plain_VFuncInfo;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain___gtype__;
PyObject *const_str_plain_docstring;
PyObject *const_str_plain_get_value;
PyObject *const_str_plain_importlib;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_namespace;
PyObject *const_str_plain_overrides;
PyObject *const_str_plain_unidecode;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_GInterface;
PyObject *const_str_plain_ModuleType;
PyObject *const_str_plain_ObjectInfo;
PyObject *const_str_plain_Repository;
PyObject *const_str_plain_StructInfo;
PyObject *const_str_plain_StructMeta;
PyObject *const_str_plain_TYPE_BOXED;
PyObject *const_str_plain_TYPE_FLAGS;
PyObject *const_str_plain_TYPE_FLOAT;
PyObject *const_str_plain_TYPE_GTYPE;
PyObject *const_str_plain_TYPE_INT64;
PyObject *const_str_plain_TYPE_PARAM;
PyObject *const_str_plain_TYPE_UCHAR;
PyObject *const_str_plain_TYPE_ULONG;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain__constants;
PyObject *const_str_plain_get_g_type;
PyObject *const_str_plain_issubclass;
PyObject *const_str_plain_repository;
PyObject *const_str_plain_stacklevel;
PyObject *const_str_plain_startswith;
PyObject *const_str_plain_GObjectMeta;
PyObject *const_str_plain_PyGIWarning;
PyObject *const_str_plain_TYPE_DOUBLE;
PyObject *const_str_plain_TYPE_OBJECT;
PyObject *const_str_plain_TYPE_STRING;
PyObject *const_str_plain_TYPE_UINT64;
PyObject *const_str_plain___getattr__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_extend_path;
PyObject *const_str_plain_get_default;
PyObject *const_str_plain_get_methods;
PyObject *const_str_plain_get_version;
PyObject *const_str_plain_method_info;
PyObject *const_str_plain_CallableInfo;
PyObject *const_str_plain_FunctionInfo;
PyObject *const_str_plain_TYPE_BOOLEAN;
PyObject *const_str_plain_TYPE_INVALID;
PyObject *const_str_plain_TYPE_POINTER;
PyObject *const_str_plain_TYPE_VARIANT;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___internal__;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain_version_info;
PyObject *const_str_plain_InterfaceInfo;
PyObject *const_str_plain_TYPE_PYOBJECT;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__signalhelper;
PyObject *const_str_plain_get_arguments;
PyObject *const_str_plain_get_namespace;
PyObject *const_str_plain_import_module;
PyObject *const_str_plain_RuntimeWarning;
PyObject *const_str_plain_TYPE_INTERFACE;
PyObject *const_str_plain_is_constructor;
PyObject *const_str_plain_load_overrides;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_DynamicImporter;
PyObject *const_str_plain__propertyhelper;
PyObject *const_str_plain_absolute_import;
PyObject *const_str_plain_install_signals;
PyObject *const_str_plain_require_version;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_void_tuple;
PyObject *const_tuple_int_pos_3_int_0_tuple;
PyObject *const_str_plain_enumerate_versions;
PyObject *const_str_plain_install_properties;
PyObject *const_str_plain_generate_doc_string;
PyObject *const_tuple_str_dot_int_pos_1_tuple;
PyObject *const_str_plain_get_required_version;
PyObject *const_str_plain_introspection_module;
PyObject *const_tuple_str_plain__gobject_tuple;
PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
PyObject *const_tuple_int_pos_3_int_pos_3_tuple;
PyObject *const_str_plain_PyGIDeprecationWarning;
PyObject *const_tuple_str_plain_PyGIWarning_tuple;
PyObject *const_tuple_str_plain_extend_path_tuple;
PyObject *const_str_plain_get_introspection_module;
PyObject *const_tuple_str_chr_45_str_plain___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_str_digest_25731c733fd74e8333aa29126ce85686;
PyObject *const_str_digest_2dddc6e15ab2dcfb5a2b2205b5654fb4;
PyObject *const_str_digest_45e4dde2057b0bf276d6a84f4c917d27;
PyObject *const_str_digest_58961c73026e70b23b08cf381b49e04e;
PyObject *const_str_digest_66f7aeb02c13e91a30a18f0ea911888b;
PyObject *const_str_digest_6fe42bc7767704653d0465c04f34143d;
PyObject *const_str_digest_91f4fd4a0a54300802c54c7fda9faa13;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
PyObject *const_str_digest_d7a2d3682b691f7fb6d75512d991b529;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_ec911d7d8aa19d9c1e00a67b34952d6e;
PyObject *const_str_digest_f4d333e44bfac310ff46328bad2521a0;
PyObject *const_tuple_str_plain_PyGIDeprecationWarning_tuple;
PyObject *const_tuple_str_plain_self_str_plain_instance_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple;

#if defined(_WIN32) && defined(_NUITKA_EXE)
#include <Windows.h>
const unsigned char* constant_bin;
struct __initResourceConstants
{
    __initResourceConstants()
    {
        constant_bin = (const unsigned char*)LockResource(
            LoadResource(
                NULL,
                FindResource(NULL, MAKEINTRESOURCE(3), RT_RCDATA)
            )
        );
    }
} __initResourceConstants_static_initializer;
#else
extern "C" const unsigned char constant_bin[];
#endif

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong( 0ul );
    const_str_dot = UNSTREAM_STRING( &constant_bin[ 319 ], 1, 0 );
    const_int_neg_1 = PyLong_FromLong( -1l );
    const_int_pos_1 = PyLong_FromUnsignedLong( 1ul );
    const_int_pos_2 = PyLong_FromUnsignedLong( 2ul );
    const_int_pos_3 = PyLong_FromUnsignedLong( 3ul );
    const_int_pos_4 = PyLong_FromUnsignedLong( 4ul );
    const_int_pos_8 = PyLong_FromUnsignedLong( 8ul );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_str_chr_45 = UNSTREAM_STRING( &constant_bin[ 1680 ], 1, 0 );
    const_str_chr_58 = UNSTREAM_STRING( &constant_bin[ 288 ], 1, 0 );
    const_bytes_empty = UNSTREAM_BYTES( &constant_bin[ 0 ], 0 );
    const_str_plain__ = UNSTREAM_STRING( &constant_bin[ 75 ], 1, 1 );
    const_str_plain_e = UNSTREAM_STRING( &constant_bin[ 3 ], 1, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_fn = UNSTREAM_STRING( &constant_bin[ 22846 ], 2, 1 );
    const_str_plain_gi = UNSTREAM_STRING( &constant_bin[ 2767 ], 2, 1 );
    const_str_plain_os = UNSTREAM_STRING( &constant_bin[ 349 ], 2, 1 );
    const_str_plain__gi = UNSTREAM_STRING( &constant_bin[ 4093 ], 3, 1 );
    const_str_plain_arg = UNSTREAM_STRING( &constant_bin[ 3763 ], 3, 1 );
    const_str_plain_cls = UNSTREAM_STRING( &constant_bin[ 22848 ], 3, 1 );
    const_str_plain_do_ = UNSTREAM_STRING( &constant_bin[ 331 ], 3, 1 );
    const_str_plain_doc = UNSTREAM_STRING( &constant_bin[ 9289 ], 3, 1 );
    const_str_plain_end = UNSTREAM_STRING( &constant_bin[ 112 ], 3, 1 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 398 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 658 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 2438 ], 3, 1 );
    const_str_plain_obj = UNSTREAM_STRING( &constant_bin[ 402 ], 3, 1 );
    const_str_plain_str = UNSTREAM_STRING( &constant_bin[ 721 ], 3, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 43 ], 3, 1 );
    const_str_plain_args = UNSTREAM_STRING( &constant_bin[ 6852 ], 4, 1 );
    const_str_plain_bool = UNSTREAM_STRING( &constant_bin[ 3823 ], 4, 1 );
    const_str_plain_copy = UNSTREAM_STRING( &constant_bin[ 3929 ], 4, 1 );
    const_str_plain_data = UNSTREAM_STRING( &constant_bin[ 8175 ], 4, 1 );
    const_str_plain_dict = UNSTREAM_STRING( &constant_bin[ 4422 ], 4, 1 );
    const_str_plain_file = UNSTREAM_STRING( &constant_bin[ 994 ], 4, 1 );
    const_str_plain_func = UNSTREAM_STRING( &constant_bin[ 190 ], 4, 1 );
    const_str_plain_info = UNSTREAM_STRING( &constant_bin[ 8436 ], 4, 1 );
    const_str_plain_is_a = UNSTREAM_STRING( &constant_bin[ 4108 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 281 ], 4, 1 );
    const_str_plain_join = UNSTREAM_STRING( &constant_bin[ 22851 ], 4, 1 );
    const_str_plain_keys = UNSTREAM_STRING( &constant_bin[ 22855 ], 4, 1 );
    const_str_plain_list = UNSTREAM_STRING( &constant_bin[ 271 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING( &constant_bin[ 0 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 22859 ], 4, 1 );
    const_str_plain_path = UNSTREAM_STRING( &constant_bin[ 2368 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 4002 ], 4, 1 );
    const_str_plain_self = UNSTREAM_STRING( &constant_bin[ 6047 ], 4, 1 );
    const_str_plain_send = UNSTREAM_STRING( &constant_bin[ 22863 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 22867 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 3508 ], 4, 1 );
    const_str_plain_void = UNSTREAM_STRING( &constant_bin[ 22871 ], 4, 1 );
    const_str_plain_warn = UNSTREAM_STRING( &constant_bin[ 13003 ], 4, 1 );
    const_str_plain_GEnum = UNSTREAM_STRING( &constant_bin[ 22875 ], 5, 1 );
    const_str_plain_bases = UNSTREAM_STRING( &constant_bin[ 7321 ], 5, 1 );
    const_str_plain_close = UNSTREAM_STRING( &constant_bin[ 899 ], 5, 1 );
    const_str_plain_dict_ = UNSTREAM_STRING( &constant_bin[ 22880 ], 5, 1 );
    const_str_plain_flags = UNSTREAM_STRING( &constant_bin[ 5447 ], 5, 1 );
    const_str_plain_float = UNSTREAM_STRING( &constant_bin[ 3817 ], 5, 1 );
    const_str_plain_items = UNSTREAM_STRING( &constant_bin[ 22885 ], 5, 1 );
    const_str_plain_klass = UNSTREAM_STRING( &constant_bin[ 19898 ], 5, 1 );
    const_str_plain_owner = UNSTREAM_STRING( &constant_bin[ 22890 ], 5, 1 );
    const_str_plain_print = UNSTREAM_STRING( &constant_bin[ 7129 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 22895 ], 5, 1 );
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 22900 ], 5, 1 );
    const_str_plain_throw = UNSTREAM_STRING( &constant_bin[ 22905 ], 5, 1 );
    const_str_plain_tuple = UNSTREAM_STRING( &constant_bin[ 8115 ], 5, 1 );
    const_str_plain_type_ = UNSTREAM_STRING( &constant_bin[ 3780 ], 5, 1 );
    const_str_plain_types = UNSTREAM_STRING( &constant_bin[ 4490 ], 5, 1 );
    const_str_plain_value = UNSTREAM_STRING( &constant_bin[ 4518 ], 5, 1 );
    const_str_plain_GBoxed = UNSTREAM_STRING( &constant_bin[ 22910 ], 6, 1 );
    const_str_plain_GFlags = UNSTREAM_STRING( &constant_bin[ 22916 ], 6, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 22922 ], 6, 1 );
    const_str_plain_g_type = UNSTREAM_STRING( &constant_bin[ 8148 ], 6, 1 );
    const_str_plain_kwargs = UNSTREAM_STRING( &constant_bin[ 16282 ], 6, 1 );
    const_str_plain_method = UNSTREAM_STRING( &constant_bin[ 9018 ], 6, 1 );
    const_str_plain_module = UNSTREAM_STRING( &constant_bin[ 1671 ], 6, 1 );
    const_str_plain_object = UNSTREAM_STRING( &constant_bin[ 402 ], 6, 1 );
    const_str_plain_pytype = UNSTREAM_STRING( &constant_bin[ 7048 ], 6, 1 );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 12661 ], 6, 1 );
    const_str_plain_rsplit = UNSTREAM_STRING( &constant_bin[ 22928 ], 6, 1 );
    const_str_plain_string = UNSTREAM_STRING( &constant_bin[ 6831 ], 6, 1 );
    const_str_plain_update = UNSTREAM_STRING( &constant_bin[ 18798 ], 6, 1 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_str_angle_genexpr = UNSTREAM_STRING( &constant_bin[ 11594 ], 9, 0 );
    const_str_plain_GObject = UNSTREAM_STRING( &constant_bin[ 3030 ], 7, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 17644 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 22934 ], 7, 1 );
    const_str_plain___dir__ = UNSTREAM_STRING( &constant_bin[ 14608 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 20553 ], 7, 1 );
    const_str_plain___get__ = UNSTREAM_STRING( &constant_bin[ 7822 ], 7, 1 );
    const_str_plain___new__ = UNSTREAM_STRING( &constant_bin[ 10329 ], 7, 1 );
    const_str_plain___set__ = UNSTREAM_STRING( &constant_bin[ 6753 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 22941 ], 7, 1 );
    const_str_plain_dirname = UNSTREAM_STRING( &constant_bin[ 22948 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 22955 ], 7, 1 );
    const_str_plain_message = UNSTREAM_STRING( &constant_bin[ 1097 ], 7, 1 );
    const_str_plain_modules = UNSTREAM_STRING( &constant_bin[ 2926 ], 7, 1 );
    const_str_plain_pkgutil = UNSTREAM_STRING( &constant_bin[ 22962 ], 7, 1 );
    const_str_plain_replace = UNSTREAM_STRING( &constant_bin[ 15757 ], 7, 1 );
    const_str_plain_version = UNSTREAM_STRING( &constant_bin[ 2663 ], 7, 1 );
    const_str_plain_wrapper = UNSTREAM_STRING( &constant_bin[ 14715 ], 7, 1 );
    const_str_plain_TYPE_INT = UNSTREAM_STRING( &constant_bin[ 4539 ], 8, 1 );
    const_str_plain___call__ = UNSTREAM_STRING( &constant_bin[ 6626 ], 8, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 22969 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 22977 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 22985 ], 8, 1 );
    const_str_plain___info__ = UNSTREAM_STRING( &constant_bin[ 22993 ], 8, 1 );
    const_str_plain___init__ = UNSTREAM_STRING( &constant_bin[ 2482 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING( &constant_bin[ 23001 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 23009 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 23017 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING( &constant_bin[ 23025 ], 8, 1 );
    const_str_plain___repr__ = UNSTREAM_STRING( &constant_bin[ 4000 ], 8, 1 );
    const_str_plain__gobject = UNSTREAM_STRING( &constant_bin[ 23033 ], 8, 1 );
    const_str_plain_callable = UNSTREAM_STRING( &constant_bin[ 5062 ], 8, 1 );
    const_str_plain_get_name = UNSTREAM_STRING( &constant_bin[ 14078 ], 8, 1 );
    const_str_plain_get_size = UNSTREAM_STRING( &constant_bin[ 23041 ], 8, 1 );
    const_str_plain_importer = UNSTREAM_STRING( &constant_bin[ 12962 ], 8, 1 );
    const_str_plain_instance = UNSTREAM_STRING( &constant_bin[ 4347 ], 8, 1 );
    const_str_plain_override = UNSTREAM_STRING( &constant_bin[ 3289 ], 8, 1 );
    const_str_plain_warnings = UNSTREAM_STRING( &constant_bin[ 13003 ], 8, 1 );
    const_str_plain_TYPE_CHAR = UNSTREAM_STRING( &constant_bin[ 4555 ], 9, 1 );
    const_str_plain_TYPE_ENUM = UNSTREAM_STRING( &constant_bin[ 4661 ], 9, 1 );
    const_str_plain_TYPE_LONG = UNSTREAM_STRING( &constant_bin[ 4613 ], 9, 1 );
    const_str_plain_TYPE_NONE = UNSTREAM_STRING( &constant_bin[ 4528 ], 9, 1 );
    const_str_plain_TYPE_STRV = UNSTREAM_STRING( &constant_bin[ 4800 ], 9, 1 );
    const_str_plain_TYPE_UINT = UNSTREAM_STRING( &constant_bin[ 4602 ], 9, 1 );
    const_str_plain_VFuncInfo = UNSTREAM_STRING( &constant_bin[ 23049 ], 9, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 23058 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 23067 ], 9, 1 );
    const_str_plain___gtype__ = UNSTREAM_STRING( &constant_bin[ 23076 ], 9, 1 );
    const_str_plain_docstring = UNSTREAM_STRING( &constant_bin[ 11909 ], 9, 1 );
    const_str_plain_get_value = UNSTREAM_STRING( &constant_bin[ 14142 ], 9, 1 );
    const_str_plain_importlib = UNSTREAM_STRING( &constant_bin[ 23085 ], 9, 1 );
    const_str_plain_metaclass = UNSTREAM_STRING( &constant_bin[ 7109 ], 9, 1 );
    const_str_plain_namespace = UNSTREAM_STRING( &constant_bin[ 3246 ], 9, 1 );
    const_str_plain_overrides = UNSTREAM_STRING( &constant_bin[ 3289 ], 9, 1 );
    const_str_plain_unidecode = UNSTREAM_STRING( &constant_bin[ 21519 ], 9, 1 );
    const_slice_none_none_none = PySlice_New( Py_None, Py_None, Py_None );
    const_str_plain_GInterface = UNSTREAM_STRING( &constant_bin[ 23094 ], 10, 1 );
    const_str_plain_ModuleType = UNSTREAM_STRING( &constant_bin[ 23104 ], 10, 1 );
    const_str_plain_ObjectInfo = UNSTREAM_STRING( &constant_bin[ 23114 ], 10, 1 );
    const_str_plain_Repository = UNSTREAM_STRING( &constant_bin[ 13428 ], 10, 1 );
    const_str_plain_StructInfo = UNSTREAM_STRING( &constant_bin[ 23124 ], 10, 1 );
    const_str_plain_StructMeta = UNSTREAM_STRING( &constant_bin[ 20542 ], 10, 1 );
    const_str_plain_TYPE_BOXED = UNSTREAM_STRING( &constant_bin[ 4736 ], 10, 1 );
    const_str_plain_TYPE_FLAGS = UNSTREAM_STRING( &constant_bin[ 4672 ], 10, 1 );
    const_str_plain_TYPE_FLOAT = UNSTREAM_STRING( &constant_bin[ 4684 ], 10, 1 );
    const_str_plain_TYPE_GTYPE = UNSTREAM_STRING( &constant_bin[ 4788 ], 10, 1 );
    const_str_plain_TYPE_INT64 = UNSTREAM_STRING( &constant_bin[ 4636 ], 10, 1 );
    const_str_plain_TYPE_PARAM = UNSTREAM_STRING( &constant_bin[ 4748 ], 10, 1 );
    const_str_plain_TYPE_UCHAR = UNSTREAM_STRING( &constant_bin[ 4566 ], 10, 1 );
    const_str_plain_TYPE_ULONG = UNSTREAM_STRING( &constant_bin[ 4624 ], 10, 1 );
    const_str_plain___cached__ = UNSTREAM_STRING( &constant_bin[ 23134 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 23144 ], 10, 1 );
    const_str_plain___loader__ = UNSTREAM_STRING( &constant_bin[ 23154 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 23164 ], 10, 1 );
    const_str_plain__constants = UNSTREAM_STRING( &constant_bin[ 3797 ], 10, 1 );
    const_str_plain_get_g_type = UNSTREAM_STRING( &constant_bin[ 23174 ], 10, 1 );
    const_str_plain_issubclass = UNSTREAM_STRING( &constant_bin[ 23184 ], 10, 1 );
    const_str_plain_repository = UNSTREAM_STRING( &constant_bin[ 2888 ], 10, 1 );
    const_str_plain_stacklevel = UNSTREAM_STRING( &constant_bin[ 12899 ], 10, 1 );
    const_str_plain_startswith = UNSTREAM_STRING( &constant_bin[ 23194 ], 10, 1 );
    const_str_plain_GObjectMeta = UNSTREAM_STRING( &constant_bin[ 20482 ], 11, 1 );
    const_str_plain_PyGIWarning = UNSTREAM_STRING( &constant_bin[ 23204 ], 11, 1 );
    const_str_plain_TYPE_DOUBLE = UNSTREAM_STRING( &constant_bin[ 4696 ], 11, 1 );
    const_str_plain_TYPE_OBJECT = UNSTREAM_STRING( &constant_bin[ 4760 ], 11, 1 );
    const_str_plain_TYPE_STRING = UNSTREAM_STRING( &constant_bin[ 4709 ], 11, 1 );
    const_str_plain_TYPE_UINT64 = UNSTREAM_STRING( &constant_bin[ 4648 ], 11, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 2810 ], 11, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 23215 ], 11, 1 );
    const_str_plain___prepare__ = UNSTREAM_STRING( &constant_bin[ 23226 ], 11, 1 );
    const_str_plain_extend_path = UNSTREAM_STRING( &constant_bin[ 23237 ], 11, 1 );
    const_str_plain_get_default = UNSTREAM_STRING( &constant_bin[ 4281 ], 11, 1 );
    const_str_plain_get_methods = UNSTREAM_STRING( &constant_bin[ 23248 ], 11, 1 );
    const_str_plain_get_version = UNSTREAM_STRING( &constant_bin[ 23259 ], 11, 1 );
    const_str_plain_method_info = UNSTREAM_STRING( &constant_bin[ 23270 ], 11, 1 );
    const_str_plain_CallableInfo = UNSTREAM_STRING( &constant_bin[ 23281 ], 12, 1 );
    const_str_plain_FunctionInfo = UNSTREAM_STRING( &constant_bin[ 23293 ], 12, 1 );
    const_str_plain_TYPE_BOOLEAN = UNSTREAM_STRING( &constant_bin[ 4578 ], 12, 1 );
    const_str_plain_TYPE_INVALID = UNSTREAM_STRING( &constant_bin[ 23305 ], 12, 1 );
    const_str_plain_TYPE_POINTER = UNSTREAM_STRING( &constant_bin[ 4722 ], 12, 1 );
    const_str_plain_TYPE_VARIANT = UNSTREAM_STRING( &constant_bin[ 4811 ], 12, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 23317 ], 12, 1 );
    const_str_plain___internal__ = UNSTREAM_STRING( &constant_bin[ 23329 ], 12, 1 );
    const_str_plain___qualname__ = UNSTREAM_STRING( &constant_bin[ 23341 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING( &constant_bin[ 23353 ], 12, 1 );
    const_str_plain_version_info = UNSTREAM_STRING( &constant_bin[ 23365 ], 12, 1 );
    const_str_plain_InterfaceInfo = UNSTREAM_STRING( &constant_bin[ 23377 ], 13, 1 );
    const_str_plain_TYPE_PYOBJECT = UNSTREAM_STRING( &constant_bin[ 4773 ], 13, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 7107 ], 13, 1 );
    const_str_plain__signalhelper = UNSTREAM_STRING( &constant_bin[ 8768 ], 13, 1 );
    const_str_plain_get_arguments = UNSTREAM_STRING( &constant_bin[ 23390 ], 13, 1 );
    const_str_plain_get_namespace = UNSTREAM_STRING( &constant_bin[ 23403 ], 13, 1 );
    const_str_plain_import_module = UNSTREAM_STRING( &constant_bin[ 23416 ], 13, 1 );
    const_str_plain_RuntimeWarning = UNSTREAM_STRING( &constant_bin[ 23429 ], 14, 1 );
    const_str_plain_TYPE_INTERFACE = UNSTREAM_STRING( &constant_bin[ 4539 ], 14, 1 );
    const_str_plain_is_constructor = UNSTREAM_STRING( &constant_bin[ 23443 ], 14, 1 );
    const_str_plain_load_overrides = UNSTREAM_STRING( &constant_bin[ 23457 ], 14, 1 );
    const_slice_int_pos_1_none_none = PySlice_New( const_int_pos_1, Py_None, Py_None );
    const_str_plain_DynamicImporter = UNSTREAM_STRING( &constant_bin[ 6 ], 15, 1 );
    const_str_plain__propertyhelper = UNSTREAM_STRING( &constant_bin[ 4130 ], 15, 1 );
    const_str_plain_absolute_import = UNSTREAM_STRING( &constant_bin[ 23471 ], 15, 1 );
    const_str_plain_install_signals = UNSTREAM_STRING( &constant_bin[ 23486 ], 15, 1 );
    const_str_plain_require_version = UNSTREAM_STRING( &constant_bin[ 13304 ], 15, 1 );
    const_tuple_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_tuple_str_plain_void_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_void_tuple, 0, const_str_plain_void ); Py_INCREF( const_str_plain_void );
    const_tuple_int_pos_3_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_0_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_enumerate_versions = UNSTREAM_STRING( &constant_bin[ 23501 ], 18, 1 );
    const_str_plain_install_properties = UNSTREAM_STRING( &constant_bin[ 6479 ], 18, 1 );
    const_str_plain_generate_doc_string = UNSTREAM_STRING( &constant_bin[ 12038 ], 19, 1 );
    const_tuple_str_dot_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_dot_int_pos_1_tuple, 0, const_str_dot ); Py_INCREF( const_str_dot );
    PyTuple_SET_ITEM( const_tuple_str_dot_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_get_required_version = UNSTREAM_STRING( &constant_bin[ 23519 ], 20, 1 );
    const_str_plain_introspection_module = UNSTREAM_STRING( &constant_bin[ 14347 ], 20, 1 );
    const_tuple_str_plain__gobject_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__gobject_tuple, 0, const_str_plain__gobject ); Py_INCREF( const_str_plain__gobject );
    const_tuple_int_pos_3_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_int_pos_3_int_pos_3_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_3_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_3_tuple, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_str_plain_PyGIDeprecationWarning = UNSTREAM_STRING( &constant_bin[ 17974 ], 22, 1 );
    const_tuple_str_plain_PyGIWarning_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyGIWarning_tuple, 0, const_str_plain_PyGIWarning ); Py_INCREF( const_str_plain_PyGIWarning );
    const_tuple_str_plain_extend_path_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_extend_path_tuple, 0, const_str_plain_extend_path ); Py_INCREF( const_str_plain_extend_path );
    const_str_plain_get_introspection_module = UNSTREAM_STRING( &constant_bin[ 23539 ], 24, 1 );
    const_tuple_str_chr_45_str_plain___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_str_plain___tuple, 0, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_str_plain___tuple, 1, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_tuple_str_plain_self_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_str_plain_self_str_plain_path_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_path_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_path_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_digest_25731c733fd74e8333aa29126ce85686 = UNSTREAM_STRING( &constant_bin[ 5771 ], 2, 0 );
    const_str_digest_2dddc6e15ab2dcfb5a2b2205b5654fb4 = UNSTREAM_STRING( &constant_bin[ 20349 ], 14, 0 );
    const_str_digest_45e4dde2057b0bf276d6a84f4c917d27 = UNSTREAM_STRING( &constant_bin[ 7972 ], 7, 0 );
    const_str_digest_58961c73026e70b23b08cf381b49e04e = UNSTREAM_STRING( &constant_bin[ 23563 ], 15, 0 );
    const_str_digest_66f7aeb02c13e91a30a18f0ea911888b = UNSTREAM_STRING( &constant_bin[ 2885 ], 13, 0 );
    const_str_digest_6fe42bc7767704653d0465c04f34143d = UNSTREAM_STRING( &constant_bin[ 23578 ], 46, 0 );
    const_str_digest_91f4fd4a0a54300802c54c7fda9faa13 = UNSTREAM_STRING( &constant_bin[ 14253 ], 6, 0 );
    const_str_digest_9816e8d1552296af90d250823c964059 = UNSTREAM_STRING( &constant_bin[ 23624 ], 46, 0 );
    const_str_digest_b9c4baf879ebd882d40843df3a4dead7 = UNSTREAM_STRING( &constant_bin[ 319 ], 2, 1 );
    const_str_digest_d7a2d3682b691f7fb6d75512d991b529 = UNSTREAM_STRING( &constant_bin[ 23670 ], 13, 0 );
    const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77 = UNSTREAM_STRING( &constant_bin[ 3185 ], 2, 0 );
    const_str_digest_ec911d7d8aa19d9c1e00a67b34952d6e = UNSTREAM_STRING( &constant_bin[ 23670 ], 12, 0 );
    const_str_digest_f4d333e44bfac310ff46328bad2521a0 = UNSTREAM_STRING( &constant_bin[ 23683 ], 13, 0 );
    const_tuple_str_plain_PyGIDeprecationWarning_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyGIDeprecationWarning_tuple, 0, const_str_plain_PyGIDeprecationWarning ); Py_INCREF( const_str_plain_PyGIDeprecationWarning );
    const_tuple_str_plain_self_str_plain_instance_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_instance_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_instance_tuple, 1, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple, 1, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple, 2, const_str_plain_owner ); Py_INCREF( const_str_plain_owner );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_58961c73026e70b23b08cf381b49e04e
    );
#endif
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif


void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
