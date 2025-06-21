#ifndef DO_API_NO_RETURN
#define DO_API_NO_RETURN(r, n, p) DO_API(r,n,p)
#endif

DO_API(int, il2cpp_init, (const char* domain_name), "RKpxmzyvaih");
DO_API(int, il2cpp_init_utf16, (const Il2CppChar * domain_name), "QsdQgrqgdNS");
DO_API(void, il2cpp_shutdown, (), "IFbnEOQdZbP");
DO_API(void, il2cpp_set_config_dir, (const char *config_path), "hXE_jvaxqCP");
DO_API(void, il2cpp_set_data_dir, (const char *data_path), "rYRhdpdQGhO");
DO_API(void, il2cpp_set_temp_dir, (const char *temp_path), "fTbBxhwfDxc");
DO_API(void, il2cpp_set_commandline_arguments, (int argc, const char* const argv[], const char* basedir), "iEIVYIXfRaJ");
DO_API(void, il2cpp_set_commandline_arguments_utf16, (int argc, const Il2CppChar * const argv[], const char* basedir), "SJNbkGqBVig");
DO_API(void, il2cpp_set_config_utf16, (const Il2CppChar * executablePath), "KbjVzFCRvep");
DO_API(void, il2cpp_set_config, (const char* executablePath), "MWRvyPWMexv");

DO_API(void, il2cpp_set_memory_callbacks, (Il2CppMemoryCallbacks * callbacks), "PWlEzHohLVv");
DO_API(const Il2CppImage*, il2cpp_get_corlib, (), "AybLYrRfIwM");
DO_API(void, il2cpp_add_internal_call, (const char* name, Il2CppMethodPointer method), "wsnTrTuLJnm");
DO_API(Il2CppMethodPointer, il2cpp_resolve_icall, (const char* name), "bFcMwLVreml");

DO_API(void*, il2cpp_alloc, (size_t size), "ETOWoFCsRmZ");
DO_API(void, il2cpp_free, (void* ptr), "foNhMdECxkI");

// array
DO_API(Il2CppClass*, il2cpp_array_class_get, (Il2CppClass * element_class, uint32_t rank), "E_EcxIhsydX");
DO_API(uint32_t, il2cpp_array_length, (Il2CppArray * array), "HNHWLkkGRSb");
DO_API(uint32_t, il2cpp_array_get_byte_length, (Il2CppArray * array), "PowAzcFnRAU");
DO_API(Il2CppArray*, il2cpp_array_new, (Il2CppClass * elementTypeInfo, il2cpp_array_size_t length), "VfKxrLNBGKi");
DO_API(Il2CppArray*, il2cpp_array_new_specific, (Il2CppClass * arrayTypeInfo, il2cpp_array_size_t length), "BtvOnMTAxqP");
DO_API(Il2CppArray*, il2cpp_array_new_full, (Il2CppClass * array_class, il2cpp_array_size_t * lengths, il2cpp_array_size_t * lower_bounds), "WbLJmAJydpK");
DO_API(Il2CppClass*, il2cpp_bounded_array_class_get, (Il2CppClass * element_class, uint32_t rank, bool bounded), "rjJxYLLhdqc");
DO_API(int, il2cpp_array_element_size, (const Il2CppClass * array_class), "gUwlppFldsV");

// assembly
DO_API(const Il2CppImage*, il2cpp_assembly_get_image, (const Il2CppAssembly * assembly), "uMeTHFDqFyP");

