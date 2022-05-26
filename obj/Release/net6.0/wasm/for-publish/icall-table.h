#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
186,
193,
194,
195,
196,
197,
198,
199,
200,
201,
204,
205,
372,
373,
375,
404,
405,
406,
426,
427,
428,
429,
430,
521,
522,
523,
526,
567,
568,
569,
572,
574,
576,
578,
583,
591,
592,
593,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
614,
615,
616,
617,
701,
702,
703,
704,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
725,
859,
860,
868,
871,
873,
879,
880,
882,
883,
887,
889,
890,
891,
892,
894,
895,
896,
899,
900,
903,
904,
905,
981,
982,
984,
992,
993,
994,
995,
996,
1000,
1001,
1002,
1003,
1004,
1005,
1007,
1008,
1009,
1011,
1012,
1014,
1018,
1019,
1020,
1293,
1508,
1509,
8176,
8177,
8179,
8180,
8181,
8182,
8183,
8185,
8187,
8189,
8190,
8191,
8199,
8201,
8205,
8206,
8208,
8210,
8212,
8224,
8233,
8234,
8236,
8237,
8238,
8239,
8240,
8242,
8244,
9260,
9264,
9266,
9267,
9268,
9269,
9339,
9340,
9341,
9358,
9359,
9360,
9361,
9395,
9445,
9448,
9457,
9458,
9459,
9460,
9850,
9851,
9856,
9857,
9908,
9909,
9910,
9938,
9944,
9951,
9961,
9965,
10057,
10067,
10068,
10081,
10082,
10083,
10084,
10085,
10086,
10087,
10094,
10110,
10131,
10132,
10141,
10143,
10150,
10151,
10154,
10156,
10161,
10167,
10168,
10175,
10177,
10187,
10190,
10191,
10192,
10203,
10215,
10221,
10222,
10223,
10225,
10226,
10236,
10255,
10277,
10278,
10279,
10280,
10281,
10298,
10303,
10308,
10339,
10340,
10835,
10836,
10919,
10998,
11259,
11260,
11269,
11270,
11271,
11277,
11355,
11528,
11529,
12285,
12286,
13103,
13122,
13129,
13130,
13132,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 186,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 194,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 195,
ves_icall_System_Array_CanChangePrimitive,
// token 196,
ves_icall_System_Array_FastCopy_raw,
// token 197,
ves_icall_System_Array_GetLength_raw,
// token 198,
ves_icall_System_Array_GetLowerBound_raw,
// token 199,
ves_icall_System_Array_GetGenericValue_icall,
// token 200,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetGenericValue_icall,
// token 204,
ves_icall_System_Array_SetValueImpl_raw,
// token 205,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 372,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 373,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 375,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 404,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 405,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 406,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_ToObject_raw,
// token 428,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 429,
ves_icall_System_Enum_get_underlying_type_raw,
// token 430,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 521,
ves_icall_System_Environment_get_ProcessorCount,
// token 522,
ves_icall_System_Environment_get_TickCount,
// token 523,
ves_icall_System_Environment_get_TickCount64,
// token 526,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_GetCollectionCount,
// token 568,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 569,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 572,
ves_icall_System_GC_SuppressFinalize_raw,
// token 574,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 576,
ves_icall_System_GC_GetGCMemoryInfo,
// token 578,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 583,
ves_icall_System_Object_MemberwiseClone_raw,
// token 591,
ves_icall_System_Math_Abs_double,
// token 592,
ves_icall_System_Math_Abs_single,
// token 593,
ves_icall_System_Math_Acos,
// token 594,
ves_icall_System_Math_Acosh,
// token 595,
ves_icall_System_Math_Asin,
// token 596,
ves_icall_System_Math_Asinh,
// token 597,
ves_icall_System_Math_Atan,
// token 598,
ves_icall_System_Math_Atan2,
// token 599,
ves_icall_System_Math_Atanh,
// token 600,
ves_icall_System_Math_Cbrt,
// token 601,
ves_icall_System_Math_Ceiling,
// token 602,
ves_icall_System_Math_Cos,
// token 603,
ves_icall_System_Math_Cosh,
// token 604,
ves_icall_System_Math_Exp,
// token 605,
ves_icall_System_Math_Floor,
// token 606,
ves_icall_System_Math_Log,
// token 607,
ves_icall_System_Math_Log10,
// token 608,
ves_icall_System_Math_Pow,
// token 609,
ves_icall_System_Math_Sin,
// token 610,
ves_icall_System_Math_Sinh,
// token 611,
ves_icall_System_Math_Sqrt,
// token 612,
ves_icall_System_Math_Tan,
// token 613,
ves_icall_System_Math_Tanh,
// token 614,
ves_icall_System_Math_FusedMultiplyAdd,
// token 615,
ves_icall_System_Math_ILogB,
// token 616,
ves_icall_System_Math_Log2,
// token 617,
ves_icall_System_Math_ModF,
// token 701,
ves_icall_System_MathF_Acos,
// token 702,
ves_icall_System_MathF_Acosh,
// token 703,
ves_icall_System_MathF_Asin,
// token 704,
ves_icall_System_MathF_Asinh,
// token 705,
ves_icall_System_MathF_Atan,
// token 706,
ves_icall_System_MathF_Atan2,
// token 707,
ves_icall_System_MathF_Atanh,
// token 708,
ves_icall_System_MathF_Cbrt,
// token 709,
ves_icall_System_MathF_Ceiling,
// token 710,
ves_icall_System_MathF_Cos,
// token 711,
ves_icall_System_MathF_Cosh,
// token 712,
ves_icall_System_MathF_Exp,
// token 713,
ves_icall_System_MathF_Floor,
// token 714,
ves_icall_System_MathF_Log,
// token 715,
ves_icall_System_MathF_Log10,
// token 716,
ves_icall_System_MathF_Pow,
// token 717,
ves_icall_System_MathF_Sin,
// token 718,
ves_icall_System_MathF_Sinh,
// token 719,
ves_icall_System_MathF_Sqrt,
// token 720,
ves_icall_System_MathF_Tan,
// token 721,
ves_icall_System_MathF_Tanh,
// token 722,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 723,
ves_icall_System_MathF_ILogB,
// token 724,
ves_icall_System_MathF_Log2,
// token 725,
ves_icall_System_MathF_ModF,
// token 859,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 860,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 868,
ves_icall_RuntimeType_make_array_type_raw,
// token 871,
ves_icall_RuntimeType_make_byref_type_raw,
// token 873,
ves_icall_RuntimeType_MakePointerType_raw,
// token 879,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 880,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 882,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 883,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 887,
ves_icall_RuntimeType_GetPacking_raw,
// token 889,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 890,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 891,
ves_icall_System_RuntimeType_getFullName_raw,
// token 892,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 894,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 895,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 896,
ves_icall_RuntimeType_GetFields_native_raw,
// token 899,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 900,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 903,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 904,
ves_icall_RuntimeType_get_Name_raw,
// token 905,
ves_icall_RuntimeType_get_Namespace_raw,
// token 981,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 982,
ves_icall_reflection_get_token_raw,
// token 984,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 992,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 993,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 994,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 995,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 996,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1001,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1002,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1004,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1005,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1007,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1008,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1009,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1012,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1014,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1018,
ves_icall_System_String_FastAllocateString_raw,
// token 1019,
ves_icall_System_String_InternalIsInterned_raw,
// token 1020,
ves_icall_System_String_InternalIntern_raw,
// token 1293,
ves_icall_System_Type_internal_from_handle_raw,
// token 1508,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1509,
ves_icall_System_ValueType_Equals_raw,
// token 8176,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8177,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8179,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8180,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8181,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8182,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8183,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8185,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8187,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8189,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8190,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8191,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8199,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8201,
mono_monitor_exit_icall_raw,
// token 8205,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8206,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8208,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8210,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8212,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8224,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8233,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8234,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8236,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8237,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8238,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8239,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8240,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8242,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8244,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9260,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9264,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9266,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9267,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9268,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9269,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9339,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9340,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9341,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9358,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9359,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9360,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9361,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9395,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9445,
mono_object_hash_icall_raw,
// token 9448,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9457,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9458,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9459,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9460,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9850,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9851,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9856,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9857,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9908,
mono_digest_get_public_token,
// token 9909,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9910,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9938,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9944,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9951,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9961,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9965,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10057,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10067,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10068,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10081,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10082,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10083,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10084,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10085,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10086,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10087,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10094,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10110,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10131,
ves_icall_reflection_get_token_raw,
// token 10132,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10141,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10143,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10150,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10151,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10154,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10156,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10161,
ves_icall_reflection_get_token_raw,
// token 10167,
ves_icall_get_method_info_raw,
// token 10168,
ves_icall_get_method_attributes,
// token 10175,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10177,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10187,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10190,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10191,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10192,
ves_icall_reflection_get_token_raw,
// token 10203,
ves_icall_InternalInvoke_raw,
// token 10215,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10221,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10222,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10223,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10225,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10226,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10236,
ves_icall_InternalInvoke_raw,
// token 10255,
ves_icall_reflection_get_token_raw,
// token 10277,
ves_icall_reflection_get_token_raw,
// token 10278,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10279,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10280,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10281,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10298,
ves_icall_reflection_get_token_raw,
// token 10303,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10308,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10339,
ves_icall_reflection_get_token_raw,
// token 10340,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10835,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10836,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10919,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10998,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11259,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11260,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11269,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11270,
ves_icall_ModuleBuilder_getToken_raw,
// token 11271,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11277,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11355,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11528,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11529,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12285,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12286,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13103,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13122,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13129,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13130,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13132,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
