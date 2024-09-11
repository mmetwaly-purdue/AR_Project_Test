#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		void* params[9] = { &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10<T1*, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		void* params[10] = { p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t0C07FD85B1F9D6B227053620025A06960D8603DA;
// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D;
// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA;
// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8;
// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F;
// WebXR.WebXRSubsystemDescriptor[]
struct WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49;
// WebXR.WebXRCameraSettings
struct WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349;
// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00;
// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4;
// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA;
// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637;
// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA;
// WebXR.WebXRHandData
struct WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145;
// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55;
// WebXR.WebXRLoader
struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE;
// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3;
// WebXR.WebXRModesNotifier
struct WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91;
// WebXR.WebXRSettings
struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587;
// WebXR.WebXRSubsystem
struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06;
// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989;
// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424;
// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8;
// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751;
// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632;
// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304;
// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7;
// WebXR.WebXRSubsystem/ViewsDistanceEvent
struct ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4;
// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85;
// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B;
// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6;
// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA;
// WebXR.WebXRSubsystem/XRChange
struct XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1086B9AAD0718D3711D808D7297452B66A58C3DE;
IL2CPP_EXTERN_C String_t* _stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11;
IL2CPP_EXTERN_C String_t* _stringLiteral2BADD7DA265EB41AC0C14851A8E7EE7D3996C32D;
IL2CPP_EXTERN_C String_t* _stringLiteral326DC628A629A75968385CA9FA7DF5413BB83C2D;
IL2CPP_EXTERN_C String_t* _stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35;
IL2CPP_EXTERN_C String_t* _stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7BED7275CBAD3A700E60D4D10AE5E718012FC621;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1C2D6F534B4B1466FEA842324F5B5AD2022838;
IL2CPP_EXTERN_C String_t* _stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216;
IL2CPP_EXTERN_C String_t* _stringLiteral8D585C0CF017666D27E62797181776A7A1789937;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0E523CAEB92E318202982063159F7E1E27562D;
IL2CPP_EXTERN_C String_t* _stringLiteral9C41CB6455D03CBFB86E06BEF80923BFE07AE143;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBD664D0384A7D47BEB2B72D767FA586B92A01A47;
IL2CPP_EXTERN_C String_t* _stringLiteralBFE450D79ADC88CEC83ED7D761462A3E3D5AADCB;
IL2CPP_EXTERN_C String_t* _stringLiteralD104C1E530141613EE1B0764177D07778AD57EC4;
IL2CPP_EXTERN_C String_t* _stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0C84D82AA9022140F5CC812D29F26D2CF4154D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA;;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA5EBFFF6A4591A271A6D45EAF01E09B319926610 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_t1361FC6DDFE12D211F933B024E51B7E5CF073F63* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;
};

// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
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

// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4  : public RuntimeObject
{
	// System.Boolean WebXR.WebXRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebXR.WebXRControllerButton::touched
	bool ___touched_1;
	// System.Boolean WebXR.WebXRControllerButton::down
	bool ___down_2;
	// System.Boolean WebXR.WebXRControllerButton::up
	bool ___up_3;
	// System.Single WebXR.WebXRControllerButton::value
	float ___value_4;
};

// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637  : public RuntimeObject
{
	// System.String[] WebXR.WebXRControllersProfiles::controller1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___controller1_0;
	// System.String[] WebXR.WebXRControllersProfiles::controller2
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___controller2_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D  : public SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71
{
};

// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 
{
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_NumChannels
	uint32_t ___m_NumChannels_0;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsImpulse
	bool ___m_SupportsImpulse_1;
	// System.Boolean UnityEngine.XR.HapticCapabilities::m_SupportsBuffer
	bool ___m_SupportsBuffer_2;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferFrequencyHz
	uint32_t ___m_BufferFrequencyHz_3;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferMaxSize
	uint32_t ___m_BufferMaxSize_4;
	// System.UInt32 UnityEngine.XR.HapticCapabilities::m_BufferOptimalSize
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_pinvoke
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};
// Native definition for COM marshalling of UnityEngine.XR.HapticCapabilities
struct HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211_marshaled_com
{
	uint32_t ___m_NumChannels_0;
	int32_t ___m_SupportsImpulse_1;
	int32_t ___m_SupportsBuffer_2;
	uint32_t ___m_BufferFrequencyHz_3;
	uint32_t ___m_BufferMaxSize_4;
	uint32_t ___m_BufferOptimalSize_5;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA 
{
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentAR
	bool ___canPresentAR_0;
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentVR
	bool ___canPresentVR_1;
};
// Native definition for P/Invoke marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
};
// Native definition for COM marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ____current_3;
};

// System.Nullable`1<UnityEngine.XR.HapticCapabilities>
struct Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.InputDevice>
struct Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___value_1;
};

// UnityEngine.XR.CommonUsages
struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1  : public RuntimeObject
{
};

struct CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields
{
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t64C1AA42D6E8BD57C54C7E891BD79A70A0F3A170 ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tD3FEDCAE0D7F51C7B42182162ACE726E68166B38 ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___thumbTouch_58;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRControllerData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRControllerData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRControllerData::hand
	int32_t ___hand_2;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::gripPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gripPosition_5;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::gripRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___gripRotation_6;
	// System.Single WebXR.WebXRControllerData::trigger
	float ___trigger_7;
	// System.Boolean WebXR.WebXRControllerData::triggerTouched
	bool ___triggerTouched_8;
	// System.Single WebXR.WebXRControllerData::squeeze
	float ___squeeze_9;
	// System.Boolean WebXR.WebXRControllerData::squeezeTouched
	bool ___squeezeTouched_10;
	// System.Single WebXR.WebXRControllerData::thumbstick
	float ___thumbstick_11;
	// System.Boolean WebXR.WebXRControllerData::thumbstickTouched
	bool ___thumbstickTouched_12;
	// System.Single WebXR.WebXRControllerData::thumbstickX
	float ___thumbstickX_13;
	// System.Single WebXR.WebXRControllerData::thumbstickY
	float ___thumbstickY_14;
	// System.Single WebXR.WebXRControllerData::touchpad
	float ___touchpad_15;
	// System.Boolean WebXR.WebXRControllerData::touchpadTouched
	bool ___touchpadTouched_16;
	// System.Single WebXR.WebXRControllerData::touchpadX
	float ___touchpadX_17;
	// System.Single WebXR.WebXRControllerData::touchpadY
	float ___touchpadY_18;
	// System.Single WebXR.WebXRControllerData::buttonA
	float ___buttonA_19;
	// System.Boolean WebXR.WebXRControllerData::buttonATouched
	bool ___buttonATouched_20;
	// System.Single WebXR.WebXRControllerData::buttonB
	float ___buttonB_21;
	// System.Boolean WebXR.WebXRControllerData::buttonBTouched
	bool ___buttonBTouched_22;
	// System.String[] WebXR.WebXRControllerData::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_23;
};

// WebXR.WebXRHandData
struct WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRHandData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHandData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRHandData::hand
	int32_t ___hand_2;
	// System.Single WebXR.WebXRHandData::trigger
	float ___trigger_3;
	// System.Single WebXR.WebXRHandData::squeeze
	float ___squeeze_4;
	// UnityEngine.Vector3 WebXR.WebXRHandData::pointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_5;
	// UnityEngine.Quaternion WebXR.WebXRHandData::pointerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_6;
	// WebXR.WebXRJointData[] WebXR.WebXRHandData::joints
	WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* ___joints_7;
};

// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRHitPoseData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHitPoseData::available
	bool ___available_1;
	// UnityEngine.Vector3 WebXR.WebXRHitPoseData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion WebXR.WebXRHitPoseData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
};

// WebXR.WebXRJointData
struct WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 
{
	// UnityEngine.Vector3 WebXR.WebXRJointData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion WebXR.WebXRJointData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// System.Single WebXR.WebXRJointData::radius
	float ___radius_2;
};

// WebXR.WebXRSubsystem
struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06  : public Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668
{
	// System.Boolean WebXR.WebXRSubsystem::_running
	bool ____running_1;
	// WebXR.WebXRState WebXR.WebXRSubsystem::xrState
	int32_t ___xrState_3;
	// System.Int32 WebXR.WebXRSubsystem::viewsCount
	int32_t ___viewsCount_4;
	// UnityEngine.Rect WebXR.WebXRSubsystem::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_5;
	// UnityEngine.Rect WebXR.WebXRSubsystem::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_6;
	// System.Boolean WebXR.WebXRSubsystem::reportedXRStateSwitch
	bool ___reportedXRStateSwitch_7;
	// WebXR.WebXRVisibilityState WebXR.WebXRSubsystem::visibilityState
	int32_t ___visibilityState_8;
	// System.Boolean WebXR.WebXRSubsystem::visibilityStateChanged
	bool ___visibilityStateChanged_9;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::leftProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix_19;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::rightProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix_20;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::leftPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition_21;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::rightPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition_22;
	// System.Single[] WebXR.WebXRSubsystem::sharedArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sharedArray_23;
	// System.Single[] WebXR.WebXRSubsystem::controllersArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___controllersArray_24;
	// System.Single[] WebXR.WebXRSubsystem::handsArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handsArray_25;
	// System.Single[] WebXR.WebXRSubsystem::viewerHitTestPoseArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___viewerHitTestPoseArray_26;
	// System.Boolean WebXR.WebXRSubsystem::viewerHitTestOn
	bool ___viewerHitTestOn_27;
	// System.Boolean WebXR.WebXRSubsystem::updatedControllersOnEnd
	bool ___updatedControllersOnEnd_28;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::leftHand
	WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___leftHand_29;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::rightHand
	WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___rightHand_30;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller1
	WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controller1_31;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller2
	WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controller2_32;
	// WebXR.WebXRHitPoseData WebXR.WebXRSubsystem::viewerHitTestPose
	WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___viewerHitTestPose_33;
	// WebXR.WebXRDisplayCapabilities WebXR.WebXRSubsystem::capabilities
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities_34;
};

struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields
{
	// WebXR.WebXRSubsystem WebXR.WebXRSubsystem::Instance
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* ___Instance_2;
	// WebXR.WebXRLoader WebXR.WebXRSubsystem::webXRLoader
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* ___webXRLoader_10;
	// WebXR.WebXRSubsystem/XRCapabilitiesUpdate WebXR.WebXRSubsystem::OnXRCapabilitiesUpdate
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___OnXRCapabilitiesUpdate_11;
	// WebXR.WebXRSubsystem/XRChange WebXR.WebXRSubsystem::OnXRChange
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___OnXRChange_12;
	// WebXR.WebXRSubsystem/VisibilityChange WebXR.WebXRSubsystem::OnVisibilityChange
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___OnVisibilityChange_13;
	// WebXR.WebXRSubsystem/HeadsetUpdate WebXR.WebXRSubsystem::OnHeadsetUpdate
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___OnHeadsetUpdate_14;
	// WebXR.WebXRSubsystem/ViewsDistanceEvent WebXR.WebXRSubsystem::OnViewsDistanceChange
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___OnViewsDistanceChange_15;
	// WebXR.WebXRSubsystem/ControllerUpdate WebXR.WebXRSubsystem::OnControllerUpdate
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___OnControllerUpdate_16;
	// WebXR.WebXRSubsystem/HandUpdate WebXR.WebXRSubsystem::OnHandUpdate
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___OnHandUpdate_17;
	// WebXR.WebXRSubsystem/HitTestUpdate WebXR.WebXRSubsystem::OnViewerHitTestUpdate
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___OnViewerHitTestUpdate_18;
};

// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42  : public SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WebXR.WebXRSettings
struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::VRRequiredReferenceSpace
	int32_t ___VRRequiredReferenceSpace_4;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::VROptionalFeatures
	int32_t ___VROptionalFeatures_5;
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::ARRequiredReferenceSpace
	int32_t ___ARRequiredReferenceSpace_6;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::AROptionalFeatures
	int32_t ___AROptionalFeatures_7;
	// System.Boolean WebXR.WebXRSettings::UseFramebufferScaleFactor
	bool ___UseFramebufferScaleFactor_8;
	// System.Boolean WebXR.WebXRSettings::UseNativeResolution
	bool ___UseNativeResolution_9;
	// System.Single WebXR.WebXRSettings::FramebufferScaleFactor
	float ___FramebufferScaleFactor_10;
	// System.Boolean WebXR.WebXRSettings::AutoLoadWebXRManager
	bool ___AutoLoadWebXRManager_11;
	// System.Boolean WebXR.WebXRSettings::AutoLoadWebXRInputSystem
	bool ___AutoLoadWebXRInputSystem_12;
	// System.Boolean WebXR.WebXRSettings::DisableXRDisplaySubsystem
	bool ___DisableXRDisplaySubsystem_13;
};

struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields
{
	// WebXR.WebXRSettings WebXR.WebXRSettings::instance
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* ___instance_14;
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/ViewsDistanceEvent
struct ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRChange
struct XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* ___U3CsubsystemU3Ek__BackingField_4;
};

// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WebXR.WebXRCamera::cameraMain
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraMain_6;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraL
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraL_7;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraR
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraR_8;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARL
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraARL_9;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARR
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraARR_10;
	// System.Boolean WebXR.WebXRCamera::m_updateNormalFieldOfView
	bool ___m_updateNormalFieldOfView_11;
	// System.Boolean WebXR.WebXRCamera::m_useNormalFieldOfViewFromAwake
	bool ___m_useNormalFieldOfViewFromAwake_12;
	// System.Single WebXR.WebXRCamera::m_normalFieldOfView
	float ___m_normalFieldOfView_13;
	// System.Boolean WebXR.WebXRCamera::m_updateNormalLocalPose
	bool ___m_updateNormalLocalPose_14;
	// System.Boolean WebXR.WebXRCamera::m_useNormalPoseFromAwake
	bool ___m_useNormalPoseFromAwake_15;
	// UnityEngine.Vector3 WebXR.WebXRCamera::m_normalLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_normalLocalPosition_16;
	// UnityEngine.Quaternion WebXR.WebXRCamera::m_normalLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_normalLocalRotation_17;
	// WebXR.WebXRState WebXR.WebXRCamera::xrState
	int32_t ___xrState_18;
	// UnityEngine.Rect WebXR.WebXRCamera::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_19;
	// UnityEngine.Rect WebXR.WebXRCamera::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_20;
	// System.Int32 WebXR.WebXRCamera::viewsCount
	int32_t ___viewsCount_21;
	// UnityEngine.Transform WebXR.WebXRCamera::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_22;
	// System.Boolean WebXR.WebXRCamera::updateCameraTag
	bool ___updateCameraTag_23;
};

struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields
{
	// System.String WebXR.WebXRCamera::mainCameraTag
	String_t* ___mainCameraTag_4;
	// System.String WebXR.WebXRCamera::untaggedTag
	String_t* ___untaggedTag_5;
};

// WebXR.WebXRCameraSettings
struct WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WebXR.WebXRCameraSettings::m_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_camera_4;
	// UnityEngine.Transform WebXR.WebXRCameraSettings::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_5;
	// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::m_normalClearFlags
	int32_t ___m_normalClearFlags_6;
	// UnityEngine.Color WebXR.WebXRCameraSettings::m_normalBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_normalBackgroundColor_7;
	// UnityEngine.LayerMask WebXR.WebXRCameraSettings::m_normalCullingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_normalCullingMask_8;
	// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::m_vrClearFlags
	int32_t ___m_vrClearFlags_9;
	// UnityEngine.Color WebXR.WebXRCameraSettings::m_vrBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_vrBackgroundColor_10;
	// UnityEngine.LayerMask WebXR.WebXRCameraSettings::m_vrCullingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_vrCullingMask_11;
	// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::m_arClearFlags
	int32_t ___m_arClearFlags_12;
	// UnityEngine.Color WebXR.WebXRCameraSettings::m_arBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_arBackgroundColor_13;
	// UnityEngine.LayerMask WebXR.WebXRCameraSettings::m_arCullingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_arCullingMask_14;
	// System.Boolean WebXR.WebXRCameraSettings::m_updateNormalFieldOfView
	bool ___m_updateNormalFieldOfView_15;
	// System.Boolean WebXR.WebXRCameraSettings::m_useNormalFieldOfViewFromAwake
	bool ___m_useNormalFieldOfViewFromAwake_16;
	// System.Single WebXR.WebXRCameraSettings::m_normalFieldOfView
	float ___m_normalFieldOfView_17;
	// System.Boolean WebXR.WebXRCameraSettings::m_updateNormalLocalPose
	bool ___m_updateNormalLocalPose_18;
	// System.Boolean WebXR.WebXRCameraSettings::m_useNormalPoseFromAwake
	bool ___m_useNormalPoseFromAwake_19;
	// UnityEngine.Vector3 WebXR.WebXRCameraSettings::m_normalLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_normalLocalPosition_20;
	// UnityEngine.Quaternion WebXR.WebXRCameraSettings::m_normalLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_normalLocalRotation_21;
};

// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnControllerActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnControllerActive_4;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnHandActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnHandActive_5;
	// System.Action`1<WebXR.WebXRHandData> WebXR.WebXRController::OnHandUpdate
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* ___OnHandUpdate_6;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnAlwaysUseGripChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnAlwaysUseGripChanged_7;
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_8;
	// System.Single WebXR.WebXRController::trigger
	float ___trigger_9;
	// System.Boolean WebXR.WebXRController::triggerTouched
	bool ___triggerTouched_10;
	// System.Single WebXR.WebXRController::squeeze
	float ___squeeze_11;
	// System.Boolean WebXR.WebXRController::squeezeTouched
	bool ___squeezeTouched_12;
	// System.Single WebXR.WebXRController::thumbstick
	float ___thumbstick_13;
	// System.Boolean WebXR.WebXRController::thumbstickTouched
	bool ___thumbstickTouched_14;
	// System.Single WebXR.WebXRController::thumbstickX
	float ___thumbstickX_15;
	// System.Single WebXR.WebXRController::thumbstickY
	float ___thumbstickY_16;
	// System.Single WebXR.WebXRController::touchpad
	float ___touchpad_17;
	// System.Boolean WebXR.WebXRController::touchpadTouched
	bool ___touchpadTouched_18;
	// System.Single WebXR.WebXRController::touchpadX
	float ___touchpadX_19;
	// System.Single WebXR.WebXRController::touchpadY
	float ___touchpadY_20;
	// System.Single WebXR.WebXRController::buttonA
	float ___buttonA_21;
	// System.Boolean WebXR.WebXRController::buttonATouched
	bool ___buttonATouched_22;
	// System.Single WebXR.WebXRController::buttonB
	float ___buttonB_23;
	// System.Boolean WebXR.WebXRController::buttonBTouched
	bool ___buttonBTouched_24;
	// WebXR.WebXRControllerButton[] WebXR.WebXRController::buttons
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons_25;
	// System.Boolean WebXR.WebXRController::controllerActive
	bool ___controllerActive_26;
	// System.Boolean WebXR.WebXRController::handActive
	bool ___handActive_27;
	// System.String[] WebXR.WebXRController::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_28;
	// System.Int32 WebXR.WebXRController::oculusLinkBugTest
	int32_t ___oculusLinkBugTest_29;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetRay
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetRay_30;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetGrip
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetGrip_31;
	// System.Boolean WebXR.WebXRController::alwaysUseGrip
	bool ___alwaysUseGrip_32;
	// UnityEngine.Vector3 WebXR.WebXRController::<gripPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CgripPositionU3Ek__BackingField_33;
	// UnityEngine.Quaternion WebXR.WebXRController::<gripRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CgripRotationU3Ek__BackingField_34;
	// UnityEngine.XR.InputDeviceCharacteristics WebXR.WebXRController::xrHand
	uint32_t ___xrHand_35;
	// System.Nullable`1<UnityEngine.XR.InputDevice> WebXR.WebXRController::inputDevice
	Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4 ___inputDevice_36;
	// System.Nullable`1<UnityEngine.XR.HapticCapabilities> WebXR.WebXRController::hapticCapabilities
	Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414 ___hapticCapabilities_37;
	// System.Int32 WebXR.WebXRController::buttonsFrameUpdate
	int32_t ___buttonsFrameUpdate_38;
};

// WebXR.WebXRLoader
struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
	// System.Boolean WebXR.WebXRLoader::useXRDisplaySubsystem
	bool ___useXRDisplaySubsystem_8;
};

struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields
{
	// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor> WebXR.WebXRLoader::sampleSubsystemDescriptors
	List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* ___sampleSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> WebXR.WebXRLoader::displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___displaySubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> WebXR.WebXRLoader::inputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___inputSubsystemDescriptors_7;
};

// WebXR.WebXRModesNotifier
struct WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedToAR
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedToAR_4;
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedFromAR
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedFromAR_5;
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedToVR
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedToVR_6;
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedFromVR
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedFromVR_7;
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedToNormal
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedToNormal_8;
	// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::m_OnSwitchedFromNormal
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnSwitchedFromNormal_9;
	// WebXR.WebXRState WebXR.WebXRModesNotifier::currentState
	int32_t ___currentState_10;
};

// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3  : public SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744
{
};

struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields
{
	// UnityEngine.Rect WebXR.WebXRManager::defaultRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___defaultRect_5;
	// WebXR.WebXRManager WebXR.WebXRManager::<Instance>k__BackingField
	WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___U3CInstanceU3Ek__BackingField_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* m_Items[1];

	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 m_Items[1];

	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 value)
	{
		m_Items[index] = value;
	}
};
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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

IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled);