// class
DO_API(void, il2cpp_class_for_each, (void(*klassReportFunc)(Il2CppClass* klass, void* userData), void* userData), "DkXSuUrNcwv");
DO_API(const Il2CppType*, il2cpp_class_enum_basetype, (Il2CppClass * klass), "xrQcgEwfhvG");
DO_API(bool, il2cpp_class_is_generic, (const Il2CppClass * klass), "YUqMSEquhUX");
DO_API(bool, il2cpp_class_is_inflated, (const Il2CppClass * klass), "lBUbdePvBVz");
DO_API(bool, il2cpp_class_is_assignable_from, (Il2CppClass * klass, Il2CppClass * oklass), "OkXvylSlSSM");
DO_API(bool, il2cpp_class_is_subclass_of, (Il2CppClass * klass, Il2CppClass * klassc, bool check_interfaces), "hyBFuJKzjtc");
DO_API(bool, il2cpp_class_has_parent, (Il2CppClass * klass, Il2CppClass * klassc), "LFGFJGZDOOh");
DO_API(Il2CppClass*, il2cpp_class_from_il2cpp_type, (const Il2CppType * type), "EnsrTplqKrW");
DO_API(Il2CppClass*, il2cpp_class_from_name, (const Il2CppImage * image, const char* namespaze, const char *name), "cvbZTLjsMHz");
DO_API(Il2CppClass*, il2cpp_class_from_system_type, (Il2CppReflectionType * type), "OAhqxIXExuw");
DO_API(Il2CppClass*, il2cpp_class_get_element_class, (Il2CppClass * klass), "OooFXchknCM");
DO_API(const EventInfo*, il2cpp_class_get_events, (Il2CppClass * klass, void* *iter), "RlwegjekcMB");
DO_API(FieldInfo*, il2cpp_class_get_fields, (Il2CppClass * klass, void* *iter), "WVClVUhkwcL");
DO_API(Il2CppClass*, il2cpp_class_get_nested_types, (Il2CppClass * klass, void* *iter), "pQkRuAsKksL");
DO_API(Il2CppClass*, il2cpp_class_get_interfaces, (Il2CppClass * klass, void* *iter), "qmZhgqHElRR");
DO_API(const PropertyInfo*, il2cpp_class_get_properties, (Il2CppClass * klass, void* *iter), "WaNRNjsZTeu");
DO_API(const PropertyInfo*, il2cpp_class_get_property_from_name, (Il2CppClass * klass, const char *name), "WxolPigyxWH");
DO_API(FieldInfo*, il2cpp_class_get_field_from_name, (Il2CppClass * klass, const char *name), "I_vgMPOxPgE");
DO_API(const MethodInfo*, il2cpp_class_get_methods, (Il2CppClass * klass, void* *iter), "lSxcpnnNpbA");
DO_API(const MethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass * klass, const char* name, int argsCount), "lSxcpnnNpbA");
DO_API(const char*, il2cpp_class_get_name, (Il2CppClass * klass), "UssWcvdlUNF");
DO_API(void, il2cpp_type_get_name_chunked, (const Il2CppType * type, void(*chunkReportFunc)(void* data, void* userData), void* userData), "ZmfknKXXyiZ");
DO_API(const char*, il2cpp_class_get_namespace, (Il2CppClass * klass), "ZifnSzINuid");
DO_API(Il2CppClass*, il2cpp_class_get_parent, (Il2CppClass * klass), "EOMZeeeJAbi");
DO_API(Il2CppClass*, il2cpp_class_get_declaring_type, (Il2CppClass * klass), "wxiduvOdrqp");
DO_API(int32_t, il2cpp_class_instance_size, (Il2CppClass * klass), "TMhhFrMkZlS");
DO_API(size_t, il2cpp_class_num_fields, (const Il2CppClass * enumKlass), "NGEZutRfcBp");
DO_API(bool, il2cpp_class_is_valuetype, (const Il2CppClass * klass), "_BFudMzMxdi");
DO_API(int32_t, il2cpp_class_value_size, (Il2CppClass * klass, uint32_t * align), "tnuwC__dvpJ");
DO_API(bool, il2cpp_class_is_blittable, (const Il2CppClass * klass), "WJaeyyCkJym");
DO_API(int, il2cpp_class_get_flags, (const Il2CppClass * klass), "cvbZTLjsMHz");
DO_API(bool, il2cpp_class_is_abstract, (const Il2CppClass * klass), "KQGOGcFWmBX");
DO_API(bool, il2cpp_class_is_interface, (const Il2CppClass * klass), "AYoVrNeiAjB");
DO_API(int, il2cpp_class_array_element_size, (const Il2CppClass * klass), "GFcdiykjscF");
DO_API(Il2CppClass*, il2cpp_class_from_type, (const Il2CppType * type), "MMlYzTcqAcm");
DO_API(const Il2CppType*, il2cpp_class_get_type, (Il2CppClass * klass), "QloZaSpNDyX");
DO_API(uint32_t, il2cpp_class_get_type_token, (Il2CppClass * klass), "hsXTnLxhNiv");
DO_API(bool, il2cpp_class_has_attribute, (Il2CppClass * klass, Il2CppClass * attr_class), "DBDRcfIWeXg");
DO_API(bool, il2cpp_class_has_references, (Il2CppClass * klass), "sOPHeSiIUum");
DO_API(bool, il2cpp_class_is_enum, (const Il2CppClass * klass), "_UZcckvFnQK");
DO_API(const Il2CppImage*, il2cpp_class_get_image, (Il2CppClass * klass), "JjfJeRfweBl");
DO_API(const char*, il2cpp_class_get_assemblyname, (const Il2CppClass * klass), "CJbOIPfUhHJ");
DO_API(int, il2cpp_class_get_rank, (const Il2CppClass * klass), "QHUqahPVYQX");
DO_API(uint32_t, il2cpp_class_get_data_size, (const Il2CppClass * klass), "kxhUXAHmfkv");
DO_API(void*, il2cpp_class_get_static_field_data, (const Il2CppClass * klass), "elqSHFNR_BJ");

