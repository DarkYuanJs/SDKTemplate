#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15;
// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8;
// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF;
// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8;
// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B;
// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4;
// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26;
// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32;
// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Int32>
struct Func_1_t30631A63BE46FE93700939B764202D360449FE30;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t30631A63BE46FE93700939B764202D360449FE30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3D06B308E42D8CD13AD0BE7B61634A9333001E9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD7FD968973E6AD4D7E7A93DD89DD1FC262D2E043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_m29A19760856254BFDB871B141202FCB8EB4A4F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_mC63C53076142ABFFD048BAFA5EC2CD35414833E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t FirebaseMessage_Dispose_mE8392A762E2A7C773A69178405459B7AF9231E70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessage__cctor_m41A94E95C52B6792A8FDCDB1F4D1B4D87850D526_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessagingPINVOKE__cctor_mC7009A9680D0CE3A024AD02070F5CEF779AFD95F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging__cctor_m843511351AB475AC95CF227A47B213CAAD1F60FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_add_TokenReceivedInternal_m3FE5F6134F9A391EB8A5FEB500680458C34320FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_add_TokenReceived_m7DD9C943F95229DE224FC89750A42682BB593321_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_remove_TokenReceivedInternal_m262F1E7DADEB59C39209C2068CD099CFE48F702A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseMessaging_remove_TokenReceived_m236E8551179E9EDBF039C1565913BF9FB0E1C7EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Destroy_m796D7B5F90702C2A55FE318356502D52362DD220_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Listener__ctor_mC45E321812941A2EAF18DA7C324384CBF8DF047F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageReceivedDelegate_BeginInvoke_mEB87A3BFFB061D4CA68FCE0EB7952481413C3AF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageReceivedEventArgs__ctor_m2A0EEE95D67D285AE1E1895EBEB7E93E41BAC370_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_mC511CF224C7D0B67644F518730318993FECAF720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mE5F36F659A4B2283BE917F75E5B861D8F6F03DBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TokenReceivedEventArgs__ctor_mE5B9538C605128311CF89C1FA7505841CE1FB63D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_m29A19760856254BFDB871B141202FCB8EB4A4F27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_mC63C53076142ABFFD048BAFA5EC2CD35414833E9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF64C9E61295D5B4FA7986E3DDF7D5802D86B699D 
{
public:

public:
};


// System.Object


// Firebase.Messaging.FirebaseMessaging
struct  FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::MessageReceivedInternal
	EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * ___MessageReceivedInternal_0;
	// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::TokenReceivedInternal
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___TokenReceivedInternal_1;
	// Firebase.Messaging.FirebaseMessaging_Listener Firebase.Messaging.FirebaseMessaging::listener
	Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * ___listener_2;

public:
	inline static int32_t get_offset_of_MessageReceivedInternal_0() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields, ___MessageReceivedInternal_0)); }
	inline EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * get_MessageReceivedInternal_0() const { return ___MessageReceivedInternal_0; }
	inline EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 ** get_address_of_MessageReceivedInternal_0() { return &___MessageReceivedInternal_0; }
	inline void set_MessageReceivedInternal_0(EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * value)
	{
		___MessageReceivedInternal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceivedInternal_0), (void*)value);
	}

	inline static int32_t get_offset_of_TokenReceivedInternal_1() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields, ___TokenReceivedInternal_1)); }
	inline EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * get_TokenReceivedInternal_1() const { return ___TokenReceivedInternal_1; }
	inline EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A ** get_address_of_TokenReceivedInternal_1() { return &___TokenReceivedInternal_1; }
	inline void set_TokenReceivedInternal_1(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * value)
	{
		___TokenReceivedInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenReceivedInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields, ___listener_2)); }
	inline Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * get_listener_2() const { return ___listener_2; }
	inline Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging_Listener