// System.Boolean WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_isSubsystemAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_mE79E8794ADE12DC7CDEDCF7C3F3FBF06691D0B43_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.InputDevice>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_gshared_inline (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.InputDevice>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_gshared (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.HapticCapabilities>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_gshared_inline (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.HapticCapabilities>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2_gshared (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.InputDevice>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21_gshared (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.HapticCapabilities>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909_gshared (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___value0, const RuntimeMethod* method) ;
// TSubsystem WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_Awake_m65A0D886D634941488C98008FAF2CE52719E4A1E_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_mFFFF4844232DC77D884C77A5D0857734C5A15054_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.String WebXR.WebXRSettings::EnumToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_EnumToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m95E41310864411574A1A2B235C94AE96A5466BC1_gshared (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String WebXR.WebXRSettings::FlagsToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_FlagsToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m12357A2189460E7FD13B1D9C681C755A5E60FD13_gshared (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m9168CCBA1E269A8AE22E57D9EC02F9064DA336E4_gshared (SubsystemDescriptor_1_t0C07FD85B1F9D6B227053620025A06960D8603DA* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_m30A432477A65110D1B20BB3979E99F6F2BCADE6A_gshared (Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ViewsDistanceEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewsDistanceEvent__ctor_mE8CE5E8B1D0713B668DA95108CB9CBD539DFEFFA (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnViewsDistanceChange_m387D919BB4E26E0D926C36C51078C3E4541250B1 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) ;
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline (const RuntimeMethod* method) ;
// WebXR.WebXRState WebXR.WebXRManager::get_XRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) ;
// System.Int32 WebXR.WebXRManager::get_ViewsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_ViewsCount_m4D64B42CB060E652B4A1E632A4DF08F5D3976B9A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect WebXR.WebXRManager::get_ViewsLeftRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebXRManager_get_ViewsLeftRect_m776BDCC345E580782C47DD70ABFEE9E3A44E13F6 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect WebXR.WebXRManager::get_ViewsRightRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebXRManager_get_ViewsRightRect_mDBBE56FE2FFC78D0AF2EEDD4BD1D1B1DA9CDDDBE (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCamera::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnViewsDistanceChange_mD0192064D2E650FC7AAE8FE7A9499A6170E0675C (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetProjectionMatrix_m6C5F82F7CA38E39DC357A1C53C7DD26791C27AFD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCameraSettings::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::InitButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, bool ___isTouched1, float ___buttonValue2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, bool ___isTouched1, float ___buttonValue2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::UpdateAllButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateAllButtons_mC5A4ED118C678D17F2A57D8DB1131BF005359192 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.Boolean WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_isSubsystemAvailable()
inline bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70 (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_get_isSubsystemAvailable_mE79E8794ADE12DC7CDEDCF7C3F3FBF06691D0B43_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<UnityEngine.XR.InputDevice>::get_HasValue()
inline bool Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_inline (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4*, const RuntimeMethod*))Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.InputDevice>::get_Value()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4*, const RuntimeMethod*))Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___usage0, float* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___usage0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___usage0, bool* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, bool ___forceReport1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 WebXR.WebXRController::get_gripPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::UpdateHandButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateHandButtons_mD91EAACED38D4E0EDD9E289C5762761FF11BE85A (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<WebXR.WebXRHandData>::Invoke(T)
inline void Action_1_Invoke_mE1A8D48E62126CE7EBD8C6BD65BFF6B81381F02A_inline (Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void WebXR.WebXRController::ResetAllButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_ResetAllButtons_m3BC88A85179B8E06207A8ABC3CB353617C233AD9 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.HapticCapabilities>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_inline (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414*, const RuntimeMethod*))Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.HapticCapabilities>::get_Value()
inline HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2 (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, const RuntimeMethod* method)
{
	return ((  HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 (*) (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414*, const RuntimeMethod*))Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.HapticCapabilities::get_supportsImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C (HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::SendHapticImpulse(System.UInt32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, uint32_t ___channel0, float ___amplitude1, float ___duration2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A (uint32_t ___desiredCharacteristics0, List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* ___inputDevices1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6 (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 (*) (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*, const RuntimeMethod*))List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRController::HandleInputDevicesConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___device0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01*, const RuntimeMethod*))Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.InputDevices::add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceConnected_m78FF855F70C572E7B9BFD5A591E2C5B023AB8728 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::add_deviceDisconnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceDisconnected_m0E0638AF16C20B6408FD51EDF3F7F2914E81D7A9 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceConnected_m84A034DA67396DB4D3F2F7A97DC4C5EBBF764058 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.InputDevices::remove_deviceDisconnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceDisconnected_mCFBEFB32ADFCB3CEB8D9494BBDC892E489B08DD9 (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.InputDevice>::.ctor(T)
inline void Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21 (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21_gshared)(__this, ___value0, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetHapticCapabilities(UnityEngine.XR.HapticCapabilities&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211* ___capabilities0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.HapticCapabilities>::.ctor(T)
inline void Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909 (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414*, HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211, const RuntimeMethod*))Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909_gshared)(__this, ___value0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.InputDevice::op_Equality(UnityEngine.XR.InputDevice,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_op_Equality_mA56EB46D562FA46BFF210219B62BE923B9FD0085 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___a0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TSubsystem WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_subsystem()
inline WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	return ((  WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewsDistanceChange_m73B3064E00010C1C444A8141AA1144476478B8E7 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewsDistanceChange_mDC9017C4CCD81147617B1EB537AC148A8D7EBB90 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::PreRenderSpectatorCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_PreRenderSpectatorCamera_mC95D8447792BEE4FD8F6F53623E903A8B7AD85AE (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// WebXR.WebXRSettings WebXR.WebXRSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_GetSettings_mDBA1A38176C6854F328D02437E86255932393640 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<WebXR.WebXRManager>()
inline WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::Awake()
inline void SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_Awake_m65A0D886D634941488C98008FAF2CE52719E4A1E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02 (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2__ctor_mFFFF4844232DC77D884C77A5D0857734C5A15054_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRModesNotifier::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRSettings::set_useOcclusionMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_useOcclusionMesh_m09A0A4D9FAFC05BCFCD8B09C6DC8E341E9CDF332 (bool ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<WebXR.WebXRSubsystemDescriptor,WebXR.WebXRSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem WebXR.WebXRLoader::get_XRDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRInputSubsystem WebXR.WebXRLoader::get_XRInputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.IntegratedSubsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759 (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773 (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String WebXR.WebXRSettings::EnumToString<WebXR.WebXRSettings/ReferenceSpaceTypes>(T)
inline String_t* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587*, int32_t, const RuntimeMethod*))WebXRSettings_EnumToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m95E41310864411574A1A2B235C94AE96A5466BC1_gshared)(__this, ___value0, method);
}
// System.String WebXR.WebXRSettings::FlagsToString<WebXR.WebXRSettings/ExtraFeatureTypes>(T)
inline String_t* WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587*, int32_t, const RuntimeMethod*))WebXRSettings_FlagsToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m12357A2189460E7FD13B1D9C681C755A5E60FD13_gshared)(__this, ___value0, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79 (SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D*, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m9168CCBA1E269A8AE22E57D9EC02F9064DA336E4_gshared)(__this, method);
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7 (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3 (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519 (int32_t ___visibilityState0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551 (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_mCE7479B03E9146CB8F255997DED1572635CD9541 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___descriptor0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___handIndex0, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** ___handObject1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___controllerIndex0, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** ___newControllerData1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Single WebXR.WebXRSubsystem::CheckViewsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRSubsystem_CheckViewsDistance_mAF568EC5C4BDC58A15905C3BA23936F446B0B8C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ViewsDistanceEvent::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_inline (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** ___hitPoseData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_inline (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vec31, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___cap0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<WebXR.WebXRControllersProfiles>(System.String)
inline WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* ___controllersProfiles0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRLoader::StartEssentialSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_StartEssentialSubsystems_mDA481D41C6C1658C661D37195BD326A3FBA53B1E (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRLoader::EndEssentialSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_EndEssentialSubsystems_m907E282D6CDFBEC9C4F0E27C434EF49FB6B23967 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E (Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668* __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668*, const RuntimeMethod*))Subsystem_1__ctor_m30A432477A65110D1B20BB3979E99F6F2BCADE6A_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Boolean WebXR.WebXRCamera::get_UpdateNormalFieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCamera_get_UpdateNormalFieldOfView_mFD4926C430D86A65C1AD62E3DD23C78A72ACC8E2 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_updateNormalFieldOfView; }
		bool L_0 = __this->___m_updateNormalFieldOfView_11;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_UpdateNormalFieldOfView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_UpdateNormalFieldOfView_m8B788D14DE95DA2C4718525B0265244A1DFC6B8F (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_updateNormalFieldOfView = value; }
		bool L_0 = ___value0;
		__this->___m_updateNormalFieldOfView_11 = L_0;
		// set { m_updateNormalFieldOfView = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCamera::get_UseNormalFieldOfViewFromAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCamera_get_UseNormalFieldOfViewFromAwake_m261EC10FA7BFEA2346169A83297C4EE7ED6E5AB5 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_useNormalFieldOfViewFromAwake; }
		bool L_0 = __this->___m_useNormalFieldOfViewFromAwake_12;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_UseNormalFieldOfViewFromAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_UseNormalFieldOfViewFromAwake_m609C69AFA59AF30933434A4A2DAD022B05D27733 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_useNormalFieldOfViewFromAwake = value; }
		bool L_0 = ___value0;
		__this->___m_useNormalFieldOfViewFromAwake_12 = L_0;
		// set { m_useNormalFieldOfViewFromAwake = value; }
		return;
	}
}
// System.Single WebXR.WebXRCamera::get_NormalFieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRCamera_get_NormalFieldOfView_mD32FE7DDFDEB945060594D0CAF55F101A31D3D41 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalFieldOfView; }
		float L_0 = __this->___m_normalFieldOfView_13;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_NormalFieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_NormalFieldOfView_m0C56D59981AA6E8E06928C6501B76205A474884D (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalFieldOfView = value; }
		float L_0 = ___value0;
		__this->___m_normalFieldOfView_13 = L_0;
		// set { m_normalFieldOfView = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCamera::get_UpdateNormalLocalPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCamera_get_UpdateNormalLocalPose_m637212816B59C5742F71D4850AF948C2D4534D15 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_updateNormalLocalPose; }
		bool L_0 = __this->___m_updateNormalLocalPose_14;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_UpdateNormalLocalPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_UpdateNormalLocalPose_mAA605CD5DD0E158206D20F5176F965C3E8B06329 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_updateNormalLocalPose = value; }
		bool L_0 = ___value0;
		__this->___m_updateNormalLocalPose_14 = L_0;
		// set { m_updateNormalLocalPose = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCamera::get_UseNormalPoseFromAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCamera_get_UseNormalPoseFromAwake_m1C3249F08C03F1B60DC71714AFEC1C821EF09F89 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_useNormalPoseFromAwake; }
		bool L_0 = __this->___m_useNormalPoseFromAwake_15;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_UseNormalPoseFromAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_UseNormalPoseFromAwake_m2C4342496A9E55E46FA30B7374AB10CA13A6122F (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_useNormalPoseFromAwake = value; }
		bool L_0 = ___value0;
		__this->___m_useNormalPoseFromAwake_15 = L_0;
		// set { m_useNormalPoseFromAwake = value; }
		return;
	}
}
// UnityEngine.Vector3 WebXR.WebXRCamera::get_NormalLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRCamera_get_NormalLocalPosition_m8E88B414871E940422FDE292EF55C74435EACEB3 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalLocalPosition; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_normalLocalPosition_16;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_NormalLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_NormalLocalPosition_m34FEAD0AE7B1D16E215B5A4E89E88BE20F5A40B0 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalLocalPosition = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_normalLocalPosition_16 = L_0;
		// set { m_normalLocalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRCamera::get_NormalLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRCamera_get_NormalLocalRotation_mFA20844C5DFEE0EE6EEA9F7604B19CA79A9306C8 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalLocalRotation; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_normalLocalRotation_17;
		return L_0;
	}
}
// System.Void WebXR.WebXRCamera::set_NormalLocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_set_NormalLocalRotation_m0E29B690A93DD42D2FC2E743AC5A1E23583625FF (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalLocalRotation = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___m_normalLocalRotation_17 = L_0;
		// set { m_normalLocalRotation = value; }
		return;
	}
}
// System.Void WebXR.WebXRCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_Awake_mD7AFF1A25C907CB309E565023B6AEB8F4FD729B8 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cameraMain == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cameraMain_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_transform = cameraMain.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraMain_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___m_transform_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_22), (void*)L_3);
		// if (m_useNormalFieldOfViewFromAwake)
		bool L_4 = __this->___m_useNormalFieldOfViewFromAwake_12;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// m_normalFieldOfView = cameraMain.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraMain_6;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		__this->___m_normalFieldOfView_13 = L_6;
	}

IL_0039:
	{
		// if (m_useNormalPoseFromAwake)
		bool L_7 = __this->___m_useNormalPoseFromAwake_15;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// m_normalLocalPosition = m_transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_transform_22;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		__this->___m_normalLocalPosition_16 = L_9;
		// m_normalLocalRotation = m_transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_transform_22;
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		__this->___m_normalLocalRotation_17 = L_11;
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnEnable_m2F901A5797A543AA44F0B913AF66BAE59A9A1744 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange += OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9(L_0, NULL);
		// WebXRManager.OnHeadsetUpdate += OnHeadsetUpdate;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)il2cpp_codegen_object_new(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F(L_1, __this, (intptr_t)((void*)WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE(L_1, NULL);
		// WebXRManager.OnViewsDistanceChange += OnViewsDistanceChange;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_2 = (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)il2cpp_codegen_object_new(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ViewsDistanceEvent__ctor_mE8CE5E8B1D0713B668DA95108CB9CBD539DFEFFA(L_2, __this, (intptr_t)((void*)WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1_RuntimeMethod_var), NULL);
		WebXRManager_add_OnViewsDistanceChange_m387D919BB4E26E0D926C36C51078C3E4541250B1(L_2, NULL);
		// OnXRChange(WebXRManager.Instance.XRState,
		//             WebXRManager.Instance.ViewsCount,
		//             WebXRManager.Instance.ViewsLeftRect,
		//             WebXRManager.Instance.ViewsRightRect);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_3;
		L_3 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0(L_3, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_5;
		L_5 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebXRManager_get_ViewsCount_m4D64B42CB060E652B4A1E632A4DF08F5D3976B9A(L_5, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_7;
		L_7 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = WebXRManager_get_ViewsLeftRect_m776BDCC345E580782C47DD70ABFEE9E3A44E13F6(L_7, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_9;
		L_9 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = WebXRManager_get_ViewsRightRect_mDBBE56FE2FFC78D0AF2EEDD4BD1D1B1DA9CDDDBE(L_9, NULL);
		WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA(__this, L_4, L_6, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnDisable_m5C89615107E9D5CF0E8655B40F531B1C3EC02AA5 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange -= OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8(L_0, NULL);
		// WebXRManager.OnHeadsetUpdate -= OnHeadsetUpdate;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)il2cpp_codegen_object_new(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F(L_1, __this, (intptr_t)((void*)WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97(L_1, NULL);
		// WebXRManager.OnViewsDistanceChange -= OnViewsDistanceChange;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_2 = (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)il2cpp_codegen_object_new(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ViewsDistanceEvent__ctor_mE8CE5E8B1D0713B668DA95108CB9CBD539DFEFFA(L_2, __this, (intptr_t)((void*)WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnViewsDistanceChange_mD0192064D2E650FC7AAE8FE7A9499A6170E0675C(L_2, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_18;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_00c4;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_016e;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// cameraMain.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraMain_6;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// cameraL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraL_7;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// cameraR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraR_8;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// cameraARL.enabled = viewsCount > 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraARL_9;
		int32_t L_6 = __this->___viewsCount_21;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0), NULL);
		// cameraARL.rect = leftRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraARL_9;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = __this->___leftRect_19;
		NullCheck(L_7);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_7, L_8, NULL);
		// cameraARR.enabled = viewsCount > 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraARR_10;
		int32_t L_10 = __this->___viewsCount_21;
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0), NULL);
		// cameraARR.rect = rightRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___cameraARR_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = __this->___rightRect_20;
		NullCheck(L_11);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_11, L_12, NULL);
		// if (updateCameraTag)
		bool L_13 = __this->___updateCameraTag_23;
		if (!L_13)
		{
			goto IL_0230;
		}
	}
	{
		// cameraMain.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___cameraMain_6;
		il2cpp_codegen_runtime_class_init_inline(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var);
		String_t* L_15 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_14);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_14, L_15, NULL);
		// cameraL.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cameraL_7;
		String_t* L_17 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_16);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_16, L_17, NULL);
		// cameraARL.tag = mainCameraTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cameraARL_9;
		String_t* L_19 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___mainCameraTag_4;
		NullCheck(L_18);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_18, L_19, NULL);
		// break;
		return;
	}

IL_00c4:
	{
		// cameraMain.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___cameraMain_6;
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
		// cameraL.enabled = viewsCount > 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___cameraL_7;
		int32_t L_22 = __this->___viewsCount_21;
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0), NULL);
		// cameraL.rect = leftRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___cameraL_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = __this->___leftRect_19;
		NullCheck(L_23);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_23, L_24, NULL);
		// cameraR.enabled = viewsCount > 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cameraR_8;
		int32_t L_26 = __this->___viewsCount_21;
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)((((int32_t)L_26) > ((int32_t)1))? 1 : 0), NULL);
		// cameraR.rect = rightRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___cameraR_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28 = __this->___rightRect_20;
		NullCheck(L_27);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_27, L_28, NULL);
		// cameraARL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = __this->___cameraARL_9;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
		// cameraARR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->___cameraARR_10;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)0, NULL);
		// if (updateCameraTag)
		bool L_31 = __this->___updateCameraTag_23;
		if (!L_31)
		{
			goto IL_0230;
		}
	}
	{
		// cameraMain.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___cameraMain_6;
		il2cpp_codegen_runtime_class_init_inline(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var);
		String_t* L_33 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_32);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_32, L_33, NULL);
		// cameraL.tag = mainCameraTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = __this->___cameraL_7;
		String_t* L_35 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___mainCameraTag_4;
		NullCheck(L_34);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_34, L_35, NULL);
		// cameraARL.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = __this->___cameraARL_9;
		String_t* L_37 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_36);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_36, L_37, NULL);
		// break;
		return;
	}

IL_016e:
	{
		// cameraMain.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = __this->___cameraMain_6;
		NullCheck(L_38);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_38, (bool)1, NULL);
		// cameraL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39 = __this->___cameraL_7;
		NullCheck(L_39);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_39, (bool)0, NULL);
		// cameraR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = __this->___cameraR_8;
		NullCheck(L_40);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_40, (bool)0, NULL);
		// cameraARL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = __this->___cameraARL_9;
		NullCheck(L_41);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_41, (bool)0, NULL);
		// cameraARR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = __this->___cameraARR_10;
		NullCheck(L_42);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_42, (bool)0, NULL);
		// if (updateCameraTag)
		bool L_43 = __this->___updateCameraTag_23;
		if (!L_43)
		{
			goto IL_01e2;
		}
	}
	{
		// cameraMain.tag = mainCameraTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = __this->___cameraMain_6;
		il2cpp_codegen_runtime_class_init_inline(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var);
		String_t* L_45 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___mainCameraTag_4;
		NullCheck(L_44);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_44, L_45, NULL);
		// cameraL.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46 = __this->___cameraL_7;
		String_t* L_47 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_46);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_46, L_47, NULL);
		// cameraARL.tag = untaggedTag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_48 = __this->___cameraARL_9;
		String_t* L_49 = ((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5;
		NullCheck(L_48);
		Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(L_48, L_49, NULL);
	}

IL_01e2:
	{
		// if (m_updateNormalFieldOfView)
		bool L_50 = __this->___m_updateNormalFieldOfView_11;
		if (!L_50)
		{
			goto IL_0206;
		}
	}
	{
		// cameraMain.fieldOfView = m_normalFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_51 = __this->___cameraMain_6;
		float L_52 = __this->___m_normalFieldOfView_13;
		NullCheck(L_51);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_51, L_52, NULL);
		// cameraMain.ResetProjectionMatrix();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_53 = __this->___cameraMain_6;
		NullCheck(L_53);
		Camera_ResetProjectionMatrix_m6C5F82F7CA38E39DC357A1C53C7DD26791C27AFD(L_53, NULL);
	}

IL_0206:
	{
		// if (m_updateNormalLocalPose)
		bool L_54 = __this->___m_updateNormalLocalPose_14;
		if (!L_54)
		{
			goto IL_0230;
		}
	}
	{
		// m_transform.localPosition = m_normalLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___m_transform_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->___m_normalLocalPosition_16;
		NullCheck(L_55);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_55, L_56, NULL);
		// m_transform.localRotation = m_normalLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___m_transform_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = __this->___m_normalLocalRotation_17;
		NullCheck(L_57);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_57, L_58, NULL);
	}

IL_0230:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRCamera::GetLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRCamera_GetLocalRotation_m4CD88EC43A5A6EA1F6A2A46A95B189E8B89BFC46 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_18;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// return cameraARL.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraARL_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		// return cameraL.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraL_7;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		return L_8;
	}

IL_0030:
	{
		// return cameraMain.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraMain_6;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 WebXR.WebXRCamera::GetLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRCamera_GetLocalPosition_mA06E276021434C603AC8C70A361C10480E3E663C (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_18;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// if (viewsCount > 1)
		int32_t L_3 = __this->___viewsCount_21;
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		// return (cameraARL.transform.localPosition + cameraARR.transform.localPosition) * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraARL_9;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraARR_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, (0.5f), NULL);
		return L_11;
	}

IL_0047:
	{
		// return cameraARL.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cameraARL_9;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		return L_14;
	}

IL_0058:
	{
		// return (cameraL.transform.localPosition + cameraR.transform.localPosition) * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cameraL_7;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cameraR_8;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, (0.5f), NULL);
		return L_22;
	}

IL_0088:
	{
		// return cameraMain.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___cameraMain_6;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Camera WebXR.WebXRCamera::GetCamera(WebXR.WebXRCamera/CameraID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* WebXRCamera_GetCamera_m085EDCD8DB4F8F283F82EB6798A4D156EEADB3B1 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___cameraID0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___cameraID0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_001a:
	{
		// return cameraL;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cameraL_7;
		return L_1;
	}

IL_0021:
	{
		// return cameraR;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraR_8;
		return L_2;
	}

IL_0028:
	{
		// return cameraARL;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraARL_9;
		return L_3;
	}

IL_002f:
	{
		// return cameraARR;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraARR_10;
		return L_4;
	}

IL_0036:
	{
		// return cameraMain;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraMain_6;
		return L_5;
	}
}
// System.Void WebXR.WebXRCamera::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	{
		// xrState = state;
		int32_t L_0 = ___state0;
		__this->___xrState_18 = L_0;
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->___viewsCount_21 = L_1;
		// this.leftRect = leftRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___leftRect2;
		__this->___leftRect_19 = L_2;
		// this.rightRect = rightRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___rightRect3;
		__this->___rightRect_20 = L_3;
		// SwitchXRState();
		WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnHeadsetUpdate_mF25B000A69554197FEB197A5508A56C70EE7674D (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method) 
{
	{
		// if (xrState == WebXRState.VR)
		int32_t L_0 = __this->___xrState_18;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cameraL_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___leftProjectionMatrix0;
		NullCheck(L_1);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_1, L_2, NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraR_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___rightProjectionMatrix1;
		NullCheck(L_3);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_3, L_4, NULL);
		goto IL_0043;
	}

IL_0022:
	{
		// else if (xrState == WebXRState.AR)
		int32_t L_5 = __this->___xrState_18;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		// cameraARL.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraARL_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ___leftProjectionMatrix0;
		NullCheck(L_6);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_6, L_7, NULL);
		// cameraARR.projectionMatrix = rightProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___cameraARR_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___rightProjectionMatrix1;
		NullCheck(L_8);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_8, L_9, NULL);
	}