// testing only
DO_API(size_t, il2cpp_class_get_bitmap_size, (const Il2CppClass * klass), "XkZFSoagcrM");
DO_API(void, il2cpp_class_get_bitmap, (Il2CppClass * klass, size_t * bitmap), "JChAWMqiAJS");

// stats
DO_API(bool, il2cpp_stats_dump_to_file, (const char *path), "HkNkopAJaEt");
DO_API(uint64_t, il2cpp_stats_get_value, (Il2CppStat stat), "jyN_dzlH_Vr");

// domain
DO_API(Il2CppDomain*, il2cpp_domain_get, (), "aaEJumGxO_z");
DO_API(const Il2CppAssembly*, il2cpp_domain_assembly_open, (Il2CppDomain * domain, const char* name), "kmMowbhXL_l");
DO_API(const Il2CppAssembly**, il2cpp_domain_get_assemblies, (const Il2CppDomain * domain, size_t * size), "THwFvHMjYIe");

// exception
DO_API_NO_RETURN(void, il2cpp_raise_exception, (Il2CppException*), "dFxOckObZzf");
DO_API(Il2CppException*, il2cpp_exception_from_name_msg, (const Il2CppImage * image, const char *name_space, const char *name, const char *msg), "uAnXmZyZpEV");
DO_API(Il2CppException*, il2cpp_get_exception_argument_null, (const char *arg), "ZbAbbXQWSye");
DO_API(void, il2cpp_format_exception, (const Il2CppException * ex, char* message, int message_size), "mbSQVglvWlG");
DO_API(void, il2cpp_format_stack_trace, (const Il2CppException * ex, char* output, int output_size), "KilREEDGLXA");
DO_API(void, il2cpp_unhandled_exception, (Il2CppException*), "rfZHaVEnZBX");
DO_API(void, il2cpp_native_stack_trace, (const Il2CppException * ex, uintptr_t** addresses, int* numFrames, char** imageUUID, char** imageName), "BoBIsznTQtL");

