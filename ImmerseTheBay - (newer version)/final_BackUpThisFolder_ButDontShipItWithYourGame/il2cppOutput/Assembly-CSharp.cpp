#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Display[]
struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F;
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[]
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu
struct CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion
struct CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice
struct CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Controls
struct Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation
struct CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Display
struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1;
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader
struct DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton
struct GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507;
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation
struct GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323;
// Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity
struct GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Qualcomm.Snapdragon.Spaces.Samples.Lifecycle
struct Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler
struct MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OnTextEnter
struct OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler
struct TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Qualcomm.Snapdragon.Spaces.Samples.TransformFollower
struct TransformFollower_t467384C311C59D6A66659F00B9AF93BD489EAF9C;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower
struct XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper
struct XROriginHelper_tFB22C1B79BE973F6AFDEB7DCF0B6A5AF722E8BB1;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68;
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22
struct U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02;
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26
struct U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B;
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback
struct OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5
struct U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened
struct PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRFailReason_t8D4961B9C1CC1FF7EF5FBAE8B50CE5566E9C89DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRState_t587FEFC395A968F2EBD712D622F661F9E1364CAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral070CB4A6B2E1DC282F09C6B01D2554EE16A57094;
IL2CPP_EXTERN_C String_t* _stringLiteral082B9050073E48F04BD4E7E3822D340D28423E1A;
IL2CPP_EXTERN_C String_t* _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD97A0D76A9FB82BCBAA1A48B11C9F1C2D02E30;
IL2CPP_EXTERN_C String_t* _stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral51D65DA390A786CCB77BE0B5033304FF68A5F11F;
IL2CPP_EXTERN_C String_t* _stringLiteral750A5DF007FAA602ECE56DE914892684D9619148;
IL2CPP_EXTERN_C String_t* _stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC;
IL2CPP_EXTERN_C String_t* _stringLiteralAA86B4ACCBFCA4527B5B6FB6ADD0AA0208771F1E;
IL2CPP_EXTERN_C String_t* _stringLiteralC6445A49B4A8CA0B365057F9076D223E99CC49B0;
IL2CPP_EXTERN_C String_t* _stringLiteralCC8F9AC169E14AC7912F1E86A0ACEBBA52B59DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m2950AE1B6D70A60B296E1B28859CF68F2476F50F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m563019578FAE40690CFE469729D5A5C2ED6063B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mBFF607644A8C426F08C0582237C2B9EFC76864C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_mD38978AB75E1E908BD00C996DFCBE90A45A6F1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_m87111DD8B841B9DB1CB118F202DF8C22205E2734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplaysCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m2EEA89D73E991E271539FD3E3C81EBE61EF980C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadXRCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m809339DFA91B9436260E3B28EAE7BF845F89F2C6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F;
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22
struct U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02  : public RuntimeObject
{
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::<>4__this
	DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___U3CU3E4__this_2;
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::<numDisplays>5__2
	int32_t ___U3CnumDisplaysU3E5__2_3;
};

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26
struct U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B  : public RuntimeObject
{
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::<>4__this
	DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___U3CU3E4__this_2;
	// UnityEngine.XR.Management.XRManagerSettings Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::<manager>5__2
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___U3CmanagerU3E5__2_3;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5
struct U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C  : public RuntimeObject
{
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>4__this
	GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>
struct Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// CanvasControllerCompanionInputDeviceState
struct CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 
{
	// System.Int32 CanvasControllerCompanionInputDeviceState::buttons
	int32_t ___buttons_0;
	// UnityEngine.Vector2 CanvasControllerCompanionInputDeviceState::touchpadPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadPosition_1;
	// UnityEngine.Vector3 CanvasControllerCompanionInputDeviceState::devicePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_2;
	// UnityEngine.Quaternion CanvasControllerCompanionInputDeviceState::deviceRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_3;
	// System.Int32 CanvasControllerCompanionInputDeviceState::trackingState
	int32_t ___trackingState_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Display
struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_21;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback
struct OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2  : public MulticastDelegate_t
{
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened
struct PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice
struct CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<buttonMenu>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonMenuU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<touchpadClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtouchpadClickU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<touchpadPosition>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CtouchpadPositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.Vector3Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.QuaternionControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.IntegerControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_44;
};

// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB  : public InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_25;
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion
struct CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::controllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___controllerTransform_4;
	// UnityEngine.UI.Button Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::buttonStateMenu
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonStateMenu_5;
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::touchpad
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___touchpad_6;
	// CanvasControllerCompanionInputDeviceState Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::companionState
	CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___companionState_7;
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::inputDevice
	CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* ___inputDevice_8;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::OnTouchpadEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTouchpadEnd_9;
};

// Controls
struct Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Controls::influenza
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___influenza_4;
	// UnityEngine.Transform Controls::insulin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___insulin_5;
	// UnityEngine.Transform Controls::testosterone
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___testosterone_6;
};

// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation
struct CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.MeshRenderer Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_5;
};

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader
struct DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::managerIsLoading
	bool ___managerIsLoading_4;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::AutoStartXROnDisplayConnected
	bool ___AutoStartXROnDisplayConnected_5;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::ShutDownXROnDisplayDisconnected
	bool ___ShutDownXROnDisplayDisconnected_6;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::AutoManageXRCamera
	bool ___AutoManageXRCamera_7;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRAvailable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRAvailable_8;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRUnavailable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRUnavailable_9;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRConnecting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRConnecting_10;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRConnected
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRConnected_11;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRDisconnecting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRDisconnecting_12;
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRDisconnected
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnOpenXRDisconnected_13;
	// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::OnOpenXRStatus
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* ___OnOpenXRStatus_14;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::ManagerIsActive
	bool ___ManagerIsActive_15;
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::sessionOriginObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sessionOriginObject_16;
	// UnityEngine.XR.ARFoundation.ARSession Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session_17;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation
struct GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::xrCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___xrCamera_4;
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::controllerRepresentation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controllerRepresentation_5;
	// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::rotationRate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationRate_6;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity
struct GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity::deviceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___deviceTransform_4;
};

// Qualcomm.Snapdragon.Spaces.Samples.Lifecycle
struct Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Qualcomm.Snapdragon.Spaces.Samples.Lifecycle/OrientationType Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::ForcedOrientation
	int32_t ___ForcedOrientation_4;
};

// Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler
struct MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::spriteImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___spriteImage_4;
	// UnityEngine.Sprite Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchpadUntouched
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___touchpadUntouched_5;
	// UnityEngine.Sprite Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchpadTouched
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___touchpadTouched_6;
	// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::minScale
	float ___minScale_7;
	// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::maxScale
	float ___maxScale_8;
	// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::scaleStart
	float ___scaleStart_9;
	// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::distanceStart
	float ___distanceStart_10;
	// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchpadStartCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadStartCenter_11;
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::numTouchesLast
	int32_t ___numTouchesLast_12;
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_13;
	// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchpadLastCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadLastCenter_14;
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_15;
	// Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler/TouchMode Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchMode
	int32_t ___touchMode_16;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::touchHistory
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___touchHistory_17;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::firstTouchIsInPosition
	bool ___firstTouchIsInPosition_18;
};

// OnTextEnter
struct OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField OnTextEnter::sequenceText
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___sequenceText_4;
	// System.String OnTextEnter::sequence
	String_t* ___sequence_5;
	// UnityEngine.GameObject OnTextEnter::influenza
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___influenza_6;
	// UnityEngine.GameObject OnTextEnter::insulin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___insulin_7;
	// UnityEngine.GameObject OnTextEnter::testosterone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___testosterone_8;
};

// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler
struct TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::spriteImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___spriteImage_4;
	// UnityEngine.Sprite Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::touchpadUntouched
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___touchpadUntouched_5;
	// UnityEngine.Sprite Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::touchpadTouched
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___touchpadTouched_6;
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::inputDevice
	CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* ___inputDevice_7;
};

// Qualcomm.Snapdragon.Spaces.Samples.TransformFollower
struct TransformFollower_t467384C311C59D6A66659F00B9AF93BD489EAF9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.TransformFollower::transformToFollow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToFollow_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower
struct XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::TrackPosition
	bool ___TrackPosition_4;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::TrackRotation
	bool ___TrackRotation_5;
	// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::PositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionOffset_6;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::UsePositionOffset
	bool ___UsePositionOffset_7;
	// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::xrCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___xrCamera_8;
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::_rotationTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rotationTransform_9;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

// Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper
struct XROriginHelper_tFB22C1B79BE973F6AFDEB7DCF0B6A5AF722E8BB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu
struct CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243  : public Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098
{
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::inputDevice
	CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* ___inputDevice_21;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton
struct GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507  : public Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::repeatReset
	bool ___repeatReset_21;
	// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[] Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::gyroToRotations
	GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* ___gyroToRotations_22;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// UnityEngine.Gyroscope

// UnityEngine.Gyroscope

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.InputSystem.Utilities.FourCC

// UnityEngine.InputSystem.Utilities.FourCC

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// CanvasControllerCompanionInputDeviceState

// CanvasControllerCompanionInputDeviceState

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Display
struct Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields
{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* ____mainDisplay_2;
	// System.Int32 UnityEngine.Display::m_ActiveEditorGameViewTarget
	int32_t ___m_ActiveEditorGameViewTarget_3;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68* ___onDisplaysUpdated_4;
};

// UnityEngine.Display

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Touch

// UnityEngine.Touch

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// UnityEngine.InputSystem.InputControl`1<System.Int32>

// UnityEngine.InputSystem.InputControl`1<System.Int32>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>

// UnityEngine.InputSystem.InputControl`1<System.Single>

// UnityEngine.InputSystem.InputControl`1<System.Single>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened

// UnityEngine.InputSystem.Controls.AxisControl

// UnityEngine.InputSystem.Controls.AxisControl

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

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice

// UnityEngine.InputSystem.Controls.IntegerControl

// UnityEngine.InputSystem.Controls.IntegerControl

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.Vector3Control

// UnityEngine.InputSystem.Controls.Vector3Control

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion

// Controls

// Controls

// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation

// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader

// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader

// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation

// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation

// Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity

// Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity

// Qualcomm.Snapdragon.Spaces.Samples.Lifecycle

// Qualcomm.Snapdragon.Spaces.Samples.Lifecycle

// Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler

// Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler

// OnTextEnter

// OnTextEnter

// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler

// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler

// Qualcomm.Snapdragon.Spaces.Samples.TransformFollower

// Qualcomm.Snapdragon.Spaces.Samples.TransformFollower

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower

// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// Unity.XR.CoreUtils.XROrigin

// Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper

// Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.XR.ARFoundation.ARSession

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F  : public RuntimeArray
{
	ALIGN_FIELD (8) Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* m_Items[1];

	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[]
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D  : public RuntimeArray
{
	ALIGN_FIELD (8) GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* m_Items[1];

	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};


// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_GetDevice_TisRuntimeObject_mDB219498C31C2C25B43BA2071114C29D8754D3A0_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueStateEvent<CanvasControllerCompanionInputDeviceState>(UnityEngine.InputSystem.InputDevice,TState,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_gshared (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___0_device, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___1_state, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_AddDevice_TisRuntimeObject_m0C15C931B928FDC569EAA06A44EDC0192F909A4F_gshared (String_t* ___0_name, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared (bool ___0_includeInactive, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.InputSystem.Utilities.FourCC::.ctor(System.Char,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F (FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED* __this, Il2CppChar ___0_a, Il2CppChar ___1_b, Il2CppChar ___2_c, Il2CppChar ___3_d, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.FourCC CanvasControllerCompanionInputDeviceState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE (CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Controls::ApplyTranslation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyTranslation_m93E10E1B89A31DD780D95A68475E989C781802F1 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_transformation, const RuntimeMethod* method) ;
// System.Void Controls::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyRotation_m6B5875B5182BE2AEFEF8D845F7E3C89FE6F2EEFF (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_transformation, const RuntimeMethod* method) ;
// System.Void Controls::ApplyScaling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyScaling_m877FF1A2A31DBF44A054583C98B81D4C0A5353E3 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, bool ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void OnTextEnter::clearEverything()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85 (OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendMenuButtonEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5 (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>()
inline CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2 (const RuntimeMethod* method)
{
	return ((  CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* (*) (const RuntimeMethod*))InputSystem_GetDevice_TisRuntimeObject_mDB219498C31C2C25B43BA2071114C29D8754D3A0_gshared)(method);
}
// System.Void UnityEngine.InputSystem.InputSystem::QueueStateEvent<CanvasControllerCompanionInputDeviceState>(UnityEngine.InputSystem.InputDevice,TState,System.Double)
inline void InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___0_device, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___1_state, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95, double, const RuntimeMethod*))InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_gshared)(___0_device, ___1_state, ___2_time, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mBFF607644A8C426F08C0582237C2B9EFC76864C3 (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B (*) (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945 (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared)(__this, method);
}
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>(System.String)
inline CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m563019578FAE40690CFE469729D5A5C2ED6063B4 (String_t* ___0_name, const RuntimeMethod* method)
{
	return ((  CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m0C15C931B928FDC569EAA06A44EDC0192F909A4F_gshared)(___0_name, method);
}
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_buttonMenu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadClick(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadPosition(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper::GetXROriginCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9 (bool ___0_includeInactive, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper::GetXROrigin(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROriginHelper_GetXROrigin_m7FA9AF2C48B3C1D47FFAF46EE7398DB7596E81E1 (bool ___0_includeInactive, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSession>(System.Boolean)
inline ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* Object_FindObjectOfType_TisARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_mD38978AB75E1E908BD00C996DFCBE90A45A6F1B8 (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___0_includeInactive, method);
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::DisplaysCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicOpenXRLoader_DisplaysCoroutine_m8CA5D5749139129D8F3BEC22732BE099DE6D94B7 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::SetOpenXREnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_SetOpenXREnabled_m79E43F605B19D7F3AF24C5460919230D785B078C (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, bool ___0_xrShouldBeEnabled, const RuntimeMethod* method) ;
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRFailReason Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::StartOpenXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicOpenXRLoader_StartOpenXR_mB6E4CDB03C4541A9C0A4F1155AE46FFDE44982AE (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::StopOpenXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_StopOpenXR_mE689CD3E9D4167C22F5DBAE7EBD0ECF577897EB8 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplaysCoroutineU3Ed__22__ctor_mDC9B7770BFFEA9173A556A3E0CFDE72C998E78BA (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::RuntimeIsInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicOpenXRLoader_RuntimeIsInstalled_mF0598FE9EEF514F9D632FD31927F42A1915FECA2 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::LoadXRCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicOpenXRLoader_LoadXRCoroutine_m7F938EB347ECD0F7C2ABAD6FBDE10B66506B38CD (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback::Invoke(Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRState,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRFailReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadXRCoroutineU3Ed__26__ctor_m6ED9A7C5013231070A4BE3E0AB44C9025363B0B9 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::SetSessionOriginActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_SetSessionOriginActive_mFA3DB03CEA3BB521AA3C457FE7E41F2A5585A09C (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, bool ___0_shouldBeActive, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_Awake_m55439376D9E09A622C61C4BD7DA413E1E0EFD469 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation>()
inline GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_m87111DD8B841B9DB1CB118F202DF8C22205E2734 (const RuntimeMethod* method)
{
	return ((  GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::GyroResetRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::resetGyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_resetGyro_m2441FCBE9379AC3B328FB7F0DA342980C4C907D5 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::enableGyro(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_enableGyro_m1E4B3B41EF99DD0AE7B3DEFDBAE6F881B669B1FD (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, bool ___0_isOn, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Gyroscope::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gyroscope_get_enabled_m10F5B3F646AB1A6EEE2831010642E9E1E0BCBDB9 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gyroscope_get_rotationRate_mCF8F2D040B77A6C147092302C80C8DEC39918954 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::get_RotationRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRateUnbiased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gyroscope_get_rotationRateUnbiased_m6B54A5F9A866E1F5005EA8B1575607DF2F3AB7A3 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___0_index, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_mCEE05BFF3488FEB20BA21B5A4779116397B776B0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultitouchHandler_NormalizedPosition_m12E11010B84AC5A5A1E051FE6D3C8AACB2756D50 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_eventPosition, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::DistanceOfTouches(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultitouchHandler_DistanceOfTouches_m69DBF795357901032E792687DC6D6CFCA0F47681 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchPositions, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::CenterOfTouches(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultitouchHandler_CenterOfTouches_m42916A843C9CAFAF3F81A40A51D0239DE339DCE2 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchPositions, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::SignedAngle(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultitouchHandler_SignedAngle_m2B06DCB39CEF92D1219D840934BD7069F5EC3265 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchHistory, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___1_touchPositions, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_eventPosition, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendTouchpadEvent(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___0_phase, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Unity.XR.CoreUtils.XROrigin>(System.Boolean)
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___0_includeInactive, method);
}
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>(System.Boolean)
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404 (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___0_includeInactive, method);
}
// T UnityEngine.GameObject::GetComponent<Unity.XR.CoreUtils.XROrigin>()
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* GameObject_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m2950AE1B6D70A60B296E1B28859CF68F2476F50F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
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
// UnityEngine.InputSystem.Utilities.FourCC CanvasControllerCompanionInputDeviceState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE (CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* __this, const RuntimeMethod* method) 
{
	{
		// public FourCC format => new FourCC('M', 'Y', 'D', 'V');
		FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F((&L_0), ((int32_t)77), ((int32_t)89), ((int32_t)68), ((int32_t)86), /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95*>(__this + _offset);
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED _returnValue;
	_returnValue = CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controls::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_MoveUp_m6534FEF443A3BABBB527D1CF865DDD2BCBB4C07E (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyTranslation(new Vector3(0.0f, 0.05f, 0.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0500000007f), (0.0f), /*hidden argument*/NULL);
		Controls_ApplyTranslation_m93E10E1B89A31DD780D95A68475E989C781802F1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Controls::MoveDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_MoveDown_m9657D50D5005F9DE4043F5B7576117C69EEA8FCF (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyTranslation(new Vector3(0.0f, -0.05f, 0.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.0500000007f), (0.0f), /*hidden argument*/NULL);
		Controls_ApplyTranslation_m93E10E1B89A31DD780D95A68475E989C781802F1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Controls::RotateRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_RotateRight_m7D16086DE12FB542FC989111302B8D5F6463D878 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyRotation(new Vector3(0,10,0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		Controls_ApplyRotation_m6B5875B5182BE2AEFEF8D845F7E3C89FE6F2EEFF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Controls::RotateLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_RotateLeft_m841C71462D7314747C59DEE4E0B18A403284C59F (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyRotation(new Vector3(0,-10,0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-10.0f), (0.0f), /*hidden argument*/NULL);
		Controls_ApplyRotation_m6B5875B5182BE2AEFEF8D845F7E3C89FE6F2EEFF(__this, L_0, NULL);
		// } // new Vector3(1, 0, 1);
		return;
	}
}
// System.Void Controls::ScaleUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ScaleUp_mC381EDDCD534830850F0F4AF0BBF38A1CD509196 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyScaling(true);
		Controls_ApplyScaling_m877FF1A2A31DBF44A054583C98B81D4C0A5353E3(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Controls::ScaleDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ScaleDown_m1202590A616400975CC84E4A2E598DE729EEEC9F (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		// ApplyScaling(false);
		Controls_ApplyScaling_m877FF1A2A31DBF44A054583C98B81D4C0A5353E3(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Controls::ApplyTranslation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyTranslation_m93E10E1B89A31DD780D95A68475E989C781802F1 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_transformation, const RuntimeMethod* method) 
{
	{
		// influenza.position += transformation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___influenza_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_transformation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// insulin.position += transformation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___insulin_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_transformation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// testosterone.position += transformation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___testosterone_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_transformation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_14, NULL);
		// }
		return;
	}
}
// System.Void Controls::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyRotation_m6B5875B5182BE2AEFEF8D845F7E3C89FE6F2EEFF (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_transformation, const RuntimeMethod* method) 
{
	{
		// influenza.Rotate(transformation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___influenza_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_transformation;
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_1, NULL);
		// insulin.Rotate(transformation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___insulin_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_transformation;
		NullCheck(L_2);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_2, L_3, NULL);
		// testosterone.Rotate(transformation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___testosterone_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_transformation;
		NullCheck(L_4);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Controls::ApplyScaling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls_ApplyScaling_m877FF1A2A31DBF44A054583C98B81D4C0A5353E3 (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, bool ___0_pos, const RuntimeMethod* method) 
{
	{
		// if (pos) {
		bool L_0 = ___0_pos;
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		// influenza.localScale *= 1.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___influenza_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (1.10000002f), NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_4, NULL);
		// insulin.localScale *= 1.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___insulin_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (1.10000002f), NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_8, NULL);
		// testosterone.localScale *= 1.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___testosterone_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (1.10000002f), NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_12, NULL);
		return;
	}

IL_0055:
	{
		// influenza.localScale *= 0.9f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___influenza_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, (0.899999976f), NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_16, NULL);
		// insulin.localScale *= 0.9f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___insulin_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.899999976f), NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_20, NULL);
		// testosterone.localScale *= 0.9f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___testosterone_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, (0.899999976f), NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_24, NULL);
		// }
		return;
	}
}
// System.Void Controls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controls__ctor_m07C589B687ADEE5B0832B928D57F242BDDBA1E3B (Controls_tB3930098155D9D5D9572213C5DA8DD14A424E53B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OnTextEnter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTextEnter_Start_mDAEEAFEF8CA8BDF1FF9A3AE50654E36D3510AD27 (OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D* __this, const RuntimeMethod* method) 
{
	{
		// clearEverything();
		OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85(__this, NULL);
		// }
		return;
	}
}
// System.Void OnTextEnter::enterEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTextEnter_enterEvent_m0B4EAD8089C8A44EFD28B3E58E3DC2F54999A43D (OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750A5DF007FAA602ECE56DE914892684D9619148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA86B4ACCBFCA4527B5B6FB6ADD0AA0208771F1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC8F9AC169E14AC7912F1E86A0ACEBBA52B59DAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sequence = sequenceText.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___sequenceText_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		__this->___sequence_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sequence_5), (void*)L_1);
		// Debug.Log("Show protein!" + sequence);
		String_t* L_2 = __this->___sequence_5;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral750A5DF007FAA602ECE56DE914892684D9619148, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log(sequence);
		String_t* L_4 = __this->___sequence_5;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Debug.Log("red");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		// Debug.Log(sequence == "red");
		String_t* L_5 = __this->___sequence_5;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// Debug.Log(sequence.Equals("red"));
		String_t* L_9 = __this->___sequence_5;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, _stringLiteral31A0D7054359216EFE7213AEA1E910EEFC934B74, NULL);
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// if (sequence == "influenza") {
		String_t* L_13 = __this->___sequence_5;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralCC8F9AC169E14AC7912F1E86A0ACEBBA52B59DAF, NULL);
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		// clearEverything();
		OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85(__this, NULL);
		// influenza.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___influenza_6;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		return;
	}

IL_0094:
	{
		// else if (sequence == "insulin") {
		String_t* L_16 = __this->___sequence_5;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralAA86B4ACCBFCA4527B5B6FB6ADD0AA0208771F1E, NULL);
		if (!L_17)
		{
			goto IL_00b9;
		}
	}
	{
		// clearEverything();
		OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85(__this, NULL);
		// insulin.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___insulin_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		return;
	}

IL_00b9:
	{
		// clearEverything();
		OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85(__this, NULL);
		// testosterone.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___testosterone_8;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void OnTextEnter::clearEverything()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTextEnter_clearEverything_m9638257A87C9DC8C0CF74898C28FAD04E309AC85 (OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D* __this, const RuntimeMethod* method) 
{
	{
		// influenza.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___influenza_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// insulin.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___insulin_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// testosterone.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___testosterone_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void OnTextEnter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTextEnter__ctor_m1A299D2E2219B05143B93304B595EBFAF91556D0 (OnTextEnter_t20DDC50CDB9F5A70E51B2669CFCF64DE3295AA0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu_OnPointerDown_m840A5F2FCD2556FD5853F2C4E452597100706E08 (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3(__this, L_0, NULL);
		// inputDevice.SendMenuButtonEvent(1);
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_1 = __this->___inputDevice_21;
		NullCheck(L_1);
		CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE(L_1, 1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu_OnPointerUp_m202F8AAA1A93170914369ED0EE6DF8D991C70608 (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9(__this, L_0, NULL);
		// inputDevice.SendMenuButtonEvent(0);
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_1 = __this->___inputDevice_21;
		NullCheck(L_1);
		CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu__ctor_mF1531A8090CB431F21E431F6FABB04772629398A (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, const RuntimeMethod* method) 
{
	{
		Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_Awake_mC278F5A7D428A71AF6823F6EA0858A4C3A157959 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	{
		// companionState = new CanvasControllerCompanionInputDeviceState();
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_0 = (&__this->___companionState_7);
		il2cpp_codegen_initobj(L_0, sizeof(CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95));
		// companionState.trackingState = 1;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___companionState_7);
		L_1->___trackingState_4 = 1;
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::ReloadApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_ReloadApp_m135A7CC0842DC88D76EB2AB4E994B96F2083B514 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendMenuButtonEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var bit = 1 << (int)0;
		V_0 = 1;
		// if (phase != 0)
		int32_t L_0 = ___0_phase;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// companionState.buttons |= (ushort)bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___companionState_7);
		int32_t* L_2 = (&L_1->___buttons_0);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(uint16_t)L_5)));
		goto IL_002a;
	}

IL_0018:
	{
		// companionState.buttons &= (ushort)~bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_6 = (&__this->___companionState_7);
		int32_t* L_7 = (&L_6->___buttons_0);
		int32_t* L_8 = L_7;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)(L_9&((int32_t)(uint16_t)((~L_10)))));
	}

IL_002a:
	{
		// InputSystem.QueueStateEvent(InputSystem.GetDevice<CanvasControllerCompanionInputDevice>(), companionState);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_11;
		L_11 = InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2(InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2_RuntimeMethod_var);
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 L_12 = __this->___companionState_7;
		InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8(L_11, L_12, (-1.0), InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendTouchpadEvent(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___0_phase, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// var bit = 1 << (int)1;
		V_0 = 2;
		// if (phase != 0)
		int32_t L_0 = ___0_phase;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// companionState.buttons |= (ushort)bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___companionState_7);
		int32_t* L_2 = (&L_1->___buttons_0);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(uint16_t)L_5)));
		goto IL_003b;
	}

IL_0018:
	{
		// companionState.buttons &= (ushort)~bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_6 = (&__this->___companionState_7);
		int32_t* L_7 = (&L_6->___buttons_0);
		int32_t* L_8 = L_7;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)(L_9&((int32_t)(uint16_t)((~L_10)))));
		// OnTouchpadEnd?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = __this->___OnTouchpadEnd_9;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0036;
		}
	}
	{
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
	}

IL_003b:
	{
		// companionState.touchpadPosition.x = position.x;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_13 = (&__this->___companionState_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&L_13->___touchpadPosition_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_position;
		float L_16 = L_15.___x_0;
		L_14->___x_0 = L_16;
		// companionState.touchpadPosition.y = position.y;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_17 = (&__this->___companionState_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___touchpadPosition_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___1_position;
		float L_20 = L_19.___y_1;
		L_18->___y_1 = L_20;
		// InputSystem.QueueStateEvent(InputSystem.GetDevice<CanvasControllerCompanionInputDevice>(), companionState);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_21;
		L_21 = InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2(InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m4D50F33DE84C5F981A03BEF82BDA8EDAA68D4DC2_RuntimeMethod_var);
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 L_22 = __this->___companionState_7;
		InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8(L_21, L_22, (-1.0), InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_m6989C07E42012412D8D9AF6534B583AA3F0F5FF8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_Quit_mD61922341B683D9AC797512BE9A63CF4849651D3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion__ctor_mEC225A457A6FD4A1C095311237DD9AC835AA6D44 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_buttonMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* CanvasControllerCompanionInputDevice_get_buttonMenu_mA9A2FF745F7A2D998385A67E61858E88C5496CD4 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CbuttonMenuU3Ek__BackingField_39;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_buttonMenu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CbuttonMenuU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuttonMenuU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_touchpadClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* CanvasControllerCompanionInputDevice_get_touchpadClick_mCF78CAC579365D9AF49FA014251A6644BB234F0B (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CtouchpadClickU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadClick(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CtouchpadClickU3Ek__BackingField_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadClickU3Ek__BackingField_40), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_touchpadPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* CanvasControllerCompanionInputDevice_get_touchpadPosition_m167B92EA0574BE59615762A9B67A09888B25BFEB (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CtouchpadPositionU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadPosition(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = ___0_value;
		__this->___U3CtouchpadPositionU3Ek__BackingField_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadPositionU3Ek__BackingField_41), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* CanvasControllerCompanionInputDevice_get_devicePosition_m62D433C415567C6FA7FAC87D144AC9DB87A6D554 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CdevicePositionU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CdevicePositionU3Ek__BackingField_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_42), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* CanvasControllerCompanionInputDevice_get_deviceRotation_m318AC016CB049A19B3C114D569FD134F71BD5632 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CdeviceRotationU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CdeviceRotationU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* CanvasControllerCompanionInputDevice_get_trackingState_m2E5BD05420D5A1736C2CB29D8943CC76CA063B88 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CtrackingStateU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackingStateU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice__cctor_mA06EA513DADC21C2BD8A7CB8114E646FF9ACE647 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m563019578FAE40690CFE469729D5A5C2ED6063B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mBFF607644A8C426F08C0582237C2B9EFC76864C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// InputSystem.RegisterLayout<CanvasControllerCompanionInputDevice>();
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C));
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mBFF607644A8C426F08C0582237C2B9EFC76864C3((String_t*)NULL, L_0, InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mBFF607644A8C426F08C0582237C2B9EFC76864C3_RuntimeMethod_var);
		// foreach(InputDevice inputDevice in InputSystem.devices)
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1;
		L_1 = InputSystem_get_devices_mBE599285E43211ACE15248654A3E3D7DB42C85CA(NULL);
		V_2 = L_1;
		Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B L_2;
		L_2 = ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C((&V_2), ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB((&V_1), Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001f_1:
			{
				// foreach(InputDevice inputDevice in InputSystem.devices)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
				L_3 = Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945((&V_1), Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
				// if (inputDevice is CanvasControllerCompanionInputDevice)
				if (!((CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC*)IsInstClass((RuntimeObject*)L_3, CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var)))
				{
					goto IL_002f_1;
				}
			}
			{
				// return;
				goto IL_004f;
			}

IL_002f_1:
			{
				// foreach(InputDevice inputDevice in InputSystem.devices)
				bool L_4;
				L_4 = Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC((&V_1), Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// InputSystem.AddDevice<CanvasControllerCompanionInputDevice>();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_5;
		L_5 = InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m563019578FAE40690CFE469729D5A5C2ED6063B4((String_t*)NULL, InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m563019578FAE40690CFE469729D5A5C2ED6063B4_RuntimeMethod_var);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_FinishSetup_m538873427CBBBFD835528983B0CF8EA13F496D69 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// buttonMenu = GetChildControl<ButtonControl>("buttonMenu");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline(__this, L_0, NULL);
		// touchpadClick = GetChildControl<ButtonControl>("touchpadClick");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline(__this, L_1, NULL);
		// touchpadPosition = GetChildControl<Vector2Control>("touchpadPosition");
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85(__this, _stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC, InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline(__this, L_2, NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline(__this, L_3, NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline(__this, L_4, NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_5;
		L_5 = InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::InitializeInPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_InitializeInPlayer_mD9D57D98AD0BDF5DC38FD5C6BF064253A07D5801 (const RuntimeMethod* method) 
{
	{
		// private static void InitializeInPlayer() { }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice__ctor_m557AE522FEAD4D96F612A7BCD70B3D26FAEED494 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::SetColor(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_SetColor_mEBA884DAAC04DA1E6F65465EAC7D68E7BBAD8C22 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_image, const RuntimeMethod* method) 
{
	{
		// meshRenderer.material.color = image.color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_5;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = ___0_image;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::UpdateRotation(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_UpdateRotation_m99A0884F54F81A3721804FBE97DB02C218C065CC (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_sliderRot, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 localEulerAngles = cube.transform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		V_0 = L_2;
		// localEulerAngles.y = -sliderRot.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___0_sliderRot;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		(&V_0)->___y_3 = ((-L_4));
		// cube.transform.localEulerAngles = localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___cube_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::UpdateVisibility(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_UpdateVisibility_m3FA6CCFD4039E88C6D77EED7BAA4F8BB0E582427 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) 
{
	{
		// cube.SetActive(toggle.isOn);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = ___0_toggle;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::PlaceCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_PlaceCube_m28808710737264B30B26CF0BC32811E419F0CB99 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera c = XROriginHelper.GetXROriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9((bool)0, NULL);
		V_0 = L_0;
		// if (c != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		// cube.transform.position = c.transform.position + c.transform.forward * 1.25f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cube_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (1.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_11, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_12, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation__ctor_m3C6D0FAA4BC79ACD03AF5E708BB1CEBD1A3B5B1C (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_Awake_mC9D748E6222CF0922351D3D45ECACE0BF36A0056 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_mD38978AB75E1E908BD00C996DFCBE90A45A6F1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sessionOriginObject = XROriginHelper.GetXROrigin(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = XROriginHelper_GetXROrigin_m7FA9AF2C48B3C1D47FFAF46EE7398DB7596E81E1((bool)1, NULL);
		__this->___sessionOriginObject_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sessionOriginObject_16), (void*)L_0);
		// session = FindObjectOfType<ARSession>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_1;
		L_1 = Object_FindObjectOfType_TisARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_mD38978AB75E1E908BD00C996DFCBE90A45A6F1B8((bool)1, Object_FindObjectOfType_TisARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_mD38978AB75E1E908BD00C996DFCBE90A45A6F1B8_RuntimeMethod_var);
		__this->___session_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_Start_mD4A4BC5CDB88AC43A1BAD9D9F778936F8500A72C (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DisplaysCoroutine());
		RuntimeObject* L_0;
		L_0 = DynamicOpenXRLoader_DisplaysCoroutine_m8CA5D5749139129D8F3BEC22732BE099DE6D94B7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::IsOpenXRActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicOpenXRLoader_IsOpenXRActive_mBC506FB2C4E575D088A386FBFD4FF147CBD510B0 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	{
		// return ManagerIsActive;
		bool L_0 = __this->___ManagerIsActive_15;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::SetOpenXREnabledBasedOnToggle(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_SetOpenXREnabledBasedOnToggle_m451D1606701DFAF32DAED9863F5BCF03B224B93F (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_toggle, const RuntimeMethod* method) 
{
	{
		// SetOpenXREnabled(toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = ___0_toggle;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		DynamicOpenXRLoader_SetOpenXREnabled_m79E43F605B19D7F3AF24C5460919230D785B078C(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::SetOpenXREnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_SetOpenXREnabled_m79E43F605B19D7F3AF24C5460919230D785B078C (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, bool ___0_xrShouldBeEnabled, const RuntimeMethod* method) 
{
	{
		// if (xrShouldBeEnabled)
		bool L_0 = ___0_xrShouldBeEnabled;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// StartOpenXR();
		int32_t L_1;
		L_1 = DynamicOpenXRLoader_StartOpenXR_mB6E4CDB03C4541A9C0A4F1155AE46FFDE44982AE(__this, NULL);
		return;
	}

IL_000b:
	{
		// StopOpenXR();
		DynamicOpenXRLoader_StopOpenXR_mE689CD3E9D4167C22F5DBAE7EBD0ECF577897EB8(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::DisplaysCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicOpenXRLoader_DisplaysCoroutine_m8CA5D5749139129D8F3BEC22732BE099DE6D94B7 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* L_0 = (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02*)il2cpp_codegen_object_new(U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplaysCoroutineU3Ed__22__ctor_mDC9B7770BFFEA9173A556A3E0CFDE72C998E78BA(L_0, 0, NULL);
		U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::RuntimeIsInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicOpenXRLoader_RuntimeIsInstalled_mF0598FE9EEF514F9D632FD31927F42A1915FECA2 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070CB4A6B2E1DC282F09C6B01D2554EE16A57094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51D65DA390A786CCB77BE0B5033304FF68A5F11F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// var activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_1;
		// var context = activity.Call<AndroidJavaObject>("getApplicationContext");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_4;
		// AndroidJavaClass runtimeChecker = null;
		V_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)NULL;
	}
	try
	{// begin try (depth: 1)
		// runtimeChecker = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.serviceshelper.RuntimeChecker");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_5, _stringLiteral51D65DA390A786CCB77BE0B5033304FF68A5F11F, NULL);
		V_2 = L_5;
		// } catch (Exception e)
		goto IL_0074;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.Log("Could not find services helper. Looking for unity services helper. " + e.ToString());
			Exception_t* L_6 = V_3;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			String_t* L_8;
			L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6445A49B4A8CA0B365057F9076D223E99CC49B0)), L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		}
		try
		{// begin try (depth: 2)
			// runtimeChecker = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.unityserviceshelper.RuntimeChecker");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_9 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AD97A0D76A9FB82BCBAA1A48B11C9F1C2D02E30)), NULL);
			V_2 = L_9;
			// } catch (Exception e2)
			goto IL_0072;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0058;
			}
			throw e;
		}

CATCH_0058:
		{// begin catch(System.Exception)
			// } catch (Exception e2)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.Log("Could not find unity services helper. " + e2.ToString());
			Exception_t* L_10 = V_4;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			String_t* L_12;
			L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral082B9050073E48F04BD4E7E3822D340D28423E1A)), L_11, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0072;
		}// end catch (depth: 2)

IL_0072:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0074;
		}
	}// end catch (depth: 1)

IL_0074:
	{
		// if (runtimeChecker != null) {
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = V_2;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		// return runtimeChecker.CallStatic<bool>("CheckInstalledWithDialog", new object[] { activity, context, null });
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_14 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_1;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		NullCheck(L_14);
		bool L_20;
		L_20 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_14, _stringLiteral070CB4A6B2E1DC282F09C6B01D2554EE16A57094, L_18, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_20;
	}

IL_0091:
	{
		// return false;
		return (bool)0;
	}
}
// Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRFailReason Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::StartOpenXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicOpenXRLoader_StartOpenXR_mB6E4CDB03C4541A9C0A4F1155AE46FFDE44982AE (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	{
		// if (managerIsLoading)
		bool L_0 = __this->___managerIsLoading_4;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return OpenXRFailReason.RuntimeInitializing;
		return (int32_t)(2);
	}

IL_000a:
	{
		// if (ManagerIsActive)
		bool L_1 = __this->___ManagerIsActive_15;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return OpenXRFailReason.RuntimeActive;
		return (int32_t)(3);
	}

IL_0014:
	{
		// if (!RuntimeIsInstalled())
		bool L_2;
		L_2 = DynamicOpenXRLoader_RuntimeIsInstalled_mF0598FE9EEF514F9D632FD31927F42A1915FECA2(__this, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return OpenXRFailReason.NoRuntimeInstalled;
		return (int32_t)(1);
	}

IL_001e:
	{
		// StartCoroutine(LoadXRCoroutine());
		RuntimeObject* L_3;
		L_3 = DynamicOpenXRLoader_LoadXRCoroutine_m7F938EB347ECD0F7C2ABAD6FBDE10B66506B38CD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// return OpenXRFailReason.Success;
		return (int32_t)(0);
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::StopOpenXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_StopOpenXR_mE689CD3E9D4167C22F5DBAE7EBD0ECF577897EB8 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* V_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B3_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B11_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B10_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B13_0 = NULL;
	{
		// if (ManagerIsActive)
		bool L_0 = __this->___ManagerIsActive_15;
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRDisconnecting);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_1 = __this->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_001c;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B3_0, __this, 4, 0, NULL);
	}

IL_001c:
	{
		// OnOpenXRDisconnecting?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnOpenXRDisconnecting_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0028;
		}
	}
	{
		goto IL_002d;
	}

IL_0028:
	{
		NullCheck(G_B6_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B6_0, NULL);
	}

IL_002d:
	{
		// XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_5, NULL);
		V_0 = L_6;
		// if (ShutDownXROnDisplayDisconnected)
		bool L_7 = __this->___ShutDownXROnDisplayDisconnected_6;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// manager.StopSubsystems();
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_8 = V_0;
		NullCheck(L_8);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_8, NULL);
		// manager.DeinitializeLoader();
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_9 = V_0;
		NullCheck(L_9);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_9, NULL);
	}

IL_004c:
	{
		// ManagerIsActive = false;
		__this->___ManagerIsActive_15 = (bool)0;
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRDisconnected);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_10 = __this->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_11 = L_10;
		G_B10_0 = L_11;
		if (L_11)
		{
			G_B11_0 = L_11;
			goto IL_005f;
		}
	}
	{
		goto IL_0067;
	}

IL_005f:
	{
		NullCheck(G_B11_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B11_0, __this, 5, 0, NULL);
	}

IL_0067:
	{
		// OnOpenXRDisconnected?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___OnOpenXRDisconnected_13;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12;
		G_B13_0 = L_13;
		if (L_13)
		{
			G_B14_0 = L_13;
			goto IL_0072;
		}
	}
	{
		return;
	}

IL_0072:
	{
		NullCheck(G_B14_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B14_0, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::LoadXRCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicOpenXRLoader_LoadXRCoroutine_m7F938EB347ECD0F7C2ABAD6FBDE10B66506B38CD (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* L_0 = (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B*)il2cpp_codegen_object_new(U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadXRCoroutineU3Ed__26__ctor_m6ED9A7C5013231070A4BE3E0AB44C9025363B0B9(L_0, 0, NULL);
		U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::SetSessionOriginActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader_SetSessionOriginActive_mFA3DB03CEA3BB521AA3C457FE7E41F2A5585A09C (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, bool ___0_shouldBeActive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sessionOriginObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___sessionOriginObject_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// sessionOriginObject.SetActive(shouldBeActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___sessionOriginObject_16;
		bool L_3 = ___0_shouldBeActive;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
	}

IL_001a:
	{
		// if (session != null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___session_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// session.gameObject.SetActive(shouldBeActive);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_6 = __this->___session_17;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		bool L_8 = ___0_shouldBeActive;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicOpenXRLoader__ctor_mEAD7A809A070ED46286F4B37329332B982898BE0 (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* __this, const RuntimeMethod* method) 
{
	{
		// public bool AutoStartXROnDisplayConnected = true;
		__this->___AutoStartXROnDisplayConnected_5 = (bool)1;
		// public bool ShutDownXROnDisplayDisconnected = true;
		__this->___ShutDownXROnDisplayDisconnected_6 = (bool)1;
		// public bool AutoManageXRCamera = true;
		__this->___AutoManageXRCamera_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_Multicast(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* currentDelegate = reinterpret_cast<OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenInst(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	NullCheck(___0_openXRLoader);
	typedef void (*FunctionPointerType) (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason, method);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenStatic(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason, method);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenStaticInvoker(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	InvokerActionInvoker3< DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_ClosedStaticInvoker(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenVirtual(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	NullCheck(___0_openXRLoader);
	VirtualActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenInterface(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	NullCheck(___0_openXRLoader);
	InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenGenericVirtual(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	NullCheck(___0_openXRLoader);
	GenericVirtualActionInvoker2< int32_t, int32_t >::Invoke(method, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenGenericInterface(OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method)
{
	NullCheck(___0_openXRLoader);
	GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(method, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRStatusCallback__ctor_m257BC3D9C6F7DD1512C588F112A0EAF5E58BC2C5 (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_Multicast;
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback::Invoke(Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRState,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRFailReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450 (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback::BeginInvoke(Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRState,Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRFailReason,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRStatusCallback_BeginInvoke_m5E6A5E6B6F73CBEFDA69AFE8650B3B755F7440D7 (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFailReason_t8D4961B9C1CC1FF7EF5FBAE8B50CE5566E9C89DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRState_t587FEFC395A968F2EBD712D622F661F9E1364CAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_openXRLoader;
	__d_args[1] = Box(OpenXRState_t587FEFC395A968F2EBD712D622F661F9E1364CAB_il2cpp_TypeInfo_var, &___1_openXRState);
	__d_args[2] = Box(OpenXRFailReason_t8D4961B9C1CC1FF7EF5FBAE8B50CE5566E9C89DB_il2cpp_TypeInfo_var, &___2_openXRFailReason);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/OpenXRStatusCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRStatusCallback_EndInvoke_m8AEB4A17F2E0BF23F98C838410E17ABD23A13A11 (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplaysCoroutineU3Ed__22__ctor_mDC9B7770BFFEA9173A556A3E0CFDE72C998E78BA (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplaysCoroutineU3Ed__22_System_IDisposable_Dispose_m67C5B3D4B81C0411CD4040D6002D89F75C7D28FE (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplaysCoroutineU3Ed__22_MoveNext_m9251132C1D65273737C042BDA54D939435998AFD (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* V_1 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B9_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B12_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B16_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B15_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B23_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B22_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B26_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B25_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0125;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int numDisplays = 0;
		__this->___U3CnumDisplaysU3E5__2_3 = 0;
		goto IL_0052;
	}

IL_0032:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0052:
	{
		// while (numDisplays == Display.displays.Length)
		int32_t L_4 = __this->___U3CnumDisplaysU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* L_5 = ((Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields*)il2cpp_codegen_static_fields_for(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var))->___displays_1;
		NullCheck(L_5);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// numDisplays = Display.displays.Length;
		il2cpp_codegen_runtime_class_init_inline(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		DisplayU5BU5D_tAD77D7EE2B839E3EDA0D1C0028B64F867F400C7F* L_6 = ((Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_StaticFields*)il2cpp_codegen_static_fields_for(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var))->___displays_1;
		NullCheck(L_6);
		__this->___U3CnumDisplaysU3E5__2_3 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		// if (numDisplays == 1)
		int32_t L_7 = __this->___U3CnumDisplaysU3E5__2_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRUnavailable);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_8 = V_1;
		NullCheck(L_8);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_9 = L_8->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_10 = L_9;
		G_B8_0 = L_10;
		if (L_10)
		{
			G_B9_0 = L_10;
			goto IL_0083;
		}
	}
	{
		goto IL_008b;
	}

IL_0083:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_11 = V_1;
		NullCheck(G_B9_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B9_0, L_11, 1, 0, NULL);
	}

IL_008b:
	{
		// OnOpenXRUnavailable?.Invoke();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_12 = V_1;
		NullCheck(L_12);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12->___OnOpenXRUnavailable_9;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_0097;
		}
	}
	{
		goto IL_009c;
	}

IL_0097:
	{
		NullCheck(G_B12_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B12_0, NULL);
	}

IL_009c:
	{
		// if (ManagerIsActive)
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->___ManagerIsActive_15;
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRFailed, OpenXRFailReason.GlassesDisconnected);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_17 = V_1;
		NullCheck(L_17);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_18 = L_17->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_19 = L_18;
		G_B15_0 = L_19;
		if (L_19)
		{
			G_B16_0 = L_19;
			goto IL_00b0;
		}
	}
	{
		goto IL_00b8;
	}

IL_00b0:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_20 = V_1;
		NullCheck(G_B16_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B16_0, L_20, 6, 5, NULL);
	}

IL_00b8:
	{
		// StopOpenXR();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_21 = V_1;
		NullCheck(L_21);
		DynamicOpenXRLoader_StopOpenXR_mE689CD3E9D4167C22F5DBAE7EBD0ECF577897EB8(L_21, NULL);
	}

IL_00be:
	{
		// if (AutoManageXRCamera)
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = L_22->___AutoManageXRCamera_7;
		if (!L_23)
		{
			goto IL_010c;
		}
	}
	{
		// SetSessionOriginActive(false);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_24 = V_1;
		NullCheck(L_24);
		DynamicOpenXRLoader_SetSessionOriginActive_mFA3DB03CEA3BB521AA3C457FE7E41F2A5585A09C(L_24, (bool)0, NULL);
		goto IL_010c;
	}

IL_00cf:
	{
		// else if (numDisplays == 2)
		int32_t L_25 = __this->___U3CnumDisplaysU3E5__2_3;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_010c;
		}
	}
	{
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRAvailable);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_26 = V_1;
		NullCheck(L_26);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_27 = L_26->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_28 = L_27;
		G_B22_0 = L_28;
		if (L_28)
		{
			G_B23_0 = L_28;
			goto IL_00e4;
		}
	}
	{
		goto IL_00ec;
	}

IL_00e4:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_29 = V_1;
		NullCheck(G_B23_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B23_0, L_29, 0, 0, NULL);
	}

IL_00ec:
	{
		// OnOpenXRAvailable?.Invoke();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_30 = V_1;
		NullCheck(L_30);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_31 = L_30->___OnOpenXRAvailable_8;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_32 = L_31;
		G_B25_0 = L_32;
		if (L_32)
		{
			G_B26_0 = L_32;
			goto IL_00f8;
		}
	}
	{
		goto IL_00fd;
	}

IL_00f8:
	{
		NullCheck(G_B26_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B26_0, NULL);
	}

IL_00fd:
	{
		// if (AutoStartXROnDisplayConnected)
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_33 = V_1;
		NullCheck(L_33);
		bool L_34 = L_33->___AutoStartXROnDisplayConnected_5;
		if (!L_34)
		{
			goto IL_010c;
		}
	}
	{
		// StartOpenXR();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = DynamicOpenXRLoader_StartOpenXR_mB6E4CDB03C4541A9C0A4F1155AE46FFDE44982AE(L_35, NULL);
	}

IL_010c:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_37 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_37, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0125:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0052;
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplaysCoroutineU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C520213025C5130582FAEAF82FCD623E7500B3F (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplaysCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m2EEA89D73E991E271539FD3E3C81EBE61EF980C7 (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplaysCoroutineU3Ed__22_System_Collections_IEnumerator_Reset_m2EEA89D73E991E271539FD3E3C81EBE61EF980C7_RuntimeMethod_var)));
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<DisplaysCoroutine>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplaysCoroutineU3Ed__22_System_Collections_IEnumerator_get_Current_m4840965C1039B91931BE6EFB21C2ED224FB9C9FC (U3CDisplaysCoroutineU3Ed__22_tC2594DE5B7DAA550BA61804972102859617ABF02* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadXRCoroutineU3Ed__26__ctor_m6ED9A7C5013231070A4BE3E0AB44C9025363B0B9 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadXRCoroutineU3Ed__26_System_IDisposable_Dispose_mD9F1F88D31CB39204C13DF07C50406488E5349F4 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadXRCoroutineU3Ed__26_MoveNext_m09AA0509D3A460D84674B0769AF385A164A617EA (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* V_1 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B4_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B3_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B7_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B18_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B17_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B21_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B20_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B24_0 = NULL;
	OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* G_B23_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_00ad;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRConnecting);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_3 = V_1;
		NullCheck(L_3);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_4 = L_3->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0035;
		}
	}
	{
		goto IL_003d;
	}

IL_0035:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_6 = V_1;
		NullCheck(G_B4_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B4_0, L_6, 2, 0, NULL);
	}

IL_003d:
	{
		// OnOpenXRConnecting?.Invoke();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_7 = V_1;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = L_7->___OnOpenXRConnecting_10;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = L_8;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_0049;
		}
	}
	{
		goto IL_004e;
	}

IL_0049:
	{
		NullCheck(G_B7_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B7_0, NULL);
	}

IL_004e:
	{
		// managerIsLoading = true;
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_10 = V_1;
		NullCheck(L_10);
		L_10->___managerIsLoading_4 = (bool)1;
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_12;
		L_12 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_12);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_13;
		L_13 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_12, NULL);
		__this->___U3CmanagerU3E5__2_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmanagerU3E5__2_3), (void*)L_13);
		// StartCoroutine(manager.InitializeLoader());
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_14 = V_1;
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_15 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_15, NULL);
		NullCheck(L_14);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_16, NULL);
		goto IL_00b4;
	}

IL_0099:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_18 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_18, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b4:
	{
		// while (manager.isInitializationComplete == false)
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_19 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_19);
		bool L_20;
		L_20 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0099;
		}
	}
	{
		// managerIsLoading = false;
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_21 = V_1;
		NullCheck(L_21);
		L_21->___managerIsLoading_4 = (bool)0;
		// if (manager.isInitializationComplete)
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_22 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_22);
		bool L_23;
		L_23 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_011d;
		}
	}
	{
		// manager.StartSubsystems();
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_24 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_24);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_24, NULL);
		// if (AutoManageXRCamera)
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_25 = V_1;
		NullCheck(L_25);
		bool L_26 = L_25->___AutoManageXRCamera_7;
		if (!L_26)
		{
			goto IL_00ef;
		}
	}
	{
		// SetSessionOriginActive(true);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_27 = V_1;
		NullCheck(L_27);
		DynamicOpenXRLoader_SetSessionOriginActive_mFA3DB03CEA3BB521AA3C457FE7E41F2A5585A09C(L_27, (bool)1, NULL);
	}

IL_00ef:
	{
		// ManagerIsActive = true;
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_28 = V_1;
		NullCheck(L_28);
		L_28->___ManagerIsActive_15 = (bool)1;
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRConnected);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_29 = V_1;
		NullCheck(L_29);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_30 = L_29->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_31 = L_30;
		G_B17_0 = L_31;
		if (L_31)
		{
			G_B18_0 = L_31;
			goto IL_0102;
		}
	}
	{
		goto IL_010a;
	}

IL_0102:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_32 = V_1;
		NullCheck(G_B18_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B18_0, L_32, 3, 0, NULL);
	}

IL_010a:
	{
		// OnOpenXRConnected?.Invoke();
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_33 = V_1;
		NullCheck(L_33);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_34 = L_33->___OnOpenXRConnected_11;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_35 = L_34;
		G_B20_0 = L_35;
		if (L_35)
		{
			G_B21_0 = L_35;
			goto IL_0116;
		}
	}
	{
		goto IL_0131;
	}

IL_0116:
	{
		NullCheck(G_B21_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B21_0, NULL);
		goto IL_0131;
	}

IL_011d:
	{
		// OnOpenXRStatus?.Invoke(this, OpenXRState.OpenXRFailed, OpenXRFailReason.FailedToInitialize);
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_36 = V_1;
		NullCheck(L_36);
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_37 = L_36->___OnOpenXRStatus_14;
		OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* L_38 = L_37;
		G_B23_0 = L_38;
		if (L_38)
		{
			G_B24_0 = L_38;
			goto IL_0129;
		}
	}
	{
		goto IL_0131;
	}

IL_0129:
	{
		DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* L_39 = V_1;
		NullCheck(G_B24_0);
		OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline(G_B24_0, L_39, 6, 4, NULL);
	}

IL_0131:
	{
		// }
		return (bool)0;
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadXRCoroutineU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8AAD08B509AB04E96E7B6E593181FBCCB1F2A316 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadXRCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m809339DFA91B9436260E3B28EAE7BF845F89F2C6 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadXRCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m809339DFA91B9436260E3B28EAE7BF845F89F2C6_RuntimeMethod_var)));
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.DynamicOpenXRLoader/<LoadXRCoroutine>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadXRCoroutineU3Ed__26_System_Collections_IEnumerator_get_Current_m89EF891F7946E5568FEE07F80FC6522E0C858BF7 (U3CLoadXRCoroutineU3Ed__26_tAA34C85FB09004C04E77412780910E2610048E8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_Awake_m9FB20B4063864219F250319AA4E892D014082BA1 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_m87111DD8B841B9DB1CB118F202DF8C22205E2734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Selectable_Awake_m55439376D9E09A622C61C4BD7DA413E1E0EFD469(__this, NULL);
		// gyroToRotations = FindObjectsOfType<GyroToRotation>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_0;
		L_0 = Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_m87111DD8B841B9DB1CB118F202DF8C22205E2734(Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_m87111DD8B841B9DB1CB118F202DF8C22205E2734_RuntimeMethod_var);
		__this->___gyroToRotations_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gyroToRotations_22), (void*)L_0);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_OnPointerDown_m1D39E336297F715E14F6C9AFE6D8C887C7BBCCAF (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3(__this, L_0, NULL);
		// repeatReset = true;
		__this->___repeatReset_21 = (bool)1;
		// StartCoroutine(GyroResetRepeat());
		RuntimeObject* L_1;
		L_1 = GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::GyroResetRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* L_0 = (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C*)il2cpp_codegen_object_new(U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A(L_0, 0, NULL);
		U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_OnPointerUp_m38A51F4C5079B471268B9CB23F0369249FFE7529 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9(__this, L_0, NULL);
		// repeatReset = false;
		__this->___repeatReset_21 = (bool)0;
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton__ctor_m0F535DB05BB537C40CA80DB9B23008BF3BC8C9FA (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	{
		Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5(__this, NULL);
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
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Multicast(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* currentDelegate = reinterpret_cast<PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_button, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInst(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	NullCheck(___0_button);
	typedef void (*FunctionPointerType) (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_button, method);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStatic(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_button, method);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStaticInvoker(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_button);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_ClosedStaticInvoker(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_button);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenVirtual(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	NullCheck(___0_button);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_button);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInterface(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	NullCheck(___0_button);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_button);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericVirtual(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	NullCheck(___0_button);
	GenericVirtualActionInvoker0::Invoke(method, ___0_button);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericInterface(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method)
{
	NullCheck(___0_button);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_button);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened__ctor_m1D93CEC25A37FA5E1E63C60D15A9D342890DCD67 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Multicast;
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::Invoke(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_button, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::BeginInvoke(UnityEngine.UI.Button,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointerActionHappened_BeginInvoke_mBF99CB43EC7DF4FB9DB77FA83F12F3F60B68CA96 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_button, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_button;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened_EndInvoke_mF0D9C422E8755DE1C5AFDC7188F4675A6B8D33CE (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5_System_IDisposable_Dispose_mBA0BC8D2D084F3768641947B4F4F15137EEB0A89 (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGyroResetRepeatU3Ed__5_MoveNext_mC3F760122EE581FCC25096714207BC73C0BA1B0F (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* V_1 = NULL;
	GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0060;
	}

IL_0020:
	{
		// if (gyroToRotations != null)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_4 = V_1;
		NullCheck(L_4);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_5 = L_4->___gyroToRotations_22;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_6 = V_1;
		NullCheck(L_6);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_7 = L_6->___gyroToRotations_22;
		V_2 = L_7;
		V_3 = 0;
		goto IL_003f;
	}

IL_0033:
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// gyroToRotation.resetGyro();
		NullCheck(L_11);
		GyroToRotation_resetGyro_m2441FCBE9379AC3B328FB7F0DA342980C4C907D5(L_11, NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003f:
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		int32_t L_13 = V_3;
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0045:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_15 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_15, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0060:
	{
		// while (repeatReset)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->___repeatReset_21;
		if (L_17)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGyroResetRepeatU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEF7731D39D157CAC1C9EB5662463179F25862B4 (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF_RuntimeMethod_var)));
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_get_Current_m87C215DA013CA01878D21D56DC4768F3B201658D (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::get_RotationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// get { return rotationRate; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationRate_6;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::set_RotationRate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_set_RotationRate_mEF60A7D260D8A2E65B0404A92EB9615BAD276379 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { rotationRate = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___rotationRate_6 = L_0;
		// set { rotationRate = value; }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Awake_m790FF449A9648162619AFF5CD749AD9CC36EE9C9 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// xrCamera = XROriginHelper.GetXROriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9((bool)0, NULL);
		__this->___xrCamera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrCamera_4), (void*)L_2);
	}

IL_001a:
	{
		// enableGyro(true);
		GyroToRotation_enableGyro_m1E4B3B41EF99DD0AE7B3DEFDBAE6F881B669B1FD(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Start_m3CA6D7A76225DB4B25E2C30B3395243AB9522D7F (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// resetGyro();
		GyroToRotation_resetGyro_m2441FCBE9379AC3B328FB7F0DA342980C4C907D5(__this, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Update_m114492A32B1BB574C1EAF6D964140E162145C269 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (Input.gyro.enabled)
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Gyroscope_get_enabled_m10F5B3F646AB1A6EEE2831010642E9E1E0BCBDB9(L_0, NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// rotationRate = Input.gyro.rotationRate;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Gyroscope_get_rotationRate_mCF8F2D040B77A6C147092302C80C8DEC39918954(L_2, NULL);
		__this->___rotationRate_6 = L_3;
		// float rx = -rotationRate.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___rotationRate_6);
		float L_5 = L_4->___x_2;
		V_0 = ((-L_5));
		// float ry = -rotationRate.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___rotationRate_6);
		float L_7 = L_6->___z_4;
		V_1 = ((-L_7));
		// float rz = -rotationRate.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___rotationRate_6);
		float L_9 = L_8->___y_3;
		V_2 = ((-L_9));
		// rotationRate.x = rx;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___rotationRate_6);
		float L_11 = V_0;
		L_10->___x_2 = L_11;
		// rotationRate.y = ry;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___rotationRate_6);
		float L_13 = V_1;
		L_12->___y_3 = L_13;
		// rotationRate.z = rz;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___rotationRate_6);
		float L_15 = V_2;
		L_14->___z_4 = L_15;
		// controllerRepresentation.transform.Rotate(RotationRate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___controllerRepresentation_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline(__this, NULL);
		NullCheck(L_17);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_17, L_18, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::enableGyro(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_enableGyro_m1E4B3B41EF99DD0AE7B3DEFDBAE6F881B669B1FD (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	{
		// Input.gyro.enabled = isOn;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		bool L_1 = ___0_isOn;
		NullCheck(L_0);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::resetGyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_resetGyro_m2441FCBE9379AC3B328FB7F0DA342980C4C907D5 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 forward = xrCamera.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		V_0 = L_2;
		// forward.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// controllerRepresentation.transform.forward = forward;// rotation = Quaternion.Euler(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___controllerRepresentation_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation__ctor_mB00D894B98DCF8965272E286D4B55A9FBAC0152D (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotationRate = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationRate_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToUnity_Awake_mF94B25717CC62A92CD5C351AB37FA0C38A474812 (GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (deviceTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___deviceTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// deviceTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___deviceTransform_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceTransform_4), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToUnity_Start_mAF6D629548C94A812A8672A9CD88412DAF361821 (GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E* __this, const RuntimeMethod* method) 
{
	{
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_0);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToUnity_Update_m42D76C0A40E552BD99C3D18E74FDE2354E6C6904 (GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E* __this, const RuntimeMethod* method) 
{
	{
		// deviceTransform.Rotate(0, -Input.gyro.rotationRateUnbiased.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___deviceTransform_4;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_1;
		L_1 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Gyroscope_get_rotationRateUnbiased_m6B54A5F9A866E1F5005EA8B1575607DF2F3AB7A3(L_1, NULL);
		float L_3 = L_2.___y_3;
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), ((-L_3)), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToUnity__ctor_m4D943FEB3D4937F316FF93179C366B53B4077378 (GyroToUnity_t9B4E6209F3DEE072056B1756A719FD88680ED00E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_Awake_m1977EAE5283E0F501AA4AB83B5E6AC6F986F8B6A (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// switch (ForcedOrientation)
		int32_t L_0 = __this->___ForcedOrientation_4;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_0016:
	{
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		// break;
		return;
	}

IL_001d:
	{
		// Screen.orientation = ScreenOrientation.LandscapeLeft;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_ReloadScene_m71DCA18584A85FE22CA8C1BD5AE1A1ACEC86B57B (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::LoadSceneByID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_LoadSceneByID_m2EAEFE12572126A64A901DBF313A0C4764D220FA (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, int32_t ___0_sceneId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneId);
		int32_t L_0 = ___0_sceneId;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::LoadSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_LoadSceneByName_mA83790C8BF58241E7290B0613947CFA1116F8416 (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::ToggleObjectVisibility(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_ToggleObjectVisibility_mC81F2AD95A2FEE79B53DFDDF0E05594A10156E58 (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_objectToToggle, const RuntimeMethod* method) 
{
	{
		// objectToToggle.SetActive(!objectToToggle.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_objectToToggle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_objectToToggle;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle_Quit_mEB0C89FFBADED19FE90DC37BE9CC05CA5DE901E6 (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.Lifecycle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lifecycle__ctor_m32DF5C9E611DB05EFD8D80DD442B99AAE669973C (Lifecycle_tF1071085FEE4D1E80E0BDD41B075E55211B6DA5B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultitouchHandler_NormalizedPosition_m12E11010B84AC5A5A1E051FE6D3C8AACB2756D50 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_eventPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// float halfWidth = rectTransform.rect.width / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		V_0 = ((float)(L_3/(2.0f)));
		// float halfHeight = rectTransform.rect.height / 2;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		V_1 = ((float)(L_5/(2.0f)));
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventPosition,
		//     null, out localizedPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_eventPosition;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_6, L_7, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// Vector2 normalized = new Vector2(localizedPosition.x / halfWidth, localizedPosition.y / halfHeight);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		float L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		float L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), ((float)(L_10/L_11)), ((float)(L_13/L_14)), /*hidden argument*/NULL);
		// return normalized;
		return L_15;
	}

IL_0056:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_16;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_OnBeginDrag_mCFE753F1A1093DA15C59E3C0144900FD3D6298A2 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spriteImage.sprite = touchpadTouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___touchpadTouched_6;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_OnDrag_m543BEB73896CAC8C4F982FEDD740279CD2C315F2 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_OnEndDrag_mD875B096CDAD2165696F41B6FE548C7BD4B2F288 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spriteImage.sprite = touchpadUntouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___touchpadUntouched_5;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_OnPointerDown_m905357A5B4EF352AEC82B54488BE8A6AB8AEDE78 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spriteImage.sprite = touchpadTouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___touchpadTouched_6;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_OnPointerUp_m37116BF0833F7DBFC5E63FACA525C37BD7CDE0FC (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// spriteImage.sprite = touchpadUntouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___touchpadUntouched_5;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_Start_m0C203E7E8C465976DDB50ADAF26060553F78FB29 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// if (cameraTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___cameraTransform_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// Camera xrCamera = XROriginHelper.GetXROriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9((bool)0, NULL);
		V_0 = L_2;
		// if (xrCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// cameraTransform = xrCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		__this->___cameraTransform_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraTransform_15), (void*)L_6);
		return;
	}

IL_002b:
	{
		// cameraTransform = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		__this->___cameraTransform_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraTransform_15), (void*)L_8);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::DistanceOfTouches(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultitouchHandler_DistanceOfTouches_m69DBF795357901032E792687DC6D6CFCA0F47681 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchPositions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (touchPositions.Count >= 2)
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_touchPositions;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_0, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		// return Vector2.Distance(touchPositions[0], touchPositions[1]);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = ___0_touchPositions;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_2, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_4 = ___0_touchPositions;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_4, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_6;
		L_6 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_3, L_5, NULL);
		return L_6;
	}

IL_001d:
	{
		// return 0;
		return (0.0f);
	}
}
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::CenterOfTouches(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultitouchHandler_CenterOfTouches_m42916A843C9CAFAF3F81A40A51D0239DE339DCE2 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchPositions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// int max = Mathf.Min(3, touchPositions.Count);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_touchPositions;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_0, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(3, L_1, NULL);
		V_0 = L_2;
		// if (max == 0)
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_4;
	}

IL_0016:
	{
		// Vector2 total = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_5;
		// for (int i = 0; i < max; i++)
		V_2 = 0;
		goto IL_0032;
	}

IL_0020:
	{
		// total += touchPositions[i];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = ___0_touchPositions;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_7, L_8, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_9, NULL);
		V_1 = L_10;
		// for (int i = 0; i < max; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < max; i++)
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		// return total / max;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		int32_t L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_14, ((float)L_15), NULL);
		return L_16;
	}
}
// System.Single Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::SignedAngle(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultitouchHandler_SignedAngle_m2B06DCB39CEF92D1219D840934BD7069F5EC3265 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___0_touchHistory, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___1_touchPositions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Vector2.SignedAngle(touchHistory[0] - touchHistory[1], touchPositions[0] - touchPositions[1]);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___0_touchHistory;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_0, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = ___0_touchHistory;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_2, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_1, L_3, NULL);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = ___1_touchPositions;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = ___1_touchPositions;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_7, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_8, NULL);
		float L_10;
		L_10 = Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline(L_4, L_9, NULL);
		return L_10;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler_Update_mE6CC076161BE94841B9C0918DC57CB27A541098A (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// List<Vector2> touchPositions = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_0, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		V_0 = L_0;
		// int numTouchesCurrent = 0;
		V_1 = 0;
		// for (int i = 0; i < Input.touchCount; i++)
		V_5 = 0;
		goto IL_0073;
	}

IL_000d:
	{
		// Touch t = Input.GetTouch(i);
		int32_t L_1 = V_5;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_1, NULL);
		V_6 = L_2;
		// if (t.phase != TouchPhase.Canceled && t.phase != TouchPhase.Ended)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_006d;
		}
	}
	{
		// if (!firstTouchIsInPosition)
		bool L_5 = __this->___firstTouchIsInPosition_18;
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		// if (t.phase == TouchPhase.Began)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// if (RectTransformUtility.RectangleContainsScreenPoint(GetComponent<RectTransform>(), t.position))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = RectTransformUtility_RectangleContainsScreenPoint_mCEE05BFF3488FEB20BA21B5A4779116397B776B0(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// firstTouchIsInPosition = true;
		__this->___firstTouchIsInPosition_18 = (bool)1;
	}

IL_0056:
	{
		// numTouchesCurrent++;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// touchPositions.Add(NormalizedPosition(t.position));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = MultitouchHandler_NormalizedPosition_m12E11010B84AC5A5A1E051FE6D3C8AACB2756D50(__this, L_12, NULL);
		NullCheck(L_11);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_11, L_13, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
	}

IL_006d:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_15 = V_5;
		int32_t L_16;
		L_16 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000d;
		}
	}
	{
		// if (!firstTouchIsInPosition)
		bool L_17 = __this->___firstTouchIsInPosition_18;
		if (L_17)
		{
			goto IL_0085;
		}
	}
	{
		// return;
		return;
	}

IL_0085:
	{
		// bool numTouchesChanged = numTouchesCurrent != numTouchesLast;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___numTouchesLast_12;
		V_2 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// numTouchesLast = numTouchesCurrent;
		int32_t L_20 = V_1;
		__this->___numTouchesLast_12 = L_20;
		// if (numTouchesCurrent < 1)
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		// touchMode = TouchMode.None;
		__this->___touchMode_16 = 0;
		// firstTouchIsInPosition = false;
		__this->___firstTouchIsInPosition_18 = (bool)0;
		// return;
		return;
	}

IL_00ac:
	{
		// if (numTouchesChanged)
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00c9;
		}
	}
	{
		// touchMode = TouchMode.DualMode;
		__this->___touchMode_16 = 2;
		// break;
		goto IL_00d0;
	}

IL_00c0:
	{
		// touchMode = TouchMode.SingleMode;
		__this->___touchMode_16 = 1;
		// break;
		goto IL_00d0;
	}

IL_00c9:
	{
		// touchMode = TouchMode.TripleMode;
		__this->___touchMode_16 = 3;
	}

IL_00d0:
	{
		// touchHistory = touchPositions;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_25 = V_0;
		__this->___touchHistory_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchHistory_17), (void*)L_25);
		// if (touchMode == TouchMode.DualMode)
		int32_t L_26 = __this->___touchMode_16;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00ed;
		}
	}
	{
		// distanceStart = DistanceOfTouches(touchPositions);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_27 = V_0;
		float L_28;
		L_28 = MultitouchHandler_DistanceOfTouches_m69DBF795357901032E792687DC6D6CFCA0F47681(__this, L_27, NULL);
		__this->___distanceStart_10 = L_28;
	}

IL_00ed:
	{
		// touchpadStartCenter = CenterOfTouches(touchPositions);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_29 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = MultitouchHandler_CenterOfTouches_m42916A843C9CAFAF3F81A40A51D0239DE339DCE2(__this, L_29, NULL);
		__this->___touchpadStartCenter_11 = L_30;
		// touchpadLastCenter = touchpadStartCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = __this->___touchpadStartCenter_11;
		__this->___touchpadLastCenter_14 = L_31;
		// scaleStart = targetTransform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___targetTransform_13;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_32, NULL);
		float L_34 = L_33.___x_2;
		__this->___scaleStart_9 = L_34;
		// return;
		return;
	}

IL_011d:
	{
		// Vector2 touchpadCurrentCenter = CenterOfTouches(touchPositions);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_35 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = MultitouchHandler_CenterOfTouches_m42916A843C9CAFAF3F81A40A51D0239DE339DCE2(__this, L_35, NULL);
		V_3 = L_36;
		// float distanceCurrent = DistanceOfTouches(touchPositions);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_37 = V_0;
		float L_38;
		L_38 = MultitouchHandler_DistanceOfTouches_m69DBF795357901032E792687DC6D6CFCA0F47681(__this, L_37, NULL);
		V_4 = L_38;
		// switch (touchMode)
		int32_t L_39 = __this->___touchMode_16;
		V_8 = L_39;
		int32_t L_40 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_40, 1)))
		{
			case 0:
			{
				goto IL_0150;
			}
			case 1:
			{
				goto IL_0204;
			}
			case 2:
			{
				goto IL_0268;
			}
		}
	}
	{
		goto IL_02af;
	}

IL_0150:
	{
		// Vector3 delta = ((touchpadCurrentCenter.y - touchpadLastCenter.y) / 1.0f * cameraTransform.transform.forward * targetTransform.localScale.x +
		//                             (touchpadCurrentCenter.x - touchpadLastCenter.x) / 1.0f * cameraTransform.transform.right * targetTransform.localScale.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_3;
		float L_42 = L_41.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___touchpadLastCenter_14);
		float L_44 = L_43->___y_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___cameraTransform_15;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_42, L_44))/(1.0f))), L_47, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___targetTransform_13;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_49, NULL);
		float L_51 = L_50.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, L_51, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_3;
		float L_54 = L_53.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___touchpadLastCenter_14);
		float L_56 = L_55->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___cameraTransform_15;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_54, L_56))/(1.0f))), L_59, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = __this->___targetTransform_13;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_61, NULL);
		float L_63 = L_62.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_64, NULL);
		V_9 = L_65;
		// delta.y = 0;
		(&V_9)->___y_3 = (0.0f);
		// targetTransform.position += delta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___targetTransform_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = L_66;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_68, L_69, NULL);
		NullCheck(L_67);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_67, L_70, NULL);
		// break;
		goto IL_02af;
	}

IL_0204:
	{
		// targetTransform.localScale = Mathf.Max(minScale, Mathf.Min(maxScale, (scaleStart * (1 + distanceCurrent - distanceStart)))) * Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = __this->___targetTransform_13;
		float L_72 = __this->___minScale_7;
		float L_73 = __this->___maxScale_8;
		float L_74 = __this->___scaleStart_9;
		float L_75 = V_4;
		float L_76 = __this->___distanceStart_10;
		float L_77;
		L_77 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_73, ((float)il2cpp_codegen_multiply(L_74, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((1.0f), L_75)), L_76)))), NULL);
		float L_78;
		L_78 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_72, L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_78, L_79, NULL);
		NullCheck(L_71);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_80, NULL);
		// float rotateAngle = SignedAngle(touchPositions, touchHistory);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_81 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_82 = __this->___touchHistory_17;
		float L_83;
		L_83 = MultitouchHandler_SignedAngle_m2B06DCB39CEF92D1219D840934BD7069F5EC3265(__this, L_81, L_82, NULL);
		V_7 = L_83;
		// targetTransform.Rotate(Vector3.up, rotateAngle);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = __this->___targetTransform_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_86 = V_7;
		NullCheck(L_84);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_84, L_85, L_86, NULL);
		// break;
		goto IL_02af;
	}

IL_0268:
	{
		// targetTransform.position += (touchpadCurrentCenter.y - touchpadLastCenter.y) / 1.0f * new Vector3(0, 1, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->___targetTransform_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = L_87;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = V_3;
		float L_91 = L_90.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_92 = (&__this->___touchpadLastCenter_14);
		float L_93 = L_92->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_94), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_91, L_93))/(1.0f))), L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_89, L_95, NULL);
		NullCheck(L_88);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_88, L_96, NULL);
	}

IL_02af:
	{
		// touchpadLastCenter = touchpadCurrentCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97 = V_3;
		__this->___touchpadLastCenter_14 = L_97;
		// touchHistory = touchPositions;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_98 = V_0;
		__this->___touchHistory_17 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchHistory_17), (void*)L_98);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.MultitouchHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultitouchHandler__ctor_mFAEBBE6A77975EF2F43F6839A95CAE3C68AB3F90 (MultitouchHandler_t06ED3593A7C1C03D5F59EC2716ED5A10D8C68757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float minScale = 0.01f;
		__this->___minScale_7 = (0.00999999978f);
		// public float maxScale = 10f;
		__this->___maxScale_8 = (10.0f);
		// List<Vector2> touchHistory = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_0, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___touchHistory_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchHistory_17), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_eventPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// float halfWidth = rectTransform.rect.width / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		V_0 = ((float)(L_3/(2.0f)));
		// float halfHeight = rectTransform.rect.height / 2;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		V_1 = ((float)(L_5/(2.0f)));
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventPosition,
		//     null, out localizedPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_eventPosition;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_6, L_7, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// Vector2 normalized = new Vector2(localizedPosition.x / halfWidth, localizedPosition.y / halfHeight);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		float L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		float L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), ((float)(L_10/L_11)), ((float)(L_13/L_14)), /*hidden argument*/NULL);
		// return normalized;
		return L_15;
	}

IL_0056:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_16;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnBeginDrag_m7C7864DACF551EAD30EE93B3A890FCD866014DCC (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// spriteImage.sprite = touchpadTouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___touchpadTouched_6;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// inputDevice.SendTouchpadEvent(1, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_2 = __this->___inputDevice_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_4, NULL);
		NullCheck(L_2);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_2, 1, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnDrag_mCED6D26962BEC6A1848E5F79324325FFE0B5751F (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(2, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnEndDrag_m893258B6930F206E2F92CFDE31F318DED9EB292C (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// spriteImage.sprite = touchpadUntouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___touchpadUntouched_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// inputDevice.SendTouchpadEvent(0, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_2 = __this->___inputDevice_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_4, NULL);
		NullCheck(L_2);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_2, 0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnPointerDown_m56F614DF9FF8A3595236114F03271DDF92A00A57 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// spriteImage.sprite = touchpadTouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___touchpadTouched_6;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// inputDevice.SendTouchpadEvent(1, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_2 = __this->___inputDevice_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_4, NULL);
		NullCheck(L_2);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_2, 1, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnPointerUp_m16FD6131EAB5CF1C4DA63D64251942247B738BC7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// spriteImage.sprite = touchpadUntouched;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___spriteImage_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___touchpadUntouched_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// inputDevice.SendTouchpadEvent(0, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_2 = __this->___inputDevice_7;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_4, NULL);
		NullCheck(L_2);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_2, 0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler__ctor_m0428A75D03057DEA01A8F73BA30F2CA1395BD58C (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TransformFollower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformFollower_Update_m2111569DB2769870DB581F0C4BF3CCFB2C0EDBF6 (TransformFollower_t467384C311C59D6A66659F00B9AF93BD489EAF9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transformToFollow != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transformToFollow_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// transform.position = transformToFollow.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transformToFollow_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_4, NULL);
		// transform.rotation = transformToFollow.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transformToFollow_4;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TransformFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformFollower__ctor_m0CC696595CCEA1C34A0120C719CA3807A2F49D7B (TransformFollower_t467384C311C59D6A66659F00B9AF93BD489EAF9C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower_Awake_m2FD19DB7CD2AC6C8D78FA834E7FFEED75633F771 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// xrCamera = XROriginHelper.GetXROriginCamera(true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9((bool)1, NULL);
		__this->___xrCamera_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrCamera_8), (void*)L_2);
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___xrCamera_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("No XR Camera in the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower_Update_m51AC7DA05751A5BB3545FC93448B97A4F7A61759 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_2 = NULL;
	{
		// if (TrackPosition) {
		bool L_0 = __this->___TrackPosition_4;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// transform.position = xrCamera.transform.position + (UsePositionOffset ? PositionOffset : Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___xrCamera_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5 = __this->___UsePositionOffset_7;
		G_B2_0 = L_4;
		G_B2_1 = L_1;
		if (L_5)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_1;
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0033;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___PositionOffset_6;
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0033:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B4_2, L_8, NULL);
	}

IL_003d:
	{
		// if (TrackRotation && _rotationTransform != null) {
		bool L_9 = __this->___TrackRotation_5;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____rotationTransform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		// transform.rotation = _rotationTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____rotationTransform_9;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower__ctor_m3774BA9EA2D6CDE276356A2121A42C11E7273119 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	{
		// public bool TrackPosition = true;
		__this->___TrackPosition_4 = (bool)1;
		// public bool TrackRotation = true;
		__this->___TrackRotation_5 = (bool)1;
		// public Vector3 PositionOffset = new Vector3(0.0f, -0.5f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->___PositionOffset_6 = L_0;
		// public bool UsePositionOffset = true;
		__this->___UsePositionOffset_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper::GetXROrigin(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROriginHelper_GetXROrigin_m7FA9AF2C48B3C1D47FFAF46EE7398DB7596E81E1 (bool ___0_includeInactive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_0 = NULL;
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* V_1 = NULL;
	{
		// XROrigin xro = FindObjectOfType<XROrigin>(includeInactive);
		bool L_0 = ___0_includeInactive;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_1;
		L_1 = Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B(L_0, Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var);
		V_0 = L_1;
		// if (xro != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_2 = V_0;
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return xro.gameObject;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		// ARSessionOrigin aso = FindObjectOfType<ARSessionOrigin>(includeInactive);
		bool L_6 = ___0_includeInactive;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_7;
		L_7 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404(L_6, Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		V_1 = L_7;
		// if (aso != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		// return aso.gameObject;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		return L_11;
	}

IL_002e:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper::GetXROriginCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROriginHelper_GetXROriginCamera_mCAE50A77FA1D7B28BD70E77CAAE325AEA532A5A9 (bool ___0_includeInactive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m2950AE1B6D70A60B296E1B28859CF68F2476F50F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_1 = NULL;
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* V_2 = NULL;
	{
		// GameObject xrOriginObject = GetXROrigin(includeInactive);
		bool L_0 = ___0_includeInactive;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = XROriginHelper_GetXROrigin_m7FA9AF2C48B3C1D47FFAF46EE7398DB7596E81E1(L_0, NULL);
		V_0 = L_1;
		// if (xrOriginObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// XROrigin xrOrigin = xrOriginObject.GetComponent<XROrigin>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_5;
		L_5 = GameObject_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m2950AE1B6D70A60B296E1B28859CF68F2476F50F(L_4, GameObject_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m2950AE1B6D70A60B296E1B28859CF68F2476F50F_RuntimeMethod_var);
		V_1 = L_5;
		// if (xrOrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		// if (xrOrigin.Camera != null) {
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_8 = V_1;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		// return xrOrigin.Camera;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_11 = V_1;
		NullCheck(L_11);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_11, NULL);
		return L_12;
	}

IL_0035:
	{
		// ARSessionOrigin aso = FindObjectOfType<ARSessionOrigin>(includeInactive);
		bool L_13 = ___0_includeInactive;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_14;
		L_14 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404(L_13, Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		V_2 = L_14;
		// if (aso != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_15 = V_2;
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		// return aso.camera;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_17 = V_2;
		NullCheck(L_17);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_17, NULL);
		return L_18;
	}

IL_004c:
	{
		// if (xrOriginObject.GetComponent<ARSessionOrigin>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_20;
		L_20 = GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063(L_19, GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_0066;
		}
	}
	{
		// return xrOriginObject.GetComponent<ARSessionOrigin>().camera;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_23;
		L_23 = GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063(L_22, GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		NullCheck(L_23);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_23, NULL);
		return L_24;
	}

IL_0066:
	{
		// return null;
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XROriginHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROriginHelper__ctor_m1AF5CED10A40B9E0AE5CEADD9378B340DC66FED7 (XROriginHelper_tFB22C1B79BE973F6AFDEB7DCF0B6A5AF722E8BB1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CbuttonMenuU3Ek__BackingField_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuttonMenuU3Ek__BackingField_39), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CtouchpadClickU3Ek__BackingField_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadClickU3Ek__BackingField_40), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = ___0_value;
		__this->___U3CtouchpadPositionU3Ek__BackingField_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadPositionU3Ek__BackingField_41), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CdevicePositionU3Ek__BackingField_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_42), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CdeviceRotationU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackingStateU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRStatusCallback_Invoke_m7ADF87A673B85595E20C48E4843334F081FEE450_inline (OpenXRStatusCallback_t14D5A710AAD763D7D06713B4AB715F309E9CB0D2* __this, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A* ___0_openXRLoader, int32_t ___1_openXRState, int32_t ___2_openXRFailReason, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DynamicOpenXRLoader_tBE9B2AB978EBB7F33F12D7EE07DE12E9A820081A*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_openXRLoader, ___1_openXRState, ___2_openXRFailReason, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// get { return rotationRate; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationRate_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_to;
		float L_2;
		L_2 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_from;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_to;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_from;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___1_to;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10)))), NULL);
		V_1 = L_11;
		float L_12 = V_0;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_0030;
	}

IL_0030:
	{
		float L_14 = V_2;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_item;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_to;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