IL_0043:
	{
		// if (viewsCount == 1)
		int32_t L_10 = __this->___viewsCount_21;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		// cameraMain.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___cameraMain_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = ___leftProjectionMatrix0;
		NullCheck(L_11);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_11, L_12, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnViewsDistanceChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnViewsDistanceChange_mA5F114BB54344E274F145502DFF0849186DB30D1 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, float ___distance0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float halfDistance = distance * 0.5f;
		float L_0 = ___distance0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.5f)));
		// var left = new Vector3(-halfDistance, 0f, 0f);
		float L_1 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((-L_1)), (0.0f), (0.0f), NULL);
		// var right = new Vector3(halfDistance, 0f, 0f);
		float L_2 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_2, (0.0f), (0.0f), NULL);
		// cameraL.transform.localPosition = left;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraL_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// cameraR.transform.localPosition = right;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraR_8;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// cameraARL.transform.localPosition = left;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraARL_9;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// cameraARR.transform.localPosition = right;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cameraARR_10;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__ctor_m441E2544589657E3A86076D665B6E294D0BBA802 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// private bool m_updateNormalFieldOfView = true;
		__this->___m_updateNormalFieldOfView_11 = (bool)1;
		// private bool m_useNormalFieldOfViewFromAwake = true;
		__this->___m_useNormalFieldOfViewFromAwake_12 = (bool)1;
		// private float m_normalFieldOfView = 60f;
		__this->___m_normalFieldOfView_13 = (60.0f);
		// private bool m_updateNormalLocalPose = true;
		__this->___m_updateNormalLocalPose_14 = (bool)1;
		// private bool m_useNormalPoseFromAwake = true;
		__this->___m_useNormalPoseFromAwake_15 = (bool)1;
		// private Vector3 m_normalLocalPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_normalLocalPosition_16 = L_0;
		// private Quaternion m_normalLocalRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___m_normalLocalRotation_17 = L_1;
		// private WebXRState xrState = WebXRState.NORMAL;
		__this->___xrState_18 = 2;
		// private int viewsCount = 1;
		__this->___viewsCount_21 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WebXR.WebXRCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__cctor_mA3CA28F1A63658CF118EDF2A0A563FE4E2BF2573 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string mainCameraTag = "MainCamera";
		((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___mainCameraTag_4 = _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___mainCameraTag_4), (void*)_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		// private static readonly string untaggedTag = "Untagged";
		((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5 = _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_StaticFields*)il2cpp_codegen_static_fields_for(WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49_il2cpp_TypeInfo_var))->___untaggedTag_5), (void*)_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
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
// UnityEngine.Camera WebXR.WebXRCameraSettings::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* WebXRCameraSettings_get_Camera_m86C30F5ED1C74C61A6FDDA63B4E231B5B1CFC9B7 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_camera_4;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_Camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_Camera_m775FAE3D7D4951989B642BBA581B8FC00C1B3500 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_camera = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		__this->___m_camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_camera_4), (void*)L_0);
		// set { m_camera = value; }
		return;
	}
}
// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::get_NormalClearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRCameraSettings_get_NormalClearFlags_mDFE842EA764D56B56ECBA8C67837A59AFAC0CA3F (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalClearFlags; }
		int32_t L_0 = __this->___m_normalClearFlags_6;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalClearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalClearFlags_m7883C30E74C46D09A2E8C71F665E27C735A4F264 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalClearFlags = value; }
		int32_t L_0 = ___value0;
		__this->___m_normalClearFlags_6 = L_0;
		// set { m_normalClearFlags = value; }
		return;
	}
}
// UnityEngine.Color WebXR.WebXRCameraSettings::get_NormalBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F WebXRCameraSettings_get_NormalBackgroundColor_m427AD29D27090FD1E678034ED6A56A36216B717F (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_normalBackgroundColor_7;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalBackgroundColor_m78BBF59E9C129B982CDBAFF3EAFD26C052761391 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalBackgroundColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_normalBackgroundColor_7 = L_0;
		// set { m_normalBackgroundColor = value; }
		return;
	}
}
// UnityEngine.LayerMask WebXR.WebXRCameraSettings::get_NormalCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB WebXRCameraSettings_get_NormalCullingMask_m3C0D2C19892CFCB6310443F0064CCCE9FF144786 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalCullingMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_normalCullingMask_8;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalCullingMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalCullingMask_m163E0BF057394E1ACE52F1164544DE8DDEBD1DBC (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalCullingMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_normalCullingMask_8 = L_0;
		// set { m_normalCullingMask = value; }
		return;
	}
}
// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::get_VRClearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRCameraSettings_get_VRClearFlags_mFD89438279107153B0B9086ACDEE6A59955BA280 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_vrClearFlags; }
		int32_t L_0 = __this->___m_vrClearFlags_9;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_VRClearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_VRClearFlags_mC0BA81BC791A9021D025815B676D501685A6ECFE (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_vrClearFlags = value; }
		int32_t L_0 = ___value0;
		__this->___m_vrClearFlags_9 = L_0;
		// set { m_vrClearFlags = value; }
		return;
	}
}
// UnityEngine.Color WebXR.WebXRCameraSettings::get_VRBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F WebXRCameraSettings_get_VRBackgroundColor_m1A014D8417491CC801F666EF2D1F0A4FDBBDCD1C (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_vrBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_vrBackgroundColor_10;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_VRBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_VRBackgroundColor_m3DA4DF199E4783D2D8B5864F3745705561117FE7 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_vrBackgroundColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_vrBackgroundColor_10 = L_0;
		// set { m_vrBackgroundColor = value; }
		return;
	}
}
// UnityEngine.LayerMask WebXR.WebXRCameraSettings::get_VRCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB WebXRCameraSettings_get_VRCullingMask_mB937123D2FDE36D70A77DC331F963245EAA9AAE4 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_vrCullingMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_vrCullingMask_11;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_VRCullingMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_VRCullingMask_m81B291E97AE27725B29C5E8E50B97E31A0DFB019 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_vrCullingMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_vrCullingMask_11 = L_0;
		// set { m_vrCullingMask = value; }
		return;
	}
}
// UnityEngine.CameraClearFlags WebXR.WebXRCameraSettings::get_ARClearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRCameraSettings_get_ARClearFlags_m9BCFA3708D20C590A95DF7795D3FD170ABF69500 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_arClearFlags; }
		int32_t L_0 = __this->___m_arClearFlags_12;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_ARClearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_ARClearFlags_m269B500C6B9F21BDE4EEE0024463731AEA73BD5B (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_arClearFlags = value; }
		int32_t L_0 = ___value0;
		__this->___m_arClearFlags_12 = L_0;
		// set { m_arClearFlags = value; }
		return;
	}
}
// UnityEngine.Color WebXR.WebXRCameraSettings::get_ARBackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F WebXRCameraSettings_get_ARBackgroundColor_mC5E389AF6DF18C2E98F0457B34D509BE0511814A (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_arBackgroundColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_arBackgroundColor_13;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_ARBackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_ARBackgroundColor_m9017063721CD91BBA813AB955FEAFDC4A8162A61 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_arBackgroundColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_arBackgroundColor_13 = L_0;
		// set { m_arBackgroundColor = value; }
		return;
	}
}
// UnityEngine.LayerMask WebXR.WebXRCameraSettings::get_ARCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB WebXRCameraSettings_get_ARCullingMask_m4135D3A7FF0AF11EE7005F4E40A7A55272D1FF59 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_arCullingMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_arCullingMask_14;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_ARCullingMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_ARCullingMask_m71459A5EAB78E69E8C6638DA7C318C411EA3BF79 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_arCullingMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_arCullingMask_14 = L_0;
		// set { m_arCullingMask = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCameraSettings::get_UpdateNormalFieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCameraSettings_get_UpdateNormalFieldOfView_mB8C73E6E6F503E2C884CEAA22A4771B7934F1E5A (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_updateNormalFieldOfView; }
		bool L_0 = __this->___m_updateNormalFieldOfView_15;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_UpdateNormalFieldOfView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_UpdateNormalFieldOfView_m60258C5270ACCAE4FABB474073065B6A238B0A15 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_updateNormalFieldOfView = value; }
		bool L_0 = ___value0;
		__this->___m_updateNormalFieldOfView_15 = L_0;
		// set { m_updateNormalFieldOfView = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCameraSettings::get_UseNormalFieldOfViewFromAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCameraSettings_get_UseNormalFieldOfViewFromAwake_m2289F2D9A0D184F652264460931DD8C086613D9D (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_useNormalFieldOfViewFromAwake; }
		bool L_0 = __this->___m_useNormalFieldOfViewFromAwake_16;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_UseNormalFieldOfViewFromAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_UseNormalFieldOfViewFromAwake_m2EC95BD8CFA927BEEE47774D546258706BB91984 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_useNormalFieldOfViewFromAwake = value; }
		bool L_0 = ___value0;
		__this->___m_useNormalFieldOfViewFromAwake_16 = L_0;
		// set { m_useNormalFieldOfViewFromAwake = value; }
		return;
	}
}
// System.Single WebXR.WebXRCameraSettings::get_NormalFieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRCameraSettings_get_NormalFieldOfView_m45352C8C862C91550C3D924C7E4E6AB4B737F959 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalFieldOfView; }
		float L_0 = __this->___m_normalFieldOfView_17;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalFieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalFieldOfView_m1492A1BA6AC217845A520AB270AC61990C73269C (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalFieldOfView = value; }
		float L_0 = ___value0;
		__this->___m_normalFieldOfView_17 = L_0;
		// set { m_normalFieldOfView = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCameraSettings::get_UpdateNormalLocalPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCameraSettings_get_UpdateNormalLocalPose_mA967AA4F9A4C76F56A8EA0E7244F6EDFC23CFA0F (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_updateNormalLocalPose; }
		bool L_0 = __this->___m_updateNormalLocalPose_18;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_UpdateNormalLocalPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_UpdateNormalLocalPose_mB8C4E69CA8996DFA9FFC9933026CDF208B072616 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_updateNormalLocalPose = value; }
		bool L_0 = ___value0;
		__this->___m_updateNormalLocalPose_18 = L_0;
		// set { m_updateNormalLocalPose = value; }
		return;
	}
}
// System.Boolean WebXR.WebXRCameraSettings::get_UseNormalPoseFromAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRCameraSettings_get_UseNormalPoseFromAwake_m0883BE0F80EB42EE288ECA9525572C350D449C86 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_useNormalPoseFromAwake; }
		bool L_0 = __this->___m_useNormalPoseFromAwake_19;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_UseNormalPoseFromAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_UseNormalPoseFromAwake_m2CCB9F0DA53D4E8B4271786E521BED2CA1BC91A3 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_useNormalPoseFromAwake = value; }
		bool L_0 = ___value0;
		__this->___m_useNormalPoseFromAwake_19 = L_0;
		// set { m_useNormalPoseFromAwake = value; }
		return;
	}
}
// UnityEngine.Vector3 WebXR.WebXRCameraSettings::get_NormalLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRCameraSettings_get_NormalLocalPosition_mC80B06B518A558681D95060974296B41EEB6CFD4 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalLocalPosition; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_normalLocalPosition_20;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalLocalPosition_mDFB9B073D4071FC279A5E24804595CC598A3A615 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalLocalPosition = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_normalLocalPosition_20 = L_0;
		// set { m_normalLocalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRCameraSettings::get_NormalLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRCameraSettings_get_NormalLocalRotation_mD378C9D82DB5696C57CA0F3F7B7B26A7740B3576 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_normalLocalRotation; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_normalLocalRotation_21;
		return L_0;
	}
}
// System.Void WebXR.WebXRCameraSettings::set_NormalLocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_set_NormalLocalRotation_mEF5D44FE74A1EF9D833889CAB15797677C7EA847 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_normalLocalRotation = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___m_normalLocalRotation_21 = L_0;
		// set { m_normalLocalRotation = value; }
		return;
	}
}
// System.Void WebXR.WebXRCameraSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_Awake_m5907DB85DB4B4DF98E1A07898E6185C0F56B6F64 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_transform = m_camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___m_camera_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___m_transform_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_transform_5), (void*)L_3);
		// if (m_useNormalFieldOfViewFromAwake)
		bool L_4 = __this->___m_useNormalFieldOfViewFromAwake_16;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// m_normalFieldOfView = m_camera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___m_camera_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_5, NULL);
		__this->___m_normalFieldOfView_17 = L_6;
	}

IL_0039:
	{
		// if (m_useNormalPoseFromAwake)
		bool L_7 = __this->___m_useNormalPoseFromAwake_19;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// m_normalLocalPosition = m_transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_transform_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		__this->___m_normalLocalPosition_20 = L_9;
		// m_normalLocalRotation = m_transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_transform_5;
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		__this->___m_normalLocalRotation_21 = L_11;
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCameraSettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_OnEnable_m2D4ACF5495F0CDFA7CC407C26656A3F3341E28CE (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange += OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9(L_0, NULL);
		// OnXRChange(WebXRManager.Instance.XRState,
		//             WebXRManager.Instance.ViewsCount,
		//             WebXRManager.Instance.ViewsLeftRect,
		//             WebXRManager.Instance.ViewsRightRect);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_1;
		L_1 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0(L_1, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_3;
		L_3 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = WebXRManager_get_ViewsCount_m4D64B42CB060E652B4A1E632A4DF08F5D3976B9A(L_3, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_5;
		L_5 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = WebXRManager_get_ViewsLeftRect_m776BDCC345E580782C47DD70ABFEE9E3A44E13F6(L_5, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_7;
		L_7 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = WebXRManager_get_ViewsRightRect_mDBBE56FE2FFC78D0AF2EEDD4BD1D1B1DA9CDDDBE(L_7, NULL);
		WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862(__this, L_2, L_4, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCameraSettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_OnDisable_m2F4186821044D8322B4BC1D13CC770BAE815BB32 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange -= OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCameraSettings::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings_OnXRChange_m023099C721698CD161842469844730BE87750862 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		int32_t L_2 = ___state0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_00e5;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// m_camera.clearFlags = m_normalClearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___m_camera_4;
		int32_t L_4 = __this->___m_normalClearFlags_6;
		NullCheck(L_3);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_3, L_4, NULL);
		// m_camera.backgroundColor = m_normalBackgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___m_camera_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___m_normalBackgroundColor_7;
		NullCheck(L_5);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_5, L_6, NULL);
		// m_camera.cullingMask = m_normalCullingMask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___m_camera_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___m_normalCullingMask_8;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_8, NULL);
		NullCheck(L_7);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_7, L_9, NULL);
		// if (m_updateNormalFieldOfView)
		bool L_10 = __this->___m_updateNormalFieldOfView_15;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		// m_camera.fieldOfView = m_normalFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___m_camera_4;
		float L_12 = __this->___m_normalFieldOfView_17;
		NullCheck(L_11);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_11, L_12, NULL);
		// m_camera.ResetProjectionMatrix();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___m_camera_4;
		NullCheck(L_13);
		Camera_ResetProjectionMatrix_m6C5F82F7CA38E39DC357A1C53C7DD26791C27AFD(L_13, NULL);
	}

IL_007e:
	{
		// if (m_updateNormalLocalPose)
		bool L_14 = __this->___m_updateNormalLocalPose_18;
		if (!L_14)
		{
			goto IL_011d;
		}
	}
	{
		// m_transform.localPosition = m_normalLocalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___m_transform_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___m_normalLocalPosition_20;
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_16, NULL);
		// m_transform.localRotation = m_normalLocalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___m_transform_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = __this->___m_normalLocalRotation_21;
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_18, NULL);
		// break;
		return;
	}

IL_00ac:
	{
		// m_camera.clearFlags = m_vrClearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___m_camera_4;
		int32_t L_20 = __this->___m_vrClearFlags_9;
		NullCheck(L_19);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_19, L_20, NULL);
		// m_camera.backgroundColor = m_vrBackgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___m_camera_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___m_vrBackgroundColor_10;
		NullCheck(L_21);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_21, L_22, NULL);
		// m_camera.cullingMask = m_vrCullingMask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___m_camera_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_24 = __this->___m_vrCullingMask_11;
		int32_t L_25;
		L_25 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_24, NULL);
		NullCheck(L_23);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_23, L_25, NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// m_camera.clearFlags = m_arClearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___m_camera_4;
		int32_t L_27 = __this->___m_arClearFlags_12;
		NullCheck(L_26);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_26, L_27, NULL);
		// m_camera.backgroundColor = m_arBackgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = __this->___m_camera_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___m_arBackgroundColor_13;
		NullCheck(L_28);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_28, L_29, NULL);
		// m_camera.cullingMask = m_arCullingMask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->___m_camera_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_31 = __this->___m_arCullingMask_14;
		int32_t L_32;
		L_32 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_31, NULL);
		NullCheck(L_30);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_30, L_32, NULL);
	}

IL_011d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCameraSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCameraSettings__ctor_m3F5FFF97C8012D0C7E3F7DB4C9B6A7E6DF062605 (WebXRCameraSettings_t580863DF9895F9894CC148FAFDAA1A77ADB95349* __this, const RuntimeMethod* method) 
{
	{
		// private bool m_updateNormalFieldOfView = true;
		__this->___m_updateNormalFieldOfView_15 = (bool)1;
		// private bool m_useNormalFieldOfViewFromAwake = true;
		__this->___m_useNormalFieldOfViewFromAwake_16 = (bool)1;
		// private float m_normalFieldOfView = 60f;
		__this->___m_normalFieldOfView_17 = (60.0f);
		// private bool m_updateNormalLocalPose = true;
		__this->___m_updateNormalLocalPose_18 = (bool)1;
		// private bool m_useNormalPoseFromAwake = true;
		__this->___m_useNormalPoseFromAwake_19 = (bool)1;
		// private Vector3 m_normalLocalPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_normalLocalPosition_20 = L_0;
		// private Quaternion m_normalLocalRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___m_normalLocalRotation_21 = L_1;
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
// UnityEngine.Vector3 WebXR.WebXRController::get_gripPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CgripPositionU3Ek__BackingField_33;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CgripPositionU3Ek__BackingField_33 = L_0;
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CgripRotationU3Ek__BackingField_34;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CgripRotationU3Ek__BackingField_34 = L_0;
		return;
	}
}
// System.Boolean WebXR.WebXRController::get_isControllerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isControllerActive_m2B524A03FD6EC3E55CB6C45C9A72400F23903093 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return controllerActive;
		bool L_0 = __this->___controllerActive_26;
		return L_0;
	}
}
// System.Boolean WebXR.WebXRController::get_isHandActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isHandActive_m1B8DCF122339E386B1CD57924535DB3A78311BB0 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return handActive;
		bool L_0 = __this->___handActive_27;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Update_m9D99F7A98572B91F96A81E24B7C2086B0CDA52D8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Awake_m6935B5A109559F416427948665E0F392350853F8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// InitButtons();
		WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::InitButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttons = new WebXRControllerButton[6];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = (WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)SZArrayNew(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___buttons_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttons_25), (void*)L_0);
		// buttons[(int)ButtonTypes.Trigger] = new WebXRControllerButton(trigger == 1, triggerTouched, trigger);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_1 = __this->___buttons_25;
		float L_2 = __this->___trigger_9;
		bool L_3 = __this->___triggerTouched_10;
		float L_4 = __this->___trigger_9;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_5, (bool)((((float)L_2) == ((float)(1.0f)))? 1 : 0), L_3, L_4, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_5);
		// buttons[(int)ButtonTypes.Grip] = new WebXRControllerButton(squeeze == 1, squeezeTouched, squeeze);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_6 = __this->___buttons_25;
		float L_7 = __this->___squeeze_11;
		bool L_8 = __this->___squeezeTouched_12;
		float L_9 = __this->___squeeze_11;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_10 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_10, (bool)((((float)L_7) == ((float)(1.0f)))? 1 : 0), L_8, L_9, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_10);
		// buttons[(int)ButtonTypes.Thumbstick] = new WebXRControllerButton(thumbstick == 1, thumbstickTouched, thumbstick);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_11 = __this->___buttons_25;
		float L_12 = __this->___thumbstick_13;
		bool L_13 = __this->___thumbstickTouched_14;
		float L_14 = __this->___thumbstick_13;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_15 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_15, (bool)((((float)L_12) == ((float)(1.0f)))? 1 : 0), L_13, L_14, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_15);
		// buttons[(int)ButtonTypes.Touchpad] = new WebXRControllerButton(touchpad == 1, touchpadTouched, touchpad);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_16 = __this->___buttons_25;
		float L_17 = __this->___touchpad_17;
		bool L_18 = __this->___touchpadTouched_18;
		float L_19 = __this->___touchpad_17;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_20 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_20, (bool)((((float)L_17) == ((float)(1.0f)))? 1 : 0), L_18, L_19, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_20);
		// buttons[(int)ButtonTypes.ButtonA] = new WebXRControllerButton(buttonA == 1, buttonATouched, buttonA);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_21 = __this->___buttons_25;
		float L_22 = __this->___buttonA_21;
		bool L_23 = __this->___buttonATouched_22;
		float L_24 = __this->___buttonA_21;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_25 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_25, (bool)((((float)L_22) == ((float)(1.0f)))? 1 : 0), L_23, L_24, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_25);
		// buttons[(int)ButtonTypes.ButtonB] = new WebXRControllerButton(buttonB == 1, buttonBTouched, buttonB);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_26 = __this->___buttons_25;
		float L_27 = __this->___buttonB_23;
		bool L_28 = __this->___buttonBTouched_24;
		float L_29 = __this->___buttonB_23;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_30 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907(L_30, (bool)((((float)L_27) == ((float)(1.0f)))? 1 : 0), L_28, L_29, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_30);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::UpdateAllButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateAllButtons_mC5A4ED118C678D17F2A57D8DB1131BF005359192 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// buttons[(int)ButtonTypes.Trigger].UpdateState(trigger == 1, triggerTouched, trigger);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		NullCheck(L_0);
		int32_t L_1 = 0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		float L_3 = __this->___trigger_9;
		bool L_4 = __this->___triggerTouched_10;
		float L_5 = __this->___trigger_9;
		NullCheck(L_2);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_2, (bool)((((float)L_3) == ((float)(1.0f)))? 1 : 0), L_4, L_5, NULL);
		// buttons[(int)ButtonTypes.Grip].UpdateState(squeeze == 1, squeezeTouched, squeeze);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_6 = __this->___buttons_25;
		NullCheck(L_6);
		int32_t L_7 = 1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = __this->___squeeze_11;
		bool L_10 = __this->___squeezeTouched_12;
		float L_11 = __this->___squeeze_11;
		NullCheck(L_8);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_8, (bool)((((float)L_9) == ((float)(1.0f)))? 1 : 0), L_10, L_11, NULL);
		// buttons[(int)ButtonTypes.Thumbstick].UpdateState(thumbstick == 1, thumbstickTouched, thumbstick);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_12 = __this->___buttons_25;
		NullCheck(L_12);
		int32_t L_13 = 2;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		float L_15 = __this->___thumbstick_13;
		bool L_16 = __this->___thumbstickTouched_14;
		float L_17 = __this->___thumbstick_13;
		NullCheck(L_14);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_14, (bool)((((float)L_15) == ((float)(1.0f)))? 1 : 0), L_16, L_17, NULL);
		// buttons[(int)ButtonTypes.Touchpad].UpdateState(touchpad == 1, touchpadTouched, touchpad);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_18 = __this->___buttons_25;
		NullCheck(L_18);
		int32_t L_19 = 3;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21 = __this->___touchpad_17;
		bool L_22 = __this->___touchpadTouched_18;
		float L_23 = __this->___touchpad_17;
		NullCheck(L_20);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_20, (bool)((((float)L_21) == ((float)(1.0f)))? 1 : 0), L_22, L_23, NULL);
		// buttons[(int)ButtonTypes.ButtonA].UpdateState(buttonA == 1, buttonATouched, buttonA);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_24 = __this->___buttons_25;
		NullCheck(L_24);
		int32_t L_25 = 4;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		float L_27 = __this->___buttonA_21;
		bool L_28 = __this->___buttonATouched_22;
		float L_29 = __this->___buttonA_21;
		NullCheck(L_26);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_26, (bool)((((float)L_27) == ((float)(1.0f)))? 1 : 0), L_28, L_29, NULL);
		// buttons[(int)ButtonTypes.ButtonB].UpdateState(buttonB == 1, buttonBTouched, buttonB);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_30 = __this->___buttons_25;
		NullCheck(L_30);
		int32_t L_31 = 5;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		float L_33 = __this->___buttonB_23;
		bool L_34 = __this->___buttonBTouched_24;
		float L_35 = __this->___buttonB_23;
		NullCheck(L_32);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_32, (bool)((((float)L_33) == ((float)(1.0f)))? 1 : 0), L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::UpdateHandButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateHandButtons_mD91EAACED38D4E0EDD9E289C5762761FF11BE85A (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// buttons[(int)ButtonTypes.Trigger].UpdateState(trigger == 1, trigger == 1, trigger);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		NullCheck(L_0);
		int32_t L_1 = 0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		float L_3 = __this->___trigger_9;
		float L_4 = __this->___trigger_9;
		float L_5 = __this->___trigger_9;
		NullCheck(L_2);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_2, (bool)((((float)L_3) == ((float)(1.0f)))? 1 : 0), (bool)((((float)L_4) == ((float)(1.0f)))? 1 : 0), L_5, NULL);
		// buttons[(int)ButtonTypes.Grip].UpdateState(squeeze == 1, squeeze == 1, squeeze);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_6 = __this->___buttons_25;
		NullCheck(L_6);
		int32_t L_7 = 1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = __this->___squeeze_11;
		float L_10 = __this->___squeeze_11;
		float L_11 = __this->___squeeze_11;
		NullCheck(L_8);
		WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B(L_8, (bool)((((float)L_9) == ((float)(1.0f)))? 1 : 0), (bool)((((float)L_10) == ((float)(1.0f)))? 1 : 0), L_11, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::ResetAllButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_ResetAllButtons_m3BC88A85179B8E06207A8ABC3CB353617C233AD9 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B2_0 = NULL;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// trigger = 0;
		__this->___trigger_9 = (0.0f);
		// triggerTouched = false;
		__this->___triggerTouched_10 = (bool)0;
		// squeeze = 0;
		__this->___squeeze_11 = (0.0f);
		// squeezeTouched = false;
		__this->___squeezeTouched_12 = (bool)0;
		// thumbstick = 0;
		__this->___thumbstick_13 = (0.0f);
		// thumbstickTouched = false;
		__this->___thumbstickTouched_14 = (bool)0;
		// thumbstickX = 0;
		__this->___thumbstickX_15 = (0.0f);
		// thumbstickY = 0;
		__this->___thumbstickY_16 = (0.0f);
		// touchpad = 0;
		__this->___touchpad_17 = (0.0f);
		// touchpadTouched = false;
		__this->___touchpadTouched_18 = (bool)0;
		// touchpadX = 0;
		__this->___touchpadX_19 = (0.0f);
		// touchpadY = 0;
		__this->___touchpadY_20 = (0.0f);
		// buttonA = 0;
		__this->___buttonA_21 = (0.0f);
		// buttonATouched = false;
		__this->___buttonATouched_22 = (bool)0;
		// buttonB = 0;
		__this->___buttonB_23 = (0.0f);
		// buttonBTouched = false;
		__this->___buttonBTouched_24 = (bool)0;
		// if (buttons?.Length == 6)
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_00a5;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_00aa;
	}

IL_00a5:
	{
		NullCheck(G_B2_0);
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)G_B2_0)->max_length))) == ((int32_t)6))? 1 : 0);
	}