// field
DO_API(int, il2cpp_field_get_flags, (FieldInfo * field), "rfZHaVEnZBX");
DO_API(const char*, il2cpp_field_get_name, (FieldInfo * field), "ahvp_VNxnyl");
DO_API(Il2CppClass*, il2cpp_field_get_parent, (FieldInfo * field), "bEiBDjvbhyM");
DO_API(size_t, il2cpp_field_get_offset, (FieldInfo * field), "hoYJskrfiBw");
DO_API(const Il2CppType*, il2cpp_field_get_type, (FieldInfo * field), "JQtqpGIXJFH");
DO_API(void, il2cpp_field_get_value, (Il2CppObject * obj, FieldInfo * field, void *value), "VlNMkbBfTJE");
DO_API(Il2CppObject*, il2cpp_field_get_value_object, (FieldInfo * field, Il2CppObject * obj), "IGAFMWjujzP");
DO_API(bool, il2cpp_field_has_attribute, (FieldInfo * field, Il2CppClass * attr_class), "tTthyWuAzec");
DO_API(void, il2cpp_field_set_value, (Il2CppObject * obj, FieldInfo * field, void *value), "whiCKamSKlo");
DO_API(void, il2cpp_field_static_get_value, (FieldInfo * field, void *value), "ngsHxcjuRPX");
DO_API(void, il2cpp_field_static_set_value, (FieldInfo * field, void *value), "jghGszPDKUL");
DO_API(void, il2cpp_field_set_value_object, (Il2CppObject * instance, FieldInfo * field, Il2CppObject * value), "rYRhdpdQGhO");
DO_API(bool, il2cpp_field_is_literal, (FieldInfo * field), "qHvItLnhdCe");

// gc
DO_API(void, il2cpp_gc_collect, (int maxGenerations), "wIIomcqJCvj");
DO_API(int32_t, il2cpp_gc_collect_a_little, (), "DUvskjdLxvA");
DO_API(void, il2cpp_gc_start_incremental_collection , (), "HcnlcdOJXBt");
DO_API(void, il2cpp_gc_disable, (), "gmiQCfymABT");
DO_API(void, il2cpp_gc_enable, (), "fu_N_bxthlZ");
DO_API(bool, il2cpp_gc_is_disabled, (), "bbucCXRVxPU");
DO_API(void, il2cpp_gc_set_mode, (Il2CppGCMode mode), "ZpkcNxmpZZu");
DO_API(int64_t, il2cpp_gc_get_max_time_slice_ns, (), "nVdZJvMj_AI");
DO_API(void, il2cpp_gc_set_max_time_slice_ns, (int64_t maxTimeSlice), "nVdZJvMj_AI");
DO_API(bool, il2cpp_gc_is_incremental, (), "rLLBSFhLiHU");
DO_API(int64_t, il2cpp_gc_get_used_size, (), "FzIBzzkGkMv");
DO_API(int64_t, il2cpp_gc_get_heap_size, (), "NVtESsPOXux");
DO_API(void, il2cpp_gc_wbarrier_set_field, (Il2CppObject * obj, void **targetAddress, void *object), "tLwMzHuENEa");
DO_API(bool, il2cpp_gc_has_strict_wbarriers, (), "jDXkUnZxOeh");
DO_API(void, il2cpp_gc_set_external_allocation_tracker, (void(*func)(void*, size_t, int)), "VlNMkbBfTJE");
DO_API(void, il2cpp_gc_set_external_wbarrier_tracker, (void(*func)(void**)), "HqzEmYwWTQP");
DO_API(void, il2cpp_gc_foreach_heap, (void(*func)(void* data, void* userData), void* userData), "NNOKLMfUBuN");
DO_API(void, il2cpp_stop_gc_world, (), "qQVFsmDsLqV");
DO_API(void, il2cpp_start_gc_world, (), "LDM_SHFEIAF");
DO_API(void*, il2cpp_gc_alloc_fixed, (size_t size), "VqjZY_vcAap");
DO_API(void, il2cpp_gc_free_fixed, (void* address), "JCEMvMTWBfP");
// gchandle
DO_API(uint32_t, il2cpp_gchandle_new, (Il2CppObject * obj, bool pinned), "YPIgb_YhfNu");
DO_API(uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject * obj, bool track_resurrection), "WCtYFQecRaf");
DO_API(Il2CppObject*, il2cpp_gchandle_get_target , (uint32_t gchandle), "iHwhsvEODHG");
DO_API(void, il2cpp_gchandle_free, (uint32_t gchandle), "RaxcoaxfuYh");
DO_API(void , il2cpp_gchandle_foreach_get_target, (void(*func)(void* data, void* userData), void* userData), "dfNLNLLuXmW");