struct  Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8  : public RuntimeObject
{
public:
	// Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate Firebase.Messaging.FirebaseMessaging_Listener::messageReceivedDelegate
	MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * ___messageReceivedDelegate_0;
	// Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate Firebase.Messaging.FirebaseMessaging_Listener::tokenReceivedDelegate
	TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * ___tokenReceivedDelegate_1;
	// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging_Listener::app
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app_2;

public:
	inline static int32_t get_offset_of_messageReceivedDelegate_0() { return static_cast<int32_t>(offsetof(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8, ___messageReceivedDelegate_0)); }
	inline MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * get_messageReceivedDelegate_0() const { return ___messageReceivedDelegate_0; }
	inline MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B ** get_address_of_messageReceivedDelegate_0() { return &___messageReceivedDelegate_0; }
	inline void set_messageReceivedDelegate_0(MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * value)
	{
		___messageReceivedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageReceivedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenReceivedDelegate_1() { return static_cast<int32_t>(offsetof(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8, ___tokenReceivedDelegate_1)); }
	inline TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * get_tokenReceivedDelegate_1() const { return ___tokenReceivedDelegate_1; }
	inline TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 ** get_address_of_tokenReceivedDelegate_1() { return &___tokenReceivedDelegate_1; }
	inline void set_tokenReceivedDelegate_1(TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * value)
	{
		___tokenReceivedDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenReceivedDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8, ___app_2)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_app_2() const { return ___app_2; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_2), (void*)value);
	}
};

struct Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessaging_Listener Firebase.Messaging.FirebaseMessaging_Listener::listener
	Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * ___listener_3;

public:
	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields, ___listener_3)); }
	inline Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * get_listener_3() const { return ___listener_3; }
	inline Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging_Listener_<TokenReceivedDelegateMethod>c__AnonStorey1
struct  U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8  : public RuntimeObject
{
public:
	// System.String Firebase.Messaging.FirebaseMessaging_Listener_<TokenReceivedDelegateMethod>c__AnonStorey1::token
	String_t* ___token_0;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE
struct  FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * ___swigExceptionHelper_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigStringHelper
	SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___applicationDelegate_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___arithmeticDelegate_1;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___divideByZeroDelegate_2;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___indexOutOfRangeDelegate_3;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidCastDelegate_4;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidOperationDelegate_5;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___ioDelegate_6;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___nullReferenceDelegate_7;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___outOfMemoryDelegate_8;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___overflowDelegate_9;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___systemDelegate_10;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentDelegate_11;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentNullDelegate_12;
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGPendingException
struct  SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields
{
public:
	// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields
{
public:
	// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Firebase.Messaging.MessageReceivedEventArgs
struct  MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::<Message>k__BackingField
	FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26, ___U3CMessageU3Ek__BackingField_1)); }
	inline FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// Firebase.Messaging.TokenReceivedEventArgs
struct  TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String Firebase.Messaging.TokenReceivedEventArgs::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63, ___U3CTokenU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_1() const { return ___U3CTokenU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_1() { return &___U3CTokenU3Ek__BackingField_1; }
	inline void set_U3CTokenU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Firebase.Messaging.FirebaseMessaging_Listener_<MessageReceivedDelegateMethod>c__AnonStorey0
struct  U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Messaging.FirebaseMessaging_Listener_<MessageReceivedDelegateMethod>c__AnonStorey0::message
	intptr_t ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF, ___message_0)); }
	inline intptr_t get_message_0() const { return ___message_0; }
	inline intptr_t* get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(intptr_t value)
	{
		___message_0 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_12;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___U3CU3Ef__amU24cache0_13;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache1_14;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * ___U3CU3Ef__amU24cache2_15;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * ___U3CU3Ef__amU24cache3_16;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * ___U3CU3Ef__amU24cache4_17;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_11)); }
	inline int32_t get_CheckDependenciesThread_11() const { return ___CheckDependenciesThread_11; }
	inline int32_t* get_address_of_CheckDependenciesThread_11() { return &___CheckDependenciesThread_11; }
	inline void set_CheckDependenciesThread_11(int32_t value)
	{
		___CheckDependenciesThread_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_12)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_12() const { return ___CheckDependenciesThreadLock_12; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_12() { return &___CheckDependenciesThreadLock_12; }
	inline void set_CheckDependenciesThreadLock_12(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache2_15)); }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * get_U3CU3Ef__amU24cache2_15() const { return ___U3CU3Ef__amU24cache2_15; }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 ** get_address_of_U3CU3Ef__amU24cache2_15() { return &___U3CU3Ef__amU24cache2_15; }
	inline void set_U3CU3Ef__amU24cache2_15(Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * value)
	{
		___U3CU3Ef__amU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache3_16)); }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * get_U3CU3Ef__amU24cache3_16() const { return ___U3CU3Ef__amU24cache3_16; }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D ** get_address_of_U3CU3Ef__amU24cache3_16() { return &___U3CU3Ef__amU24cache3_16; }
	inline void set_U3CU3Ef__amU24cache3_16(Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * value)
	{
		___U3CU3Ef__amU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache4_17)); }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * get_U3CU3Ef__amU24cache4_17() const { return ___U3CU3Ef__amU24cache4_17; }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F ** get_address_of_U3CU3Ef__amU24cache4_17() { return &___U3CU3Ef__amU24cache4_17; }
	inline void set_U3CU3Ef__amU24cache4_17(Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * value)
	{
		___U3CU3Ef__amU24cache4_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_17), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessage
struct  FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseMessage::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

struct FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_StaticFields
{
public:
	// System.DateTime Firebase.Messaging.FirebaseMessage::UnixEpochUtc
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___UnixEpochUtc_2;

public:
	inline static int32_t get_offset_of_UnixEpochUtc_2() { return static_cast<int32_t>(offsetof(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_StaticFields, ___UnixEpochUtc_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_UnixEpochUtc_2() const { return ___UnixEpochUtc_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_UnixEpochUtc_2() { return &___UnixEpochUtc_2; }
	inline void set_UnixEpochUtc_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___UnixEpochUtc_2 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate
struct  MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate
struct  TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct  EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct  EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct  Func_1_t30631A63BE46FE93700939B764202D360449FE30  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_gshared (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B_gshared (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * ___func0, int32_t ___errorValue1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mE8392A762E2A7C773A69178405459B7AF9231E70 (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_mAED36526E5A34BF7773A7ADDAEB58197309E17B8 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mEB21F0E1968B663D04B2D088DC510A91CA698B2B (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m796D7B5F90702C2A55FE318356502D52362DD220 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m3FE5F6134F9A391EB8A5FEB500680458C34320FE (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m262F1E7DADEB59C39209C2068CD099CFE48F702A (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_mAECAE141E730E3EE00DCBD0B36B8CA8A507A4A01 (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * ___jarg10, TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mA44EF2724D7A8DC70D6B95ED8A19605B422FCF94 (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_m5479AF7A1035905144042871EEFB0CC6E91928F9 (const RuntimeMethod* method);
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F (intptr_t ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC (String_t* ___token0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mFB74DF8BD830AAD400223D28D980E8234DD68E5E (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m4668A6CE3E3B4D04946C9968868F420D2F023B03 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0 (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * ___messageCallback0, TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * ___tokenCallback1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_mC45E321812941A2EAF18DA7C324384CBF8DF047F (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7 (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m30824436FA8C135CBE10618168A9C79C231FECF5 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527 (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t30631A63BE46FE93700939B764202D360449FE30 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
inline int32_t ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * ___func0, int32_t ___errorValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_t30631A63BE46FE93700939B764202D360449FE30 *, int32_t, const RuntimeMethod*))ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B_gshared)(___func0, ___errorValue1, method);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_m8ABAA1D8F30A1F6C878945A3AA6C1B238635CE9C (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_m3E608317C244897AE365151F3531CD8810AA56C3 (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_m2A0EEE95D67D285AE1E1895EBEB7E93E41BAC370 (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * __this, FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___msg0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD7FD968973E6AD4D7E7A93DD89DD1FC262D2E043 (EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * __this, RuntimeObject * ___sender0, MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 *, RuntimeObject *, MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_mE5B9538C605128311CF89C1FA7505841CE1FB63D (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3D06B308E42D8CD13AD0BE7B61634A9333001E9D (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * __this, RuntimeObject * ___sender0, TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *, RuntimeObject *, TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m7E28DD58CB614055D058300BC925A93CD5C03148 (SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mEE9C7F7074996F19B13B6E548721DBB56C8F8C9D (SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mBE45D4690624E6ED8276A344FC90A6E8E4E553F7 (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mD49F1167108F01D79DCFDFA5FE09BFBEC08EE278 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___applicationDelegate0, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___arithmeticDelegate1, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___divideByZeroDelegate2, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidCastDelegate4, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidOperationDelegate5, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___ioDelegate6, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___nullReferenceDelegate7, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___outOfMemoryDelegate8, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___overflowDelegate9, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mA31B793B19ACA505D2CE85AD17696219D5CA4283 (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentDelegate0, ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mFDF57CD0B8D0F401E65E0C0B317F1268EF874901 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m8AA3678AAC1D2376021BD4FDEDDA90E4996AA445 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m4E8E869A69E968F1AF6ACCFDB65FB96CAB306202_inline (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * __this, FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m9FA35A895914724BF780EB50AB674B7FAD520F94_inline (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * __this, String_t* ___value0, const RuntimeMethod* method);
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
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_m3E608317C244897AE365151F3531CD8810AA56C3 (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Finalize_mE56317F1EC52C57625B83C3DB196E8BEE9ECBC80 (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseMessage_Dispose_mE8392A762E2A7C773A69178405459B7AF9231E70(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mE8392A762E2A7C773A69178405459B7AF9231E70 (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessage_Dispose_mE8392A762E2A7C773A69178405459B7AF9231E70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var);
			FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_mAED36526E5A34BF7773A7ADDAEB58197309E17B8(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__cctor_m41A94E95C52B6792A8FDCDB1F4D1B4D87850D526 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessage__cctor_m41A94E95C52B6792A8FDCDB1F4D1B4D87850D526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mEB21F0E1968B663D04B2D088DC510A91CA698B2B((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_il2cpp_TypeInfo_var))->set_UnixEpochUtc_2(L_0);
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
// System.Void Firebase.Messaging.FirebaseMessaging::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__cctor_m843511351AB475AC95CF227A47B213CAAD1F60FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging__cctor_m843511351AB475AC95CF227A47B213CAAD1F60FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_0 = Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3(/*hidden argument*/NULL);
		((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->set_listener_2(L_0);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m3FE5F6134F9A391EB8A5FEB500680458C34320FE (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_add_TokenReceivedInternal_m3FE5F6134F9A391EB8A5FEB500680458C34320FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * V_0 = NULL;
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_0 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_2 = V_1;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_5 = V_0;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *>((EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A **)(((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), ((EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_7 = V_0;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)L_7) == ((RuntimeObject*)(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m262F1E7DADEB59C39209C2068CD099CFE48F702A (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_remove_TokenReceivedInternal_m262F1E7DADEB59C39209C2068CD099CFE48F702A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * V_0 = NULL;
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_0 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_2 = V_1;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_5 = V_0;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *>((EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A **)(((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), ((EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_7 = V_0;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)L_7) == ((RuntimeObject*)(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
			EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * L_3 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
			V_1 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_4 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
			V_2 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (L_5)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0040;
			}
		}

IL_0035:
		{
			Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3(/*hidden argument*/NULL);
			goto IL_0045;
		}

IL_0040:
		{
			Listener_Destroy_m796D7B5F90702C2A55FE318356502D52362DD220(/*hidden argument*/NULL);
		}

IL_0045:
		{
			bool L_7 = V_1;
			bool L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF(L_7, L_8, /*hidden argument*/NULL);
			bool L_9 = V_1;
			if (L_9)
			{
				goto IL_0058;
			}
		}

IL_0052:
		{
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_005d;
			}
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
			FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D(/*hidden argument*/NULL);
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceived_m7DD9C943F95229DE224FC89750A42682BB593321 (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_add_TokenReceived_m7DD9C943F95229DE224FC89750A42682BB593321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		FirebaseMessaging_add_TokenReceivedInternal_m3FE5F6134F9A391EB8A5FEB500680458C34320FE(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceived_m236E8551179E9EDBF039C1565913BF9FB0E1C7EE (EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_remove_TokenReceived_m236E8551179E9EDBF039C1565913BF9FB0E1C7EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		FirebaseMessaging_remove_TokenReceivedInternal_m262F1E7DADEB59C39209C2068CD099CFE48F702A(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mC87E51EF681EF17F4E71098BD905FC22915C2BCD(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0 (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * ___messageCallback0, TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * ___tokenCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * L_0 = ___messageCallback0;
		TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * L_1 = ___tokenCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_mAECAE141E730E3EE00DCBD0B36B8CA8A507A4A01(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___message_callback_enabled0;
		bool L_1 = ___token_callback_enabled1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mA44EF2724D7A8DC70D6B95ED8A19605B422FCF94(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseMessaging_SetListenerCallbacksEnabled_m15891FCA6B23D50037977A05C1D19CFD3109F7DF_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_m5479AF7A1035905144042871EEFB0CC6E91928F9(/*hidden argument*/NULL);
		bool L_0 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, FirebaseMessaging_SendPendingEvents_m1AD31EF0E0F7DDC88BA2E1D040B7FED7818F303D_RuntimeMethod_var);
	}

IL_0015:
	{
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F(intptr_t ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue = Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F(___message0, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC(char* ___token0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___token0' to managed representation
	String_t* ____token0_unmarshaled = NULL;
	____token0_unmarshaled = il2cpp_codegen_marshal_string_result(___token0);

	// Managed method invocation
	Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC(____token0_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_mC45E321812941A2EAF18DA7C324384CBF8DF047F (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener__ctor_mC45E321812941A2EAF18DA7C324384CBF8DF047F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * L_0 = (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B *)il2cpp_codegen_object_new(MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B_il2cpp_TypeInfo_var);
		MessageReceivedDelegate__ctor_mFB74DF8BD830AAD400223D28D980E8234DD68E5E(L_0, NULL, (intptr_t)((intptr_t)Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_messageReceivedDelegate_0(L_0);
		TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * L_1 = (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 *)il2cpp_codegen_object_new(TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3_il2cpp_TypeInfo_var);
		TokenReceivedDelegate__ctor_m4668A6CE3E3B4D04946C9968868F420D2F023B03(L_1, NULL, (intptr_t)((intptr_t)Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_tokenReceivedDelegate_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		__this->set_app_2(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * L_3 = __this->get_messageReceivedDelegate_0();
		TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * L_4 = __this->get_tokenReceivedDelegate_1();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessaging_Listener Firebase.Messaging.FirebaseMessaging_Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Create_m483EBB5038EAD465DBDF0B3A039144B5975B03C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_3 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_4 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = L_4;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}

IL_0026:
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_5 = (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 *)il2cpp_codegen_object_new(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var);
			Listener__ctor_mC45E321812941A2EAF18DA7C324384CBF8DF047F(L_5, /*hidden argument*/NULL);
			((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->set_listener_3(L_5);
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_6 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = L_6;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m796D7B5F90702C2A55FE318356502D52362DD220 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Destroy_m796D7B5F90702C2A55FE318356502D52362DD220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_3 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			if (L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}

IL_0020:
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_4 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			NullCheck(L_4);
			Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7(L_4, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Finalize_m8FA9FA3CB30F3C30EDD34DFEF9F8C9A601327037 (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7 (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_Dispose_m4A8D2010E1D9C5A0AB78EE726FD0F80B12833AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 * L_3 = ((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->get_listener_3();
			if ((!(((RuntimeObject*)(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 *)L_3) == ((RuntimeObject*)(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 *)__this))))
			{
				goto IL_0030;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacks_m99B36FCF788A096110B1DF7051D1860ED57E70E0((MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B *)NULL, (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 *)NULL, /*hidden argument*/NULL);
			((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8_il2cpp_TypeInfo_var))->set_listener_3((Listener_t4BF20A59E5EA4BCD186B79A84AFE1A2BD9AB77F8 *)NULL);
			__this->set_app_2((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL);
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging_Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F (intptr_t ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_MessageReceivedDelegateMethod_mF586558E88D4CDD57EB78B5DC8EC6DBC57C24F6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * V_0 = NULL;
	{
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * L_0 = (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF *)il2cpp_codegen_object_new(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF_il2cpp_TypeInfo_var);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m30824436FA8C135CBE10618168A9C79C231FECF5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * L_1 = V_0;
		intptr_t L_2 = ___message0;
		NullCheck(L_1);
		L_1->set_message_0((intptr_t)L_2);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * L_3 = V_0;
		Func_1_t30631A63BE46FE93700939B764202D360449FE30 * L_4 = (Func_1_t30631A63BE46FE93700939B764202D360449FE30 *)il2cpp_codegen_object_new(Func_1_t30631A63BE46FE93700939B764202D360449FE30_il2cpp_TypeInfo_var);
		Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527(L_4, L_3, (intptr_t)((intptr_t)U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_m29A19760856254BFDB871B141202FCB8EB4A4F27_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_RuntimeMethod_var);
		int32_t L_5 = ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B(L_4, 0, /*hidden argument*/ExceptionAggregator_Wrap_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m2D42FD45D735C2A40DBDB3972A1BA75ADAD7805B_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_TokenReceivedDelegateMethod_m7C1147E63D1B5395EC9660FAB0B1A53EF54E88DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * V_0 = NULL;
	{
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * L_0 = (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 *)il2cpp_codegen_object_new(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8_il2cpp_TypeInfo_var);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_m8ABAA1D8F30A1F6C878945A3AA6C1B238635CE9C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * L_1 = V_0;
		String_t* L_2 = ___token0;
		NullCheck(L_1);
		L_1->set_token_0(L_2);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * L_3 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, L_3, (intptr_t)((intptr_t)U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_mC63C53076142ABFFD048BAFA5EC2CD35414833E9_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m93A9BD0DC888F1D02E77860288095CB49D4CFFC2(L_4, /*hidden argument*/NULL);
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
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m30824436FA8C135CBE10618168A9C79C231FECF5 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging_Listener_<MessageReceivedDelegateMethod>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_m29A19760856254BFDB871B141202FCB8EB4A4F27 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t699B890BAF7206A1B77102A0243C7B79A956BBEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_m29A19760856254BFDB871B141202FCB8EB4A4F27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * L_0 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
		EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		EventHandler_1_tBA9F648AD792B75E48CDF50EE3AABD4524F2EA32 * L_2 = V_0;
		intptr_t L_3 = __this->get_message_0();
		FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * L_4 = (FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 *)il2cpp_codegen_object_new(FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15_il2cpp_TypeInfo_var);
		FirebaseMessage__ctor_m3E608317C244897AE365151F3531CD8810AA56C3(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * L_5 = (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 *)il2cpp_codegen_object_new(MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26_il2cpp_TypeInfo_var);
		MessageReceivedEventArgs__ctor_m2A0EEE95D67D285AE1E1895EBEB7E93E41BAC370(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mD7FD968973E6AD4D7E7A93DD89DD1FC262D2E043(L_2, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_mD7FD968973E6AD4D7E7A93DD89DD1FC262D2E043_RuntimeMethod_var);
		return 1;
	}

IL_0026:
	{
		return 0;
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
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_m8ABAA1D8F30A1F6C878945A3AA6C1B238635CE9C (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_<TokenReceivedDelegateMethod>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_mC63C53076142ABFFD048BAFA5EC2CD35414833E9 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t4CB1E986BCD2C1841B7ECA01247C63C75EC800E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_mC63C53076142ABFFD048BAFA5EC2CD35414833E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var);
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_0 = ((FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tBB5886252C80C2F0FE35F0BE978E7D54C72A6221_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		EventHandler_1_t9A1ACE241CBB18E6E40E661C575F55CE6154F65A * L_2 = V_0;
		String_t* L_3 = __this->get_token_0();
		TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * L_4 = (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 *)il2cpp_codegen_object_new(TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63_il2cpp_TypeInfo_var);
		TokenReceivedEventArgs__ctor_mE5B9538C605128311CF89C1FA7505841CE1FB63D(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3D06B308E42D8CD13AD0BE7B61634A9333001E9D(L_2, NULL, L_4, /*hidden argument*/EventHandler_1_Invoke_m3D06B308E42D8CD13AD0BE7B61634A9333001E9D_RuntimeMethod_var);
	}

IL_001e:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___message0);

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mFB74DF8BD830AAD400223D28D980E8234DD68E5E (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_Invoke_mBFC100F2BCD40288764C81BF93D121E50A78725C (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___message0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_mEB87A3BFFB061D4CA68FCE0EB7952481413C3AF6 (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, intptr_t ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageReceivedDelegate_BeginInvoke_mEB87A3BFFB061D4CA68FCE0EB7952481413C3AF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___message0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_EndInvoke_m43FB65C04341B48C224E66EE85A1B273E7DFB7BD (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m4668A6CE3E3B4D04946C9968868F420D2F023B03 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_Invoke_m3FE921B66DED1ED284F1A51EF33395C40F2010F3 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___token0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenReceivedDelegate_BeginInvoke_m6E2F1D2D74E5A282066D92411014BF78EEA0C252 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, String_t* ___token0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_EndInvoke_m9B3C51101B1313CEFF5071C59054DC45D968DFD7 (TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__cctor_mC7009A9680D0CE3A024AD02070F5CEF779AFD95F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMessagingPINVOKE__cctor_mC7009A9680D0CE3A024AD02070F5CEF779AFD95F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * L_0 = (SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA *)il2cpp_codegen_object_new(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m7E28DD58CB614055D058300BC925A93CD5C03148(L_0, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * L_1 = (SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF *)il2cpp_codegen_object_new(SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_mEE9C7F7074996F19B13B6E548721DBB56C8F8C9D(L_1, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_delete_FirebaseMessage(void*);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_mAED36526E5A34BF7773A7ADDAEB58197309E17B8 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_delete_FirebaseMessage)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SetListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging_Listener_MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging_Listener_TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_mAECAE141E730E3EE00DCBD0B36B8CA8A507A4A01 (MessageReceivedDelegate_tA5EDD47E8A18A20C07D47DE7FF0616D4FC26F09B * ___jarg10, TokenReceivedDelegate_t50459A59B96A92048F74EF509B709DE0ADC64EF3 * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SetListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SetListenerCallbacksEnabled(int32_t, int32_t);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mA44EF2724D7A8DC70D6B95ED8A19605B422FCF94 (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SetListenerCallbacksEnabled)(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SendPendingEvents();
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_m5479AF7A1035905144042871EEFB0CC6E91928F9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SendPendingEvents)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mC511CF224C7D0B67644F518730318993FECAF720 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_mC511CF224C7D0B67644F518730318993FECAF720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_0 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_1 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_2 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_3 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_4 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_5 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_6 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_7 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_8 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_9 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_10 = (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B *)il2cpp_codegen_object_new(ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_11 = (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mBE45D4690624E6ED8276A344FC90A6E8E4E553F7(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_12 = (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mBE45D4690624E6ED8276A344FC90A6E8E4E553F7(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_13 = (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mBE45D4690624E6ED8276A344FC90A6E8E4E553F7(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_14 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_15 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_16 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_17 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_18 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_19 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_20 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_21 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_22 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_23 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * L_24 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mD49F1167108F01D79DCFDFA5FE09BFBEC08EE278(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_25 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_26 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * L_27 = ((SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mA31B793B19ACA505D2CE85AD17696219D5CA4283(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m7E28DD58CB614055D058300BC925A93CD5C03148 (SWIGExceptionHelper_t97A7512095D8753EAB4125DB6A9A9280F2C5FFEA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_mD49F1167108F01D79DCFDFA5FE09BFBEC08EE278 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___applicationDelegate0, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___arithmeticDelegate1, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___divideByZeroDelegate2, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidCastDelegate4, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___invalidOperationDelegate5, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___ioDelegate6, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___nullReferenceDelegate7, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___outOfMemoryDelegate8, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___overflowDelegate9, ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseMessaging)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mA31B793B19ACA505D2CE85AD17696219D5CA4283 (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentDelegate0, ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mF5868FDD5440D1D3A6D9E40B43A62D0D9159C287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_mF4B21D27F0C158945C97024E71BEAAC05EC39A4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_mE054B405D5F1193747EB781FA07103646D4A2ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mC18965BA9060A7A3ABAC3FE16FE29F13635397AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_mDDF0ABD8DDC719096A33511360F38DC71879F8D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m1340B2F9B6FFAE4B5B8C4686427F437AE610AC8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m400AADA0AA08B10B7B617885BE957C7BA03A8A99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m698ED5DBAC91FA242C5CEAA77CEEC0C0F2A2FC56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m5A49B8B76C1B1319F805C632DB81DF91E966D25A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_mA4E932F23C131E4D256D6CC6DD02B755328B493A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m187501AFF8E416B331104EF977FC3E5AF219DEBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mED29D17188803457252B2680682FB2F2EE202D34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_mC56E31DC1E3EB39779F20857A566CEEE395961CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m0EF377827C5D4E7FF88329F5B012AED72BBC546E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mBE45D4690624E6ED8276A344FC90A6E8E4E553F7 (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m2D89DD4636DF844456CB3B5E986D539FBE65E91F (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m153385CBE70698B5FC3DF50FD70923DACA78870E (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m17D450A9B7F7A917AE243413C30A17BFEB1D9C0F (ExceptionArgumentDelegate_tA201F1E3A2E9A595F3EB918FF736F25EE72B2AC8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m553126BAE7EC4582F92D12130432626C0561FD92 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m36C3E694AB22C79530F3710107EE5D64F02B6499 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mD5FD7245460B0515D7ED8EFC19132671FD6EF655 (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m9D987BFF23102F341C3FBADB9FC3D39BF11A03BA (ExceptionDelegate_t1483352ADAA9F7BCA99D0CD4CB87C6AB26BFB02B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_mE1473B9BCF364358E039F732D4217B8AC3C867A2_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m45A5FBDBCD53C7A40734EE967731C0F63E5544DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t734DF7D0CBB051F2BD162DD12253B90C5DE2975F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t2E274CCF81587ED4450F9849178AB4B8766CEFD0_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mE5F36F659A4B2283BE917F75E5B861D8F6F03DBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mE5F36F659A4B2283BE917F75E5B861D8F6F03DBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * L_0 = (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 *)il2cpp_codegen_object_new(SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mFDF57CD0B8D0F401E65E0C0B317F1268EF874901(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * L_1 = ((SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m8AA3678AAC1D2376021BD4FDEDDA90E4996AA445(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mEE9C7F7074996F19B13B6E548721DBB56C8F8C9D (SWIGStringHelper_tC499162CE7C1728D4BB835D2F7245200D2F2CFFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseMessaging(Il2CppMethodPointer);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m8AA3678AAC1D2376021BD4FDEDDA90E4996AA445 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseMessaging)(____stringDelegate0_marshaled);

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m0B8C7A4F464994323BA1F28DE548A67A3B801D63 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mFDF57CD0B8D0F401E65E0C0B317F1268EF874901 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m20A59DA982ACD245F6F8C3458D142FD341ACE472 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m86B6238D6F434C7581DC74D6F31F6B48A2D4FB31 (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mFCAC428BFAF990E3EE8BFD00C4BEA3E9FE4AE7DB (SWIGStringDelegate_tE4FD7D262C158002BBDC0078FE6714D76883A1C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_m2A0EEE95D67D285AE1E1895EBEB7E93E41BAC370 (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * __this, FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageReceivedEventArgs__ctor_m2A0EEE95D67D285AE1E1895EBEB7E93E41BAC370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * L_0 = ___msg0;
		MessageReceivedEventArgs_set_Message_m4E8E869A69E968F1AF6ACCFDB65FB96CAB306202_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m4E8E869A69E968F1AF6ACCFDB65FB96CAB306202 (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * __this, FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
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
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_mE5B9538C605128311CF89C1FA7505841CE1FB63D (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TokenReceivedEventArgs__ctor_mE5B9538C605128311CF89C1FA7505841CE1FB63D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___token0;
		TokenReceivedEventArgs_set_Token_m9FA35A895914724BF780EB50AB674B7FAD520F94_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m9FA35A895914724BF780EB50AB674B7FAD520F94 (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m4E8E869A69E968F1AF6ACCFDB65FB96CAB306202_inline (MessageReceivedEventArgs_tAFAAAC91CCB847100EAFB41FCB64C286E2078C26 * __this, FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_t89AA09BC3DBF958D110B8BD607A400AD43D34C15 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_m9FA35A895914724BF780EB50AB674B7FAD520F94_inline (TokenReceivedEventArgs_tCF6EC56D89F73A867F73004E199E8C0C1948CE63 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