IL_00aa:
	{
		if (!G_B3_0)
		{
			goto IL_00b2;
		}
	}
	{
		// UpdateAllButtons();
		WebXRController_UpdateAllButtons_mC5A4ED118C678D17F2A57D8DB1131BF005359192(__this, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B19_0 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B20_1 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B24_0 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B23_0 = NULL;
	int32_t G_B25_0 = 0;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B25_1 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B29_0 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B30_1 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B34_0 = NULL;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B33_0 = NULL;
	int32_t G_B35_0 = 0;
	WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* G_B35_1 = NULL;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B46_0 = NULL;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B45_0 = NULL;
	int32_t G_B47_0 = 0;
	{
		// if (buttonsFrameUpdate == Time.frameCount)
		int32_t L_0 = __this->___buttonsFrameUpdate_38;
		int32_t L_1;
		L_1 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// buttonsFrameUpdate = Time.frameCount;
		int32_t L_2;
		L_2 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		__this->___buttonsFrameUpdate_38 = L_2;
		// if (!WebXRManager.Instance.isSubsystemAvailable && inputDevice != null)
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_3;
		L_3 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70(L_3, SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_02ee;
		}
	}
	{
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_5 = (&__this->___inputDevice_36);
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_inline(L_5, Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_02ee;
		}
	}
	{
		// inputDevice.Value.TryGetFeatureValue(CommonUsages.trigger, out trigger);
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_7 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8;
		L_8 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_7, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_8;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_9 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		float* L_10 = (&__this->___trigger_9);
		bool L_11;
		L_11 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&V_2), L_9, L_10, NULL);
		// inputDevice.Value.TryGetFeatureValue(CommonUsages.grip, out squeeze);
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_12 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_13;
		L_13 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_12, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_13;
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_14 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		float* L_15 = (&__this->___squeeze_11);
		bool L_16;
		L_16 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&V_2), L_14, L_15, NULL);
		// if (trigger <= 0.02)
		float L_17 = __this->___trigger_9;
		if ((!(((double)((double)L_17)) <= ((double)(0.02)))))
		{
			goto IL_0095;
		}
	}
	{
		// trigger = 0;
		__this->___trigger_9 = (0.0f);
		goto IL_00b2;
	}

IL_0095:
	{
		// else if (trigger >= 0.98)
		float L_18 = __this->___trigger_9;
		if ((!(((double)((double)L_18)) >= ((double)(0.97999999999999998)))))
		{
			goto IL_00b2;
		}
	}
	{
		// trigger = 1;
		__this->___trigger_9 = (1.0f);
	}

IL_00b2:
	{
		// if (squeeze <= 0.02)
		float L_19 = __this->___squeeze_11;
		if ((!(((double)((double)L_19)) <= ((double)(0.02)))))
		{
			goto IL_00d1;
		}
	}
	{
		// squeeze = 0;
		__this->___squeeze_11 = (0.0f);
		goto IL_00ee;
	}

IL_00d1:
	{
		// else if (squeeze >= 0.98)
		float L_20 = __this->___squeeze_11;
		if ((!(((double)((double)L_20)) >= ((double)(0.97999999999999998)))))
		{
			goto IL_00ee;
		}
	}
	{
		// squeeze = 1;
		__this->___squeeze_11 = (1.0f);
	}

IL_00ee:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.primary2DAxis, out axis2D))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_21 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_22;
		L_22 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_21, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_22;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_23 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17;
		bool L_24;
		L_24 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&V_2), L_23, (&V_0), NULL);
		if (!L_24)
		{
			goto IL_0122;
		}
	}
	{
		// thumbstickX = axis2D.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___x_0;
		__this->___thumbstickX_15 = L_26;
		// thumbstickY = axis2D.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		__this->___thumbstickY_16 = L_28;
	}

IL_0122:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.secondary2DAxis, out axis2D))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_29 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_30;
		L_30 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_29, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_30;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_31 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxis_18;
		bool L_32;
		L_32 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&V_2), L_31, (&V_0), NULL);
		if (!L_32)
		{
			goto IL_0156;
		}
	}
	{
		// touchpadX = axis2D.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		float L_34 = L_33.___x_0;
		__this->___touchpadX_19 = L_34;
		// touchpadY = axis2D.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		float L_36 = L_35.___y_1;
		__this->___touchpadY_20 = L_36;
	}

IL_0156:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.primary2DAxisClick, out buttonPressed))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_37 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_38;
		L_38 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_37, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_38;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_39 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisClick_8;
		bool L_40;
		L_40 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_39, (&V_1), NULL);
		if (!L_40)
		{
			goto IL_0180;
		}
	}
	{
		// thumbstick = buttonPressed ? 1 : 0;
		bool L_41 = V_1;
		G_B18_0 = __this;
		if (L_41)
		{
			G_B19_0 = __this;
			goto IL_0179;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		goto IL_017a;
	}

IL_0179:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
	}

IL_017a:
	{
		NullCheck(G_B20_1);
		G_B20_1->___thumbstick_13 = ((float)G_B20_0);
	}

IL_0180:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.secondary2DAxisClick, out buttonPressed))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_42 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_43;
		L_43 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_42, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_43;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_44 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisClick_10;
		bool L_45;
		L_45 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_44, (&V_1), NULL);
		if (!L_45)
		{
			goto IL_01aa;
		}
	}
	{
		// touchpad = buttonPressed ? 1 : 0;
		bool L_46 = V_1;
		G_B23_0 = __this;
		if (L_46)
		{
			G_B24_0 = __this;
			goto IL_01a3;
		}
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_0;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B25_0 = 1;
		G_B25_1 = G_B24_0;
	}

IL_01a4:
	{
		NullCheck(G_B25_1);
		G_B25_1->___touchpad_17 = ((float)G_B25_0);
	}

IL_01aa:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.primaryButton, out buttonPressed))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_47 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_48;
		L_48 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_47, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_48;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_49 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryButton_1;
		bool L_50;
		L_50 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_49, (&V_1), NULL);
		if (!L_50)
		{
			goto IL_01d4;
		}
	}
	{
		// buttonA = buttonPressed ? 1 : 0;
		bool L_51 = V_1;
		G_B28_0 = __this;
		if (L_51)
		{
			G_B29_0 = __this;
			goto IL_01cd;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_01ce;
	}

IL_01cd:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
	}

IL_01ce:
	{
		NullCheck(G_B30_1);
		G_B30_1->___buttonA_21 = ((float)G_B30_0);
	}

IL_01d4:
	{
		// if (inputDevice.Value.TryGetFeatureValue(CommonUsages.secondaryButton, out buttonPressed))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_52 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_53;
		L_53 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_52, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_53;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_54 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryButton_3;
		bool L_55;
		L_55 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_54, (&V_1), NULL);
		if (!L_55)
		{
			goto IL_01fe;
		}
	}
	{
		// buttonB = buttonPressed ? 1 : 0;
		bool L_56 = V_1;
		G_B33_0 = __this;
		if (L_56)
		{
			G_B34_0 = __this;
			goto IL_01f7;
		}
	}
	{
		G_B35_0 = 0;
		G_B35_1 = G_B33_0;
		goto IL_01f8;
	}

IL_01f7:
	{
		G_B35_0 = 1;
		G_B35_1 = G_B34_0;
	}

IL_01f8:
	{
		NullCheck(G_B35_1);
		G_B35_1->___buttonB_23 = ((float)G_B35_0);
	}

IL_01fe:
	{
		// if (!inputDevice.Value.TryGetFeatureValue(CommonUsages.primaryTouch, out buttonATouched))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_57 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_58;
		L_58 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_57, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_58;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_59 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primaryTouch_2;
		bool* L_60 = (&__this->___buttonATouched_22);
		bool L_61;
		L_61 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_0231;
		}
	}
	{
		// buttonATouched = buttonA > 0;
		float L_62 = __this->___buttonA_21;
		__this->___buttonATouched_22 = (bool)((((float)L_62) > ((float)(0.0f)))? 1 : 0);
	}

IL_0231:
	{
		// if (!inputDevice.Value.TryGetFeatureValue(CommonUsages.secondaryTouch, out buttonBTouched))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_63 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_64;
		L_64 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_63, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_64;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_65 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondaryTouch_4;
		bool* L_66 = (&__this->___buttonBTouched_24);
		bool L_67;
		L_67 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_65, L_66, NULL);
		if (L_67)
		{
			goto IL_0264;
		}
	}
	{
		// buttonBTouched = buttonB > 0;
		float L_68 = __this->___buttonB_23;
		__this->___buttonBTouched_24 = (bool)((((float)L_68) > ((float)(0.0f)))? 1 : 0);
	}

IL_0264:
	{
		// if (!inputDevice.Value.TryGetFeatureValue(CommonUsages.primary2DAxisTouch, out thumbstickTouched))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_69 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_70;
		L_70 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_69, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_70;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_71 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxisTouch_9;
		bool* L_72 = (&__this->___thumbstickTouched_14);
		bool L_73;
		L_73 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			goto IL_0297;
		}
	}
	{
		// thumbstickTouched = thumbstick > 0;
		float L_74 = __this->___thumbstick_13;
		__this->___thumbstickTouched_14 = (bool)((((float)L_74) > ((float)(0.0f)))? 1 : 0);
	}

IL_0297:
	{
		// if (!inputDevice.Value.TryGetFeatureValue(CommonUsages.secondary2DAxisTouch, out touchpadTouched))
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_75 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_76;
		L_76 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_75, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_2 = L_76;
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_77 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxisTouch_11;
		bool* L_78 = (&__this->___touchpadTouched_18);
		bool L_79;
		L_79 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884((&V_2), L_77, L_78, NULL);
		if (L_79)
		{
			goto IL_02ca;
		}
	}
	{
		// touchpadTouched = touchpad > 0;
		float L_80 = __this->___touchpad_17;
		__this->___touchpadTouched_18 = (bool)((((float)L_80) > ((float)(0.0f)))? 1 : 0);
	}

IL_02ca:
	{
		// if (buttons?.Length != 6)
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_81 = __this->___buttons_25;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_82 = L_81;
		G_B45_0 = L_82;
		if (L_82)
		{
			G_B46_0 = L_82;
			goto IL_02d7;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_02df;
	}

IL_02d7:
	{
		NullCheck(G_B46_0);
		G_B47_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)G_B46_0)->max_length))) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_02df:
	{
		if (!G_B47_0)
		{
			goto IL_02e8;
		}
	}
	{
		// InitButtons();
		WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164(__this, NULL);
		return;
	}

IL_02e8:
	{
		// UpdateAllButtons();
		WebXRController_UpdateAllButtons_mC5A4ED118C678D17F2A57D8DB1131BF005359192(__this, NULL);
	}

IL_02ee:
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRController::GetAxis(WebXR.WebXRController/AxisTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxis_m3217D53915071DCF73F9595C6CD8B76E491D41D7 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___axisType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___axisType0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___axisType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// return squeeze;
		float L_2 = __this->___squeeze_11;
		return L_2;
	}

IL_0014:
	{
		// return trigger;
		float L_3 = __this->___trigger_9;
		return L_3;
	}

IL_001b:
	{
		// return 0;
		return (0.0f);
	}
}
// UnityEngine.Vector2 WebXR.WebXRController::GetAxis2D(WebXR.WebXRController/Axis2DTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WebXRController_GetAxis2D_m46156F5A6BE9647DAAB69C2A4FB94ECA98651A1F (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___axisType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___axisType0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___axisType0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0033;
	}

IL_000f:
	{
		// return new Vector2(thumbstickX, thumbstickY);
		float L_2 = __this->___thumbstickX_15;
		float L_3 = __this->___thumbstickY_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0021:
	{
		// return new Vector2(touchpadX, touchpadY);
		float L_5 = __this->___touchpadX_19;
		float L_6 = __this->___touchpadY_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_8;
	}
}
// System.Boolean WebXR.WebXRController::GetButton(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___buttonType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// return buttons[(int)buttonType].pressed;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		int32_t L_1 = ___buttonType0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___pressed_0;
		return L_4;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonDown(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonDown_m9CA9D2F940B683105A181D410A8859DEF2FF8342 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___buttonType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// return buttons[(int)buttonType].down;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		int32_t L_1 = ___buttonType0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___down_2;
		return L_4;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonUp(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonUp_m1CD79E4202AB0AF53B22365BE3D94D2E1D339104 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___buttonType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// return buttons[(int)buttonType].up;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		int32_t L_1 = ___buttonType0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___up_3;
		return L_4;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonTouched(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonTouched_m4091BD4ED2CD1268FF2C780601C06D67ECDA8BF6 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___buttonType0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// return buttons[(int)buttonType].touched;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = __this->___buttons_25;
		int32_t L_1 = ___buttonType0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___touched_1;
		return L_4;
	}
}
// System.Single WebXR.WebXRController::GetButtonIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetButtonIndexValue_mB07E128AF864D84E948480D0FADE9FD20FC33974 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		// return trigger;
		float L_1 = __this->___trigger_9;
		return L_1;
	}

IL_002d:
	{
		// return squeeze;
		float L_2 = __this->___squeeze_11;
		return L_2;
	}

IL_0034:
	{
		// return touchpad;
		float L_3 = __this->___touchpad_17;
		return L_3;
	}

IL_003b:
	{
		// return thumbstick;
		float L_4 = __this->___thumbstick_13;
		return L_4;
	}

IL_0042:
	{
		// return buttonA;
		float L_5 = __this->___buttonA_21;
		return L_5;
	}

IL_0049:
	{
		// return buttonB;
		float L_6 = __this->___buttonB_23;
		return L_6;
	}

IL_0050:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single WebXR.WebXRController::GetAxisIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxisIndexValue_mAE73627A062D6F6AF1498394EB7D910DD3F47AB2 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001e:
	{
		// return touchpadX;
		float L_1 = __this->___touchpadX_19;
		return L_1;
	}

IL_0025:
	{
		// return touchpadY;
		float L_2 = __this->___touchpadY_20;
		return L_2;
	}

IL_002c:
	{
		// return thumbstickX;
		float L_3 = __this->___thumbstickX_15;
		return L_3;
	}

IL_0033:
	{
		// return thumbstickY;
		float L_4 = __this->___thumbstickY_16;
		return L_4;
	}

IL_003a:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void WebXR.WebXRController::SetAlwaysUseGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetAlwaysUseGrip_m4ABD6EF29D956CA7D3813A823FCC37A2D95E04B1 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___value0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// alwaysUseGrip = value;
		bool L_0 = ___value0;
		__this->___alwaysUseGrip_32 = L_0;
		// OnAlwaysUseGripChanged?.Invoke(alwaysUseGrip);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = __this->___OnAlwaysUseGripChanged_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_3 = __this->___alwaysUseGrip_32;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetAlwaysUseGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetAlwaysUseGrip_m56EBE46621F47C6E389ABE57E826CBFAA86AFBE6 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return alwaysUseGrip;
		bool L_0 = __this->___alwaysUseGrip_32;
		return L_0;
	}
}
// System.String[] WebXR.WebXRController::GetProfiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* WebXRController_GetProfiles_m0264AF7AFA8B8BABE5F2B3A9C51CD3A91D0BB87A (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return profiles;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___profiles_28;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::OnControllerUpdate(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B14_0 = NULL;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	{
		// if (controllerData.hand == (int)hand)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = ___controllerData0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___hand_2;
		int32_t L_2 = __this->___hand_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_01b4;
		}
	}
	{
		// if (!controllerData.enabled)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_3 = ___controllerData0;
		NullCheck(L_3);
		bool L_4 = L_3->___enabled_1;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)0, (bool)0, NULL);
		// return;
		return;
	}

IL_0022:
	{
		// bool profilesUpdated = false;
		V_0 = (bool)0;
		// if (profiles != controllerData.profiles)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___profiles_28;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_6 = ___controllerData0;
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6->___profiles_23;
		if ((((RuntimeObject*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_5) == ((RuntimeObject*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		// profiles = controllerData.profiles;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_8 = ___controllerData0;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8->___profiles_23;
		__this->___profiles_28 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profiles_28), (void*)L_9);
		// profilesUpdated = true;
		V_0 = (bool)1;
	}

IL_0040:
	{
		// if (oculusLinkBugTest != 1)
		int32_t L_10 = __this->___oculusLinkBugTest_29;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		// gripRotation = controllerData.gripRotation;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_11 = ___controllerData0;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11->___gripRotation_6;
		WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline(__this, L_12, NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_13 = ___controllerData0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___gripPosition_5;
		WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline(__this, L_14, NULL);
		// if (alwaysUseGrip)
		bool L_15 = __this->___alwaysUseGrip_32;
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// transform.localRotation = gripRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline(__this, NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_17, NULL);
		// transform.localPosition = gripPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392_inline(__this, NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
		goto IL_00af;
	}

IL_008d:
	{
		// transform.localRotation = controllerData.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_21 = ___controllerData0;
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = L_21->___rotation_4;
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_22, NULL);
		// transform.localPosition = controllerData.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_24 = ___controllerData0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___position_3;
		NullCheck(L_23);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_25, NULL);
	}

IL_00af:
	{
		// if (CheckOculusLinkBug())
		bool L_26;
		L_26 = WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB(__this, NULL);
		if (!L_26)
		{
			goto IL_00c7;
		}
	}
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_27 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883(__this, L_27, NULL);
		goto IL_00c7;
	}

IL_00c0:
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_28 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883(__this, L_28, NULL);
	}

IL_00c7:
	{
		// trigger = controllerData.trigger;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_29 = ___controllerData0;
		NullCheck(L_29);
		float L_30 = L_29->___trigger_7;
		__this->___trigger_9 = L_30;
		// triggerTouched = controllerData.triggerTouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_31 = ___controllerData0;
		NullCheck(L_31);
		bool L_32 = L_31->___triggerTouched_8;
		__this->___triggerTouched_10 = L_32;
		// squeeze = controllerData.squeeze;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_33 = ___controllerData0;
		NullCheck(L_33);
		float L_34 = L_33->___squeeze_9;
		__this->___squeeze_11 = L_34;
		// squeezeTouched = controllerData.squeezeTouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_35 = ___controllerData0;
		NullCheck(L_35);
		bool L_36 = L_35->___squeezeTouched_10;
		__this->___squeezeTouched_12 = L_36;
		// thumbstick = controllerData.thumbstick;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_37 = ___controllerData0;
		NullCheck(L_37);
		float L_38 = L_37->___thumbstick_11;
		__this->___thumbstick_13 = L_38;
		// thumbstickTouched = controllerData.thumbstickTouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_39 = ___controllerData0;
		NullCheck(L_39);
		bool L_40 = L_39->___thumbstickTouched_12;
		__this->___thumbstickTouched_14 = L_40;
		// thumbstickX = controllerData.thumbstickX;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_41 = ___controllerData0;
		NullCheck(L_41);
		float L_42 = L_41->___thumbstickX_13;
		__this->___thumbstickX_15 = L_42;
		// thumbstickY = controllerData.thumbstickY;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_43 = ___controllerData0;
		NullCheck(L_43);
		float L_44 = L_43->___thumbstickY_14;
		__this->___thumbstickY_16 = L_44;
		// touchpad = controllerData.touchpad;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_45 = ___controllerData0;
		NullCheck(L_45);
		float L_46 = L_45->___touchpad_15;
		__this->___touchpad_17 = L_46;
		// touchpadTouched = controllerData.touchpadTouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_47 = ___controllerData0;
		NullCheck(L_47);
		bool L_48 = L_47->___touchpadTouched_16;
		__this->___touchpadTouched_18 = L_48;
		// touchpadX = controllerData.touchpadX;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_49 = ___controllerData0;
		NullCheck(L_49);
		float L_50 = L_49->___touchpadX_17;
		__this->___touchpadX_19 = L_50;
		// touchpadY = controllerData.touchpadY;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_51 = ___controllerData0;
		NullCheck(L_51);
		float L_52 = L_51->___touchpadY_18;
		__this->___touchpadY_20 = L_52;
		// buttonA = controllerData.buttonA;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_53 = ___controllerData0;
		NullCheck(L_53);
		float L_54 = L_53->___buttonA_19;
		__this->___buttonA_21 = L_54;
		// buttonATouched = controllerData.buttonATouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_55 = ___controllerData0;
		NullCheck(L_55);
		bool L_56 = L_55->___buttonATouched_20;
		__this->___buttonATouched_22 = L_56;
		// buttonB = controllerData.buttonB;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_57 = ___controllerData0;
		NullCheck(L_57);
		float L_58 = L_57->___buttonB_21;
		__this->___buttonB_23 = L_58;
		// buttonBTouched = controllerData.buttonBTouched;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_59 = ___controllerData0;
		NullCheck(L_59);
		bool L_60 = L_59->___buttonBTouched_22;
		__this->___buttonBTouched_24 = L_60;
		// if (buttons?.Length != 6)
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_61 = __this->___buttons_25;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_62 = L_61;
		G_B13_0 = L_62;
		if (L_62)
		{
			G_B14_0 = L_62;
			goto IL_0194;
		}
	}
	{
		G_B15_0 = 1;
		goto IL_019c;
	}

IL_0194:
	{
		NullCheck(G_B14_0);
		G_B15_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)G_B14_0)->max_length))) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_019c:
	{
		if (!G_B15_0)
		{
			goto IL_01a6;
		}
	}
	{
		// InitButtons();
		WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164(__this, NULL);
		goto IL_01ac;
	}

IL_01a6:
	{
		// UpdateAllButtons();
		WebXRController_UpdateAllButtons_mC5A4ED118C678D17F2A57D8DB1131BF005359192(__this, NULL);
	}

IL_01ac:
	{
		// SetControllerActive(true, profilesUpdated);
		bool L_63 = V_0;
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)1, L_63, NULL);
	}

IL_01b4:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	{
		// gripRotation = controllerData.gripRotation * oculusOffsetGrip;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = ___controllerData0;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0->___gripRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___oculusOffsetGrip_31;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_2, NULL);
		WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline(__this, L_3, NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_4 = ___controllerData0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___gripPosition_5;
		WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline(__this, L_5, NULL);
		// if (alwaysUseGrip)
		bool L_6 = __this->___alwaysUseGrip_32;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// transform.localRotation = gripRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline(__this, NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_8, NULL);
		// transform.localPosition = gripPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392_inline(__this, NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		return;
	}

IL_004e:
	{
		// transform.localRotation = controllerData.rotation * oculusOffsetRay;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_12 = ___controllerData0;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___rotation_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___oculusOffsetRay_30;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_13, L_14, NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_15, NULL);
		// transform.localPosition = controllerData.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_17 = ___controllerData0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___position_3;
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oculusLinkBugTest == 0
		//     && profiles != null && profiles.Length > 0)
		int32_t L_0 = __this->___oculusLinkBugTest_29;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___profiles_28;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___profiles_28;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_004f;
		}
	}
	{
		// if (profiles[0] == "oculus-touch" && gripRotation.x > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___profiles_28;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline(__this, NULL);
		float L_8 = L_7.___x_0;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// oculusLinkBugTest = 1;
		__this->___oculusLinkBugTest_29 = 1;
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// oculusLinkBugTest = 2;
		__this->___oculusLinkBugTest_29 = 2;
	}

IL_004f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void WebXR.WebXRController::OnHandUpdateInternal(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B5_0 = NULL;
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* G_B11_0 = NULL;
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* G_B10_0 = NULL;
	{
		// if (handData.hand == (int)hand)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_0 = ___handData0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___hand_2;
		int32_t L_2 = __this->___hand_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_00b6;
		}
	}
	{
		// if (!handData.enabled)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_3 = ___handData0;
		NullCheck(L_3);
		bool L_4 = L_3->___enabled_1;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)0, (bool)0, NULL);
		// SetHandActive(true);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)1, NULL);
		// transform.localPosition = handData.joints[0].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_6 = ___handData0;
		NullCheck(L_6);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_7 = L_6->___joints_7;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_8, NULL);
		// transform.localRotation = handData.joints[0].rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_10 = ___handData0;
		NullCheck(L_10);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_11 = L_10->___joints_7;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___rotation_1;
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_12, NULL);
		// trigger = handData.trigger;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_13 = ___handData0;
		NullCheck(L_13);
		float L_14 = L_13->___trigger_3;
		__this->___trigger_9 = L_14;
		// squeeze = handData.squeeze;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_15 = ___handData0;
		NullCheck(L_15);
		float L_16 = L_15->___squeeze_4;
		__this->___squeeze_11 = L_16;
		// if (buttons?.Length != 6)
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_17 = __this->___buttons_25;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_18 = L_17;
		G_B4_0 = L_18;
		if (L_18)
		{
			G_B5_0 = L_18;
			goto IL_008d;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_0095;
	}

IL_008d:
	{
		NullCheck(G_B5_0);
		G_B6_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)G_B5_0)->max_length))) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0095:
	{
		if (!G_B6_0)
		{
			goto IL_009f;
		}
	}
	{
		// InitButtons();
		WebXRController_InitButtons_mD51A970158BB96E0FBD3D94C419DDD6ADD861164(__this, NULL);
		goto IL_00a5;
	}

IL_009f:
	{
		// UpdateHandButtons();
		WebXRController_UpdateHandButtons_mD91EAACED38D4E0EDD9E289C5762761FF11BE85A(__this, NULL);
	}

IL_00a5:
	{
		// OnHandUpdate?.Invoke(handData);
		Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* L_19 = __this->___OnHandUpdate_6;
		Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* L_20 = L_19;
		G_B10_0 = L_20;
		if (L_20)
		{
			G_B11_0 = L_20;
			goto IL_00b0;
		}
	}
	{
		return;
	}