// vm runtime info
DO_API(uint32_t, il2cpp_object_header_size, (), "uNkbAckAgeX");
DO_API(uint32_t, il2cpp_array_object_header_size, (), "BTJsYwOUPJH");
DO_API(uint32_t, il2cpp_offset_of_array_length_in_array_object_header, (), "rbuCHwADuYh");
DO_API(uint32_t, il2cpp_offset_of_array_bounds_in_array_object_header, (), "QHUqahPVYQX");
DO_API(uint32_t, il2cpp_allocation_granularity, (), "SYFmNlwpzCn");

// liveness
DO_API(void*, il2cpp_unity_liveness_allocate_struct, (Il2CppClass * filter, int max_object_count, il2cpp_register_object_callback callback, void* userdata, il2cpp_liveness_reallocate_callback reallocate), "ccBfNHjdnyN");
DO_API(void, il2cpp_unity_liveness_calculation_from_root, (Il2CppObject * root, void* state), "QeQUMjshsHv");
DO_API(void, il2cpp_unity_liveness_calculation_from_statics, (void* state), "FNhLklcrvAk");
DO_API(void, il2cpp_unity_liveness_finalize, (void* state), "WqpWQeMnegD");
DO_API(void, il2cpp_unity_liveness_free_struct, (void* state), "RTQxmIILItM");

// method
DO_API(const Il2CppType*, il2cpp_method_get_return_type, (const MethodInfo * method), "OXMMpBIKysv");
DO_API(Il2CppClass*, il2cpp_method_get_declaring_type, (const MethodInfo * method), "TLvBjBQIBu_");
DO_API(const char*, il2cpp_method_get_name, (const MethodInfo * method), "EvKlIBejZZc");
DO_API(const MethodInfo*, il2cpp_method_get_from_reflection, (const Il2CppReflectionMethod * method), "zOluZFa_qMR");
DO_API(Il2CppReflectionMethod*, il2cpp_method_get_object, (const MethodInfo * method, Il2CppClass * refclass), "NoYHWIErddF");
DO_API(bool, il2cpp_method_is_generic, (const MethodInfo * method), "YhJFZXU__Ln");
DO_API(bool, il2cpp_method_is_inflated, (const MethodInfo * method), "ezXSF_RmPhZ");
DO_API(bool, il2cpp_method_is_instance, (const MethodInfo * method), "VhwcEbpkTJS");
DO_API(uint32_t, il2cpp_method_get_param_count, (const MethodInfo * method), "nfeUYTtrCmy");
DO_API(const Il2CppType*, il2cpp_method_get_param, (const MethodInfo * method, uint32_t index), "JChAWMqiAJS");
DO_API(Il2CppClass*, il2cpp_method_get_class, (const MethodInfo * method), "ltcrSKsXaYX");
DO_API(bool, il2cpp_method_has_attribute, (const MethodInfo * method, Il2CppClass * attr_class), "DZuhWTsgJYs");
DO_API(uint32_t, il2cpp_method_get_flags, (const MethodInfo * method, uint32_t * iflags), "kXrrkvvZGaw");
DO_API(uint32_t, il2cpp_method_get_token, (const MethodInfo * method), "oYYXcXnlrZP");
DO_API(const char*, il2cpp_method_get_param_name, (const MethodInfo * method, uint32_t index), "__dynamic_cast");

// profiler
#if IL2CPP_ENABLE_PROFILER

