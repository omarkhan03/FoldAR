#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Qualcomm.Snapdragon.Spaces.FusionFeature
struct FusionFeature_t60C5337E5506D4003577469AE0BC5B5C2D40B204;
// Qualcomm.Snapdragon.Spaces.FusionLogic
struct FusionLogic_t5526B15857C1497BEBCE94D5B915C4D6BAAF956F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature/GetInstanceProcAddrDelegate
struct GetInstanceProcAddrDelegate_t389B857CBE93C73021F92B74FABFE7E8A1A4A468;

IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2AF55F348E451FF52E600A9B3CA924748676CBF4 
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SessionHandle>k__BackingField
	uint64_t ___U3CSessionHandleU3Ek__BackingField_18;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SystemIDHandle>k__BackingField
	uint64_t ___U3CSystemIDHandleU3Ek__BackingField_19;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<InstanceHandle>k__BackingField
	uint64_t ___U3CInstanceHandleU3Ek__BackingField_20;
	// System.UInt64 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SpaceHandle>k__BackingField
	uint64_t ___U3CSpaceHandleU3Ek__BackingField_21;
	// System.Boolean Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<IsSessionRunning>k__BackingField
	bool ___U3CIsSessionRunningU3Ek__BackingField_22;
	// System.Int32 Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::<SessionState>k__BackingField
	int32_t ___U3CSessionStateU3Ek__BackingField_23;
};

// Qualcomm.Snapdragon.Spaces.FusionFeature
struct FusionFeature_t60C5337E5506D4003577469AE0BC5B5C2D40B204  : public SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.FusionFeature::ValidateOpenScene
	bool ___ValidateOpenScene_27;
};

// Qualcomm.Snapdragon.Spaces.FusionLogic
struct FusionLogic_t5526B15857C1497BEBCE94D5B915C4D6BAAF956F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.FusionLogic::HandleCameraPermissionsCheck
	bool ___HandleCameraPermissionsCheck_4;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature
struct SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15_StaticFields
{
	// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature/GetInstanceProcAddrDelegate Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::GetInstanceProcAddrPtr
	GetInstanceProcAddrDelegate_t389B857CBE93C73021F92B74FABFE7E8A1A4A468* ___GetInstanceProcAddrPtr_16;
};

// Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature

// Qualcomm.Snapdragon.Spaces.FusionFeature

// Qualcomm.Snapdragon.Spaces.FusionFeature

// Qualcomm.Snapdragon.Spaces.FusionLogic

// Qualcomm.Snapdragon.Spaces.FusionLogic
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Qualcomm.Snapdragon.Spaces.SpacesOpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacesOpenXRFeature__ctor_mFC1AC4D00ABFBCF3DC87141BF5ECEB49DCF5EE16 (SpacesOpenXRFeature_t62F50FE15226EFF439883C8BDD7D8DEF280E8E15* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.OriginLocationUtility::GetOriginCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OriginLocationUtility_GetOriginCamera_m566BBE932D4C000B9B4506F8BB27BA2A405C3BB7 (bool ___0_includeInactive, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetDisplay_m112492A129702FD829BC11E2AE766AF5BF880C73 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.FusionFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionFeature__ctor_mA3F45EC07A296491517D827B4FD7B4A801343A81 (FusionFeature_t60C5337E5506D4003577469AE0BC5B5C2D40B204* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidateOpenScene = true;
		__this->___ValidateOpenScene_27 = (bool)1;
		SpacesOpenXRFeature__ctor_mFC1AC4D00ABFBCF3DC87141BF5ECEB49DCF5EE16(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.FusionLogic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionLogic_Awake_m19C03A5EEE37916CCF1BE869224681B7A299DC33 (FusionLogic_t5526B15857C1497BEBCE94D5B915C4D6BAAF956F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera xrCamera = OriginLocationUtility.GetOriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = OriginLocationUtility_GetOriginCamera_m566BBE932D4C000B9B4506F8BB27BA2A405C3BB7((bool)0, NULL);
		V_0 = L_0;
		// if (xrCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// xrCamera.targetDisplay = 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		NullCheck(L_3);
		Camera_set_targetDisplay_m112492A129702FD829BC11E2AE766AF5BF880C73(L_3, 0, NULL);
	}

IL_0017:
	{
		// if (HandleCameraPermissionsCheck)
		bool L_4 = __this->___HandleCameraPermissionsCheck_4;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_5;
		L_5 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.Camera);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.FusionLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionLogic__ctor_m5DF6AF5D959C99F76F7D63B07671E3134688EC7D (FusionLogic_t5526B15857C1497BEBCE94D5B915C4D6BAAF956F* __this, const RuntimeMethod* method) 
{
	{
		// public bool HandleCameraPermissionsCheck = true;
		__this->___HandleCameraPermissionsCheck_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