IL_00b0:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_21 = ___handData0;
		NullCheck(G_B11_0);
		Action_1_Invoke_mE1A8D48E62126CE7EBD8C6BD65BFF6B81381F02A_inline(G_B11_0, L_21, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, bool ___forceReport1, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B4_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B3_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B10_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B9_0 = NULL;
	{
		// if (controllerActive == active)
		bool L_0 = __this->___controllerActive_26;
		bool L_1 = ___active0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		// if (forceReport)
		bool L_2 = ___forceReport1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// OnControllerActive?.Invoke(controllerActive);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = __this->___OnControllerActive_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		bool L_5 = __this->___controllerActive_26;
		NullCheck(G_B4_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B4_0, L_5, NULL);
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// if (!active)
		bool L_6 = ___active0;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// ResetAllButtons();
		WebXRController_ResetAllButtons_m3BC88A85179B8E06207A8ABC3CB353617C233AD9(__this, NULL);
	}

IL_002c:
	{
		// controllerActive = active;
		bool L_7 = ___active0;
		__this->___controllerActive_26 = L_7;
		// OnControllerActive?.Invoke(controllerActive);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = __this->___OnControllerActive_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = L_8;
		G_B9_0 = L_9;
		if (L_9)
		{
			G_B10_0 = L_9;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		bool L_10 = __this->___controllerActive_26;
		NullCheck(G_B10_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B10_0, L_10, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B6_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B5_0 = NULL;
	{
		// if (handActive == active)
		bool L_0 = __this->___handActive_27;
		bool L_1 = ___active0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (!active)
		bool L_2 = ___active0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// ResetAllButtons();
		WebXRController_ResetAllButtons_m3BC88A85179B8E06207A8ABC3CB353617C233AD9(__this, NULL);
	}

IL_0013:
	{
		// handActive = active;
		bool L_3 = ___active0;
		__this->___handActive_27 = L_3;
		// OnHandActive?.Invoke(handActive);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = __this->___OnHandActive_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		bool L_6 = __this->___handActive_27;
		NullCheck(G_B6_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B6_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Pulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Pulse_mB0F259282CEC935629F1161F930D7427562F143B (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, float ___intensity0, float ___durationMilliseconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (WebXRManager.Instance.isSubsystemAvailable)
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70(L_0, SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// WebXRManager.Instance.HapticPulse(hand, intensity, durationMilliseconds);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		int32_t L_3 = __this->___hand_8;
		float L_4 = ___intensity0;
		float L_5 = ___durationMilliseconds1;
		NullCheck(L_2);
		WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A(L_2, L_3, L_4, L_5, NULL);
		return;
	}

IL_001f:
	{
		// else if (inputDevice != null && hapticCapabilities != null
		//          && hapticCapabilities.Value.supportsImpulse)
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_6 = (&__this->___inputDevice_36);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_inline(L_6, Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* L_8 = (&__this->___hapticCapabilities_37);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_inline(L_8, Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* L_10 = (&__this->___hapticCapabilities_37);
		HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 L_11;
		L_11 = Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2(L_10, Nullable_1_get_Value_mFF46461495EAA3EA3871F7A84500D4665D3A4FE2_RuntimeMethod_var);
		V_0 = L_11;
		bool L_12;
		L_12 = HapticCapabilities_get_supportsImpulse_m855193672304BD935913E215B690B14952E0C59C((&V_0), NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// inputDevice.Value.SendHapticImpulse(0, intensity, durationMilliseconds * 0.001f);
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_13 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_14;
		L_14 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_13, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		V_1 = L_14;
		float L_15 = ___intensity0;
		float L_16 = ___durationMilliseconds1;
		bool L_17;
		L_17 = InputDevice_SendHapticImpulse_m7166A784508F8E0F3AE5BD88863171C7A905BC1B((&V_1), 0, L_15, ((float)il2cpp_codegen_multiply(L_16, (0.00100000005f))), NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnEnable_mE34A789D462CBE4206D35FBA516A7A8F01C1751C (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// WebXRManager.OnControllerUpdate += OnControllerUpdate;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)il2cpp_codegen_object_new(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC(L_0, __this, (intptr_t)((void*)WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74(L_0, NULL);
		// WebXRManager.OnHandUpdate += OnHandUpdateInternal;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)il2cpp_codegen_object_new(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46(L_1, __this, (intptr_t)((void*)WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F(L_1, NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)0, (bool)0, NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// switch (hand)
		int32_t L_2 = __this->___hand_8;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// xrHand = InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Left;
		__this->___xrHand_35 = ((int32_t)320);
		// break;
		goto IL_005a;
	}

IL_004f:
	{
		// xrHand = InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Right;
		__this->___xrHand_35 = ((int32_t)576);
	}

IL_005a:
	{
		// List<InputDevice> allDevices = new List<InputDevice>();
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_5 = (List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE*)il2cpp_codegen_object_new(List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4(L_5, List_1__ctor_mF7ACC153F11A3260DAACDCA56B0A70A4BFA61EA4_RuntimeMethod_var);
		V_0 = L_5;
		// InputDevices.GetDevicesWithCharacteristics(xrHand, allDevices);
		uint32_t L_6 = __this->___xrHand_35;
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_7 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m2F1785592FF66FB69D72FFE1C1B821D4BD64094A(L_6, L_7, NULL);
		// foreach (InputDevice device in allDevices)
		List_1_tB66D13E0427CA48C600AEA4DBA5B173C3734C6CE* L_8 = V_0;
		NullCheck(L_8);
		Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01 L_9;
		L_9 = List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6(L_8, List_1_GetEnumerator_m099EE1B978423A69DAE032836B6FC9A39F7D1EE6_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC((&V_2), Enumerator_Dispose_m7B899035F29D732606CA6BA2253BEBD41BECD3DC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0084_1;
			}

IL_0075_1:
			{
				// foreach (InputDevice device in allDevices)
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_10;
				L_10 = Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_inline((&V_2), Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_RuntimeMethod_var);
				V_3 = L_10;
				// HandleInputDevicesConnected(device);
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_11 = V_3;
				WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7(__this, L_11, NULL);
			}

IL_0084_1:
			{
				// foreach (InputDevice device in allDevices)
				bool L_12;
				L_12 = Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E((&V_2), Enumerator_MoveNext_m5267F7AD322ED3F12B552EC1C62F059932803E2E_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0075_1;
				}
			}
			{
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		// InputDevices.deviceConnected += HandleInputDevicesConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_13 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_13, __this, (intptr_t)((void*)WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7_RuntimeMethod_var), NULL);
		InputDevices_add_deviceConnected_m78FF855F70C572E7B9BFD5A591E2C5B023AB8728(L_13, NULL);
		// InputDevices.deviceDisconnected += HandleInputDevicesDisconnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_14 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_14, __this, (intptr_t)((void*)WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22_RuntimeMethod_var), NULL);
		InputDevices_add_deviceDisconnected_m0E0638AF16C20B6408FD51EDF3F7F2914E81D7A9(L_14, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnDisable_m7F65B6B74D51C65D9EB69954B2760643FC5A1866 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnControllerUpdate -= OnControllerUpdate;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)il2cpp_codegen_object_new(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC(L_0, __this, (intptr_t)((void*)WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76(L_0, NULL);
		// WebXRManager.OnHandUpdate -= OnHandUpdateInternal;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)il2cpp_codegen_object_new(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46(L_1, __this, (intptr_t)((void*)WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77(L_1, NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)0, (bool)0, NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// InputDevices.deviceConnected -= HandleInputDevicesConnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_2 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_2, __this, (intptr_t)((void*)WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7_RuntimeMethod_var), NULL);
		InputDevices_remove_deviceConnected_m84A034DA67396DB4D3F2F7A97DC4C5EBBF764058(L_2, NULL);
		// InputDevices.deviceDisconnected -= HandleInputDevicesDisconnected;
		Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC* L_3 = (Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC*)il2cpp_codegen_object_new(Action_1_tFAB0B519749BBE2B7AAD946105FAE8116636A8BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m9EFC6656FE579E4D72FFCA991DE5860FA28DD71E(L_3, __this, (intptr_t)((void*)WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22_RuntimeMethod_var), NULL);
		InputDevices_remove_deviceDisconnected_mCFBEFB32ADFCB3CEB8D9494BBDC892E489B08DD9(L_3, NULL);
		// inputDevice = null;
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_4 = (&__this->___inputDevice_36);
		il2cpp_codegen_initobj(L_4, sizeof(Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4));
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::HandleInputDevicesConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleInputDevicesConnected_m949FC67440EA115CA8C15C7592E697D412AF11A7 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BADD7DA265EB41AC0C14851A8E7EE7D3996C32D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C41CB6455D03CBFB86E06BEF80923BFE07AE143);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD664D0384A7D47BEB2B72D767FA586B92A01A47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFE450D79ADC88CEC83ED7D761462A3E3D5AADCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD104C1E530141613EE1B0764177D07778AD57EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0C84D82AA9022140F5CC812D29F26D2CF4154D);
		s_Il2CppMethodInitialized = true;
	}
	HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	bool V_2 = false;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (device.characteristics.HasFlag(xrHand))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mEEDC9AB2254C155C47B48848FECF347A87925ADB((&___device0), NULL);
		uint32_t L_1 = L_0;
		uint32_t L_2 = __this->___xrHand_35;
		uint32_t L_3 = L_2;
		bool L_4 = il2cpp_codegen_enum_has_flag(L_1, L_3);
		if (!L_4)
		{
			goto IL_0105;
		}
	}
	{
		// inputDevice = device;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5 = ___device0;
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m7321607B117160CCD257FDC503072D8678FD3E21_RuntimeMethod_var);
		__this->___inputDevice_36 = L_6;
		// if (device.TryGetHapticCapabilities(out capabilities))
		bool L_7;
		L_7 = InputDevice_TryGetHapticCapabilities_mC97EE9A231941988E8B6FA8AF0CB310EFE1B77A3((&___device0), (&V_0), NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// hapticCapabilities = capabilities;
		HapticCapabilities_t4F7DFEDA7457938D39B877F6A86901F7A6788211 L_8 = V_0;
		Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_mC91E7FD1E2D1D9CD5AAB06AB8FE7B0EA08652909_RuntimeMethod_var);
		__this->___hapticCapabilities_37 = L_9;
	}

IL_0044:
	{
		// profiles = null;
		__this->___profiles_28 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profiles_28), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// string profileName = "generic";
		V_1 = _stringLiteralFE0C84D82AA9022140F5CC812D29F26D2CF4154D;
		// bool addedFeatures = false;
		V_2 = (bool)0;
		// float tempFloat = 0;
		V_3 = (0.0f);
		// Vector2 tempVec2 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_4 = L_10;
		// if (device.TryGetFeatureValue(CommonUsages.trigger, out tempFloat))
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_11 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___trigger_15;
		bool L_12;
		L_12 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___device0), L_11, (&V_3), NULL);
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		// profileName += "-trigger";
		String_t* L_13 = V_1;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteralBD664D0384A7D47BEB2B72D767FA586B92A01A47, NULL);
		V_1 = L_14;
		// addedFeatures = true;
		V_2 = (bool)1;
	}

IL_007e:
	{
		// if (device.TryGetFeatureValue(CommonUsages.grip, out tempFloat))
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_15 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___grip_16;
		bool L_16;
		L_16 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081((&___device0), L_15, (&V_3), NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// profileName += "-squeeze";
		String_t* L_17 = V_1;
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_17, _stringLiteralD104C1E530141613EE1B0764177D07778AD57EC4, NULL);
		V_1 = L_18;
		// addedFeatures = true;
		V_2 = (bool)1;
	}

IL_009c:
	{
		// if (device.TryGetFeatureValue(CommonUsages.secondary2DAxis, out tempVec2))
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_19 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___secondary2DAxis_18;
		bool L_20;
		L_20 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&___device0), L_19, (&V_4), NULL);
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		// profileName += "-touchpad";
		String_t* L_21 = V_1;
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_21, _stringLiteralBFE450D79ADC88CEC83ED7D761462A3E3D5AADCB, NULL);
		V_1 = L_22;
		// addedFeatures = true;
		V_2 = (bool)1;
	}

IL_00ba:
	{
		// if (device.TryGetFeatureValue(CommonUsages.primary2DAxis, out tempVec2))
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_23 = ((CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t9208F514F1E77BE70AC53EFEC94D57EDDAF3B8E1_il2cpp_TypeInfo_var))->___primary2DAxis_17;
		bool L_24;
		L_24 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA((&___device0), L_23, (&V_4), NULL);
		if (!L_24)
		{
			goto IL_00d8;
		}
	}
	{
		// profileName += "-thumbstick";
		String_t* L_25 = V_1;
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_25, _stringLiteral2BADD7DA265EB41AC0C14851A8E7EE7D3996C32D, NULL);
		V_1 = L_26;
		// addedFeatures = true;
		V_2 = (bool)1;
	}

IL_00d8:
	{
		// if (!addedFeatures)
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_00e7;
		}
	}
	{
		// profileName += "-button";
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_28, _stringLiteral9C41CB6455D03CBFB86E06BEF80923BFE07AE143, NULL);
		V_1 = L_29;
	}

IL_00e7:
	{
		// profiles = new string[] { profileName };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		String_t* L_32 = V_1;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_32);
		__this->___profiles_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profiles_28), (void*)L_31);
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// SetControllerActive(true);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)1, (bool)0, NULL);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::HandleInputDevicesDisconnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleInputDevicesDisconnected_mD49A342236247290FD2B91B2DE7AC407616FEE22 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputDevice != null && inputDevice.Value == device)
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_0 = (&__this->___inputDevice_36);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_inline(L_0, Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_2 = (&__this->___inputDevice_36);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3;
		L_3 = Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B(L_2, Nullable_1_get_Value_m775A98101389348707D4C5C3C30460E553444F6B_RuntimeMethod_var);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_4 = ___device0;
		bool L_5;
		L_5 = InputDevice_op_Equality_mA56EB46D562FA46BFF210219B62BE923B9FD0085(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// inputDevice = null;
		Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* L_6 = (&__this->___inputDevice_36);
		il2cpp_codegen_initobj(L_6, sizeof(Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4));
		// hapticCapabilities = null;
		Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* L_7 = (&__this->___hapticCapabilities_37);
		il2cpp_codegen_initobj(L_7, sizeof(Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414));
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m51218C9ED75CBA4800A22D364D9E47D4ABB68E94(__this, (bool)0, (bool)0, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController__ctor_mD0A5CA0BA7E554A7C4F3418E189B8BDC5C84B3DD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion oculusOffsetRay = Quaternion.Euler(90f, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
		__this->___oculusOffsetRay_30 = L_0;
		// private Quaternion oculusOffsetGrip = Quaternion.Euler(-90f, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-90.0f), (0.0f), (0.0f), NULL);
		__this->___oculusOffsetGrip_31 = L_1;
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CgripPositionU3Ek__BackingField_33 = L_2;
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___U3CgripRotationU3Ek__BackingField_34 = L_3;
		// private InputDeviceCharacteristics xrHand = InputDeviceCharacteristics.Controller;
		__this->___xrHand_35 = ((int32_t)64);
		// private int buttonsFrameUpdate = -1;
		__this->___buttonsFrameUpdate_38 = (-1);
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
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WebXR.WebXRControllersProfiles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllersProfiles__ctor_mA73B89F43212EE2BBC5815CA8B9E9E1F7AC3E126 (WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRJointData[] joints = new WebXRJointData[25];
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_0 = (WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F*)(WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F*)SZArrayNew(WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->___joints_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joints_7), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_mB3C98C85E53B1FC2F83FE28FC75DA4306F1AA907 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, bool ___isTouched1, float ___buttonValue2, const RuntimeMethod* method) 
{
	{
		// public WebXRControllerButton(bool isPressed, bool isTouched, float buttonValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// down = false;
		__this->___down_2 = (bool)0;
		// up = false;
		__this->___up_3 = (bool)0;
		// pressed = isPressed;
		bool L_0 = ___isPressed0;
		__this->___pressed_0 = L_0;
		// touched = isTouched;
		bool L_1 = ___isTouched1;
		__this->___touched_1 = L_1;
		// value = buttonValue;
		float L_2 = ___buttonValue2;
		__this->___value_4 = L_2;
		// }
		return;
	}
}
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_mC29B16D2BDFAC51DACA9894B010BB8F169DB695B (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, bool ___isTouched1, float ___buttonValue2, const RuntimeMethod* method) 
{
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B2_0 = NULL;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B3_1 = NULL;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B5_0 = NULL;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* G_B6_1 = NULL;
	{
		// down = isPressed && !pressed;
		bool L_0 = ___isPressed0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___pressed_0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		G_B3_1->___down_2 = (bool)G_B3_0;
		// up = !isPressed && pressed;
		bool L_2 = ___isPressed0;
		G_B4_0 = __this;
		if (L_2)
		{
			G_B5_0 = __this;
			goto IL_0021;
		}
	}
	{
		bool L_3 = __this->___pressed_0;
		G_B6_0 = ((int32_t)(L_3));
		G_B6_1 = G_B4_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0022:
	{
		NullCheck(G_B6_1);
		G_B6_1->___up_3 = (bool)G_B6_0;
		// pressed = isPressed;
		bool L_4 = ___isPressed0;
		__this->___pressed_0 = L_4;
		// touched = isTouched;
		bool L_5 = ___isTouched1;
		__this->___touched_1 = L_5;
		// value = buttonValue;
		float L_6 = ___buttonValue2;
		__this->___value_4 = L_6;
		// }
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
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.___canPresentAR_0);
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.___canPresentVR_1);
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled)
{
	bool unmarshaledcanPresentAR_temp_0 = false;
	unmarshaledcanPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.___canPresentAR_0 = unmarshaledcanPresentAR_temp_0;
	bool unmarshaledcanPresentVR_temp_1 = false;
	unmarshaledcanPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.___canPresentVR_1 = unmarshaledcanPresentVR_temp_1;
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.___canPresentAR_0);
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.___canPresentVR_1);
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled)
{
	bool unmarshaledcanPresentAR_temp_0 = false;
	unmarshaledcanPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.___canPresentAR_0 = unmarshaledcanPresentAR_temp_0;
	bool unmarshaledcanPresentVR_temp_1 = false;
	unmarshaledcanPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.___canPresentVR_1 = unmarshaledcanPresentVR_temp_1;
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// WebXR.WebXRState WebXR.WebXRManager::get_XRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRState XRState => subsystem == null ? WebXRState.NORMAL : subsystem.xrState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___xrState_3;
		return L_2;
	}

IL_0014:
	{
		return (int32_t)(2);
	}
}
// System.Int32 WebXR.WebXRManager::get_ViewsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_ViewsCount_m4D64B42CB060E652B4A1E632A4DF08F5D3976B9A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ViewsCount => subsystem == null ? 1 : subsystem.viewsCount;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___viewsCount_4;
		return L_2;
	}

IL_0014:
	{
		return 1;
	}
}
// UnityEngine.Rect WebXR.WebXRManager::get_ViewsLeftRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebXRManager_get_ViewsLeftRect_m776BDCC345E580782C47DD70ABFEE9E3A44E13F6 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Rect ViewsLeftRect => subsystem == null ? defaultRect : subsystem.leftRect;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = L_1->___leftRect_5;
		return L_2;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___defaultRect_5;
		return L_3;
	}
}
// UnityEngine.Rect WebXR.WebXRManager::get_ViewsRightRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebXRManager_get_ViewsRightRect_mDBBE56FE2FFC78D0AF2EEDD4BD1D1B1DA9CDDDBE (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Rect ViewsRightRect => subsystem == null ? defaultRect : subsystem.rightRect;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = L_1->___rightRect_6;
		return L_2;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___defaultRect_5;
		return L_3;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRCapabilitiesUpdate_mD06E0ACA34562744015739855B342749C11592A5 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnXRCapabilitiesUpdate += value;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ___value0;
		WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRCapabilitiesUpdate_m198AE22A7EB72D6920E57FD184DA4AE902295F0B (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnXRCapabilitiesUpdate -= value;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ___value0;
		WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnXRChange += value;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ___value0;
		WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnXRChange -= value;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ___value0;
		WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnVisibilityChange_m265816ADAE8553437260CCBEDB3560A45CC800F7 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnVisibilityChange += value;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ___value0;
		WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnVisibilityChange_m6C7AB531F81396E81214AFBA9CE415D7F4C23CF7 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnVisibilityChange -= value;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ___value0;
		WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnControllerUpdate += value;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ___value0;
		WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnControllerUpdate -= value;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ___value0;
		WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnHandUpdate += value;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ___value0;
		WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnHandUpdate -= value;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ___value0;
		WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnHeadsetUpdate += value;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ___value0;
		WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnHeadsetUpdate -= value;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ___value0;
		WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnViewsDistanceChange_m387D919BB4E26E0D926C36C51078C3E4541250B1 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnViewsDistanceChange += value;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_0 = ___value0;
		WebXRSubsystem_add_OnViewsDistanceChange_m73B3064E00010C1C444A8141AA1144476478B8E7(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnViewsDistanceChange_mD0192064D2E650FC7AAE8FE7A9499A6170E0675C (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnViewsDistanceChange -= value;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_0 = ___value0;
		WebXRSubsystem_remove_OnViewsDistanceChange_mDC9017C4CCD81147617B1EB537AC148A8D7EBB90(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnViewerHitTestUpdate_m4C5680B9529DC3C51F486F5F380E30818A1B6E40 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnViewerHitTestUpdate += value;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ___value0;
		WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnViewerHitTestUpdate_m4A0A60034A489D4505165AA5447095209B5ECD08 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnViewerHitTestUpdate -= value;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ___value0;
		WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA(L_0, NULL);
		return;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedAR_mA5D23A0D12767CC7DFDDCE49C2D3D306DFF02844 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem != null && subsystem.capabilities.canPresentAR;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_2 = (&L_1->___capabilities_34);
		bool L_3 = L_2->___canPresentAR_0;
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedVR_mDDC76077B325FFA8DCB18C3A0FDFED27F2D103BF (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem != null && subsystem.capabilities.canPresentVR;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_2 = (&L_1->___capabilities_34);
		bool L_3 = L_2->___canPresentVR_1;
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// WebXR.WebXRVisibilityState WebXR.WebXRManager::get_visibilityState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_visibilityState_m550822E92A3F79749EF23DFD548B45C56473B829 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null)
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return WebXRVisibilityState.VISIBLE;
		return (int32_t)(0);
	}

IL_000a:
	{
		// return subsystem.visibilityState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___visibilityState_8;
		return L_2;
	}
}
// System.Void WebXR.WebXRManager::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleAR_m53083C9CC424F4D8CF2B7E8826AFCC8A1492D2B1 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.ToggleAR();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleVR_mAB02BA7909CB30CD59969EB1E621D69BBA6F46FA (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.ToggleVR();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.HapticPulse(hand, intensity, duration);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___hand0;
		float L_3 = ___intensity1;
		float L_4 = ___duration2;
		NullCheck(G_B2_0);
		WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B(G_B2_0, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::PreRenderSpectatorCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_PreRenderSpectatorCamera_mA94DDCBF8F15CA1E8A200F3A989DD98FB798018E (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.PreRenderSpectatorCamera();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRSubsystem_PreRenderSpectatorCamera_mC95D8447792BEE4FD8F6F53623E903A8B7AD85AE(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StartViewerHitTest_m98D18BDF0DD8F060C68684B0D5F4A648CAF4928F (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.StartViewerHitTest();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StopViewerHitTest_m199EB9EB268948ADC1A21D80AF9077BF6C55C3C0 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.StopViewerHitTest();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::TryAutoLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_TryAutoLoad_m8D1CB139661CF7584049445CD9AB33DD5CED6CCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BED7275CBAD3A700E60D4D10AE5E718012FC621);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* G_B2_0 = NULL;
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// WebXRSettings settings = WebXRSettings.GetSettings();
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0;
		L_0 = WebXRSettings_GetSettings_mDBA1A38176C6854F328D02437E86255932393640(NULL);
		// if (settings?.AutoLoadWebXRManager == true)
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2 = G_B2_0->___AutoLoadWebXRManager_11;
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0011:
	{
		if (!G_B3_0)
		{
			goto IL_0029;
		}
	}
	{
		// var webXRManager = new GameObject("WebXRManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral7BED7275CBAD3A700E60D4D10AE5E718012FC621, NULL);
		// webXRManager.AddComponent<WebXRManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_5;
		L_5 = GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730(L_4, GameObject_AddComponent_TisWebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_mEC620009E5F11B2B2F268A3BB62665B8DCBD1730_RuntimeMethod_var);
		// DontDestroyOnLoad(webXRManager);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Awake_m0842C3BC115C9FE02CF7083B796F92657FFFF529 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1C2D6F534B4B1466FEA842324F5B5AD2022838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E(__this, SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var);
		// if (Instance != null)
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogError("More than one WebXRManager components in scene. Disabling previous one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral7D1C2D6F534B4B1466FEA842324F5B5AD2022838, NULL);
		// Instance.enabled = false;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0028:
	{
		// Instance = this;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline(__this, NULL);
		// enabled = subsystem != null;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3;
		L_3 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)((!(((RuntimeObject*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Update_m47DBA695BA6A522030006E22E82F702ABB878260 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystem.OnUpdate();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		NullCheck(L_0);
		WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__ctor_m6BAA6C41AE8694FE4CC8EDFC49014A00F7C7068A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02(__this, SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var);
		return;
	}
}
// System.Void WebXR.WebXRManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__cctor_m2920A68AFDE669569994497F9AB5B64EEDB07318 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Rect defaultRect = new Rect(0, 0, 1, 1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___defaultRect_5 = L_0;
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
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedToAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedToAR_mF77A9C119D3A41D14BAA0AF320ED254E98D68661 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedToAR; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedToAR_4;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedToAR(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedToAR_m2D9237146A604F153F252579D0B927D44D1D940F (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedToAR = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedToAR_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedToAR_4), (void*)L_0);
		// set { m_OnSwitchedToAR = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedFromAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedFromAR_m6807C8EAD0AB4B07B4402E5F49EB96A386A60C81 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedFromAR; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedFromAR_5;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedFromAR(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedFromAR_m896D700C282137E62E646ECDC9ECE68F1E3C3AD4 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedFromAR = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedFromAR_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedFromAR_5), (void*)L_0);
		// set { m_OnSwitchedFromAR = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedToVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedToVR_m5AFFA8160AA5BD8FEDE4BFF1EA0E427DF3D83627 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedToVR; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedToVR_6;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedToVR(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedToVR_mC61D648727D578C12A3DB0F9577C25BA1754B843 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedToVR = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedToVR_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedToVR_6), (void*)L_0);
		// set { m_OnSwitchedToVR = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedFromVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedFromVR_mDA2C633FC4C92378D1F48586857C2309189A7AC0 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedFromVR; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedFromVR_7;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedFromVR(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedFromVR_mA86A6F1E7B417C8F52187B06473F3D16363C3E2B (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedFromVR = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedFromVR_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedFromVR_7), (void*)L_0);
		// set { m_OnSwitchedFromVR = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedToNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedToNormal_mD8A6BABFEA0BC3D167805BB795846E13360EBC67 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedToNormal; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedToNormal_8;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedToNormal(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedToNormal_mEACC8E7AF5236019024A63E533CD4C2C55BF309A (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedToNormal = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedToNormal_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedToNormal_8), (void*)L_0);
		// set { m_OnSwitchedToNormal = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent WebXR.WebXRModesNotifier::get_OnSwitchedFromNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* WebXRModesNotifier_get_OnSwitchedFromNormal_m9A481D1841474A40D805539873C2A152D9DB6779 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnSwitchedFromNormal; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___m_OnSwitchedFromNormal_9;
		return L_0;
	}
}
// System.Void WebXR.WebXRModesNotifier::set_OnSwitchedFromNormal(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_set_OnSwitchedFromNormal_m9A3AB450AC3AC06A7C87D6B859AC3096F893368D (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_OnSwitchedFromNormal = value; }
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ___value0;
		__this->___m_OnSwitchedFromNormal_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnSwitchedFromNormal_9), (void*)L_0);
		// set { m_OnSwitchedFromNormal = value; }
		return;
	}
}
// System.Void WebXR.WebXRModesNotifier::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_OnEnable_mE11576D7B8EB4C964190E2D61E3898D3B13B9AC5 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState = WebXRManager.Instance.XRState;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0(L_0, NULL);
		__this->___currentState_10 = L_1;
		// WebXRManager.OnXRChange += OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_2, __this, (intptr_t)((void*)WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62_RuntimeMethod_var), NULL);
		WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9(L_2, NULL);
		// OnXRChange(WebXRManager.Instance.XRState,
		//             WebXRManager.Instance.ViewsCount,
		//             WebXRManager.Instance.ViewsLeftRect,
		//             WebXRManager.Instance.ViewsRightRect);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_3;
		L_3 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0(L_3, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_5;
		L_5 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebXRManager_get_ViewsCount_m4D64B42CB060E652B4A1E632A4DF08F5D3976B9A(L_5, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_7;
		L_7 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = WebXRManager_get_ViewsLeftRect_m776BDCC345E580782C47DD70ABFEE9E3A44E13F6(L_7, NULL);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_9;
		L_9 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = WebXRManager_get_ViewsRightRect_mDBBE56FE2FFC78D0AF2EEDD4BD1D1B1DA9CDDDBE(L_9, NULL);
		WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62(__this, L_4, L_6, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRModesNotifier::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_OnDisable_m35616ED902A6CFC33729DEFEB602024D50DABD03 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange -= OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRModesNotifier::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier_OnXRChange_m41422BDC2192F4373CEB077AFE1D0808F89C2A62 (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B7_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B10_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B16_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B19_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B18_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B22_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B21_0 = NULL;
	{
		// if (currentState != state)
		int32_t L_0 = __this->___currentState_10;
		int32_t L_1 = ___state0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_005b;
		}
	}
	{
		// switch (currentState)
		int32_t L_2 = __this->___currentState_10;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_005b;
	}

IL_0024:
	{
		// m_OnSwitchedFromAR?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___m_OnSwitchedFromAR_5;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0030;
		}
	}
	{
		goto IL_005b;
	}

IL_0030:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// break;
		goto IL_005b;
	}

IL_0037:
	{
		// m_OnSwitchedFromVR?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = __this->___m_OnSwitchedFromVR_7;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_0043;
		}
	}
	{
		goto IL_005b;
	}

IL_0043:
	{
		NullCheck(G_B8_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B8_0, NULL);
		// break;
		goto IL_005b;
	}

IL_004a:
	{
		// m_OnSwitchedFromNormal?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = __this->___m_OnSwitchedFromNormal_9;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = L_8;
		G_B10_0 = L_9;
		if (L_9)
		{
			G_B11_0 = L_9;
			goto IL_0056;
		}
	}
	{
		goto IL_005b;
	}

IL_0056:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B11_0, NULL);
	}

IL_005b:
	{
		// currentState = state;
		int32_t L_10 = ___state0;
		__this->___currentState_10 = L_10;
		int32_t L_11 = ___state0;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0097;
			}
		}
	}
	{
		return;
	}

IL_0075:
	{
		// m_OnSwitchedToAR?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___m_OnSwitchedToAR_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12;
		G_B15_0 = L_13;
		if (L_13)
		{
			G_B16_0 = L_13;
			goto IL_0080;
		}
	}
	{
		return;
	}

IL_0080:
	{
		NullCheck(G_B16_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B16_0, NULL);
		// break;
		return;
	}

IL_0086:
	{
		// m_OnSwitchedToVR?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = __this->___m_OnSwitchedToVR_6;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = L_14;
		G_B18_0 = L_15;
		if (L_15)
		{
			G_B19_0 = L_15;
			goto IL_0091;
		}
	}
	{
		return;
	}

IL_0091:
	{
		NullCheck(G_B19_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B19_0, NULL);
		// break;
		return;
	}

IL_0097:
	{
		// m_OnSwitchedToNormal?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = __this->___m_OnSwitchedToNormal_8;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = L_16;
		G_B21_0 = L_17;
		if (L_17)
		{
			G_B22_0 = L_17;
			goto IL_00a2;
		}
	}
	{
		return;
	}

IL_00a2:
	{
		NullCheck(G_B22_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B22_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRModesNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRModesNotifier__ctor_m26CA1F0C756FAB67C38D1679534AB1DDD3BE645D (WebXRModesNotifier_t116A7AE890E08033FA142EB9A1A2B6FFCB116D91* __this, const RuntimeMethod* method) 
{
	{
		// WebXRState currentState = WebXRState.NORMAL;
		__this->___currentState_10 = 2;
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
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRSubsystem WebXRSubsystem => GetLoadedSubsystem<WebXRSubsystem>();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = GenericVirtualFuncInvoker0< WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem WebXR.WebXRLoader::get_XRDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRDisplaySubsystem XRDisplaySubsystem => GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem WebXR.WebXRLoader::get_XRInputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRInputSubsystem XRInputSubsystem => GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean WebXR.WebXRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Initialize_m48A32716032A3BFE82AA96C9FFCD82B99882A325 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D585C0CF017666D27E62797181776A7A1789937);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* V_0 = NULL;
	{
		// WebXRSettings settings = WebXRSettings.GetSettings();
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0;
		L_0 = WebXRSettings_GetSettings_mDBA1A38176C6854F328D02437E86255932393640(NULL);
		V_0 = L_0;
		// if (settings != null)
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log($"Got WebXRSettings");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216, NULL);
		// Debug.Log($"Sent WebXRSettings");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8D585C0CF017666D27E62797181776A7A1789937, NULL);
		// useXRDisplaySubsystem = !settings.DisableXRDisplaySubsystem;
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->___DisableXRDisplaySubsystem_13;
		__this->___useXRDisplaySubsystem_8 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		// XRSettings.useOcclusionMesh = false;
		XRSettings_set_useOcclusionMesh_m09A0A4D9FAFC05BCFCD8B09C6DC8E341E9CDF332((bool)0, NULL);
		// CreateSubsystem<WebXRSubsystemDescriptor, WebXRSubsystem>(sampleSubsystemDescriptors, typeof(WebXRSubsystem).FullName);
		il2cpp_codegen_runtime_class_init_inline(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* L_5 = ((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813(__this, L_5, L_8, XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var);
		// return WebXRSubsystem != null;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_9;
		L_9 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		return (bool)((!(((RuntimeObject*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void WebXR.WebXRLoader::StartEssentialSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_StartEssentialSubsystems_mDA481D41C6C1658C661D37195BD326A3FBA53B1E (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326DC628A629A75968385CA9FA7DF5413BB83C2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0E523CAEB92E318202982063159F7E1E27562D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (useXRDisplaySubsystem)
		bool L_0 = __this->___useXRDisplaySubsystem_8;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(displaySubsystemDescriptors, "WebXR Display");
		il2cpp_codegen_runtime_class_init_inline(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_1 = ((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_6;
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A(__this, L_1, _stringLiteral9C0E523CAEB92E318202982063159F7E1E27562D, XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		// XRDisplaySubsystem.Start();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_2;
		L_2 = WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6(__this, NULL);
		NullCheck(L_2);
		IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34(L_2, NULL);
	}

IL_0023:
	{
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(inputSubsystemDescriptors, "WebXR Tracked Display");
		il2cpp_codegen_runtime_class_init_inline(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_3 = ((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_7;
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C(__this, L_3, _stringLiteral326DC628A629A75968385CA9FA7DF5413BB83C2D, XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		// XRInputSubsystem.Start();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4;
		L_4 = WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656(__this, NULL);
		NullCheck(L_4);
		IntegratedSubsystem_Start_m2F871FE708687A50D8B078522D97C627D344CC34(L_4, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRLoader::EndEssentialSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_EndEssentialSubsystems_m907E282D6CDFBEC9C4F0E27C434EF49FB6B23967 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// if (useXRDisplaySubsystem)
		bool L_0 = __this->___useXRDisplaySubsystem_8;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// XRDisplaySubsystem.Stop();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_1;
		L_1 = WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6(__this, NULL);
		NullCheck(L_1);
		IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4(L_1, NULL);
		// XRDisplaySubsystem.Destroy();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_2;
		L_2 = WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6(__this, NULL);
		NullCheck(L_2);
		IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08(L_2, NULL);
	}

IL_001e:
	{
		// XRInputSubsystem.Stop();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_3;
		L_3 = WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656(__this, NULL);
		NullCheck(L_3);
		IntegratedSubsystem_Stop_m4CFEE7A1C17893728205EAEEF9D5427622C794C4(L_3, NULL);
		// XRInputSubsystem.Destroy();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4;
		L_4 = WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656(__this, NULL);
		NullCheck(L_4);
		IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08(L_4, NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Start_mE00ABBBFE736175DE489D36DFBF14DFFDAB31E37 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRSubsystem.Start();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Start() */, L_0);
		// WebXRSubsystem.webXRLoader = this;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___webXRLoader_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___webXRLoader_10), (void*)__this);
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Stop_mE3BEC11797DC9F7B328BBB800069283A0955DA29 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// WebXRSubsystem.Stop();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, L_0);
		// return base.Stop();
		bool L_1;
		L_1 = XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97(__this, NULL);
		return L_1;
	}
}
// System.Boolean WebXR.WebXRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Deinitialize_mC82FBC893C59C9DA0C074CEE06FF966222CBC399 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* G_B3_0 = NULL;
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* G_B2_0 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* G_B6_0 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* G_B5_0 = NULL;
	{
		// WebXRSubsystem.Destroy();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		NullCheck(L_0);
		Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759(L_0, NULL);
		// if (useXRDisplaySubsystem)
		bool L_1 = __this->___useXRDisplaySubsystem_8;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// XRDisplaySubsystem?.Destroy();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_2;
		L_2 = WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6(__this, NULL);
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0024;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08(G_B3_0, NULL);
	}

IL_0024:
	{
		// XRInputSubsystem?.Destroy();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_4;
		L_4 = WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656(__this, NULL);
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_5 = L_4;
		G_B5_0 = L_5;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0030;
		}
	}
	{
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B6_0);
		IntegratedSubsystem_Destroy_m3D6593DA2CB876877A48778C7D2F782EEC473A08(G_B6_0, NULL);
	}

IL_0035:
	{
		// return base.Deinitialize();
		bool L_6;
		L_6 = XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7(__this, NULL);
		return L_6;
	}
}
// System.Void WebXR.WebXRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__ctor_m003912C862A952C3A8C2216D546CD8AB7DD2009E (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// private bool useXRDisplaySubsystem = true;
		__this->___useXRDisplaySubsystem_8 = (bool)1;
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void WebXR.WebXRLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__cctor_mDD5D2A6E634AEA4BF994C7407D660E0AF8C96C5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<WebXRSubsystemDescriptor> sampleSubsystemDescriptors = new List<WebXRSubsystemDescriptor>();
		List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* L_0 = (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*)il2cpp_codegen_object_new(List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB(L_0, List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5), (void*)L_0);
		// static readonly List<XRDisplaySubsystemDescriptor> displaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_1 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*)il2cpp_codegen_object_new(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773(L_1, List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_6), (void*)L_1);
		// static readonly List<XRInputSubsystemDescriptor> inputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_2 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_2, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_7), (void*)L_2);
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
// System.String WebXR.WebXRSettings::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_ToJson_m093FFB2FFD5907B24347969B5F78E724AD3BAD9A (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1086B9AAD0718D3711D808D7297452B66A58C3DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		//       string result = $@"{{
		//         ""VRRequiredReferenceSpace"": [""{EnumToString(VRRequiredReferenceSpace)}""],
		//         ""VROptionalFeatures"": {FlagsToString(VROptionalFeatures)},
		//         ""ARRequiredReferenceSpace"": [""{EnumToString(ARRequiredReferenceSpace)}""],
		//         ""AROptionalFeatures"": {FlagsToString(AROptionalFeatures)},
		//         ""UseFramebufferScaleFactor"": {(UseFramebufferScaleFactor ? "true" : "false")},
		//         ""UseNativeResolution"": {(UseNativeResolution ? "true" : "false")},
		//         ""FramebufferScaleFactor"": {FramebufferScaleFactor}
		// }}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___VRRequiredReferenceSpace_4;
		String_t* L_3;
		L_3 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F(__this, L_2, WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		int32_t L_5 = __this->___VROptionalFeatures_5;
		String_t* L_6;
		L_6 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E(__this, L_5, WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		int32_t L_8 = __this->___ARRequiredReferenceSpace_6;
		String_t* L_9;
		L_9 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F(__this, L_8, WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		int32_t L_11 = __this->___AROptionalFeatures_7;
		String_t* L_12;
		L_12 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E(__this, L_11, WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		bool L_14 = __this->___UseFramebufferScaleFactor_8;
		G_B1_0 = 4;
		G_B1_1 = L_13;
		G_B1_2 = L_13;
		G_B1_3 = _stringLiteral1086B9AAD0718D3711D808D7297452B66A58C3DE;
		if (L_14)
		{
			G_B2_0 = 4;
			G_B2_1 = L_13;
			G_B2_2 = L_13;
			G_B2_3 = _stringLiteral1086B9AAD0718D3711D808D7297452B66A58C3DE;
			goto IL_0058;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005d;
	}

IL_0058:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = G_B3_3;
		bool L_16 = __this->___UseNativeResolution_9;
		G_B4_0 = 5;
		G_B4_1 = L_15;
		G_B4_2 = L_15;
		G_B4_3 = G_B3_4;
		if (L_16)
		{
			G_B5_0 = 5;
			G_B5_1 = L_15;
			G_B5_2 = L_15;
			G_B5_3 = G_B3_4;
			goto IL_006f;
		}
	}
	{
		G_B6_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0074;
	}

IL_006f:
	{
		G_B6_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0074:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = G_B6_3;
		float L_18 = __this->___FramebufferScaleFactor_10;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B6_4, L_17, NULL);
		// return result;
		return L_21;
	}
}
// WebXR.WebXRSettings WebXR.WebXRSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_GetSettings_mDBA1A38176C6854F328D02437E86255932393640 (const RuntimeMethod* method) 
{
	{
		// WebXRSettings settings = null;
		// return settings;
		return (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587*)NULL;
	}
}
// WebXR.WebXRSettings WebXR.WebXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_get_Instance_m33ECDF5FAEA749BC310D3F36FB6B58B09E44F6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0 = ((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_14;
		return L_0;
	}
}
// System.Void WebXR.WebXRSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings_Awake_m33D8428923ABE6E0E7427A1EFF6DD4EE22F903B2 (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_14 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_14), (void*)__this);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings__ctor_mB856A579FD13AAB8894BCE783906F8153EF914FB (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	{
		// public ReferenceSpaceTypes VRRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->___VRRequiredReferenceSpace_4 = 2;
		// public ExtraFeatureTypes VROptionalFeatures = ExtraFeatureTypes.hand_tracking;
		__this->___VROptionalFeatures_5 = 2;
		// public ReferenceSpaceTypes ARRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->___ARRequiredReferenceSpace_6 = 2;
		// public ExtraFeatureTypes AROptionalFeatures = (ExtraFeatureTypes)(-1);
		__this->___AROptionalFeatures_7 = (-1);
		// public float FramebufferScaleFactor = 1.0f;
		__this->___FramebufferScaleFactor_10 = (1.0f);
		// public bool AutoLoadWebXRManager = true;
		__this->___AutoLoadWebXRManager_11 = (bool)1;
		// public bool AutoLoadWebXRInputSystem = true;
		__this->___AutoLoadWebXRInputSystem_12 = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551 (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79(__this, SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7(int32_t ___isARSupported0, int32_t ___isVRSupported1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7(static_cast<bool>(___isARSupported0), static_cast<bool>(___isVRSupported1), NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3(char* ___json0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___json0' to managed representation
	String_t* ____json0_unmarshaled = NULL;
	____json0_unmarshaled = il2cpp_codegen_marshal_string_result(___json0);

	// Managed method invocation
	WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3(____json0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519(int32_t ___visibilityState0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519(___visibilityState0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419(NULL);

}
// System.Void WebXR.WebXRSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_RegisterDescriptor_m014D56E7EC8DEB18D742544C4064F900EE046FF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var res = SubsystemRegistration.CreateDescriptor(new WebXRSubsystemDescriptor()
		// {
		//   id = typeof(WebXRSubsystem).FullName,
		//   subsystemImplementationType = typeof(WebXRSubsystem)
		// });
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_0 = (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42*)il2cpp_codegen_object_new(WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551(L_0, NULL);
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_3);
		NullCheck(L_1);
		SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline(L_1, L_4, NULL);
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_5 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		NullCheck(L_5);
		SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline(L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SubsystemRegistration_CreateDescriptor_mCE7479B03E9146CB8F255997DED1572635CD9541(L_5, NULL);
		// if (res)
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("Registered " + nameof(WebXRSubsystemDescriptor));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6, NULL);
		return;
	}

IL_003c:
	{
		// else Debug.Log("Failed registering " + nameof(WebXRSubsystemDescriptor));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Start_mDC2E582E30990BCB05785DEDCFFFA1DFCD15A4F5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (running) return;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Start " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560, NULL);
		// _running = true;
		__this->____running_1 = (bool)1;
		// Instance = this;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)__this);
		// InternalStart();
		WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Stop_m4F264826B6D7FAAC4932792884057B535051909C (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_running) return;
		bool L_0 = __this->____running_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Stop " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11, NULL);
		// _running = false;
		__this->____running_1 = (bool)0;
		// Instance = null;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnDestroy_mC002B65DBCBF155D667DF388119022F917298C61 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!running) return;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Destroy " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222, NULL);
		// _running = false;
		__this->____running_1 = (bool)0;
		// Instance = null;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B4_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B3_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B8_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B7_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B13_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B12_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B17_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B16_0 = NULL;
	{
		// if (OnHandUpdate != null)
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (GetHandFromHandsArray(0, ref leftHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_1 = (&__this->___leftHand_29);
		bool L_2;
		L_2 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_002c;
	}

IL_0021:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_5 = __this->___leftHand_29;
		NullCheck(G_B4_0);
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B4_0, L_5, NULL);
	}

IL_002c:
	{
		// if (GetHandFromHandsArray(1, ref rightHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_6 = (&__this->___rightHand_30);
		bool L_7;
		L_7 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 1, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_0046;
		}
	}
	{
		goto IL_0051;
	}

IL_0046:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_10 = __this->___rightHand_30;
		NullCheck(G_B8_0);
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B8_0, L_10, NULL);
	}

IL_0051:
	{
		// if (OnControllerUpdate != null)
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_11 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// if (GetGamepadFromControllersArray(0, ref controller1))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_12 = (&__this->___controller1_31);
		bool L_13;
		L_13 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 0, L_12, NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_14 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_15 = L_14;
		G_B12_0 = L_15;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_0072;
		}
	}
	{
		goto IL_007d;
	}

IL_0072:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_16 = __this->___controller1_31;
		NullCheck(G_B13_0);
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B13_0, L_16, NULL);
	}

IL_007d:
	{
		// if (GetGamepadFromControllersArray(1, ref controller2))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_17 = (&__this->___controller2_32);
		bool L_18;
		L_18 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 1, L_17, NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_19 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_20 = L_19;
		G_B16_0 = L_20;
		if (L_20)
		{
			G_B17_0 = L_20;
			goto IL_0096;
		}
	}
	{
		return;
	}

IL_0096:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_21 = __this->___controller2_32;
		NullCheck(G_B17_0);
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B17_0, L_21, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* G_B3_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* G_B2_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* G_B11_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* G_B10_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B21_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B20_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B27_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B26_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B35_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B34_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B41_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B40_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* G_B47_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* G_B46_0 = NULL;
	{
		// if (!reportedXRStateSwitch)
		bool L_0 = __this->___reportedXRStateSwitch_7;
		if (L_0)
		{
			goto IL_0050;
		}
	}
	{
		// reportedXRStateSwitch = true;
		__this->___reportedXRStateSwitch_7 = (bool)1;
		// OnXRChange?.Invoke(xrState, viewsCount, leftRect, rightRect);
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_12;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		goto IL_0037;
	}

IL_001a:
	{
		int32_t L_3 = __this->___xrState_3;
		int32_t L_4 = __this->___viewsCount_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = __this->___leftRect_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = __this->___rightRect_6;
		NullCheck(G_B3_0);
		XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline(G_B3_0, L_3, L_4, L_5, L_6, NULL);
	}

IL_0037:
	{
		// if (OnViewsDistanceChange != null)
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_7 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// float distance = CheckViewsDistance();
		float L_8;
		L_8 = WebXRSubsystem_CheckViewsDistance_mAF568EC5C4BDC58A15905C3BA23936F446B0B8C3(__this, NULL);
		V_1 = L_8;
		// OnViewsDistanceChange.Invoke(distance);
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_9 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15;
		float L_10 = V_1;
		NullCheck(L_9);
		ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_inline(L_9, L_10, NULL);
	}

IL_0050:
	{
		// if (!updatedControllersOnEnd)
		bool L_11 = __this->___updatedControllersOnEnd_28;
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		// updatedControllersOnEnd = true;
		__this->___updatedControllersOnEnd_28 = (bool)1;
		// UpdateControllersOnEnd();
		WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB(__this, NULL);
	}

IL_0065:
	{
		// if (visibilityStateChanged)
		bool L_12 = __this->___visibilityStateChanged_9;
		if (!L_12)
		{
			goto IL_008a;
		}
	}
	{
		// visibilityStateChanged = false;
		__this->___visibilityStateChanged_9 = (bool)0;
		// OnVisibilityChange?.Invoke(visibilityState);
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_13 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_13;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_14 = L_13;
		G_B10_0 = L_14;
		if (L_14)
		{
			G_B11_0 = L_14;
			goto IL_007f;
		}
	}
	{
		goto IL_008a;
	}

IL_007f:
	{
		int32_t L_15 = __this->___visibilityState_8;
		NullCheck(G_B11_0);
		VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline(G_B11_0, L_15, NULL);
	}

IL_008a:
	{
		// if (this.xrState == WebXRState.NORMAL)
		int32_t L_16 = __this->___xrState_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0094;
		}
	}
	{
		// return;
		return;
	}

IL_0094:
	{
		// UpdateXRCameras();
		WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0(__this, NULL);
		// bool handWasDisabled = false;
		V_0 = (bool)0;
		// if (OnHandUpdate != null && this.xrState != WebXRState.NORMAL)
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_17 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		if (!L_17)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_18 = __this->___xrState_3;
		if ((((int32_t)L_18) == ((int32_t)2)))
		{
			goto IL_013a;
		}
	}
	{
		// handWasDisabled = !leftHand.enabled;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_19 = __this->___leftHand_29;
		NullCheck(L_19);
		bool L_20 = L_19->___enabled_1;
		V_0 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// if (GetHandFromHandsArray(0, ref leftHand)
		//     && (leftHand.enabled || !handWasDisabled))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_21 = (&__this->___leftHand_29);
		bool L_22;
		L_22 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 0, L_21, NULL);
		if (!L_22)
		{
			goto IL_00f6;
		}
	}
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_23 = __this->___leftHand_29;
		NullCheck(L_23);
		bool L_24 = L_23->___enabled_1;
		if (L_24)
		{
			goto IL_00e0;
		}
	}
	{
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_00f6;
		}
	}

IL_00e0:
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_26 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_27 = L_26;
		G_B20_0 = L_27;
		if (L_27)
		{
			G_B21_0 = L_27;
			goto IL_00eb;
		}
	}
	{
		goto IL_00f6;
	}

IL_00eb:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_28 = __this->___leftHand_29;
		NullCheck(G_B21_0);
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B21_0, L_28, NULL);
	}

IL_00f6:
	{
		// handWasDisabled = !rightHand.enabled;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_29 = __this->___rightHand_30;
		NullCheck(L_29);
		bool L_30 = L_29->___enabled_1;
		V_0 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		// if (GetHandFromHandsArray(1, ref rightHand)
		//     && (rightHand.enabled || !handWasDisabled))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_31 = (&__this->___rightHand_30);
		bool L_32;
		L_32 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 1, L_31, NULL);
		if (!L_32)
		{
			goto IL_013a;
		}
	}
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_33 = __this->___rightHand_30;
		NullCheck(L_33);
		bool L_34 = L_33->___enabled_1;
		if (L_34)
		{
			goto IL_0124;
		}
	}
	{
		bool L_35 = V_0;
		if (L_35)
		{
			goto IL_013a;
		}
	}

IL_0124:
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_36 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_37 = L_36;
		G_B26_0 = L_37;
		if (L_37)
		{
			G_B27_0 = L_37;
			goto IL_012f;
		}
	}
	{
		goto IL_013a;
	}

IL_012f:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_38 = __this->___rightHand_30;
		NullCheck(G_B27_0);
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B27_0, L_38, NULL);
	}

IL_013a:
	{
		// if (OnControllerUpdate != null && this.xrState != WebXRState.NORMAL)
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_39 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		if (!L_39)
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_40 = __this->___xrState_3;
		if ((((int32_t)L_40) == ((int32_t)2)))
		{
			goto IL_01d8;
		}
	}
	{
		// handWasDisabled = !controller1.enabled;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_41 = __this->___controller1_31;
		NullCheck(L_41);
		bool L_42 = L_41->___enabled_1;
		V_0 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		// if (GetGamepadFromControllersArray(0, ref controller1)
		//     && (controller1.enabled || !handWasDisabled))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_43 = (&__this->___controller1_31);
		bool L_44;
		L_44 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 0, L_43, NULL);
		if (!L_44)
		{
			goto IL_0194;
		}
	}
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_45 = __this->___controller1_31;
		NullCheck(L_45);
		bool L_46 = L_45->___enabled_1;
		if (L_46)
		{
			goto IL_017e;
		}
	}
	{
		bool L_47 = V_0;
		if (L_47)
		{
			goto IL_0194;
		}
	}

IL_017e:
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_48 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_49 = L_48;
		G_B34_0 = L_49;
		if (L_49)
		{
			G_B35_0 = L_49;
			goto IL_0189;
		}
	}
	{
		goto IL_0194;
	}

IL_0189:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_50 = __this->___controller1_31;
		NullCheck(G_B35_0);
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B35_0, L_50, NULL);
	}

IL_0194:
	{
		// handWasDisabled = !controller2.enabled;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_51 = __this->___controller2_32;
		NullCheck(L_51);
		bool L_52 = L_51->___enabled_1;
		V_0 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		// if (GetGamepadFromControllersArray(1, ref controller2)
		//     && (controller2.enabled || !handWasDisabled))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_53 = (&__this->___controller2_32);
		bool L_54;
		L_54 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 1, L_53, NULL);
		if (!L_54)
		{
			goto IL_01d8;
		}
	}
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_55 = __this->___controller2_32;
		NullCheck(L_55);
		bool L_56 = L_55->___enabled_1;
		if (L_56)
		{
			goto IL_01c2;
		}
	}
	{
		bool L_57 = V_0;
		if (L_57)
		{
			goto IL_01d8;
		}
	}