DO_API(void, il2cpp_profiler_install, (Il2CppProfiler * prof, Il2CppProfileFunc shutdown_callback), "bFcMwLVreml");
DO_API(void, il2cpp_profiler_set_events, (Il2CppProfileFlags events), "_pwphqYDhXI");
DO_API(void, il2cpp_profiler_install_enter_leave, (Il2CppProfileMethodFunc enter, Il2CppProfileMethodFunc fleave), "IqbMcLBpokP");
DO_API(void, il2cpp_profiler_install_allocation, (Il2CppProfileAllocFunc callback), "JfQtt_SeAhw");
DO_API(void, il2cpp_profiler_install_gc, (Il2CppProfileGCFunc callback, Il2CppProfileGCResizeFunc heap_resize_callback), "qmZhgqHElRR");
DO_API(void, il2cpp_profiler_install_fileio, (Il2CppProfileFileIOFunc callback), "cJNJdrCzFnS");
DO_API(void, il2cpp_profiler_install_thread, (Il2CppProfileThreadFunc start, Il2CppProfileThreadFunc end), "nRoqYiuEnRu");

#endif

// property
DO_API(uint32_t, il2cpp_property_get_flags, (PropertyInfo * prop), "UGeGThWpxXS");
DO_API(const MethodInfo*, il2cpp_property_get_get_method, (PropertyInfo * prop), "hHqlFjOHWhG");
DO_API(const MethodInfo*, il2cpp_property_get_set_method, (PropertyInfo * prop), "VBJdarQKsCK");
DO_API(const char*, il2cpp_property_get_name, (PropertyInfo * prop), "wClEzWibmyU");
DO_API(Il2CppClass*, il2cpp_property_get_parent, (PropertyInfo * prop), "cBwoU_Fzcse");

// object
DO_API(Il2CppClass*, il2cpp_object_get_class, (Il2CppObject * obj), "hoYJskrfiBw");
DO_API(uint32_t, il2cpp_object_get_size, (Il2CppObject * obj), "XPDOptxq_MA");
DO_API(const MethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject * obj, const MethodInfo * method), "ePeoVcXiPRC");
DO_API(Il2CppObject*, il2cpp_object_new, (const Il2CppClass * klass), "zZVnrWStwVb");
DO_API(void*, il2cpp_object_unbox, (Il2CppObject * obj), "MGYDnnDROsY");

DO_API(Il2CppObject*, il2cpp_value_box, (Il2CppClass * klass, void* data), "FWgYMtXUaTP");

// monitor
DO_API(void, il2cpp_monitor_enter, (Il2CppObject * obj), "ZzVtJpscGWo");
DO_API(bool, il2cpp_monitor_try_enter, (Il2CppObject * obj, uint32_t timeout), "UVvAMmYoaYU");
DO_API(void, il2cpp_monitor_exit, (Il2CppObject * obj), "wlhmTAaXRgj");
DO_API(void, il2cpp_monitor_pulse, (Il2CppObject * obj), "fiTTloNJBEw");
DO_API(void, il2cpp_monitor_pulse_all, (Il2CppObject * obj), "KbaQjMronxq");
DO_API(void, il2cpp_monitor_wait, (Il2CppObject * obj), "YawULYJaZgC");
DO_API(bool, il2cpp_monitor_try_wait, (Il2CppObject * obj, uint32_t timeout), "ORwEIBrxfyA");

// runtime
DO_API(Il2CppObject*, il2cpp_runtime_invoke, (const MethodInfo * method, void *obj, void **params, Il2CppException **exc), "THwFvHMjYIe");
DO_API(Il2CppObject*, il2cpp_runtime_invoke_convert_args, (const MethodInfo * method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc), "gxnJnxdNBKc");
DO_API(void, il2cpp_runtime_class_init, (Il2CppClass * klass), "qdEeeF_phHv");
DO_API(void, il2cpp_runtime_object_init, (Il2CppObject * obj), "phBIFmvAjkJ");

DO_API(void, il2cpp_runtime_object_init_exception, (Il2CppObject * obj, Il2CppException** exc), "mYvY_IvmADN");