IL_01c2:
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_58 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_59 = L_58;
		G_B40_0 = L_59;
		if (L_59)
		{
			G_B41_0 = L_59;
			goto IL_01cd;
		}
	}
	{
		goto IL_01d8;
	}

IL_01cd:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_60 = __this->___controller2_32;
		NullCheck(G_B41_0);
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B41_0, L_60, NULL);
	}

IL_01d8:
	{
		// if (OnViewerHitTestUpdate != null && this.xrState == WebXRState.AR)
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_61 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18;
		if (!L_61)
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_62 = __this->___xrState_3;
		if ((!(((uint32_t)L_62) == ((uint32_t)1))))
		{
			goto IL_020b;
		}
	}
	{
		// if (GetHitTestPoseFromViewerHitTestPoseArray(ref viewerHitTestPose))
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_63 = (&__this->___viewerHitTestPose_33);
		bool L_64;
		L_64 = WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E(__this, L_63, NULL);
		if (!L_64)
		{
			goto IL_020b;
		}
	}
	{
		// OnViewerHitTestUpdate?.Invoke(viewerHitTestPose);
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_65 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_66 = L_65;
		G_B46_0 = L_66;
		if (L_66)
		{
			G_B47_0 = L_66;
			goto IL_0200;
		}
	}
	{
		return;
	}

IL_0200:
	{
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_67 = __this->___viewerHitTestPose_33;
		NullCheck(G_B47_0);
		HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline(G_B47_0, L_67, NULL);
	}

IL_020b:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* G_B4_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* G_B3_0 = NULL;
	{
		// if (OnHeadsetUpdate != null && this.xrState != WebXRState.NORMAL)
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_1 = __this->___xrState_3;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0046;
		}
	}
	{
		// GetMatrixFromSharedArray(0, ref leftProjectionMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->___leftProjectionMatrix_19);
		WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3(__this, 0, L_2, NULL);
		// GetMatrixFromSharedArray(16, ref rightProjectionMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___rightProjectionMatrix_20);
		WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3(__this, ((int32_t)16), L_3, NULL);
		// OnHeadsetUpdate?.Invoke(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix);
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_4 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = __this->___leftProjectionMatrix_19;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = __this->___rightProjectionMatrix_20;
		NullCheck(G_B4_0);
		HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_inline(G_B4_0, L_6, L_7, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRSubsystem::CheckViewsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRSubsystem_CheckViewsDistance_mAF568EC5C4BDC58A15905C3BA23936F446B0B8C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// if (viewsCount == 1)
		int32_t L_0 = __this->___viewsCount_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_000f:
	{
		// GetVector3FromSharedArray(40, ref leftPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___leftPosition_21);
		WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B(__this, ((int32_t)40), L_1, NULL);
		// GetVector3FromSharedArray(43, ref rightPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___rightPosition_22);
		WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B(__this, ((int32_t)43), L_2, NULL);
		// return Vector3.Distance(leftPosition, rightPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___leftPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___rightPosition_22;
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean WebXR.WebXRSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_get_running_m4656527947C2FEF2602FD4ADC5A4D553E7CC4183 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// public override bool running => _running;
		bool L_0 = __this->____running_1;
		return L_0;
	}
}
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_1 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_11;
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_5 = V_2;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_6 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_11), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_8 = V_0;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_1 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_11;
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_5 = V_2;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_6 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_11), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_8 = V_0;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_1 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_2 = NULL;
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_12;
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var));
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_5 = V_2;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_6 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_12), L_5, L_6);
		V_0 = L_7;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_8 = V_0;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_8) == ((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_1 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_2 = NULL;
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_12;
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var));
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_5 = V_2;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_6 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_12), L_5, L_6);
		V_0 = L_7;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_8 = V_0;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_8) == ((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_1 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_2 = NULL;
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_13;
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_2 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var));
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_5 = V_2;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_6 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_13), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_8 = V_0;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_8) == ((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_1 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_2 = NULL;
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_13;
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_2 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var));
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_5 = V_2;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_6 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_13), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_8 = V_0;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_8) == ((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_1 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_2 = NULL;
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14;
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_2 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var));
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_5 = V_2;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_6 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_8 = V_0;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_8) == ((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_1 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_2 = NULL;
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14;
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_2 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var));
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_5 = V_2;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_6 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_14), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_8 = V_0;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_8) == ((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewsDistanceChange_m73B3064E00010C1C444A8141AA1144476478B8E7 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_0 = NULL;
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_1 = NULL;
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_2 = NULL;
	{
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15;
		V_0 = L_0;
	}

IL_0006:
	{
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_1 = V_0;
		V_1 = L_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_2 = V_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)CastclassSealed((RuntimeObject*)L_4, ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var));
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_5 = V_2;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_6 = V_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_7;
		L_7 = InterlockedCompareExchangeImpl<ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15), L_5, L_6);
		V_0 = L_7;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_8 = V_0;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_9 = V_1;
		if ((!(((RuntimeObject*)(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)L_8) == ((RuntimeObject*)(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnViewsDistanceChange(WebXR.WebXRSubsystem/ViewsDistanceEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewsDistanceChange_mDC9017C4CCD81147617B1EB537AC148A8D7EBB90 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_0 = NULL;
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_1 = NULL;
	ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* V_2 = NULL;
	{
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15;
		V_0 = L_0;
	}

IL_0006:
	{
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_1 = V_0;
		V_1 = L_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_2 = V_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)CastclassSealed((RuntimeObject*)L_4, ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4_il2cpp_TypeInfo_var));
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_5 = V_2;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_6 = V_1;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_7;
		L_7 = InterlockedCompareExchangeImpl<ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewsDistanceChange_15), L_5, L_6);
		V_0 = L_7;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_8 = V_0;
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* L_9 = V_1;
		if ((!(((RuntimeObject*)(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)L_8) == ((RuntimeObject*)(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_1 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_2 = NULL;
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_2 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var));
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_5 = V_2;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_6 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_8 = V_0;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_8) == ((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_1 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_2 = NULL;
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16;
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_2 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var));
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_5 = V_2;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_6 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_16), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_8 = V_0;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_8) == ((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_1 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_2 = NULL;
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = V_0;
		V_1 = L_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_2 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)CastclassSealed((RuntimeObject*)L_4, HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var));
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_5 = V_2;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_6 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17), L_5, L_6);
		V_0 = L_7;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = V_0;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_8) == ((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_1 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_2 = NULL;
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17;
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = V_0;
		V_1 = L_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_2 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)CastclassSealed((RuntimeObject*)L_4, HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var));
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_5 = V_2;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_6 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_17), L_5, L_6);
		V_0 = L_7;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = V_0;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_8) == ((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_1 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_2 = NULL;
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18;
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_2 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var));
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_5 = V_2;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_6 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_8 = V_0;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_8) == ((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_1 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_2 = NULL;
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18;
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_2 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var));
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_5 = V_2;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_6 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_18), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_8 = V_0;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_8) == ((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7 (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.capabilities.canPresentAR = isARSupported;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_0);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_1 = (&L_0->___capabilities_34);
		bool L_2 = ___isARSupported0;
		L_1->___canPresentAR_0 = L_2;
		// Instance.capabilities.canPresentVR = isVRSupported;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_3);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_4 = (&L_3->___capabilities_34);
		bool L_5 = ___isVRSupported1;
		L_4->___canPresentVR_1 = L_5;
		// Instance.OnXRCapabilities(Instance.capabilities);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_6 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_7 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_7);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_8 = L_7->___capabilities_34;
		NullCheck(L_6);
		WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* V_0 = NULL;
	{
		// WebXRControllersProfiles controllersProfiles = JsonUtility.FromJson<WebXRControllersProfiles>(json);
		String_t* L_0 = ___json0;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_1;
		L_1 = JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF(L_0, JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var);
		V_0 = L_1;
		// Instance.OnInputProfiles(controllersProfiles);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_2 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_3 = V_0;
		NullCheck(L_2);
		WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___cap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* G_B2_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* G_B1_0 = NULL;
	{
		// this.capabilities = cap;
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_0 = ___cap0;
		__this->___capabilities_34 = L_0;
		// OnXRCapabilitiesUpdate?.Invoke(cap);
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_11;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_3 = ___cap0;
		NullCheck(G_B2_0);
		XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* ___controllersProfiles0, const RuntimeMethod* method) 
{
	{
		// controller1.profiles = controllersProfiles.controller1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = __this->___controller1_31;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_1 = ___controllersProfiles0;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1->___controller1_0;
		NullCheck(L_0);
		L_0->___profiles_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___profiles_23), (void*)L_2);
		// controller2.profiles = controllersProfiles.controller2;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_3 = __this->___controller2_32;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_4 = ___controllersProfiles0;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___controller2_1;
		NullCheck(L_3);
		L_3->___profiles_23 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___profiles_23), (void*)L_5);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	{
		// visibilityState = WebXRVisibilityState.VISIBLE;
		__this->___visibilityState_8 = 0;
		// this.xrState = state;
		int32_t L_0 = ___state0;
		__this->___xrState_3 = L_0;
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->___viewsCount_4 = L_1;
		// this.leftRect = leftRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___leftRect2;
		__this->___leftRect_5 = L_2;
		// this.rightRect = rightRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___rightRect3;
		__this->___rightRect_6 = L_3;
		// viewerHitTestOn = false;
		__this->___viewerHitTestOn_27 = (bool)0;
		// reportedXRStateSwitch = false;
		__this->___reportedXRStateSwitch_7 = (bool)0;
		// if (state != WebXRState.NORMAL)
		int32_t L_4 = ___state0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		// visibilityStateChanged = true;
		__this->___visibilityStateChanged_9 = (bool)1;
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B2_0 = NULL;
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B1_0 = NULL;
	{
		// webXRLoader?.StartEssentialSubsystems();
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___webXRLoader_10;
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRLoader_StartEssentialSubsystems_mDA481D41C6C1658C661D37195BD326A3FBA53B1E(G_B2_0, NULL);
	}

IL_0010:
	{
		// Instance.setXrState(WebXRState.AR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_2 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_3 = ___viewsCount0;
		float L_4 = ___left_x1;
		float L_5 = ___left_y2;
		float L_6 = ___left_w3;
		float L_7 = ___left_h4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		float L_9 = ___right_x5;
		float L_10 = ___right_y6;
		float L_11 = ___right_w7;
		float L_12 = ___right_h8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_2);
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_2, 1, L_3, L_8, L_13, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B2_0 = NULL;
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B1_0 = NULL;
	{
		// webXRLoader?.StartEssentialSubsystems();
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___webXRLoader_10;
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRLoader_StartEssentialSubsystems_mDA481D41C6C1658C661D37195BD326A3FBA53B1E(G_B2_0, NULL);
	}

IL_0010:
	{
		// Instance.setXrState(WebXRState.VR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_2 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_3 = ___viewsCount0;
		float L_4 = ___left_x1;
		float L_5 = ___left_y2;
		float L_6 = ___left_w3;
		float L_7 = ___left_h4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		float L_9 = ___right_x5;
		float L_10 = ___right_y6;
		float L_11 = ___right_w7;
		float L_12 = ___right_h8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_2);
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_2, 0, L_3, L_8, L_13, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519 (int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance.visibilityState != (WebXRVisibilityState)visibilityState)
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_0);
		int32_t L_1 = L_0->___visibilityState_8;
		int32_t L_2 = ___visibilityState0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// Instance.visibilityState = (WebXRVisibilityState)visibilityState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_4 = ___visibilityState0;
		NullCheck(L_3);
		L_3->___visibilityState_8 = L_4;
		// Instance.visibilityStateChanged = true;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_5 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_5);
		L_5->___visibilityStateChanged_9 = (bool)1;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B2_0 = NULL;
	WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* G_B1_0 = NULL;
	{
		// webXRLoader?.EndEssentialSubsystems();
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___webXRLoader_10;
		WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		WebXRLoader_EndEssentialSubsystems_m907E282D6CDFBEC9C4F0E27C434EF49FB6B23967(G_B2_0, NULL);
	}

IL_0010:
	{
		// Instance.updatedControllersOnEnd = false;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_2 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		NullCheck(L_2);
		L_2->___updatedControllersOnEnd_28 = (bool)0;
		// Instance.setXrState(WebXRState.NORMAL, 1, new Rect(), new Rect());
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_0;
		NullCheck(L_3);
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_3, 2, 1, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::PreRenderSpectatorCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_PreRenderSpectatorCamera_mC95D8447792BEE4FD8F6F53623E903A8B7AD85AE (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// matrix[i] = sharedArray[index + i];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___matrix1;
		int32_t L_1 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___sharedArray_23;
		int32_t L_3 = ___index0;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		float L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_0, L_1, L_6, NULL);
		// for (int i = 0; i < 16; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetQuaternionFromSharedArray(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetQuaternionFromSharedArray_m0E124BC48C6A79EB967AB6CB7667DF7F0F81E27D (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___quaternion1, const RuntimeMethod* method) 
{
	{
		// quaternion.x = sharedArray[index];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___sharedArray_23;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___x_0 = L_4;
		// quaternion.y = sharedArray[index + 1];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___sharedArray_23;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		L_5->___y_1 = L_9;
		// quaternion.z = sharedArray[index + 2];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___sharedArray_23;
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		L_10->___z_2 = L_14;
		// quaternion.w = sharedArray[index + 3];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_15 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___sharedArray_23;
		int32_t L_17 = ___index0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		L_15->___w_3 = L_19;
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vec31, const RuntimeMethod* method) 
{
	{
		// vec3.x = sharedArray[index];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___sharedArray_23;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___x_2 = L_4;
		// vec3.y = sharedArray[index + 1];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___sharedArray_23;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		L_5->___y_3 = L_9;
		// vec3.z = sharedArray[index + 2];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___sharedArray_23;
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		L_10->___z_4 = L_14;
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___controllerIndex0, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** ___newControllerData1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int arrayPosition = controllerIndex * 34;
		int32_t L_0 = ___controllerIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)34)));
		// int frameNumber = (int)controllersArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___controllersArray_24;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (newControllerData.frame == frameNumber)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_6 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_7 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_6);
		NullCheck(L_7);
		int32_t L_8 = L_7->___frame_0;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// newControllerData.frame = frameNumber;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_10 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_11 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		L_11->___frame_0 = L_12;
		// newControllerData.enabled = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_13 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_14 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___controllersArray_24;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		L_14->___enabled_1 = (bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.hand = (int)controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_20 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_21 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___controllersArray_24;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		L_21->___hand_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_26);
		// if (!newControllerData.enabled)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_27 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_28 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_27);
		NullCheck(L_28);
		bool L_29 = L_28->___enabled_1;
		if (L_29)
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// newControllerData.position = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_30 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_31 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___controllersArray_24;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		float L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = __this->___controllersArray_24;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		NullCheck(L_37);
		int32_t L_40 = L_39;
		float L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___controllersArray_24;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), L_36, L_41, L_46, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->___position_3 = L_47;
		// newControllerData.rotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_48 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_49 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_48);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___controllersArray_24;
		int32_t L_51 = V_0;
		int32_t L_52 = L_51;
		V_0 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		NullCheck(L_50);
		int32_t L_53 = L_52;
		float L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___controllersArray_24;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		NullCheck(L_55);
		int32_t L_58 = L_57;
		float L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = __this->___controllersArray_24;
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		NullCheck(L_60);
		int32_t L_63 = L_62;
		float L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = __this->___controllersArray_24;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		float L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_70), L_54, L_59, L_64, L_69, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->___rotation_4 = L_70;
		// newControllerData.trigger = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_71 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_72 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_71);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = __this->___controllersArray_24;
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		V_0 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		NullCheck(L_73);
		int32_t L_76 = L_75;
		float L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_72);
		L_72->___trigger_7 = L_77;
		// newControllerData.triggerTouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_78 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_79 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_78);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_80 = __this->___controllersArray_24;
		int32_t L_81 = V_0;
		int32_t L_82 = L_81;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		NullCheck(L_80);
		int32_t L_83 = L_82;
		float L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		L_79->___triggerTouched_8 = (bool)((((int32_t)((((float)L_84) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.squeeze = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_85 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_86 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_85);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = __this->___controllersArray_24;
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		V_0 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		NullCheck(L_87);
		int32_t L_90 = L_89;
		float L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		L_86->___squeeze_9 = L_91;
		// newControllerData.squeezeTouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_92 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_93 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_92);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = __this->___controllersArray_24;
		int32_t L_95 = V_0;
		int32_t L_96 = L_95;
		V_0 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		NullCheck(L_94);
		int32_t L_97 = L_96;
		float L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_93);
		L_93->___squeezeTouched_10 = (bool)((((int32_t)((((float)L_98) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.thumbstick = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_99 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_100 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_99);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = __this->___controllersArray_24;
		int32_t L_102 = V_0;
		int32_t L_103 = L_102;
		V_0 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		int32_t L_104 = L_103;
		float L_105 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_100);
		L_100->___thumbstick_11 = L_105;
		// newControllerData.thumbstickTouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_106 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_107 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_106);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_108 = __this->___controllersArray_24;
		int32_t L_109 = V_0;
		int32_t L_110 = L_109;
		V_0 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		NullCheck(L_108);
		int32_t L_111 = L_110;
		float L_112 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_107);
		L_107->___thumbstickTouched_12 = (bool)((((int32_t)((((float)L_112) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.thumbstickX = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_113 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_114 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_113);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = __this->___controllersArray_24;
		int32_t L_116 = V_0;
		int32_t L_117 = L_116;
		V_0 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		NullCheck(L_115);
		int32_t L_118 = L_117;
		float L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_114);
		L_114->___thumbstickX_13 = L_119;
		// newControllerData.thumbstickY = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_120 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_121 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_120);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_122 = __this->___controllersArray_24;
		int32_t L_123 = V_0;
		int32_t L_124 = L_123;
		V_0 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		NullCheck(L_122);
		int32_t L_125 = L_124;
		float L_126 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_121);
		L_121->___thumbstickY_14 = L_126;
		// newControllerData.touchpad = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_127 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_128 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_127);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = __this->___controllersArray_24;
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		float L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_128);
		L_128->___touchpad_15 = L_133;
		// newControllerData.touchpadTouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_134 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_135 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_134);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = __this->___controllersArray_24;
		int32_t L_137 = V_0;
		int32_t L_138 = L_137;
		V_0 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		NullCheck(L_136);
		int32_t L_139 = L_138;
		float L_140 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_135);
		L_135->___touchpadTouched_16 = (bool)((((int32_t)((((float)L_140) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.touchpadX = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_141 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_142 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_141);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_143 = __this->___controllersArray_24;
		int32_t L_144 = V_0;
		int32_t L_145 = L_144;
		V_0 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		NullCheck(L_143);
		int32_t L_146 = L_145;
		float L_147 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_142);
		L_142->___touchpadX_17 = L_147;
		// newControllerData.touchpadY = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_148 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_149 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_148);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = __this->___controllersArray_24;
		int32_t L_151 = V_0;
		int32_t L_152 = L_151;
		V_0 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		NullCheck(L_150);
		int32_t L_153 = L_152;
		float L_154 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_149);
		L_149->___touchpadY_18 = L_154;
		// newControllerData.buttonA = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_155 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_156 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_155);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_157 = __this->___controllersArray_24;
		int32_t L_158 = V_0;
		int32_t L_159 = L_158;
		V_0 = ((int32_t)il2cpp_codegen_add(L_159, 1));
		NullCheck(L_157);
		int32_t L_160 = L_159;
		float L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_156);
		L_156->___buttonA_19 = L_161;
		// newControllerData.buttonATouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_162 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_163 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_162);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_164 = __this->___controllersArray_24;
		int32_t L_165 = V_0;
		int32_t L_166 = L_165;
		V_0 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		NullCheck(L_164);
		int32_t L_167 = L_166;
		float L_168 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_163);
		L_163->___buttonATouched_20 = (bool)((((int32_t)((((float)L_168) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.buttonB = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_169 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_170 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_169);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_171 = __this->___controllersArray_24;
		int32_t L_172 = V_0;
		int32_t L_173 = L_172;
		V_0 = ((int32_t)il2cpp_codegen_add(L_173, 1));
		NullCheck(L_171);
		int32_t L_174 = L_173;
		float L_175 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_170);
		L_170->___buttonB_21 = L_175;
		// newControllerData.buttonBTouched = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_176 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_177 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_176);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_178 = __this->___controllersArray_24;
		int32_t L_179 = V_0;
		int32_t L_180 = L_179;
		V_0 = ((int32_t)il2cpp_codegen_add(L_180, 1));
		NullCheck(L_178);
		int32_t L_181 = L_180;
		float L_182 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_177);
		L_177->___buttonBTouched_22 = (bool)((((int32_t)((((float)L_182) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (controllersArray[arrayPosition] == 1)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_183 = __this->___controllersArray_24;
		int32_t L_184 = V_0;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		float L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		if ((!(((float)L_186) == ((float)(1.0f)))))
		{
			goto IL_02ba;
		}
	}
	{
		// arrayPosition++;
		int32_t L_187 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		// newControllerData.gripPosition = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_188 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_189 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_188);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_190 = __this->___controllersArray_24;
		int32_t L_191 = V_0;
		int32_t L_192 = L_191;
		V_0 = ((int32_t)il2cpp_codegen_add(L_192, 1));
		NullCheck(L_190);
		int32_t L_193 = L_192;
		float L_194 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_195 = __this->___controllersArray_24;
		int32_t L_196 = V_0;
		int32_t L_197 = L_196;
		V_0 = ((int32_t)il2cpp_codegen_add(L_197, 1));
		NullCheck(L_195);
		int32_t L_198 = L_197;
		float L_199 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_200 = __this->___controllersArray_24;
		int32_t L_201 = V_0;
		int32_t L_202 = L_201;
		V_0 = ((int32_t)il2cpp_codegen_add(L_202, 1));
		NullCheck(L_200);
		int32_t L_203 = L_202;
		float L_204 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		memset((&L_205), 0, sizeof(L_205));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_205), L_194, L_199, L_204, /*hidden argument*/NULL);
		NullCheck(L_189);
		L_189->___gripPosition_5 = L_205;
		// newControllerData.gripRotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_206 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_207 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_206);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_208 = __this->___controllersArray_24;
		int32_t L_209 = V_0;
		int32_t L_210 = L_209;
		V_0 = ((int32_t)il2cpp_codegen_add(L_210, 1));
		NullCheck(L_208);
		int32_t L_211 = L_210;
		float L_212 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_213 = __this->___controllersArray_24;
		int32_t L_214 = V_0;
		int32_t L_215 = L_214;
		V_0 = ((int32_t)il2cpp_codegen_add(L_215, 1));
		NullCheck(L_213);
		int32_t L_216 = L_215;
		float L_217 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_218 = __this->___controllersArray_24;
		int32_t L_219 = V_0;
		int32_t L_220 = L_219;
		V_0 = ((int32_t)il2cpp_codegen_add(L_220, 1));
		NullCheck(L_218);
		int32_t L_221 = L_220;
		float L_222 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_223 = __this->___controllersArray_24;
		int32_t L_224 = V_0;
		int32_t L_225 = L_224;
		V_0 = ((int32_t)il2cpp_codegen_add(L_225, 1));
		NullCheck(L_223);
		int32_t L_226 = L_225;
		float L_227 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_228;
		memset((&L_228), 0, sizeof(L_228));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_228), L_212, L_217, L_222, L_227, /*hidden argument*/NULL);
		NullCheck(L_207);
		L_207->___gripRotation_6 = L_228;
	}

IL_02ba:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___handIndex0, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** ___handObject1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int arrayPosition = handIndex * 212;
		int32_t L_0 = ___handIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)212)));
		// int frameNumber = (int)handsArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___handsArray_25;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (handObject.frame == frameNumber)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_6 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_7 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_6);
		NullCheck(L_7);
		int32_t L_8 = L_7->___frame_0;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// handObject.frame = frameNumber;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_10 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_11 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		L_11->___frame_0 = L_12;
		// handObject.enabled = handsArray[arrayPosition++] != 0;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_13 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_14 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___handsArray_25;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		L_14->___enabled_1 = (bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// handObject.hand = (int)handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_20 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_21 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___handsArray_25;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		L_21->___hand_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_26);
		// handObject.trigger = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_27 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_28 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___handsArray_25;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		L_28->___trigger_3 = L_33;
		// handObject.squeeze = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_34 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_35 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_34);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = __this->___handsArray_25;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		NullCheck(L_36);
		int32_t L_39 = L_38;
		float L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		L_35->___squeeze_4 = L_40;
		// if (!handObject.enabled)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_41 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_42 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_41);
		NullCheck(L_42);
		bool L_43 = L_42->___enabled_1;
		if (L_43)
		{
			goto IL_008c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// handObject.pointerPosition = new Vector3(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_44 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_45 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_44);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = __this->___handsArray_25;
		int32_t L_47 = V_0;
		int32_t L_48 = L_47;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		NullCheck(L_46);
		int32_t L_49 = L_48;
		float L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = __this->___handsArray_25;
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		NullCheck(L_51);
		int32_t L_54 = L_53;
		float L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = __this->___handsArray_25;
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		V_0 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		float L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_50, L_55, L_60, /*hidden argument*/NULL);
		NullCheck(L_45);
		L_45->___pointerPosition_5 = L_61;
		// handObject.pointerRotation = new Quaternion(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++],
		//   handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_62 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_63 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_62);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = __this->___handsArray_25;
		int32_t L_65 = V_0;
		int32_t L_66 = L_65;
		V_0 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		NullCheck(L_64);
		int32_t L_67 = L_66;
		float L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = __this->___handsArray_25;
		int32_t L_70 = V_0;
		int32_t L_71 = L_70;
		V_0 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		NullCheck(L_69);
		int32_t L_72 = L_71;
		float L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = __this->___handsArray_25;
		int32_t L_75 = V_0;
		int32_t L_76 = L_75;
		V_0 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		NullCheck(L_74);
		int32_t L_77 = L_76;
		float L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = __this->___handsArray_25;
		int32_t L_80 = V_0;
		int32_t L_81 = L_80;
		V_0 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		NullCheck(L_79);
		int32_t L_82 = L_81;
		float L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_84), L_68, L_73, L_78, L_83, /*hidden argument*/NULL);
		NullCheck(L_63);
		L_63->___pointerRotation_6 = L_84;
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		V_2 = 0;
		goto IL_01a3;
	}