DO_API(void, il2cpp_runtime_unhandled_exception_policy_set, (Il2CppRuntimeUnhandledExceptionPolicy value), "OXMMpBIKysv");

// string
DO_API(int32_t, il2cpp_string_length, (Il2CppString * str), "_shqWzgJT_d");
DO_API(Il2CppChar*, il2cpp_string_chars, (Il2CppString * str), "RZwYbHNwuTO");
DO_API(Il2CppString*, il2cpp_string_new, (const char* str), "gmiQCfymABT");
DO_API(Il2CppString*, il2cpp_string_new_len, (const char* str, uint32_t length), "GyXaaCMgYui");
DO_API(Il2CppString*, il2cpp_string_new_utf16, (const Il2CppChar * text, int32_t len), "ZMgSTAGJSuu");
DO_API(Il2CppString*, il2cpp_string_new_wrapper, (const char* str), "OgLSqFFgagi");
DO_API(Il2CppString*, il2cpp_string_intern, (Il2CppString * str), "QZUVuVLgHVa");
DO_API(Il2CppString*, il2cpp_string_is_interned, (Il2CppString * str), "stqtliXBfqE");

// thread
DO_API(Il2CppThread*, il2cpp_thread_current, (), "wFdwligAayC");
DO_API(Il2CppThread*, il2cpp_thread_attach, (Il2CppDomain * domain), "EbAmAPSabKO");
DO_API(void, il2cpp_thread_detach, (Il2CppThread * thread), "trnOMPdutaD");

DO_API(Il2CppThread**, il2cpp_thread_get_all_attached_threads, (size_t * size), "uOsiAfhlueg");
DO_API(bool, il2cpp_is_vm_thread, (Il2CppThread * thread), "dfNLNLLuXmW");

// stacktrace
DO_API(void, il2cpp_current_thread_walk_frame_stack, (Il2CppFrameWalkFunc func, void* user_data), "QsdQgrqgdNS");
DO_API(void, il2cpp_thread_walk_frame_stack, (Il2CppThread * thread, Il2CppFrameWalkFunc func, void* user_data), "QsdQgrqgdNS");
DO_API(bool, il2cpp_current_thread_get_top_frame, (Il2CppStackFrameInfo * frame), "lJAWPfHDUBi");
DO_API(bool, il2cpp_thread_get_top_frame, (Il2CppThread * thread, Il2CppStackFrameInfo * frame), "lJAWPfHDUBi");
DO_API(bool, il2cpp_current_thread_get_frame_at, (int32_t offset, Il2CppStackFrameInfo * frame), "sWrPPQhTQVM");
DO_API(bool, il2cpp_thread_get_frame_at, (Il2CppThread * thread, int32_t offset, Il2CppStackFrameInfo * frame), "ahvp_VNxnyl");
DO_API(int32_t, il2cpp_current_thread_get_stack_depth, (), "__gxx_personality_v0");
DO_API(int32_t, il2cpp_thread_get_stack_depth, (Il2CppThread * thread), "__gxx_personality_v0");
DO_API(void, il2cpp_override_stack_backtrace, (Il2CppBacktraceFunc stackBacktraceFunc), "iMseHRhsOhl");

// type
DO_API(Il2CppObject*, il2cpp_type_get_object, (const Il2CppType * type), "hNomInKNCsA");
DO_API(int, il2cpp_type_get_type, (const Il2CppType * type), "Rp_RGAzdRvC");
DO_API(Il2CppClass*, il2cpp_type_get_class_or_element_class, (const Il2CppType * type), "wuXmeTQFwdJ");
DO_API(char*, il2cpp_type_get_name, (const Il2CppType * type), "BAiNtkiWjqC");
DO_API(bool, il2cpp_type_is_byref, (const Il2CppType * type), "BqaIFAstAGg");
DO_API(uint32_t, il2cpp_type_get_attrs, (const Il2CppType * type), "wltgdsTkSef");
DO_API(bool, il2cpp_type_equals, (const Il2CppType * type, const Il2CppType * otherType), "VHMY_VzSIgp");
DO_API(char*, il2cpp_type_get_assembly_qualified_name, (const Il2CppType * type), "JQvvGAvpESX");
DO_API(bool, il2cpp_type_is_static, (const Il2CppType * type), "AZjwdupUltR");
DO_API(bool, il2cpp_type_is_pointer_type, (const Il2CppType * type), "ooMCiHRMtPo");