IL_00ff:
	{
		// handObject.joints[i].position = new Vector3(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_85 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_86 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_85);
		NullCheck(L_86);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_87 = L_86->___joints_7;
		int32_t L_88 = V_2;
		NullCheck(L_87);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = __this->___handsArray_25;
		int32_t L_90 = V_0;
		int32_t L_91 = L_90;
		V_0 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		NullCheck(L_89);
		int32_t L_92 = L_91;
		float L_93 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = __this->___handsArray_25;
		int32_t L_95 = V_0;
		int32_t L_96 = L_95;
		V_0 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		NullCheck(L_94);
		int32_t L_97 = L_96;
		float L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_99 = __this->___handsArray_25;
		int32_t L_100 = V_0;
		int32_t L_101 = L_100;
		V_0 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		NullCheck(L_99);
		int32_t L_102 = L_101;
		float L_103 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_104), L_93, L_98, L_103, /*hidden argument*/NULL);
		((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->___position_0 = L_104;
		// handObject.joints[i].rotation = new Quaternion(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++],
		//     handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_105 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_106 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_105);
		NullCheck(L_106);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_107 = L_106->___joints_7;
		int32_t L_108 = V_2;
		NullCheck(L_107);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = __this->___handsArray_25;
		int32_t L_110 = V_0;
		int32_t L_111 = L_110;
		V_0 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		NullCheck(L_109);
		int32_t L_112 = L_111;
		float L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_114 = __this->___handsArray_25;
		int32_t L_115 = V_0;
		int32_t L_116 = L_115;
		V_0 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		NullCheck(L_114);
		int32_t L_117 = L_116;
		float L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_119 = __this->___handsArray_25;
		int32_t L_120 = V_0;
		int32_t L_121 = L_120;
		V_0 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		NullCheck(L_119);
		int32_t L_122 = L_121;
		float L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_124 = __this->___handsArray_25;
		int32_t L_125 = V_0;
		int32_t L_126 = L_125;
		V_0 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		NullCheck(L_124);
		int32_t L_127 = L_126;
		float L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_129), L_113, L_118, L_123, L_128, /*hidden argument*/NULL);
		((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->___rotation_1 = L_129;
		// handObject.joints[i].radius = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_130 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_131 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_130);
		NullCheck(L_131);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_132 = L_131->___joints_7;
		int32_t L_133 = V_2;
		NullCheck(L_132);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = __this->___handsArray_25;
		int32_t L_135 = V_0;
		int32_t L_136 = L_135;
		V_0 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		NullCheck(L_134);
		int32_t L_137 = L_136;
		float L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_133)))->___radius_2 = L_138;
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_139 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_01a3:
	{
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_140 = V_2;
		if ((((int32_t)L_140) <= ((int32_t)((int32_t)24))))
		{
			goto IL_00ff;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** ___hitPoseData0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int arrayPosition = 0;
		V_0 = 0;
		// int frameNumber = (int)viewerHitTestPoseArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___viewerHitTestPoseArray_26;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		float L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		// if (hitPoseData.frame == frameNumber)
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_5 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_6 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_5);
		NullCheck(L_6);
		int32_t L_7 = L_6->___frame_0;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// hitPoseData.frame = frameNumber;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_9 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_10 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_9);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		L_10->___frame_0 = L_11;
		// hitPoseData.available = viewerHitTestPoseArray[arrayPosition++] != 0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_12 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_13 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___viewerHitTestPoseArray_26;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		float L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		L_13->___available_1 = (bool)((((int32_t)((((float)L_18) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (!hitPoseData.available)
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_19 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_20 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_19);
		NullCheck(L_20);
		bool L_21 = L_20->___available_1;
		if (L_21)
		{
			goto IL_004c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// hitPoseData.position = new Vector3(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_22 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_23 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___viewerHitTestPoseArray_26;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		float L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___viewerHitTestPoseArray_26;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___viewerHitTestPoseArray_26;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		float L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), L_28, L_33, L_38, /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->___position_2 = L_39;
		// hitPoseData.rotation = new Quaternion(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_40 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_41 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_40);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___viewerHitTestPoseArray_26;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = __this->___viewerHitTestPoseArray_26;
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		NullCheck(L_47);
		int32_t L_50 = L_49;
		float L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = __this->___viewerHitTestPoseArray_26;
		int32_t L_53 = V_0;
		int32_t L_54 = L_53;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		NullCheck(L_52);
		int32_t L_55 = L_54;
		float L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = __this->___viewerHitTestPoseArray_26;
		int32_t L_58 = V_0;
		int32_t L_59 = L_58;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		NullCheck(L_57);
		int32_t L_60 = L_59;
		float L_61 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_62), L_46, L_51, L_56, L_61, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->___rotation_3 = L_62;
		// return true;
		return (bool)1;
	}
}
// System.Void WebXR.WebXRSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem__ctor_mDEAE7BC186974B99EC74BB9026AC40E033FB35EF (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal WebXRState xrState = WebXRState.NORMAL;
		__this->___xrState_3 = 2;
		// internal int viewsCount = 1;
		__this->___viewsCount_4 = 1;
		// private bool reportedXRStateSwitch = true;
		__this->___reportedXRStateSwitch_7 = (bool)1;
		// float[] sharedArray = new float[(2 * 16) + (2 * 7) + (2 * 4) + 1 + 1 + 2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)58));
		__this->___sharedArray_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedArray_23), (void*)L_0);
		// float[] controllersArray = new float[2 * 34];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)68));
		__this->___controllersArray_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllersArray_24), (void*)L_1);
		// float[] handsArray = new float[2 * (25 * 8 + 5 + 7)]; // 2 hands, 25 joints
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)424));
		__this->___handsArray_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handsArray_25), (void*)L_2);
		// float[] viewerHitTestPoseArray = new float[9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___viewerHitTestPoseArray_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viewerHitTestPoseArray_26), (void*)L_3);
		// private bool updatedControllersOnEnd = true;
		__this->___updatedControllersOnEnd_28 = (bool)1;
		// private WebXRHandData leftHand = new WebXRHandData();
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_4 = (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*)il2cpp_codegen_object_new(WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB(L_4, NULL);
		__this->___leftHand_29 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHand_29), (void*)L_4);
		// private WebXRHandData rightHand = new WebXRHandData();
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_5 = (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*)il2cpp_codegen_object_new(WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB(L_5, NULL);
		__this->___rightHand_30 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHand_30), (void*)L_5);
		// private WebXRControllerData controller1 = new WebXRControllerData();
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_6 = (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*)il2cpp_codegen_object_new(WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA(L_6, NULL);
		__this->___controller1_31 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller1_31), (void*)L_6);
		// private WebXRControllerData controller2 = new WebXRControllerData();
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_7 = (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*)il2cpp_codegen_object_new(WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA(L_7, NULL);
		__this->___controller2_32 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller2_32), (void*)L_7);
		// private WebXRHitPoseData viewerHitTestPose = new WebXRHitPoseData();
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_8 = (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*)il2cpp_codegen_object_new(WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D(L_8, NULL);
		__this->___viewerHitTestPose_33 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viewerHitTestPose_33), (void*)L_8);
		Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E(__this, Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var);
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
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Multicast(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* currentDelegate = reinterpret_cast<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Open(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___capabilities0, method);
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_OpenStaticInvoker(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA >::Invoke(__this->___method_ptr_0, method, NULL, ___capabilities0);
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_ClosedStaticInvoker(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___capabilities0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___capabilities0' to native representation
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke ____capabilities0_marshaled = {};
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(___capabilities0, ____capabilities0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____capabilities0_marshaled);

	// Marshaling cleanup of parameter '___capabilities0' native representation
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(____capabilities0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate__ctor_m6CCC6132D765662DC39C5490959F00FECE4D5F9A (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesUpdate::BeginInvoke(WebXR.WebXRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesUpdate_BeginInvoke_m0385937829DB2B0782407D960A0F888E12FCB4A6 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var, &___capabilities0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_EndInvoke_m29DE4A7793EF0AC3B6008E1C416DF79BA426E093 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Multicast(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* currentDelegate = reinterpret_cast<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Open(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___state0, ___viewsCount1, ___leftRect2, ___rightRect3, method);
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_OpenStaticInvoker(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(__this->___method_ptr_0, method, NULL, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_ClosedStaticInvoker(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___state0, ___viewsCount1, ___leftRect2, ___rightRect3);

}
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRChange::BeginInvoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRChange_BeginInvoke_m98F292DF4B8336425ED99660E4AF768E3E115C7E (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___viewsCount1);
	__d_args[2] = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &___leftRect2);
	__d_args[3] = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &___rightRect3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void WebXR.WebXRSubsystem/XRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_EndInvoke_mBB28990CB2CF66A76E3830DA6D50E767AC79C1DB (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Multicast(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* currentDelegate = reinterpret_cast<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Open(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___visibilityState0, method);
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_OpenStaticInvoker(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___visibilityState0);
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_ClosedStaticInvoker(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___visibilityState0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange__ctor_m60599CB863FAFF25545465F770A874CE5110B7D3 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Multicast;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChange::BeginInvoke(WebXR.WebXRVisibilityState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChange_BeginInvoke_m51E47B0DA175ADEEF79AC53817349577A7D9F7CE (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_EndInvoke_m613B0389FD1E13311E2770060C4FA4E5C2D30131 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_Multicast(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* currentDelegate = reinterpret_cast<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_Open(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___leftProjectionMatrix0, ___rightProjectionMatrix1, method);
}
void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_OpenStaticInvoker(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(__this->___method_ptr_0, method, NULL, ___leftProjectionMatrix0, ___rightProjectionMatrix1);
}
void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_ClosedStaticInvoker(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___leftProjectionMatrix0, ___rightProjectionMatrix1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___leftProjectionMatrix0, ___rightProjectionMatrix1);

}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_m3C62F44449CD7A25F524ACF2122357EF2E49F0DD (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___leftProjectionMatrix0);
	__d_args[1] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___rightProjectionMatrix1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_m0C519D3E01B799B0D760F18C8E989B474BC6DDEF (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_Multicast(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* currentDelegate = reinterpret_cast<ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___distance0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_Open(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___distance0, method);
}
void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_OpenStaticInvoker(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___distance0);
}
void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_ClosedStaticInvoker(ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___distance0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___distance0);

}
// System.Void WebXR.WebXRSubsystem/ViewsDistanceEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewsDistanceEvent__ctor_mE8CE5E8B1D0713B668DA95108CB9CBD539DFEFFA (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_Multicast;
}
// System.Void WebXR.WebXRSubsystem/ViewsDistanceEvent::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___distance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/ViewsDistanceEvent::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViewsDistanceEvent_BeginInvoke_m9AE2DCA2BE5872F2A2D1F42D208143C5044235ED (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___distance0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/ViewsDistanceEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewsDistanceEvent_EndInvoke_m59A27EE15F6A8D9746EDB95B6F34EEF5F0FB9F18 (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Multicast(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* currentDelegate = reinterpret_cast<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___controllerData0, method);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenStaticInvoker(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* >::Invoke(__this->___method_ptr_0, method, NULL, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_ClosedStaticInvoker(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenVirtual(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenInterface(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericVirtual(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericInterface(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___controllerData0);
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Multicast;
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/ControllerUpdate::BeginInvoke(WebXR.WebXRControllerData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m929A0089260BBDAC17B2E71B8B6094F5936AC4C3 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___controllerData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_mC54E32FB65091829B8C9D565CBE3924A8F17F9A4 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Multicast(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* currentDelegate = reinterpret_cast<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handData0, method);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenStaticInvoker(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* >::Invoke(__this->___method_ptr_0, method, NULL, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_ClosedStaticInvoker(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenVirtual(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenInterface(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericVirtual(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericInterface(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___handData0);
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HandUpdate::BeginInvoke(WebXR.WebXRHandData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandUpdate_BeginInvoke_mA2E44E78A3DAC24112A4AC4DAF74F6451A08A483 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_EndInvoke_mEAB11B6BFFAB56FCF6282B9472243D2F9F13EBAA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Multicast(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* currentDelegate = reinterpret_cast<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___hitPoseData0, method);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenStaticInvoker(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* >::Invoke(__this->___method_ptr_0, method, NULL, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_ClosedStaticInvoker(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenVirtual(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenInterface(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericVirtual(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericInterface(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___hitPoseData0);
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate__ctor_mCD5E79F84CCBD3706B40295C7409334EF7BE9B2E (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HitTestUpdate::BeginInvoke(WebXR.WebXRHitPoseData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitTestUpdate_BeginInvoke_mBEE24C6D2C78FC2EF56EBFE78E6809159435D130 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___hitPoseData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_EndInvoke_mC18D6BC3AB3B4C7DC65BA52A3EC439B4961F9D15 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Multicast(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* currentDelegate = reinterpret_cast<StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Open(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, method);
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_OpenStaticInvoker(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	InvokerActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_ClosedStaticInvoker(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	InvokerActionInvoker10< RuntimeObject*, int32_t, float, float, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float, float, float, float, float, float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);

}
// System.Void WebXR.WebXRSubsystem/StartXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent__ctor_mD79D19081CB5888373658432D7A4ADF6FBC0E03E (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 9;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Multicast;
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::Invoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/StartXREvent::BeginInvoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartXREvent_BeginInvoke_mDC2F77C0CA35E78F9C14E249F44DA58903858D04 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback9, RuntimeObject* ___object10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___viewsCount0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_x1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_y2);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_w3);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_h4);
	__d_args[5] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_x5);
	__d_args[6] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_y6);
	__d_args[7] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_w7);
	__d_args[8] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_h8);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback9, (RuntimeObject*)___object10);
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_EndInvoke_m22ED6FF0095F7A92E2219C8D79FD863B1E8AEB63 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Multicast(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* currentDelegate = reinterpret_cast<VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Open(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___visibilityState0, method);
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_OpenStaticInvoker(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___visibilityState0);
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_ClosedStaticInvoker(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___visibilityState0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent__ctor_m865EFAD1D01ECA43A7574FFDE9003BE918DF9510 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Multicast;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChangeEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChangeEvent_BeginInvoke_m933EAB33A1939DBA375088FED4F205ACC14EE3A5 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_EndInvoke_m90D4F29CC33D3F32B740F91D1FB44A243E5179B1 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Multicast(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* currentDelegate = reinterpret_cast<EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Open(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_OpenStaticInvoker(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_ClosedStaticInvoker(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void WebXR.WebXRSubsystem/EndXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent__ctor_mF58E2A752AF32940C04F52F402A26C93D0F446FD (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Multicast;
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/EndXREvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndXREvent_BeginInvoke_m329D14BF2589D1EE30C6055C1150FEF8E51891CF (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_EndInvoke_m7E5A6847226DE7586E462B2DF99A0468769306A3 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Multicast(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* currentDelegate = reinterpret_cast<XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___isARSupported0, ___isVRSupported1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Open(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___isARSupported0, ___isVRSupported1, method);
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_OpenStaticInvoker(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___isARSupported0, ___isVRSupported1);
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_ClosedStaticInvoker(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___isARSupported0, ___isVRSupported1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isARSupported0), static_cast<int32_t>(___isVRSupported1));

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent__ctor_mD28857E41C6F952467E56AEB559BE1B520767B41 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::Invoke(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___isARSupported0, ___isVRSupported1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesEvent::BeginInvoke(System.Boolean,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesEvent_BeginInvoke_m62E73D8C2C635D6D92C2DE2ADC57B064075E6175 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isARSupported0);
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isVRSupported1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_EndInvoke_m548234DC7746DD15F71AE57192C335535E16FE0D (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Multicast(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* currentDelegate = reinterpret_cast<InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___json0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___json0, method);
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_OpenStaticInvoker(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___json0);
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_ClosedStaticInvoker(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___json0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent__ctor_m21B517477B45852125B3FD4E1202E9923152A921 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Multicast;
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___json0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/InputProfilesEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputProfilesEvent_BeginInvoke_m56A56D7F422818EEA3759EB81FD49037666C102C (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___json0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_EndInvoke_m7AC6A365DB9ACBC09967FC742D48366B7AC81A11 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CgripRotationU3Ek__BackingField_34 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CgripPositionU3Ek__BackingField_33 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CgripRotationU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CgripPositionU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ViewsDistanceEvent_Invoke_m3D23DFC71E1C743D94FCF2AEECD225CC72DFDF3C_inline (ViewsDistanceEvent_tF0E4353A3DB7955FD8B5D61F6BBCF639F0C4BBC4* __this, float ___distance0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___distance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_mB8530A4D4397106F501EC7B5FAA5368047DFB765_inline (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5F93642A57D332408085B27F1B9D5932CFF4E41F_gshared_inline (Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1D38FE8A12C598B6553A3C93EB77C12CA6AE2864_gshared_inline (Nullable_1_t3308AE7435DCB874B8C61C7F93C47F8C8FB40414* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD Enumerator_get_Current_m7D19F033982951230B318A08E829850451459AAE_gshared_inline (Enumerator_t2A0DD7C3F41DE0D8FD672B874BDDB066261ECB01* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