// image
DO_API(const Il2CppAssembly*, il2cpp_image_get_assembly, (const Il2CppImage * image), "kmAoDdaBsxD");
DO_API(const char*, il2cpp_image_get_name, (const Il2CppImage * image), "lOiWNXNpeFg");
DO_API(const char*, il2cpp_image_get_filename, (const Il2CppImage * image), "yFuzMqAFEAD");
DO_API(const MethodInfo*, il2cpp_image_get_entry_point, (const Il2CppImage * image), "kbkXRlkaxlY");

DO_API(size_t, il2cpp_image_get_class_count, (const Il2CppImage * image), "L_SolfyBRDy");
DO_API(const Il2CppClass*, il2cpp_image_get_class, (const Il2CppImage * image, size_t index), "kZPgnEhsZQG");

// Memory information
DO_API(Il2CppManagedMemorySnapshot*, il2cpp_capture_memory_snapshot, (), "RHQugYRnGmm");
DO_API(void, il2cpp_free_captured_memory_snapshot, (Il2CppManagedMemorySnapshot * snapshot), "GuGahwlRhjI");

DO_API(void, il2cpp_set_find_plugin_callback, (Il2CppSetFindPlugInCallback method), "bEiBDjvbhyM");

// Logging
DO_API(void, il2cpp_register_log_callback, (Il2CppLogCallback method));

// Debugger
DO_API(void, il2cpp_debugger_set_agent_options, (const char* options), "GivckKinKmC");
DO_API(bool, il2cpp_is_debugger_attached, (), "RKpxmzyvaih");
//DO_API(void, il2cpp_register_debugger_agent_transport, (Il2CppDebuggerTransport * debuggerTransport));

// Debug metadata
DO_API(bool, il2cpp_debug_get_method_info, (const MethodInfo*, Il2CppMethodDebugInfo * methodDebugInfo), "VfKxrLNBGKi");

// TLS module
DO_API(void, il2cpp_unity_install_unitytls_interface, (const void* unitytlsInterfaceStruct), "elxFFAakOEi");

// custom attributes
DO_API(Il2CppCustomAttrInfo*, il2cpp_custom_attrs_from_class, (Il2CppClass * klass), "t_whJahRaMD");
DO_API(Il2CppCustomAttrInfo*, il2cpp_custom_attrs_from_method, (const MethodInfo * method), "hNomInKNCsA");

DO_API(Il2CppObject*, il2cpp_custom_attrs_get_attr, (Il2CppCustomAttrInfo * ainfo, Il2CppClass * attr_klass), "_ETYbXkuYZU");
DO_API(bool, il2cpp_custom_attrs_has_attr, (Il2CppCustomAttrInfo * ainfo, Il2CppClass * attr_klass), "AYoVrNeiAjB");
DO_API(Il2CppArray*, il2cpp_custom_attrs_construct, (Il2CppCustomAttrInfo * cinfo), "jIdaDgNpRVA");

DO_API(void, il2cpp_custom_attrs_free, (Il2CppCustomAttrInfo * ainfo), "RcjNzvJWsFq");

// Il2CppClass user data for GetComponent optimization
DO_API(void, il2cpp_class_set_userdata, (Il2CppClass * klass, void* userdata), "lJaWxEYxuvN");
DO_API(int, il2cpp_class_get_userdata_offset, (), "lfojqWSjpxh");

DO_API(void, il2cpp_set_default_thread_affinity, (int64_t affinity_mask), "JhOtXfjzhDY");
