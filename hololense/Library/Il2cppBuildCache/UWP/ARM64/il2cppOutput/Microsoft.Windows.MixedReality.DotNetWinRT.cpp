﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36;
// WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_tD6D79AA0B3230EF5C7023AEBF730E7FC74EFDC60;
// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_tA61B6366518522F75F91364B84D4580178751ED6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct IReadOnlyList_1_tB32748B0411D1DBAE7163A99163BFB764A3459A4;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct IReadOnlyList_1_t8D0032A96FA1C3D85FDAAB0F0CD4283253748A1C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t210153F1F8212198831F6F9EAE73D983EFBFCA39;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331;
// System.Lazy`1<System.Object>
struct Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>
struct ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>
struct ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>
struct ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>
struct ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>
struct ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>
struct ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>
struct ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>
struct ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>
struct ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_t4AB4F32951061E5175079C2C16E65FA0D43B336B;
// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2;
// WinRT.VectorViewOfEnum`1<System.Int32Enum>
struct VectorViewOfEnum_1_t4001437CD1A61D45194365E455CF4C51D8F9EF3F;
// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD;
// WinRT.VectorViewOfObject`1<System.Object>
struct VectorViewOfObject_1_t0F02C63FA667720224662F26AABE137DFAF551F4;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_tFC73BDD1B2C65D7FBAD848AA2D7BD2DCCB7BDC95;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_tD2E530BF1A1F01B124CAC0E8EFC381C6E1986853;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_tFBFBBFD7EDFB0814A1CB8EDD9F90866A0FC53949;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62;
// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352;
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D;
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C;
// WinRT.IObjectReference
struct IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WinRT.WinrtModule
struct WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18;
// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B;
// WinRT.Interop._get_PropertyAsDouble
struct _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687;
// WinRT.Interop._put_PropertyAsBool
struct _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB;
// WinRT.Interop._put_PropertyAsEnum
struct _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c
struct U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c
struct U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501;
// WinRT.Interop.IIteratorOfEnum/_GetMany
struct _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1;
// WinRT.Interop.IIteratorOfEnum/_MoveNext
struct _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8;
// WinRT.Interop.IIteratorOfObject/_GetMany
struct _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498;
// WinRT.Interop.IIteratorOfObject/_MoveNext
struct _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6;
// WinRT.Interop.IVectorViewOfEnum/_GetAt
struct _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF;
// WinRT.Interop.IVectorViewOfEnum/_GetMany
struct _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857;
// WinRT.Interop.IVectorViewOfEnum/_IndexOf
struct _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86;
// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16;
// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE;
// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters
struct _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96;
IL2CPP_EXTERN_C String_t* _stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C;
IL2CPP_EXTERN_C String_t* _stringLiteral376C23DA1914D1A4BFE3DE23D6B327481318B5C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8;
IL2CPP_EXTERN_C String_t* _stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF;
IL2CPP_EXTERN_C const RuntimeMethod* CreateT__ctor_m1E914A9A6B7FC8E11192873E2966AFF41AB9924A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m49F9153483E7881B0F295D8149596F7CC575D3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m845DF2404CE942976C18573874A1BA227CD7C990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mEEDB960B44D48F86B8D13B747296133B89C40F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mFD505EE66843FBFEFA4A03B3820926BE7871B22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m81C7BBA40CAC3192E0BF20EAA60A53BA9EE645B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_mA4521327584172D0F4B6E9ADAB1FD288A46F5812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicCamera_U3C_ctorU3Eb__2_0_m62AE9B3B24568770971F4435887CE8E091C8B09B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC0B4F814EE65137A7747CA106953AAAFAF1F9167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IL2CPPLinkage__AddDllDirectory_mC6645F42E60CF07B2C454882870749F17D487728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m298BBC11525DB7A741B41077579FA25245E77928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mACCB5F79505EC02758C0D46F271FF3256F90EA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mB251D8B4BA52BF6CFC07A0AA5154046AB3F7E362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m581C4D970F69488E4A877D578F257C347537A403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mB0DC22C5E6215762B48DB2327ECA420CA28D7DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mF7AAA395B023AE7142F1DD3F8BF0F674D8266BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m281E26914BE8342EC900CD763C3271F213B23088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m41F93EFE7F1942001F0EF5CCD5A070B493366893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorViewOfEnum_1__ctor_m96DAD23AC4375573998F2162864196A48085481A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorViewOfObject_1__ctor_mA6802B3FF780D1128D3A7E92E49B60813A38EBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_mA34373257ED1CE1A0A4C569654CFB1265FCAD67C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_m1D5A455FE43A85E0795FC4401BCCE0C9045DB59B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C;;
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com;
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com;;
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke;
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke;;
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542;;
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com;
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com;;
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke;
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke;;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t196934527648DC9496A18E44399995F1514303AB 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFBFBBFD7EDFB0814A1CB8EDD9F90866A0FC53949* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t210153F1F8212198831F6F9EAE73D983EFBFCA39 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4AB4F32951061E5175079C2C16E65FA0D43B336B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___entries_1)); }
	inline EntryU5BU5D_tFBFBBFD7EDFB0814A1CB8EDD9F90866A0FC53949* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFBFBBFD7EDFB0814A1CB8EDD9F90866A0FC53949** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFBFBBFD7EDFB0814A1CB8EDD9F90866A0FC53949* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___keys_7)); }
	inline KeyCollection_t210153F1F8212198831F6F9EAE73D983EFBFCA39 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t210153F1F8212198831F6F9EAE73D983EFBFCA39 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t210153F1F8212198831F6F9EAE73D983EFBFCA39 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ___values_8)); }
	inline ValueCollection_t4AB4F32951061E5175079C2C16E65FA0D43B336B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4AB4F32951061E5175079C2C16E65FA0D43B336B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4AB4F32951061E5175079C2C16E65FA0D43B336B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784, ___m_valueFactory_2)); }
	inline Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217, ___m_valueFactory_2)); }
	inline Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331, ___m_valueFactory_2)); }
	inline Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_tD6D79AA0B3230EF5C7023AEBF730E7FC74EFDC60 * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tD2E530BF1A1F01B124CAC0E8EFC381C6E1986853 * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888, ____constructor_0)); }
	inline Func_1_tD6D79AA0B3230EF5C7023AEBF730E7FC74EFDC60 * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_tD6D79AA0B3230EF5C7023AEBF730E7FC74EFDC60 ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_tD6D79AA0B3230EF5C7023AEBF730E7FC74EFDC60 * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888, ____instance_1)); }
	inline WeakReference_1_tD2E530BF1A1F01B124CAC0E8EFC381C6E1986853 * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_tD2E530BF1A1F01B124CAC0E8EFC381C6E1986853 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_tD2E530BF1A1F01B124CAC0E8EFC381C6E1986853 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// WinRT.DllModule
struct DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679  : public RuntimeObject
{
public:

public:
};

struct DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 * ____cache_0;

public:
	inline static int32_t get_offset_of__cache_0() { return static_cast<int32_t>(offsetof(DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_StaticFields, ____cache_0)); }
	inline Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 * get__cache_0() const { return ____cache_0; }
	inline Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 ** get_address_of__cache_0() { return &____cache_0; }
	inline void set__cache_0(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 * value)
	{
		____cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface
	IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6> Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface6
	Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * ____interface6_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3, ____interface_0)); }
	inline IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * get__interface_0() const { return ____interface_0; }
	inline IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}

	inline static int32_t get_offset_of__interface6_1() { return static_cast<int32_t>(offsetof(HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3, ____interface6_1)); }
	inline Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * get__interface6_1() const { return ____interface6_1; }
	inline Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 ** get_address_of__interface6_1() { return &____interface6_1; }
	inline void set__interface6_1(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * value)
	{
		____interface6_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface6_1), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::_interface
	IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE, ____interface_0)); }
	inline IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * get__interface_0() const { return ____interface_0; }
	inline IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface
	IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4> Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface4
	Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * ____interface4_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62, ____interface_0)); }
	inline IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * get__interface_0() const { return ____interface_0; }
	inline IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}

	inline static int32_t get_offset_of__interface4_1() { return static_cast<int32_t>(offsetof(HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62, ____interface4_1)); }
	inline Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * get__interface4_1() const { return ____interface4_1; }
	inline Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 ** get_address_of__interface4_1() { return &____interface4_1; }
	inline void set__interface4_1(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * value)
	{
		____interface4_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface4_1), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::_interface
	IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352, ____interface_0)); }
	inline IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * get__interface_0() const { return ____interface_0; }
	inline IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::_interface
	IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D, ____interface_0)); }
	inline IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * get__interface_0() const { return ____interface_0; }
	inline IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface
	IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface2
	Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * ____interface2_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB, ____interface_0)); }
	inline IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * get__interface_0() const { return ____interface_0; }
	inline IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}

	inline static int32_t get_offset_of__interface2_1() { return static_cast<int32_t>(offsetof(HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB, ____interface2_1)); }
	inline Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * get__interface2_1() const { return ____interface2_1; }
	inline Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 ** get_address_of__interface2_1() { return &____interface2_1; }
	inline void set__interface2_1(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * value)
	{
		____interface2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface2_1), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera::_obj
	ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A, ____obj_0)); }
	inline ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::_obj
	ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39, ____obj_0)); }
	inline ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::_obj
	ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D, ____obj_0)); }
	inline ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::_obj
	ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF, ____obj_0)); }
	inline ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::_obj
	ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138, ____obj_0)); }
	inline ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFrame::_obj
	ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254, ____obj_0)); }
	inline ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::_obj
	ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548, ____obj_0)); }
	inline ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::_obj
	ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A, ____obj_0)); }
	inline ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::_obj
	ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25, ____obj_0)); }
	inline ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// WinRT.Platform
struct Platform_t5182C05757C0E260A460F6102C7C816FA13FC437  : public RuntimeObject
{
public:

public:
};

struct Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields
{
public:
	// WinRT.Platform/IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;

public:
	inline static int32_t get_offset_of__platformLinkage_0() { return static_cast<int32_t>(offsetof(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields, ____platformLinkage_0)); }
	inline RuntimeObject* get__platformLinkage_0() const { return ____platformLinkage_0; }
	inline RuntimeObject** get_address_of__platformLinkage_0() { return &____platformLinkage_0; }
	inline void set__platformLinkage_0(RuntimeObject* value)
	{
		____platformLinkage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____platformLinkage_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c
struct U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<>9
	U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * ___U3CU3E9_0;
	// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<>9__6_0
	CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields, ___U3CU3E9__6_0_1)); }
	inline CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c
struct U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<>9
	U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<>9__6_0
	Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C  : public RuntimeObject
{
public:

public:
};


// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * ___Release_2;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___QueryInterface_0)); }
	inline _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD ** get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * value)
	{
		___QueryInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___AddRef_1)); }
	inline _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * get_AddRef_1() const { return ___AddRef_1; }
	inline _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 ** get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * value)
	{
		___AddRef_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddRef_1), (void*)value);
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542, ___Release_2)); }
	inline _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * get_Release_2() const { return ___Release_2; }
	inline _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 ** get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * value)
	{
		___Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Release_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// WinRT.Interop._Bool
struct _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA 
{
public:
	// System.Int32 WinRT.Interop._Bool::RawValue
	int32_t ___RawValue_0;

public:
	inline static int32_t get_offset_of_RawValue_0() { return static_cast<int32_t>(offsetof(_Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA, ___RawValue_0)); }
	inline int32_t get_RawValue_0() const { return ___RawValue_0; }
	inline int32_t* get_address_of_RawValue_0() { return &___RawValue_0; }
	inline void set_RawValue_0(int32_t value)
	{
		___RawValue_0 = value;
	}
};


// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum> WinRT.VectorViewOfEnum`1::_obj
	ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * ____obj_0;
	// System.Guid WinRT.VectorViewOfEnum`1::_iidIterable
	Guid_t  ____iidIterable_1;
	// System.Func`2<System.Int32,T> WinRT.VectorViewOfEnum`1::_castToEnum
	Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * ____castToEnum_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2, ____obj_0)); }
	inline ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__iidIterable_1() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2, ____iidIterable_1)); }
	inline Guid_t  get__iidIterable_1() const { return ____iidIterable_1; }
	inline Guid_t * get_address_of__iidIterable_1() { return &____iidIterable_1; }
	inline void set__iidIterable_1(Guid_t  value)
	{
		____iidIterable_1 = value;
	}

	inline static int32_t get_offset_of__castToEnum_2() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2, ____castToEnum_2)); }
	inline Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * get__castToEnum_2() const { return ____castToEnum_2; }
	inline Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 ** get_address_of__castToEnum_2() { return &____castToEnum_2; }
	inline void set__castToEnum_2(Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * value)
	{
		____castToEnum_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____castToEnum_2), (void*)value);
	}
};


// WinRT._VectorOfObjectBase`2<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct _VectorOfObjectBase_2_t3DAC7775A18DBE0B0783427178ECC29194CB8BA4  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<I> WinRT._VectorOfObjectBase`2::_obj
	ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ____obj_0;
	// System.Guid WinRT._VectorOfObjectBase`2::_iidIterable
	Guid_t  ____iidIterable_1;
	// WinRT._VectorOfObjectBase`2/CreateT<T,I> WinRT._VectorOfObjectBase`2::_createT
	CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * ____createT_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t3DAC7775A18DBE0B0783427178ECC29194CB8BA4, ____obj_0)); }
	inline ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__iidIterable_1() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t3DAC7775A18DBE0B0783427178ECC29194CB8BA4, ____iidIterable_1)); }
	inline Guid_t  get__iidIterable_1() const { return ____iidIterable_1; }
	inline Guid_t * get_address_of__iidIterable_1() { return &____iidIterable_1; }
	inline void set__iidIterable_1(Guid_t  value)
	{
		____iidIterable_1 = value;
	}

	inline static int32_t get_offset_of__createT_2() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_t3DAC7775A18DBE0B0783427178ECC29194CB8BA4, ____createT_2)); }
	inline CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * get__createT_2() const { return ____createT_2; }
	inline CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 ** get_address_of__createT_2() { return &____createT_2; }
	inline void set__createT_2(CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * value)
	{
		____createT_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____createT_2), (void*)value);
	}
};


// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod
struct HolographicDepthReprojectionMethod_tF9945DD977D85952A1F8024B1D1185F19D18EAEC 
{
public:
	// System.Int32 Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_tF9945DD977D85952A1F8024B1D1185F19D18EAEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Windows.Graphics.Holographic.IID
struct IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C  : public RuntimeObject
{
public:

public:
};

struct IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields
{
public:
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicCameraPose
	Guid_t  ___IIterableOfHolographicCameraPose_0;
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicDepthReprojectionMethod
	Guid_t  ___IIterableOfHolographicDepthReprojectionMethod_1;

public:
	inline static int32_t get_offset_of_IIterableOfHolographicCameraPose_0() { return static_cast<int32_t>(offsetof(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields, ___IIterableOfHolographicCameraPose_0)); }
	inline Guid_t  get_IIterableOfHolographicCameraPose_0() const { return ___IIterableOfHolographicCameraPose_0; }
	inline Guid_t * get_address_of_IIterableOfHolographicCameraPose_0() { return &___IIterableOfHolographicCameraPose_0; }
	inline void set_IIterableOfHolographicCameraPose_0(Guid_t  value)
	{
		___IIterableOfHolographicCameraPose_0 = value;
	}

	inline static int32_t get_offset_of_IIterableOfHolographicDepthReprojectionMethod_1() { return static_cast<int32_t>(offsetof(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields, ___IIterableOfHolographicDepthReprojectionMethod_1)); }
	inline Guid_t  get_IIterableOfHolographicDepthReprojectionMethod_1() const { return ___IIterableOfHolographicDepthReprojectionMethod_1; }
	inline Guid_t * get_address_of_IIterableOfHolographicDepthReprojectionMethod_1() { return &___IIterableOfHolographicDepthReprojectionMethod_1; }
	inline void set_IIterableOfHolographicDepthReprojectionMethod_1(Guid_t  value)
	{
		___IIterableOfHolographicDepthReprojectionMethod_1 = value;
	}
};


// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl/_GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl/_GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * ___GetTrustLevel_3;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetIids_1() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetIids_1)); }
	inline _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * get_GetIids_1() const { return ___GetIids_1; }
	inline _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 ** get_address_of_GetIids_1() { return &___GetIids_1; }
	inline void set_GetIids_1(_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * value)
	{
		___GetIids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetIids_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetRuntimeClassName_2() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetRuntimeClassName_2)); }
	inline _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * get_GetRuntimeClassName_2() const { return ___GetRuntimeClassName_2; }
	inline _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B ** get_address_of_GetRuntimeClassName_2() { return &___GetRuntimeClassName_2; }
	inline void set_GetRuntimeClassName_2(_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * value)
	{
		___GetRuntimeClassName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRuntimeClassName_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrustLevel_3() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C, ___GetTrustLevel_3)); }
	inline _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * get_GetTrustLevel_3() const { return ___GetTrustLevel_3; }
	inline _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 ** get_address_of_GetTrustLevel_3() { return &___GetTrustLevel_3; }
	inline void set_GetTrustLevel_3(_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * value)
	{
		___GetTrustLevel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrustLevel_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 
{
public:
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject * ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____module_0)); }
	inline RuntimeObject * get__module_0() const { return ____module_0; }
	inline RuntimeObject ** get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(RuntimeObject * value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____module_0), (void*)value);
	}

	inline static int32_t get_offset_of__refCountPtr_1() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____refCountPtr_1)); }
	inline int32_t* get__refCountPtr_1() const { return ____refCountPtr_1; }
	inline int32_t** get_address_of__refCountPtr_1() { return &____refCountPtr_1; }
	inline void set__refCountPtr_1(int32_t* value)
	{
		____refCountPtr_1 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_2() { return static_cast<int32_t>(offsetof(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4, ____nativeHandle_2)); }
	inline intptr_t get__nativeHandle_2() const { return ____nativeHandle_2; }
	inline intptr_t* get_address_of__nativeHandle_2() { return &____nativeHandle_2; }
	inline void set__nativeHandle_2(intptr_t value)
	{
		____nativeHandle_2 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// WinRT.TrustLevel
struct TrustLevel_tE80AA58FB045BA899443BF60BCD63B08AB4745FB 
{
public:
	// System.Int32 WinRT.TrustLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrustLevel_tE80AA58FB045BA899443BF60BCD63B08AB4745FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WinRT.VftblPtr
struct VftblPtr_t7AAA7BB826BFEF4BAA465A4740E49C7FBEC3FB32 
{
public:
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;

public:
	inline static int32_t get_offset_of_Vftbl_0() { return static_cast<int32_t>(offsetof(VftblPtr_t7AAA7BB826BFEF4BAA465A4740E49C7FBEC3FB32, ___Vftbl_0)); }
	inline intptr_t get_Vftbl_0() const { return ___Vftbl_0; }
	inline intptr_t* get_address_of_Vftbl_0() { return &___Vftbl_0; }
	inline void set_Vftbl_0(intptr_t value)
	{
		___Vftbl_0 = value;
	}
};


// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD  : public _VectorOfObjectBase_2_t3DAC7775A18DBE0B0783427178ECC29194CB8BA4
{
public:

public:
};


// WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfEnum::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfEnum::get_First
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_First_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_First_1() { return static_cast<int32_t>(offsetof(IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37, ___get_First_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_First_1() const { return ___get_First_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_First_1() { return &___get_First_1; }
	inline void set_get_First_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_First_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_First_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};

// WinRT.Interop.IIterableOfObject
struct IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfObject::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfObject::get_First
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_First_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_First_1() { return static_cast<int32_t>(offsetof(IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330, ___get_First_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_First_1() const { return ___get_First_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_First_1() { return &___get_First_1; }
	inline void set_get_First_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_First_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_First_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};

// WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfEnum::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IIteratorOfEnum::get_Current
	_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfEnum::get_HasCurrent
	_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfEnum/_MoveNext WinRT.Interop.IIteratorOfEnum::MoveNext
	_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * ___MoveNext_3;
	// WinRT.Interop.IIteratorOfEnum/_GetMany WinRT.Interop.IIteratorOfEnum::GetMany
	_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Current_1() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A, ___get_Current_1)); }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * get_get_Current_1() const { return ___get_Current_1; }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC ** get_address_of_get_Current_1() { return &___get_Current_1; }
	inline void set_get_Current_1(_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * value)
	{
		___get_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_HasCurrent_2() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A, ___get_HasCurrent_2)); }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * get_get_HasCurrent_2() const { return ___get_HasCurrent_2; }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B ** get_address_of_get_HasCurrent_2() { return &___get_HasCurrent_2; }
	inline void set_get_HasCurrent_2(_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * value)
	{
		___get_HasCurrent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_HasCurrent_2), (void*)value);
	}

	inline static int32_t get_offset_of_MoveNext_3() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A, ___MoveNext_3)); }
	inline _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * get_MoveNext_3() const { return ___MoveNext_3; }
	inline _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 ** get_address_of_MoveNext_3() { return &___MoveNext_3; }
	inline void set_MoveNext_3(_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * value)
	{
		___MoveNext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveNext_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A, ___GetMany_4)); }
	inline _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMany_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfObject::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIteratorOfObject::get_Current
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfObject::get_HasCurrent
	_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfObject/_MoveNext WinRT.Interop.IIteratorOfObject::MoveNext
	_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * ___MoveNext_3;
	// WinRT.Interop.IIteratorOfObject/_GetMany WinRT.Interop.IIteratorOfObject::GetMany
	_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Current_1() { return static_cast<int32_t>(offsetof(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B, ___get_Current_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_Current_1() const { return ___get_Current_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_Current_1() { return &___get_Current_1; }
	inline void set_get_Current_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_HasCurrent_2() { return static_cast<int32_t>(offsetof(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B, ___get_HasCurrent_2)); }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * get_get_HasCurrent_2() const { return ___get_HasCurrent_2; }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B ** get_address_of_get_HasCurrent_2() { return &___get_HasCurrent_2; }
	inline void set_get_HasCurrent_2(_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * value)
	{
		___get_HasCurrent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_HasCurrent_2), (void*)value);
	}

	inline static int32_t get_offset_of_MoveNext_3() { return static_cast<int32_t>(offsetof(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B, ___MoveNext_3)); }
	inline _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * get_MoveNext_3() const { return ___MoveNext_3; }
	inline _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 ** get_address_of_MoveNext_3() { return &___MoveNext_3; }
	inline void set_MoveNext_3(_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * value)
	{
		___MoveNext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveNext_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B, ___GetMany_4)); }
	inline _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMany_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.IObjectReference
struct IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ___U3CVftblIUnknownU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_ThisPtr_0() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___ThisPtr_0)); }
	inline intptr_t get_ThisPtr_0() const { return ___ThisPtr_0; }
	inline intptr_t* get_address_of_ThisPtr_0() { return &___ThisPtr_0; }
	inline void set_ThisPtr_0(intptr_t value)
	{
		___ThisPtr_0 = value;
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___Module_1)); }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  get_Module_1() const { return ___Module_1; }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  value)
	{
		___Module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Module_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CVftblIUnknownU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76, ___U3CVftblIUnknownU3Ek__BackingField_2)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get_U3CVftblIUnknownU3Ek__BackingField_2() const { return ___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of_U3CVftblIUnknownU3Ek__BackingField_2() { return &___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline void set_U3CVftblIUnknownU3Ek__BackingField_2(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		___U3CVftblIUnknownU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___Release_2), (void*)NULL);
		#endif
	}
};


// WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfEnum::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfEnum/_GetAt WinRT.Interop.IVectorViewOfEnum::GetAt
	_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfEnum::get_Size
	_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * ___get_Size_2;
	// WinRT.Interop.IVectorViewOfEnum/_IndexOf WinRT.Interop.IVectorViewOfEnum::IndexOf
	_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfEnum/_GetMany WinRT.Interop.IVectorViewOfEnum::GetMany
	_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetAt_1() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465, ___GetAt_1)); }
	inline _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * get_GetAt_1() const { return ___GetAt_1; }
	inline _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF ** get_address_of_GetAt_1() { return &___GetAt_1; }
	inline void set_GetAt_1(_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * value)
	{
		___GetAt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetAt_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Size_2() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465, ___get_Size_2)); }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * get_get_Size_2() const { return ___get_Size_2; }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 ** get_address_of_get_Size_2() { return &___get_Size_2; }
	inline void set_get_Size_2(_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * value)
	{
		___get_Size_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Size_2), (void*)value);
	}

	inline static int32_t get_offset_of_IndexOf_3() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465, ___IndexOf_3)); }
	inline _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * get_IndexOf_3() const { return ___IndexOf_3; }
	inline _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 ** get_address_of_IndexOf_3() { return &___IndexOf_3; }
	inline void set_IndexOf_3(_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * value)
	{
		___IndexOf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndexOf_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465, ___GetMany_4)); }
	inline _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMany_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfObject::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfObject/_GetAt WinRT.Interop.IVectorViewOfObject::GetAt
	_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfObject::get_Size
	_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * ___get_Size_2;
	// WinRT.Interop.IVectorViewOfObject/_IndexOf WinRT.Interop.IVectorViewOfObject::IndexOf
	_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfObject/_GetMany WinRT.Interop.IVectorViewOfObject::GetMany
	_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetAt_1() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___GetAt_1)); }
	inline _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * get_GetAt_1() const { return ___GetAt_1; }
	inline _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 ** get_address_of_GetAt_1() { return &___GetAt_1; }
	inline void set_GetAt_1(_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * value)
	{
		___GetAt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetAt_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Size_2() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___get_Size_2)); }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * get_get_Size_2() const { return ___get_Size_2; }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 ** get_address_of_get_Size_2() { return &___get_Size_2; }
	inline void set_get_Size_2(_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * value)
	{
		___get_Size_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Size_2), (void*)value);
	}

	inline static int32_t get_offset_of_IndexOf_3() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___IndexOf_3)); }
	inline _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * get_IndexOf_3() const { return ___IndexOf_3; }
	inline _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 ** get_address_of_IndexOf_3() { return &___IndexOf_3; }
	inline void set_IndexOf_3(_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * value)
	{
		___IndexOf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndexOf_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB, ___GetMany_4)); }
	inline _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMany_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// WinRT.WinrtModule
struct WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18  : public RuntimeObject
{
public:
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ____module_0;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18, ____module_0)); }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  get__module_0() const { return ____module_0; }
	inline ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____module_0))->____module_0), (void*)NULL);
	}
};

struct WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_StaticFields
{
public:
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_StaticFields, ____instance_1)); }
	inline WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * get__instance_1() const { return ____instance_1; }
	inline WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_ViewportScaleFactor
	intptr_t ___get_ViewportScaleFactor_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::put_ViewportScaleFactor
	intptr_t ___put_ViewportScaleFactor_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_IsStereo
	intptr_t ___get_IsStereo_4;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_Id
	_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * ___get_Id_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::SetNearPlaneDistance
	intptr_t ___SetNearPlaneDistance_6;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::SetFarPlaneDistance
	intptr_t ___SetFarPlaneDistance_7;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_RenderTargetSize_1() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___get_RenderTargetSize_1)); }
	inline intptr_t get_get_RenderTargetSize_1() const { return ___get_RenderTargetSize_1; }
	inline intptr_t* get_address_of_get_RenderTargetSize_1() { return &___get_RenderTargetSize_1; }
	inline void set_get_RenderTargetSize_1(intptr_t value)
	{
		___get_RenderTargetSize_1 = value;
	}

	inline static int32_t get_offset_of_get_ViewportScaleFactor_2() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___get_ViewportScaleFactor_2)); }
	inline intptr_t get_get_ViewportScaleFactor_2() const { return ___get_ViewportScaleFactor_2; }
	inline intptr_t* get_address_of_get_ViewportScaleFactor_2() { return &___get_ViewportScaleFactor_2; }
	inline void set_get_ViewportScaleFactor_2(intptr_t value)
	{
		___get_ViewportScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_put_ViewportScaleFactor_3() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___put_ViewportScaleFactor_3)); }
	inline intptr_t get_put_ViewportScaleFactor_3() const { return ___put_ViewportScaleFactor_3; }
	inline intptr_t* get_address_of_put_ViewportScaleFactor_3() { return &___put_ViewportScaleFactor_3; }
	inline void set_put_ViewportScaleFactor_3(intptr_t value)
	{
		___put_ViewportScaleFactor_3 = value;
	}

	inline static int32_t get_offset_of_get_IsStereo_4() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___get_IsStereo_4)); }
	inline intptr_t get_get_IsStereo_4() const { return ___get_IsStereo_4; }
	inline intptr_t* get_address_of_get_IsStereo_4() { return &___get_IsStereo_4; }
	inline void set_get_IsStereo_4(intptr_t value)
	{
		___get_IsStereo_4 = value;
	}

	inline static int32_t get_offset_of_get_Id_5() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___get_Id_5)); }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * get_get_Id_5() const { return ___get_Id_5; }
	inline _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 ** get_address_of_get_Id_5() { return &___get_Id_5; }
	inline void set_get_Id_5(_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * value)
	{
		___get_Id_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Id_5), (void*)value);
	}

	inline static int32_t get_offset_of_SetNearPlaneDistance_6() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___SetNearPlaneDistance_6)); }
	inline intptr_t get_SetNearPlaneDistance_6() const { return ___SetNearPlaneDistance_6; }
	inline intptr_t* get_address_of_SetNearPlaneDistance_6() { return &___SetNearPlaneDistance_6; }
	inline void set_SetNearPlaneDistance_6(intptr_t value)
	{
		___SetNearPlaneDistance_6 = value;
	}

	inline static int32_t get_offset_of_SetFarPlaneDistance_7() { return static_cast<int32_t>(offsetof(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B, ___SetFarPlaneDistance_7)); }
	inline intptr_t get_SetFarPlaneDistance_7() const { return ___SetFarPlaneDistance_7; }
	inline intptr_t* get_address_of_SetFarPlaneDistance_7() { return &___SetFarPlaneDistance_7; }
	inline void set_SetFarPlaneDistance_7(intptr_t value)
	{
		___SetFarPlaneDistance_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl::get_ViewConfiguration
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_ViewConfiguration_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_ViewConfiguration_1() { return static_cast<int32_t>(offsetof(Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2, ___get_ViewConfiguration_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_ViewConfiguration_1() const { return ___get_ViewConfiguration_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_ViewConfiguration_1() { return &___get_ViewConfiguration_1; }
	inline void set_get_ViewConfiguration_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_ViewConfiguration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_ViewConfiguration_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl::get_HolographicCamera
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_HolographicCamera_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_HolographicCamera_1() { return static_cast<int32_t>(offsetof(Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404, ___get_HolographicCamera_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_HolographicCamera_1() const { return ___get_HolographicCamera_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_HolographicCamera_1() { return &___get_HolographicCamera_1; }
	inline void set_get_HolographicCamera_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_HolographicCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_HolographicCamera_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6 
{
public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t7534986437606D18803D5F504E1104A9616045E6 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::get_DepthReprojectionMethod
	_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * ___get_DepthReprojectionMethod_1;
	// WinRT.Interop._put_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::put_DepthReprojectionMethod
	_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * ___put_DepthReprojectionMethod_2;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t7534986437606D18803D5F504E1104A9616045E6, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_DepthReprojectionMethod_1() { return static_cast<int32_t>(offsetof(Vftbl_t7534986437606D18803D5F504E1104A9616045E6, ___get_DepthReprojectionMethod_1)); }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * get_get_DepthReprojectionMethod_1() const { return ___get_DepthReprojectionMethod_1; }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC ** get_address_of_get_DepthReprojectionMethod_1() { return &___get_DepthReprojectionMethod_1; }
	inline void set_get_DepthReprojectionMethod_1(_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * value)
	{
		___get_DepthReprojectionMethod_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_DepthReprojectionMethod_1), (void*)value);
	}

	inline static int32_t get_offset_of_put_DepthReprojectionMethod_2() { return static_cast<int32_t>(offsetof(Vftbl_t7534986437606D18803D5F504E1104A9616045E6, ___put_DepthReprojectionMethod_2)); }
	inline _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * get_put_DepthReprojectionMethod_2() const { return ___put_DepthReprojectionMethod_2; }
	inline _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF ** get_address_of_put_DepthReprojectionMethod_2() { return &___put_DepthReprojectionMethod_2; }
	inline void set_put_DepthReprojectionMethod_2(_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * value)
	{
		___put_DepthReprojectionMethod_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___put_DepthReprojectionMethod_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_AddedCameras
	intptr_t ___get_AddedCameras_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_RemovedCameras
	intptr_t ___get_RemovedCameras_2;
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::GetRenderingParameters
	_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * ___GetRenderingParameters_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_Duration
	intptr_t ___get_Duration_4;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_CurrentPrediction
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_CurrentPrediction_5;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_AddedCameras_1() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___get_AddedCameras_1)); }
	inline intptr_t get_get_AddedCameras_1() const { return ___get_AddedCameras_1; }
	inline intptr_t* get_address_of_get_AddedCameras_1() { return &___get_AddedCameras_1; }
	inline void set_get_AddedCameras_1(intptr_t value)
	{
		___get_AddedCameras_1 = value;
	}

	inline static int32_t get_offset_of_get_RemovedCameras_2() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___get_RemovedCameras_2)); }
	inline intptr_t get_get_RemovedCameras_2() const { return ___get_RemovedCameras_2; }
	inline intptr_t* get_address_of_get_RemovedCameras_2() { return &___get_RemovedCameras_2; }
	inline void set_get_RemovedCameras_2(intptr_t value)
	{
		___get_RemovedCameras_2 = value;
	}

	inline static int32_t get_offset_of_GetRenderingParameters_3() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___GetRenderingParameters_3)); }
	inline _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * get_GetRenderingParameters_3() const { return ___GetRenderingParameters_3; }
	inline _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E ** get_address_of_GetRenderingParameters_3() { return &___GetRenderingParameters_3; }
	inline void set_GetRenderingParameters_3(_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * value)
	{
		___GetRenderingParameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRenderingParameters_3), (void*)value);
	}

	inline static int32_t get_offset_of_get_Duration_4() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___get_Duration_4)); }
	inline intptr_t get_get_Duration_4() const { return ___get_Duration_4; }
	inline intptr_t* get_address_of_get_Duration_4() { return &___get_Duration_4; }
	inline void set_get_Duration_4(intptr_t value)
	{
		___get_Duration_4 = value;
	}

	inline static int32_t get_offset_of_get_CurrentPrediction_5() { return static_cast<int32_t>(offsetof(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557, ___get_CurrentPrediction_5)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_CurrentPrediction_5() const { return ___get_CurrentPrediction_5; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_CurrentPrediction_5() { return &___get_CurrentPrediction_5; }
	inline void set_get_CurrentPrediction_5(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_CurrentPrediction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_CurrentPrediction_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl::get_CameraPoses
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_CameraPoses_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_CameraPoses_1() { return static_cast<int32_t>(offsetof(Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E, ___get_CameraPoses_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_CameraPoses_1() const { return ___get_CameraPoses_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_CameraPoses_1() { return &___get_CameraPoses_1; }
	inline void set_get_CameraPoses_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_CameraPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_CameraPoses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_NativeRenderTargetSize
	intptr_t ___get_NativeRenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::RequestRenderTargetSize
	intptr_t ___RequestRenderTargetSize_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_SupportedPixelFormats
	intptr_t ___get_SupportedPixelFormats_4;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_PixelFormat
	intptr_t ___get_PixelFormat_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::put_PixelFormat
	intptr_t ___put_PixelFormat_6;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_IsStereo
	_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * ___get_IsStereo_7;
	// WinRT.Interop._get_PropertyAsDouble Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_RefreshRate
	_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * ___get_RefreshRate_8;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_Kind
	_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * ___get_Kind_9;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_Display
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_Display_10;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_IsEnabled
	_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * ___get_IsEnabled_11;
	// WinRT.Interop._put_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::put_IsEnabled
	_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * ___put_IsEnabled_12;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_NativeRenderTargetSize_1() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_NativeRenderTargetSize_1)); }
	inline intptr_t get_get_NativeRenderTargetSize_1() const { return ___get_NativeRenderTargetSize_1; }
	inline intptr_t* get_address_of_get_NativeRenderTargetSize_1() { return &___get_NativeRenderTargetSize_1; }
	inline void set_get_NativeRenderTargetSize_1(intptr_t value)
	{
		___get_NativeRenderTargetSize_1 = value;
	}

	inline static int32_t get_offset_of_get_RenderTargetSize_2() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_RenderTargetSize_2)); }
	inline intptr_t get_get_RenderTargetSize_2() const { return ___get_RenderTargetSize_2; }
	inline intptr_t* get_address_of_get_RenderTargetSize_2() { return &___get_RenderTargetSize_2; }
	inline void set_get_RenderTargetSize_2(intptr_t value)
	{
		___get_RenderTargetSize_2 = value;
	}

	inline static int32_t get_offset_of_RequestRenderTargetSize_3() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___RequestRenderTargetSize_3)); }
	inline intptr_t get_RequestRenderTargetSize_3() const { return ___RequestRenderTargetSize_3; }
	inline intptr_t* get_address_of_RequestRenderTargetSize_3() { return &___RequestRenderTargetSize_3; }
	inline void set_RequestRenderTargetSize_3(intptr_t value)
	{
		___RequestRenderTargetSize_3 = value;
	}

	inline static int32_t get_offset_of_get_SupportedPixelFormats_4() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_SupportedPixelFormats_4)); }
	inline intptr_t get_get_SupportedPixelFormats_4() const { return ___get_SupportedPixelFormats_4; }
	inline intptr_t* get_address_of_get_SupportedPixelFormats_4() { return &___get_SupportedPixelFormats_4; }
	inline void set_get_SupportedPixelFormats_4(intptr_t value)
	{
		___get_SupportedPixelFormats_4 = value;
	}

	inline static int32_t get_offset_of_get_PixelFormat_5() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_PixelFormat_5)); }
	inline intptr_t get_get_PixelFormat_5() const { return ___get_PixelFormat_5; }
	inline intptr_t* get_address_of_get_PixelFormat_5() { return &___get_PixelFormat_5; }
	inline void set_get_PixelFormat_5(intptr_t value)
	{
		___get_PixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_put_PixelFormat_6() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___put_PixelFormat_6)); }
	inline intptr_t get_put_PixelFormat_6() const { return ___put_PixelFormat_6; }
	inline intptr_t* get_address_of_put_PixelFormat_6() { return &___put_PixelFormat_6; }
	inline void set_put_PixelFormat_6(intptr_t value)
	{
		___put_PixelFormat_6 = value;
	}

	inline static int32_t get_offset_of_get_IsStereo_7() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_IsStereo_7)); }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * get_get_IsStereo_7() const { return ___get_IsStereo_7; }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B ** get_address_of_get_IsStereo_7() { return &___get_IsStereo_7; }
	inline void set_get_IsStereo_7(_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * value)
	{
		___get_IsStereo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_IsStereo_7), (void*)value);
	}

	inline static int32_t get_offset_of_get_RefreshRate_8() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_RefreshRate_8)); }
	inline _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * get_get_RefreshRate_8() const { return ___get_RefreshRate_8; }
	inline _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 ** get_address_of_get_RefreshRate_8() { return &___get_RefreshRate_8; }
	inline void set_get_RefreshRate_8(_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * value)
	{
		___get_RefreshRate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_RefreshRate_8), (void*)value);
	}

	inline static int32_t get_offset_of_get_Kind_9() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_Kind_9)); }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * get_get_Kind_9() const { return ___get_Kind_9; }
	inline _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC ** get_address_of_get_Kind_9() { return &___get_Kind_9; }
	inline void set_get_Kind_9(_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * value)
	{
		___get_Kind_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Kind_9), (void*)value);
	}

	inline static int32_t get_offset_of_get_Display_10() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_Display_10)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_Display_10() const { return ___get_Display_10; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_Display_10() { return &___get_Display_10; }
	inline void set_get_Display_10(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_Display_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Display_10), (void*)value);
	}

	inline static int32_t get_offset_of_get_IsEnabled_11() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___get_IsEnabled_11)); }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * get_get_IsEnabled_11() const { return ___get_IsEnabled_11; }
	inline _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B ** get_address_of_get_IsEnabled_11() { return &___get_IsEnabled_11; }
	inline void set_get_IsEnabled_11(_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * value)
	{
		___get_IsEnabled_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_IsEnabled_11), (void*)value);
	}

	inline static int32_t get_offset_of_put_IsEnabled_12() { return static_cast<int32_t>(offsetof(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C, ___put_IsEnabled_12)); }
	inline _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * get_put_IsEnabled_12() const { return ___put_IsEnabled_12; }
	inline _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB ** get_address_of_put_IsEnabled_12() { return &___put_IsEnabled_12; }
	inline void set_put_IsEnabled_12(_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * value)
	{
		___put_IsEnabled_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___put_IsEnabled_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl::IInspectableVftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl::get_SupportedDepthReprojectionMethods
	_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * ___get_SupportedDepthReprojectionMethods_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_SupportedDepthReprojectionMethods_1() { return static_cast<int32_t>(offsetof(Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF, ___get_SupportedDepthReprojectionMethods_1)); }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * get_get_SupportedDepthReprojectionMethods_1() const { return ___get_SupportedDepthReprojectionMethods_1; }
	inline _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E ** get_address_of_get_SupportedDepthReprojectionMethods_1() { return &___get_SupportedDepthReprojectionMethods_1; }
	inline void set_get_SupportedDepthReprojectionMethods_1(_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * value)
	{
		___get_SupportedDepthReprojectionMethods_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_SupportedDepthReprojectionMethods_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_pinvoke
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_com
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};

// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ___Vftbl_4)); }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7, ___Vftbl_4)); }
	inline IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetAt_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Size_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___IndexOf_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetMany_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ___Vftbl_4)); }
	inline IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetAt_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Size_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___IndexOf_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetMany_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>
struct ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A, ___Vftbl_4)); }
	inline Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Id_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>
struct ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99, ___Vftbl_4)); }
	inline Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_ViewConfiguration_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>
struct ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78, ___Vftbl_4)); }
	inline Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_HolographicCamera_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>
struct ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750, ___Vftbl_4)); }
	inline Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>
struct ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t7534986437606D18803D5F504E1104A9616045E6  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D, ___Vftbl_4)); }
	inline Vftbl_t7534986437606D18803D5F504E1104A9616045E6  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t7534986437606D18803D5F504E1104A9616045E6 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t7534986437606D18803D5F504E1104A9616045E6  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_DepthReprojectionMethod_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___put_DepthReprojectionMethod_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>
struct ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A, ___Vftbl_4)); }
	inline Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetRenderingParameters_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_CurrentPrediction_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>
struct ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A, ___Vftbl_4)); }
	inline Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_CameraPoses_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>
struct ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45, ___Vftbl_4)); }
	inline Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_IsStereo_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_RefreshRate_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Kind_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Display_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_IsEnabled_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___put_IsEnabled_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>
struct ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547  : public IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547, ___Vftbl_4)); }
	inline Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_SupportedDepthReprojectionMethods_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsDouble
struct _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._put_PropertyAsBool
struct _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._put_PropertyAsEnum
struct _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IIteratorOfEnum/_GetMany
struct _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IIteratorOfEnum/_MoveNext
struct _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IIteratorOfObject/_GetMany
struct _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IIteratorOfObject/_MoveNext
struct _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfEnum/_GetAt
struct _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfEnum/_GetMany
struct _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfEnum/_IndexOf
struct _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters
struct _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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

IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_back(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_cleanup(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_back(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_cleanup(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory0, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9_gshared (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5_gshared (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175_gshared (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16_gshared (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateT__ctor_mD2008B6CC85BEB1406D60661067FD4A9CFC62821_gshared (CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.VectorViewOfObject`1<System.Object>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorViewOfObject_1__ctor_m5A6CB7C55EE7F86389E02CB475C7B5BC8F583144_gshared (VectorViewOfObject_1_t0F02C63FA667720224662F26AABE137DFAF551F4 * __this, ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ___obj0, Guid_t  ___iidIterable1, CreateT_tA4043C88FB70BF0A0CB9491F819BF7F07CB5EE0C * ___createT2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45_gshared (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C_gshared (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF34F635F235BA4C4F025AEA14AF093678000493D_gshared (Func_2_tA61B6366518522F75F91364B84D4580178751ED6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.VectorViewOfEnum`1<System.Int32Enum>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorViewOfEnum_1__ctor_m5DB49367071DB12DE008CA8E65FFE920F3C3BD0E_gshared (VectorViewOfEnum_1_t4001437CD1A61D45194365E455CF4C51D8F9EF3F * __this, ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * ___obj0, Guid_t  ___iidIterable1, Func_2_tA61B6366518522F75F91364B84D4580178751ED6 * ___castToEnum2, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakLazy_1_get_Value_m3EABE183E634398B3E466D652D31AD1FBAED5877_gshared (WeakLazy_1_tFC73BDD1B2C65D7FBAD848AA2D7BD2DCCB7BDC95 * __this, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_m15D160574A3D08F35243DC46492F2521C479E9C7_gshared (WeakLazy_1_tFC73BDD1B2C65D7FBAD848AA2D7BD2DCCB7BDC95 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_m49F9153483E7881B0F295D8149596F7CC575D3AB (Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Object System.AppDomain::GetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AppDomain_GetData_m3B7D0B3C44FF35B64775B888BAD9F696FF9C2639 (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_m7DAFCD76DA5FB9209BCD4E035F9538852BCE16C8 (String_t* ___pathName0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m845DF2404CE942976C18573874A1BA227CD7C990 (Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mB251D8B4BA52BF6CFC07A0AA5154046AB3F7E362 (Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * __this, Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 *, Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 *, const RuntimeMethod*))Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared)(__this, ___valueFactory0, method);
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_m4F6A901C5A633381B70DE4D7DF222A6091D75615 (IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::get_Value()
inline IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * Lazy_1_get_Value_mF7AAA395B023AE7142F1DD3F8BF0F674D8266BCD (Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * (*) (Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 *, const RuntimeMethod*))Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * IHolographicCamera6_get_ViewConfiguration_mFD12DECBE5F6C3949866FABC4139EFC99BD7B815 (IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_m7FC69AB8E54F45265A4E52CC4B132513CF9B6E9A (HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * __this, IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * IHolographicCamera6_op_Implicit_m65087A20497B12C8D89B3E2DFBBB9C89B1E61862 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * IHolographicCameraPose_get_HolographicCamera_mA3FACA889EBAEE5378F99A6254BB4EBA4ED76DC2 (IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCamera__ctor_mD23522FD555158C7D879759D72C0D9A35D64D016 (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * __this, IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * ___interface0, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mEEDB960B44D48F86B8D13B747296133B89C40F5C (Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_m298BBC11525DB7A741B41077579FA25245E77928 (Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * __this, Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 *, Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D *, const RuntimeMethod*))Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared)(__this, ___valueFactory0, method);
}
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::get_Value()
inline IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * Lazy_1_get_Value_mB0DC22C5E6215762B48DB2327ECA420CA28D7DEF (Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * (*) (Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 *, const RuntimeMethod*))Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared)(__this, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_m8D54AE33435824878285D19277BEA6A6B80B9F88 (IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * IHolographicCameraRenderingParameters4_op_Implicit_m250E179830F04807A94DAF14047FF930F73BF036 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  WinrtModule_get_Instance_mE5238C758429D4BD1CB6CB9CFDB4D48ED1467EF3 (const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
inline ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D_gshared)(___module0, ___thisPtr1, method);
}
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
inline ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * (*) (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * IHolographicFrame_op_Implicit_mF8D9C4BFEE279F6FA920037F53D49AB818190D2E (ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m2199825112EEEB45B4A346B742159D4DEEAB6A4C (HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * __this, IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * IHolographicFrame_GetRenderingParameters_mD9B3AF8CCE405BC18D724B8FB7C85D99D5F4A444 (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * ___cameraPose0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m416B2C1039903C4E8A05035A52B17DDB8AF5CB4C (HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * __this, IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * IHolographicFrame_get_CurrentPrediction_m22D9D2A2EBB871A37659C43B7E7F8E2FA9CB6AAE (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m2C98EDB3585B4CA778DF3D8D6197AC29EFBF2325 (HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D * __this, IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * ___interface0, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_mE59CCB1D494C077C1F723947987693FD108E861C (IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mFD505EE66843FBFEFA4A03B3820926BE7871B22F (Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mACCB5F79505EC02758C0D46F271FF3256F90EA5D (Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * __this, Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 *, Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 *, const RuntimeMethod*))Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared)(__this, ___valueFactory0, method);
}
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::get_Value()
inline IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * Lazy_1_get_Value_m581C4D970F69488E4A877D578F257C347537A403 (Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * (*) (Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 *, const RuntimeMethod*))Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m45C90F64FEEA68671750AB8E4D531D446E1F92B5 (IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * __this, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * IHolographicViewConfiguration2_op_Implicit_m754B1A7708380B9F097EF9E6F9640DDBE003B812 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_m480C728DB1E16AABAB7F15DBBEC9DDA9E4470206 (IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * __this, ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_mBD83C88FADB098F0D0FE6724E8165DEAD3A1087E (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB (int32_t ___errorCode0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
inline ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * (*) (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * IHolographicCamera6_op_Implicit_m2D627A6A3A8B39B23A9F7AE9554F52C551B7B4DC (ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_mB016BB7C6CCC1C37A6526138099E89A906CABFD2 (IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * __this, ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67 (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * IHolographicViewConfiguration_op_Implicit_mB5C01B8FD80C31EDF798216C7299338DC4E1D77E (ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
inline ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * (*) (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * IHolographicCameraPose_op_Implicit_m6B6F11B15F0FF3BDA12D41E82EEFA16642FFD9EA (ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mC6CC90437DE877083A5C29B69E2C66101925A818 (IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * __this, ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * IHolographicCamera_op_Implicit_m34E8BD6230A807475558DCC3AB854487EB211416 (ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_m00E2D44C55190AB1600791820B8D0304F964B101 (IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * __this, ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
inline ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * (*) (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * IHolographicCameraRenderingParameters4_op_Implicit_m4C34103B19E077AA7234D3F13CC81FB8B9C34F9F (ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_mA2C5DE87B4F55FE17F131714D7FB01AFA18BBDF3 (IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * __this, ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_m2D90F1E6ACF9E9BB6EA4E499FA578A68E1638FCD (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_m6022384FF1859073867EA463F33768A8A665FBA7 (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * ___obj0, const RuntimeMethod* method);
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_m2A732CFEC74896267D938D7EDF5A681547A41025 (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * IHolographicCameraRenderingParameters_op_Implicit_mE3B0C72FB2897F6663992279070041902EF4A019 (ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * IHolographicFramePrediction_op_Implicit_mFE511F9CDD18ED904629E4AE51297E4D8E81629F (ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_mB7FD83E4AD020DFCB8AC0ED393F7EE7E6D355A4A (IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * __this, ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1_gshared)(___module0, ___thisPtr1, method);
}
// System.Void WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
inline void CreateT__ctor_m1E914A9A6B7FC8E11192873E2966AFF41AB9924A (CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 *, RuntimeObject *, intptr_t, const RuntimeMethod*))CreateT__ctor_mD2008B6CC85BEB1406D60661067FD4A9CFC62821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
inline void VectorViewOfObject_1__ctor_mA6802B3FF780D1128D3A7E92E49B60813A38EBEF (VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD * __this, ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * ___obj0, Guid_t  ___iidIterable1, CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * ___createT2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD *, ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 *, Guid_t , CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 *, const RuntimeMethod*))VectorViewOfObject_1__ctor_m5A6CB7C55EE7F86389E02CB475C7B5BC8F583144_gshared)(__this, ___obj0, ___iidIterable1, ___createT2, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_m8253FF56629B61CCBA043488ECFC385B3A9014CB (IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * __this, ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
inline ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * (*) (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * IHolographicViewConfiguration2_op_Implicit_m5C208371E1CF7B975D6493EC967539AA269B884F (ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_m65B941B24A57BB9334019EC6B0BBB9E933057670 (IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * __this, ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * (*) (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C_gshared)(___module0, ___thisPtr1, method);
}
// System.Void System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m81C7BBA40CAC3192E0BF20EAA60A53BA9EE645B8 (Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF34F635F235BA4C4F025AEA14AF093678000493D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
inline void VectorViewOfEnum_1__ctor_m96DAD23AC4375573998F2162864196A48085481A (VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2 * __this, ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * ___obj0, Guid_t  ___iidIterable1, Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * ___castToEnum2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2 *, ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 *, Guid_t , Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 *, const RuntimeMethod*))VectorViewOfEnum_1__ctor_m5DB49367071DB12DE008CA8E65FFE920F3C3BD0E_gshared)(__this, ___obj0, ___iidIterable1, ___castToEnum2, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ModuleReference_AddRef_m31468715D7A9A7D5376D1F573482D6D0168BAA57 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E (int32_t ___cb0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m332E9236008D0A4EE606D414687F436A9DAB7EB7 (const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF (int32_t* ___location0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_m0AC948DD9FD9F72AE575DB9B92C21EDE152E4759 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m9BE2B337D022F359A40036EED7BFCD4401CDD41B (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_mCC0E874C853846E0A82E36971E3FC7BF359C6AA5 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m0DFED97C182CE9363FD92BD874E0125C43AFB8F8 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, const RuntimeMethod* method);
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m663230512BC68A9D0313691D256D7319DF46FAEE (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mB3E9D131EF563C6AE7CE5578E06347DDA04AEC19 (const RuntimeMethod* method);
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 * WeakLazy_1_get_Value_m1D5A455FE43A85E0795FC4401BCCE0C9045DB59B (WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 * (*) (WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 *, const RuntimeMethod*))WeakLazy_1_get_Value_m3EABE183E634398B3E466D652D31AD1FBAED5877_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_mFD33EC13356C6CF6703BFAC5574AC48695786008 (const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ModuleReference_Allocate_m823ADD4854E2A858E0936F5B7CDC45D99975D8B0 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_mA34373257ED1CE1A0A4C569654CFB1265FCAD67C (WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 *, const RuntimeMethod*))WeakLazy_1__ctor_m15D160574A3D08F35243DC46492F2521C479E9C7_gshared)(__this, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF815A9A6DC6DA290F1BCBDBB5617DA239464C113 (U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * __this, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * IHolographicCameraPose_op_Implicit_mB9A5C61150237020BDC05CBBF0605B85CD78BD09 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_mC669309C40BF6DC8BEAF6D56A8D03B5CA4330DB7 (HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * __this, IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * ___interface0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECE966FB605558D86EBF611C4F14548EC184C258 (U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_mE66F48EFDD954961BE010A7E5E731210C3D06A9B (String_t* ___pathName0, const RuntimeMethod* method);
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_mE8C5C4D743E74166C019AB248497FFA9FC0B6570 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m6D7291D25ED726801844B693E99B0807EFD53212 (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_m8110AEE595D1A18223F248808F93B0DBE9F6E9BF (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mB6E94D83EFD431BEA045E988E944B17967C81153 (intptr_t ___hstring0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_mC4244CDFD16223106A9FDE60850A0C69607C2CAD (const RuntimeMethod* method);
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m564BE7F1BDA65F5CD03D79E9D69C73C04CD01856 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_mAA95B50D81874C9EB7AC4ED53F57F0E3213E6ABC (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m258E77E0F1D70575CD1207C7D6A0DC123363D656 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m98BD084D27A169898F2B6C71CBD0B2C7ECD4EFFE (intptr_t ___hstring0, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AddDllDirectory(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
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
// System.Void WinRT.DllModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__cctor_m442EA7F9BCAFEC5F554465C0C3F07F83711A8DF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m49F9153483E7881B0F295D8149596F7CC575D3AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 * L_0 = (Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8 *)il2cpp_codegen_object_new(Dictionary_2_tABD241D80412AB23968DA94CBA532A1B8F63A3E8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m49F9153483E7881B0F295D8149596F7CC575D3AB(L_0, /*hidden argument*/Dictionary_2__ctor_m49F9153483E7881B0F295D8149596F7CC575D3AB_RuntimeMethod_var);
		((DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_il2cpp_TypeInfo_var))->set__cache_0(L_0);
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_1;
		L_1 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = AppDomain_GetData_m3B7D0B3C44FF35B64775B888BAD9F696FF9C2639(L_1, _stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_5 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Platform_AddDllDirectory_m7DAFCD76DA5FB9209BCD4E035F9538852BCE16C8(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_003d;
		}
	}

IL_0050:
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCamera__ctor_mD23522FD555158C7D879759D72C0D9A35D64D016 (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * __this, IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m845DF2404CE942976C18573874A1BA227CD7C990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCamera_U3C_ctorU3Eb__2_0_m62AE9B3B24568770971F4435887CE8E091C8B09B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mB251D8B4BA52BF6CFC07A0AA5154046AB3F7E362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 * L_1 = (Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8 *)il2cpp_codegen_object_new(Func_1_tC7E4392C86577E380FCAA581632B1BEC403404B8_il2cpp_TypeInfo_var);
		Func_1__ctor_m845DF2404CE942976C18573874A1BA227CD7C990(L_1, __this, (intptr_t)((intptr_t)HolographicCamera_U3C_ctorU3Eb__2_0_m62AE9B3B24568770971F4435887CE8E091C8B09B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m845DF2404CE942976C18573874A1BA227CD7C990_RuntimeMethod_var);
		Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * L_2 = (Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 *)il2cpp_codegen_object_new(Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mB251D8B4BA52BF6CFC07A0AA5154046AB3F7E362(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mB251D8B4BA52BF6CFC07A0AA5154046AB3F7E362_RuntimeMethod_var);
		__this->set__interface6_1(L_2);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HolographicCamera_get_Id_mCA0CB56A8BDD55F49980F84AA72A5451381E3B5A (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * __this, const RuntimeMethod* method)
{
	{
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = IHolographicCamera_get_Id_m4F6A901C5A633381B70DE4D7DF222A6091D75615(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * HolographicCamera_get_ViewConfiguration_mE5729EE8000A2A623CA54F46557B5FB82386F459 (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mF7AAA395B023AE7142F1DD3F8BF0F674D8266BCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_tD4A21B2AB23B7C64F74EACCE5BE91A4A2A014784 * L_0 = __this->get__interface6_1();
		NullCheck(L_0);
		IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * L_1;
		L_1 = Lazy_1_get_Value_mF7AAA395B023AE7142F1DD3F8BF0F674D8266BCD(L_0, /*hidden argument*/Lazy_1_get_Value_mF7AAA395B023AE7142F1DD3F8BF0F674D8266BCD_RuntimeMethod_var);
		NullCheck(L_1);
		IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * L_2;
		L_2 = IHolographicCamera6_get_ViewConfiguration_mFD12DECBE5F6C3949866FABC4139EFC99BD7B815(L_1, /*hidden argument*/NULL);
		HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * L_3 = (HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB *)il2cpp_codegen_object_new(HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB_il2cpp_TypeInfo_var);
		HolographicViewConfiguration__ctor_m7FC69AB8E54F45265A4E52CC4B132513CF9B6E9A(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.HolographicCamera::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * HolographicCamera_U3C_ctorU3Eb__2_0_m62AE9B3B24568770971F4435887CE8E091C8B09B (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * __this, const RuntimeMethod* method)
{
	{
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_1 = L_0->get__obj_0();
		IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * L_2;
		L_2 = IHolographicCamera6_op_Implicit_m65087A20497B12C8D89B3E2DFBBB9C89B1E61862(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_mC669309C40BF6DC8BEAF6D56A8D03B5CA4330DB7 (HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * __this, IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * HolographicCameraPose_get_HolographicCamera_m3775ED26C9A64A6A7BD769ED6E50FFB97D30392C (HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_1;
		L_1 = IHolographicCameraPose_get_HolographicCamera_mA3FACA889EBAEE5378F99A6254BB4EBA4ED76DC2(L_0, /*hidden argument*/NULL);
		HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 * L_2 = (HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3 *)il2cpp_codegen_object_new(HolographicCamera_t2AE279553DC29B919E5CCB3D60EEA57FF8DAF1A3_il2cpp_TypeInfo_var);
		HolographicCamera__ctor_mD23522FD555158C7D879759D72C0D9A35D64D016(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m416B2C1039903C4E8A05035A52B17DDB8AF5CB4C (HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * __this, IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mEEDB960B44D48F86B8D13B747296133B89C40F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_mA4521327584172D0F4B6E9ADAB1FD288A46F5812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_m298BBC11525DB7A741B41077579FA25245E77928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D * L_1 = (Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D *)il2cpp_codegen_object_new(Func_1_t9BA18FC3B87A826456BBAB9261FFDEBDB2CAB63D_il2cpp_TypeInfo_var);
		Func_1__ctor_mEEDB960B44D48F86B8D13B747296133B89C40F5C(L_1, __this, (intptr_t)((intptr_t)HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_mA4521327584172D0F4B6E9ADAB1FD288A46F5812_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mEEDB960B44D48F86B8D13B747296133B89C40F5C_RuntimeMethod_var);
		Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * L_2 = (Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 *)il2cpp_codegen_object_new(Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217_il2cpp_TypeInfo_var);
		Lazy_1__ctor_m298BBC11525DB7A741B41077579FA25245E77928(L_2, L_1, /*hidden argument*/Lazy_1__ctor_m298BBC11525DB7A741B41077579FA25245E77928_RuntimeMethod_var);
		__this->set__interface4_1(L_2);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters_set_DepthReprojectionMethod_mF0C8ACD9DC22E0141D5E53DC26CF50951F37760F (HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mB0DC22C5E6215762B48DB2327ECA420CA28D7DEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_t72545EC7F9434095D60AF78FDDE73B5EB68FB217 * L_0 = __this->get__interface4_1();
		NullCheck(L_0);
		IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * L_1;
		L_1 = Lazy_1_get_Value_mB0DC22C5E6215762B48DB2327ECA420CA28D7DEF(L_0, /*hidden argument*/Lazy_1_get_Value_mB0DC22C5E6215762B48DB2327ECA420CA28D7DEF_RuntimeMethod_var);
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_m8D54AE33435824878285D19277BEA6A6B80B9F88(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_mA4521327584172D0F4B6E9ADAB1FD288A46F5812 (HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * __this, const RuntimeMethod* method)
{
	{
		IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * L_1 = L_0->get__obj_0();
		IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * L_2;
		L_2 = IHolographicCameraRenderingParameters4_op_Implicit_m250E179830F04807A94DAF14047FF930F73BF036(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m2199825112EEEB45B4A346B742159D4DEEAB6A4C (HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * __this, IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::FromNativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * HolographicFrame_FromNativePtr_m70DDDF4E55154D9FEC8057F5760496D17682E866 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_0;
		L_0 = WinrtModule_get_Instance_mE5238C758429D4BD1CB6CB9CFDB4D48ED1467EF3(/*hidden argument*/NULL);
		intptr_t L_1 = ___thisPtr0;
		ObjectReference_1_t2F073970332376AC7E81E0ED3BED09A8A621C373 * L_2;
		L_2 = ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D(L_0, (intptr_t)L_1, /*hidden argument*/ObjectReference_1_FromNativePtr_m0F54B0C2440971F098ED703F993880BB09D1256D_RuntimeMethod_var);
		NullCheck(L_2);
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_3;
		L_3 = IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9(L_2, /*hidden argument*/IObjectReference_As_TisVftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_m94DCC22A8E1239440F68E0063439C5950F0F49D9_RuntimeMethod_var);
		IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * L_4;
		L_4 = IHolographicFrame_op_Implicit_mF8D9C4BFEE279F6FA920037F53D49AB818190D2E(L_3, /*hidden argument*/NULL);
		HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * L_5 = (HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 *)il2cpp_codegen_object_new(HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352_il2cpp_TypeInfo_var);
		HolographicFrame__ctor_m2199825112EEEB45B4A346B742159D4DEEAB6A4C(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.HolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * HolographicFrame_GetRenderingParameters_mFEA6408EBEAF374BBBA418EC6CA5643811F3DDDB (HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * __this, HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * ___cameraPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * L_0 = __this->get__interface_0();
		HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * L_1 = ___cameraPose0;
		NullCheck(L_1);
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_2 = L_1->get__interface_0();
		NullCheck(L_0);
		IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * L_3;
		L_3 = IHolographicFrame_GetRenderingParameters_mD9B3AF8CCE405BC18D724B8FB7C85D99D5F4A444(L_0, L_2, /*hidden argument*/NULL);
		HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 * L_4 = (HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62 *)il2cpp_codegen_object_new(HolographicCameraRenderingParameters_t3FFD9BAA17BD528A879F6D211A48F9AA2E3FDA62_il2cpp_TypeInfo_var);
		HolographicCameraRenderingParameters__ctor_m416B2C1039903C4E8A05035A52B17DDB8AF5CB4C(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D * HolographicFrame_get_CurrentPrediction_mA91583C5AE676CB97B349FB9372F922729250CF3 (HolographicFrame_t0A94C151CA6384EFDAECB6B904B2E49FB0071352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * L_1;
		L_1 = IHolographicFrame_get_CurrentPrediction_m22D9D2A2EBB871A37659C43B7E7F8E2FA9CB6AAE(L_0, /*hidden argument*/NULL);
		HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D * L_2 = (HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D *)il2cpp_codegen_object_new(HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D_il2cpp_TypeInfo_var);
		HolographicFramePrediction__ctor_m2C98EDB3585B4CA778DF3D8D6197AC29EFBF2325(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m2C98EDB3585B4CA778DF3D8D6197AC29EFBF2325 (HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D * __this, IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HolographicFramePrediction_get_CameraPoses_mB43A0257E6A58E988DB3D2776BAA1EC7493B2E1A (HolographicFramePrediction_t7407099C2C330786E6F85AAB82ED04A6A56B576D * __this, const RuntimeMethod* method)
{
	{
		IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = IHolographicFramePrediction_get_CameraPoses_mE59CCB1D494C077C1F723947987693FD108E861C(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_m7FC69AB8E54F45265A4E52CC4B132513CF9B6E9A (HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * __this, IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mFD505EE66843FBFEFA4A03B3820926BE7871B22F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC0B4F814EE65137A7747CA106953AAAFAF1F9167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mACCB5F79505EC02758C0D46F271FF3256F90EA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 * L_1 = (Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1 *)il2cpp_codegen_object_new(Func_1_t5A6ED0C5524F5C93B8D74D24A74A68F8A339E7D1_il2cpp_TypeInfo_var);
		Func_1__ctor_mFD505EE66843FBFEFA4A03B3820926BE7871B22F(L_1, __this, (intptr_t)((intptr_t)HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC0B4F814EE65137A7747CA106953AAAFAF1F9167_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mFD505EE66843FBFEFA4A03B3820926BE7871B22F_RuntimeMethod_var);
		Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * L_2 = (Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 *)il2cpp_codegen_object_new(Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mACCB5F79505EC02758C0D46F271FF3256F90EA5D(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mACCB5F79505EC02758C0D46F271FF3256F90EA5D_RuntimeMethod_var);
		__this->set__interface2_1(L_2);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HolographicViewConfiguration_get_SupportedDepthReprojectionMethods_m88B7A50256657C99DC29F7A5308ECCEBB46E9517 (HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m581C4D970F69488E4A877D578F257C347537A403_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_tD4F625857ED92EE4C5C31C3B4A5B1A424DD32331 * L_0 = __this->get__interface2_1();
		NullCheck(L_0);
		IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * L_1;
		L_1 = Lazy_1_get_Value_m581C4D970F69488E4A877D578F257C347537A403(L_0, /*hidden argument*/Lazy_1_get_Value_m581C4D970F69488E4A877D578F257C347537A403_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m45C90F64FEEA68671750AB8E4D531D446E1F92B5(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC0B4F814EE65137A7747CA106953AAAFAF1F9167 (HolographicViewConfiguration_t850FBF2343BCF5B4C26976292B22006A75B5BDEB * __this, const RuntimeMethod* method)
{
	{
		IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * L_1 = L_0->get__obj_0();
		IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * L_2;
		L_2 = IHolographicViewConfiguration2_op_Implicit_m754B1A7708380B9F097EF9E6F9640DDBE003B812(L_1, /*hidden argument*/NULL);
		return L_2;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * IHolographicCamera_op_Implicit_m34E8BD6230A807475558DCC3AB854487EB211416 (ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_0 = ___obj0;
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_1 = (IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A *)il2cpp_codegen_object_new(IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A_il2cpp_TypeInfo_var);
		IHolographicCamera__ctor_m480C728DB1E16AABAB7F15DBBEC9DDA9E4470206(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_m480C728DB1E16AABAB7F15DBBEC9DDA9E4470206 (IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * __this, ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_m4F6A901C5A633381B70DE4D7DF222A6091D75615 (IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * L_2 = L_1->get_get_Id_5();
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsUInt_Invoke_mBD83C88FADB098F0D0FE6724E8165DEAD3A1087E(L_2, (intptr_t)L_4, (uint32_t*)(uint32_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		return L_6;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * IHolographicCamera6_op_Implicit_m65087A20497B12C8D89B3E2DFBBB9C89B1E61862 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_1;
		L_1 = IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_m064F8122D55754D29F9729F9ADB2E5EA8D9C37E5_RuntimeMethod_var);
		IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * L_2;
		L_2 = IHolographicCamera6_op_Implicit_m2D627A6A3A8B39B23A9F7AE9554F52C551B7B4DC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * IHolographicCamera6_op_Implicit_m2D627A6A3A8B39B23A9F7AE9554F52C551B7B4DC (ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_0 = ___obj0;
		IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * L_1 = (IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 *)il2cpp_codegen_object_new(IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39_il2cpp_TypeInfo_var);
		IHolographicCamera6__ctor_mB016BB7C6CCC1C37A6526138099E89A906CABFD2(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_mB016BB7C6CCC1C37A6526138099E89A906CABFD2 (IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * __this, ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * IHolographicCamera6_get_ViewConfiguration_mFD12DECBE5F6C3949866FABC4139EFC99BD7B815 (IHolographicCamera6_tFD492F54579A3975D3D4AF1CA5E439A8D6CFBF39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * L_2 = L_1->get_get_ViewConfiguration_1();
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t6F8128753E9B580E2C009F6A71F91DFA95EDBA99 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_Module_1();
		ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * L_8;
		L_8 = ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m9C10202628A43AFB8E2864E01B75D5C1F5664555_RuntimeMethod_var);
		IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * L_9;
		L_9 = IHolographicViewConfiguration_op_Implicit_mB5C01B8FD80C31EDF798216C7299338DC4E1D77E(L_8, /*hidden argument*/NULL);
		return L_9;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * IHolographicCameraPose_op_Implicit_mB9A5C61150237020BDC05CBBF0605B85CD78BD09 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_1;
		L_1 = IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_tF973721A034EE8DE94A75635A352BE00F3706404_m226E99E6B231E2E2F55A75B361B4FAD4D0C1A175_RuntimeMethod_var);
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_2;
		L_2 = IHolographicCameraPose_op_Implicit_m6B6F11B15F0FF3BDA12D41E82EEFA16642FFD9EA(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * IHolographicCameraPose_op_Implicit_m6B6F11B15F0FF3BDA12D41E82EEFA16642FFD9EA (ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_0 = ___obj0;
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_1 = (IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D *)il2cpp_codegen_object_new(IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D_il2cpp_TypeInfo_var);
		IHolographicCameraPose__ctor_mC6CC90437DE877083A5C29B69E2C66101925A818(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mC6CC90437DE877083A5C29B69E2C66101925A818 (IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * __this, ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * IHolographicCameraPose_get_HolographicCamera_mA3FACA889EBAEE5378F99A6254BB4EBA4ED76DC2 (IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * L_2 = L_1->get_get_HolographicCamera_1();
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_Module_1();
		ObjectReference_1_tACA184E80A1E3931D241FA15E3140D2F757B1C6A * L_8;
		L_8 = ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_mC8399B51C1185F3089A239BBC65D4CB3D1F92DEB_RuntimeMethod_var);
		IHolographicCamera_tEE9BFAFE86F1BE1DF651E77B74018A9E32ADE26A * L_9;
		L_9 = IHolographicCamera_op_Implicit_m34E8BD6230A807475558DCC3AB854487EB211416(L_8, /*hidden argument*/NULL);
		return L_9;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * IHolographicCameraRenderingParameters_op_Implicit_mE3B0C72FB2897F6663992279070041902EF4A019 (ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * L_0 = ___obj0;
		IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * L_1 = (IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF *)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF_il2cpp_TypeInfo_var);
		IHolographicCameraRenderingParameters__ctor_m00E2D44C55190AB1600791820B8D0304F964B101(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_m00E2D44C55190AB1600791820B8D0304F964B101 (IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * __this, ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
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
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * IHolographicCameraRenderingParameters4_op_Implicit_m250E179830F04807A94DAF14047FF930F73BF036 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * L_1;
		L_1 = IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t7534986437606D18803D5F504E1104A9616045E6_m35B16D2AF9E0D0447A0E2A61887DA3B64EF97D16_RuntimeMethod_var);
		IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * L_2;
		L_2 = IHolographicCameraRenderingParameters4_op_Implicit_m4C34103B19E077AA7234D3F13CC81FB8B9C34F9F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * IHolographicCameraRenderingParameters4_op_Implicit_m4C34103B19E077AA7234D3F13CC81FB8B9C34F9F (ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * L_0 = ___obj0;
		IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * L_1 = (IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 *)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138_il2cpp_TypeInfo_var);
		IHolographicCameraRenderingParameters4__ctor_mA2C5DE87B4F55FE17F131714D7FB01AFA18BBDF3(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_mA2C5DE87B4F55FE17F131714D7FB01AFA18BBDF3 (IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * __this, ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_m8D54AE33435824878285D19277BEA6A6B80B9F88 (IHolographicCameraRenderingParameters4_t541AA908671E2F6255BE833209D4999B3791A138 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t7534986437606D18803D5F504E1104A9616045E6 * L_1 = L_0->get_address_of_Vftbl_4();
		_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * L_2 = L_1->get_put_DepthReprojectionMethod_2();
		ObjectReference_1_tF2D670BE9178CD084ED3CCEAC92209838E1FB05D * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		int32_t L_5 = ___value0;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = _put_PropertyAsEnum_Invoke_m2D90F1E6ACF9E9BB6EA4E499FA578A68E1638FCD(L_2, (intptr_t)L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_6, /*hidden argument*/NULL);
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
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * IHolographicFrame_op_Implicit_mF8D9C4BFEE279F6FA920037F53D49AB818190D2E (ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_0 = ___obj0;
		IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * L_1 = (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 *)il2cpp_codegen_object_new(IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254_il2cpp_TypeInfo_var);
		IHolographicFrame__ctor_m6022384FF1859073867EA463F33768A8A665FBA7(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_m6022384FF1859073867EA463F33768A8A665FBA7 (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * IHolographicFrame_GetRenderingParameters_mD9B3AF8CCE405BC18D724B8FB7C85D99D5F4A444 (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * ___cameraPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557 * L_1 = L_0->get_address_of_Vftbl_4();
		_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * L_2 = L_1->get_GetRenderingParameters_3();
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_5 = ___cameraPose0;
		NullCheck(L_5);
		ObjectReference_1_tF79C0180BF385578AC3FE7A20DAC056F91D97A78 * L_6 = L_5->get__obj_0();
		NullCheck(L_6);
		intptr_t L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_8;
		L_8 = _GetRenderingParameters_Invoke_m2A732CFEC74896267D938D7EDF5A681547A41025(L_2, (intptr_t)L_4, (intptr_t)L_7, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_8, /*hidden argument*/NULL);
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_9 = __this->get__obj_0();
		NullCheck(L_9);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_10 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_9)->get_Module_1();
		ObjectReference_1_tD0A67A681CADF1D6FE6A2435D4C5D4A0554CA750 * L_11;
		L_11 = ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57(L_10, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_mBAC1B46E76B05400A5BC7A9EA88976C422BA2D57_RuntimeMethod_var);
		IHolographicCameraRenderingParameters_t75473488B2A7A0B8EF2411B18B20887F404776DF * L_12;
		L_12 = IHolographicCameraRenderingParameters_op_Implicit_mE3B0C72FB2897F6663992279070041902EF4A019(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * IHolographicFrame_get_CurrentPrediction_m22D9D2A2EBB871A37659C43B7E7F8E2FA9CB6AAE (IHolographicFrame_t70EAAEFDD4E2F82C79312D09138BAE40D43B6254 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * L_2 = L_1->get_get_CurrentPrediction_5();
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t8D4ED6A8469B55EC072A3E65072D793F43CED72A * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_Module_1();
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_8;
		L_8 = ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m3EFA0781B57B427CC85D7C83CBEC9A0385DAC6E7_RuntimeMethod_var);
		IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * L_9;
		L_9 = IHolographicFramePrediction_op_Implicit_mFE511F9CDD18ED904629E4AE51297E4D8E81629F(L_8, /*hidden argument*/NULL);
		return L_9;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * IHolographicFramePrediction_op_Implicit_mFE511F9CDD18ED904629E4AE51297E4D8E81629F (ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_0 = ___obj0;
		IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * L_1 = (IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 *)il2cpp_codegen_object_new(IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548_il2cpp_TypeInfo_var);
		IHolographicFramePrediction__ctor_mB7FD83E4AD020DFCB8AC0ED393F7EE7E6D355A4A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_mB7FD83E4AD020DFCB8AC0ED393F7EE7E6D355A4A (IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * __this, ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_mE59CCB1D494C077C1F723947987693FD108E861C (IHolographicFramePrediction_tD6EBD9B5797A93C9FED4C488BE817E426E8B7548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateT__ctor_m1E914A9A6B7FC8E11192873E2966AFF41AB9924A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m281E26914BE8342EC900CD763C3271F213B23088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfObject_1__ctor_mA6802B3FF780D1128D3A7E92E49B60813A38EBEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * G_B2_0 = NULL;
	Guid_t  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * G_B2_2 = NULL;
	CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * G_B1_0 = NULL;
	Guid_t  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * G_B1_2 = NULL;
	{
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * L_2 = L_1->get_get_CameraPoses_1();
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t7EEFE9778AEB4040979F2AFEBDDC9CCE3300E82A * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_Module_1();
		ObjectReference_1_t18DD4F96AA92F2D73236A439D96972AFADD7C354 * L_8;
		L_8 = ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_mF0CA12DA03213C90491550621B830611CDAAD2D1_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var);
		Guid_t  L_9 = ((IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var))->get_IIterableOfHolographicCameraPose_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var);
		CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * L_10 = ((U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var);
		U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * L_12 = ((U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * L_13 = (CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 *)il2cpp_codegen_object_new(CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36_il2cpp_TypeInfo_var);
		CreateT__ctor_m1E914A9A6B7FC8E11192873E2966AFF41AB9924A(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m281E26914BE8342EC900CD763C3271F213B23088_RuntimeMethod_var), /*hidden argument*/CreateT__ctor_m1E914A9A6B7FC8E11192873E2966AFF41AB9924A_RuntimeMethod_var);
		CreateT_tDA9DD6973DF80490CB3DF4F1AFCB96C770591B36 * L_14 = L_13;
		((U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD * L_15 = (VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD *)il2cpp_codegen_object_new(VectorViewOfObject_1_tA2A64EC4999D04D9D7C591AD86A814CFA54D48FD_il2cpp_TypeInfo_var);
		VectorViewOfObject_1__ctor_mA6802B3FF780D1128D3A7E92E49B60813A38EBEF(L_15, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/VectorViewOfObject_1__ctor_mA6802B3FF780D1128D3A7E92E49B60813A38EBEF_RuntimeMethod_var);
		return L_15;
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
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * IHolographicViewConfiguration_op_Implicit_mB5C01B8FD80C31EDF798216C7299338DC4E1D77E (ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * L_0 = ___obj0;
		IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * L_1 = (IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A *)il2cpp_codegen_object_new(IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A_il2cpp_TypeInfo_var);
		IHolographicViewConfiguration__ctor_m8253FF56629B61CCBA043488ECFC385B3A9014CB(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_m8253FF56629B61CCBA043488ECFC385B3A9014CB (IHolographicViewConfiguration_t7173985762725C2E628492C2F76695586F0B9A9A * __this, ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t7B726F96210FB11E49FB23324ED01CFE4190BC45 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
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
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * IHolographicViewConfiguration2_op_Implicit_m754B1A7708380B9F097EF9E6F9640DDBE003B812 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_1;
		L_1 = IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_m2B4C7AE49987B8F3B1317225CA7A950ECF253A45_RuntimeMethod_var);
		IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * L_2;
		L_2 = IHolographicViewConfiguration2_op_Implicit_m5C208371E1CF7B975D6493EC967539AA269B884F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * IHolographicViewConfiguration2_op_Implicit_m5C208371E1CF7B975D6493EC967539AA269B884F (ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_0 = ___obj0;
		IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * L_1 = (IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 *)il2cpp_codegen_object_new(IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25_il2cpp_TypeInfo_var);
		IHolographicViewConfiguration2__ctor_m65B941B24A57BB9334019EC6B0BBB9E933057670(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_m65B941B24A57BB9334019EC6B0BBB9E933057670 (IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * __this, ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m45C90F64FEEA68671750AB8E4D531D446E1F92B5 (IHolographicViewConfiguration2_t55926039B23FE6B8359FBCC4B8A37A3E2DE08B25 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m81C7BBA40CAC3192E0BF20EAA60A53BA9EE645B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m41F93EFE7F1942001F0EF5CCD5A070B493366893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfEnum_1__ctor_m96DAD23AC4375573998F2162864196A48085481A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * G_B2_0 = NULL;
	Guid_t  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * G_B2_2 = NULL;
	Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * G_B1_0 = NULL;
	Guid_t  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * G_B1_2 = NULL;
	{
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * L_2 = L_1->get_get_SupportedDepthReprojectionMethods_1();
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t9311F3B3887AEC9FFC7803E5FCA9710C5FC84547 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_7 = ((IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 *)L_6)->get_Module_1();
		ObjectReference_1_t69B7FF47D0913C112063ECCA591E65CB1249EDA7 * L_8;
		L_8 = ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_mCC082B968172E38454E9918A8A492936533B0B5C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var);
		Guid_t  L_9 = ((IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var))->get_IIterableOfHolographicDepthReprojectionMethod_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var);
		Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * L_10 = ((U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var);
		U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * L_12 = ((U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * L_13 = (Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 *)il2cpp_codegen_object_new(Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885_il2cpp_TypeInfo_var);
		Func_2__ctor_m81C7BBA40CAC3192E0BF20EAA60A53BA9EE645B8(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m41F93EFE7F1942001F0EF5CCD5A070B493366893_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m81C7BBA40CAC3192E0BF20EAA60A53BA9EE645B8_RuntimeMethod_var);
		Func_2_tEB1CEF9B1A473FFF678094D54FF82305BE83D885 * L_14 = L_13;
		((U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2 * L_15 = (VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2 *)il2cpp_codegen_object_new(VectorViewOfEnum_1_tFDBCCBEFF6D5675C1C6A4E61BB85068D574B21E2_il2cpp_TypeInfo_var);
		VectorViewOfEnum_1__ctor_m96DAD23AC4375573998F2162864196A48085481A(L_15, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/VectorViewOfEnum_1__ctor_m96DAD23AC4375573998F2162864196A48085481A_RuntimeMethod_var);
		return L_15;
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
// System.Void Microsoft.Windows.Graphics.Holographic.IID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IID__cctor_m6ED97CC53B3AD7A85B9CD1000F8BF3BCA4FF8858 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_0), _stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B, /*hidden argument*/NULL);
		((IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var))->set_IIterableOfHolographicCameraPose_0(L_0);
		Guid_t  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_1), _stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF, /*hidden argument*/NULL);
		((IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tBE503CDB5C20C31B407D2F6EB4B26081F88FC26C_il2cpp_TypeInfo_var))->set_IIterableOfHolographicDepthReprojectionMethod_1(L_1);
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


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6>(marshaled.___GetIids_1, _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled)
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(const IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled, IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6>(marshaled.___GetIids_1, _GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshaled_com& marshaled)
{
	IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_pinvoke(const IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37& unmarshaled, IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_pinvoke_back(const IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_pinvoke& marshaled, IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_First_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_pinvoke_cleanup(IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_com(const IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37& unmarshaled, IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_com_back(const IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_com& marshaled, IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_First_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshal_com_cleanup(IIterableOfEnum_tE52B6E657D1EB83E17B7F2608DDC43FBBEEB1E37_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_pinvoke(const IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330& unmarshaled, IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_pinvoke_back(const IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_pinvoke& marshaled, IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_First_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_pinvoke_cleanup(IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_com(const IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330& unmarshaled, IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_com_back(const IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_com& marshaled, IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_First_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshal_com_cleanup(IIterableOfObject_tE3FE6982BCD439721CA57CC4AFA94B507454D330_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_pinvoke(const IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A& unmarshaled, IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_pinvoke_back(const IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_pinvoke& marshaled, IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_Current_1, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8>(marshaled.___MoveNext_3, _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1>(marshaled.___GetMany_4, _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_pinvoke_cleanup(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_com(const IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A& unmarshaled, IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_com_back(const IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_com& marshaled, IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_Current_1, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8>(marshaled.___MoveNext_3, _MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1>(marshaled.___GetMany_4, _GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshal_com_cleanup(IIteratorOfEnum_t1C0E4B7731E008F2E26E94B690E100E2C3657E2A_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_pinvoke(const IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B& unmarshaled, IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_pinvoke_back(const IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_pinvoke& marshaled, IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_Current_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150>(marshaled.___MoveNext_3, _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498>(marshaled.___GetMany_4, _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_pinvoke_cleanup(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_com(const IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B& unmarshaled, IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_com_back(const IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_com& marshaled, IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_Current_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150>(marshaled.___MoveNext_3, _MoveNext_t94205B0A5054D612F83212B387B86A8054F68150_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498>(marshaled.___GetMany_4, _GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshal_com_cleanup(IIteratorOfObject_t8BAE6FE13C2684544444258504B20F4CF001739B_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  IObjectReference_get_VftblIUnknown_m1ADFA6C75FCD1DCEE848B319D7A950DA2C5894D4 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	{
		IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542  L_0 = __this->get_U3CVftblIUnknownU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference__ctor_mE77716ADEC5F42D998F6EF38E46193A1189CF03A (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_0;
		L_0 = ModuleReference_AddRef_m31468715D7A9A7D5376D1F573482D6D0168BAA57((ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *)(&___module0), /*hidden argument*/NULL);
		__this->set_Module_1(L_0);
		intptr_t L_1 = ___thisPtr1;
		__this->set_ThisPtr_0((intptr_t)L_1);
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference_Finalize_m084D331E455FDDFD1C7EFB5163E53DEB1661F7D5 (IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_0 = __this->get_Module_1();
		V_0 = L_0;
		ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4((ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_back(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD>(marshaled.___QueryInterface_0, _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450>(marshaled.___AddRef_1, _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6>(marshaled.___Release_2, _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_pinvoke_cleanup(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_back(const IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled, IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD>(marshaled.___QueryInterface_0, _QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450>(marshaled.___AddRef_1, _AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6>(marshaled.___Release_2, _Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshal_com_cleanup(IUnknownVftbl_t3B7A436D3468C1B929B67CFC6CCF262360933542_marshaled_com& marshaled)
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


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_pinvoke(const IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465& unmarshaled, IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_pinvoke_back(const IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_pinvoke& marshaled, IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF>(marshaled.___GetAt_1, _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Size_2, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86>(marshaled.___IndexOf_3, _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857>(marshaled.___GetMany_4, _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_pinvoke_cleanup(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_com(const IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465& unmarshaled, IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_com_back(const IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_com& marshaled, IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF>(marshaled.___GetAt_1, _GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Size_2, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86>(marshaled.___IndexOf_3, _IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857>(marshaled.___GetMany_4, _GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshal_com_cleanup(IVectorViewOfEnum_t608B9680A266720E5205FEC3C916FD75638BA465_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_pinvoke(const IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB& unmarshaled, IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_pinvoke_back(const IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_pinvoke& marshaled, IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16>(marshaled.___GetAt_1, _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Size_2, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6>(marshaled.___IndexOf_3, _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE>(marshaled.___GetMany_4, _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_pinvoke_cleanup(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_com(const IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB& unmarshaled, IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_com_back(const IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_com& marshaled, IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16>(marshaled.___GetAt_1, _GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Size_2, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6>(marshaled.___IndexOf_3, _IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE>(marshaled.___GetMany_4, _GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshal_com_cleanup(IVectorViewOfObject_t2C3E4746E9A596A79C8622DE07960566EE4F08DB_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_pinvoke(const ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4& unmarshaled, ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_pinvoke_back(const ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_pinvoke& marshaled, ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_pinvoke_cleanup(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_com(const ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4& unmarshaled, ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_com& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_com_back(const ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_com& marshaled, ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshal_com_cleanup(ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m332E9236008D0A4EE606D414687F436A9DAB7EB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E(4, /*hidden argument*/NULL);
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return (int32_t*)(L_3);
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ModuleReference_Allocate_m823ADD4854E2A858E0936F5B7CDC45D99975D8B0 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___module0;
		int32_t* L_1;
		L_1 = ModuleReference_AllocateRefCount_m332E9236008D0A4EE606D414687F436A9DAB7EB7(/*hidden argument*/NULL);
		intptr_t* L_2 = ___nativeHandle1;
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___nativeHandle1;
		*((intptr_t*)L_4) = (intptr_t)(0);
		return L_3;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___module0;
		__this->set__module_0(L_0);
		int32_t* L_1 = ___refCountPtr1;
		__this->set__refCountPtr_1((int32_t*)L_1);
		int32_t* L_2 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->get__refCountPtr_1();
		int32_t L_4;
		L_4 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(int32_t*)L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		intptr_t L_5 = ___nativeHandle2;
		__this->set__nativeHandle_2((intptr_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * _thisAdjusted = reinterpret_cast<ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *>(__this + _offset);
	ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F(_thisAdjusted, ___module0, ___refCountPtr1, ___nativeHandle2, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ModuleReference_AddRef_m31468715D7A9A7D5376D1F573482D6D0168BAA57 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__module_0();
		int32_t* L_1 = __this->get__refCountPtr_1();
		intptr_t L_2 = __this->get__nativeHandle_2();
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_mB7190947166224789569DBEB55A28EC9266DD37F((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  ModuleReference_AddRef_m31468715D7A9A7D5376D1F573482D6D0168BAA57_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * _thisAdjusted = reinterpret_cast<ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *>(__this + _offset);
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  _returnValue;
	_returnValue = ModuleReference_AddRef_m31468715D7A9A7D5376D1F573482D6D0168BAA57(_thisAdjusted, method);
	return _returnValue;
}
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4 (ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->get__refCountPtr_1();
		int32_t L_2;
		L_2 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)(int32_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__module_0();
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->get__nativeHandle_2();
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_6 = __this->get__module_0();
		if (!((DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679 *)IsInstClass((RuntimeObject*)L_6, DllModule_t1FB3BA35D90E591ECFF58E592C475F862F53F679_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_7 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_m0AC948DD9FD9F72AE575DB9B92C21EDE152E4759((intptr_t)L_7, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject * L_8 = __this->get__module_0();
		if (!((WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 *)IsInstClass((RuntimeObject*)L_8, WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_9 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_m9BE2B337D022F359A40036EED7BFCD4401CDD41B((intptr_t)L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject * L_10 = __this->get__module_0();
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72)), /*hidden argument*/NULL);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_14 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4_RuntimeMethod_var)));
	}

IL_0093:
	{
		__this->set__nativeHandle_2((intptr_t)(0));
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_15 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4_RuntimeMethod_var)));
	}

IL_00ab:
	{
		__this->set__module_0(NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4_RuntimeMethod_var)));
	}

IL_00bf:
	{
		int32_t* L_17 = __this->get__refCountPtr_1();
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mCC0E874C853846E0A82E36971E3FC7BF359C6AA5((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set__refCountPtr_1((int32_t*)((uintptr_t)0));
	}

IL_00d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 * _thisAdjusted = reinterpret_cast<ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *>(__this + _offset);
	ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m7C147CA53D6F35D73AB5A49DF17DF8B37139D372 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * L_0 = (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C *)il2cpp_codegen_object_new(DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C_il2cpp_TypeInfo_var);
		DotNETLinkage__ctor_m0DFED97C182CE9363FD92BD874E0125C43AFB8F8(L_0, /*hidden argument*/NULL);
		((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_1, (intptr_t)(0));
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.DllNotFoundException)
		IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * L_3 = (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E_il2cpp_TypeInfo_var)));
		IL2CPPLinkage__ctor_m663230512BC68A9D0313691D256D7319DF46FAEE(L_3, /*hidden argument*/NULL);
		((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))))->set__platformLinkage_0(L_3);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_m7DAFCD76DA5FB9209BCD4E035F9538852BCE16C8 (String_t* ___pathName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___pathName0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(0 /* System.Int32 WinRT.Platform/IPlatformLinkage::_AddDllDirectory(System.String) */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_m0AC948DD9FD9F72AE575DB9B92C21EDE152E4759 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___moduleHandle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(1 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Platform_GetHRForLastWin32Error_mB3E9D131EF563C6AE7CE5578E06347DDA04AEC19(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_mFD33EC13356C6CF6703BFAC5574AC48695786008 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(2 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_0, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_1, /*hidden argument*/NULL);
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m9BE2B337D022F359A40036EED7BFCD4401CDD41B (intptr_t ___cookie0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___cookie0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(3 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mB3E9D131EF563C6AE7CE5578E06347DDA04AEC19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_tB2BD2EE5F223B3EB20F6CB1CF02D4169B5398A90_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  WinrtModule_get_Instance_mE5238C758429D4BD1CB6CB9CFDB4D48ED1467EF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_m1D5A455FE43A85E0795FC4401BCCE0C9045DB59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * L_0 = ((WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var))->get__instance_1();
		NullCheck(L_0);
		WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 * L_1;
		L_1 = WeakLazy_1_get_Value_m1D5A455FE43A85E0795FC4401BCCE0C9045DB59B(L_0, /*hidden argument*/WeakLazy_1_get_Value_m1D5A455FE43A85E0795FC4401BCCE0C9045DB59B_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_2 = L_1->get__module_0();
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__ctor_m89CEE3EBCB9C7D6C8287B48F5DAE42A86A44545D (WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t5182C05757C0E260A460F6102C7C816FA13FC437_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Platform_CoIncrementMTAUsage_mFD33EC13356C6CF6703BFAC5574AC48695786008(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_1;
		L_1 = ModuleReference_Allocate_m823ADD4854E2A858E0936F5B7CDC45D99975D8B0(__this, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		__this->set__module_0(L_1);
		return;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule_Finalize_mFADA10898C5FFE0FB015AFBE0E43222DB9B61C1E (WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4  L_0 = __this->get__module_0();
		V_0 = L_0;
		ModuleReference_Release_mD02F81CFCBA7A22F28D034B1B15F2FB49670DAD4((ModuleReference_t8329E3AC5CFCD69CA87D52D99DF37497F38495F4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__cctor_m9BDBEC3E65516FE0D27BEC8FCFB2E0920ADE567D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1__ctor_mA34373257ED1CE1A0A4C569654CFB1265FCAD67C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 * L_0 = (WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888 *)il2cpp_codegen_object_new(WeakLazy_1_t33C6F69309B8D36C41D403DE0EE6AE72E65DD888_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_mA34373257ED1CE1A0A4C569654CFB1265FCAD67C(L_0, /*hidden argument*/WeakLazy_1__ctor_mA34373257ED1CE1A0A4C569654CFB1265FCAD67C_RuntimeMethod_var);
		((WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_tAF6EE49994730C8AE82CF6C89969225C4795AA18_il2cpp_TypeInfo_var))->set__instance_1(L_0);
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
// System.Boolean WinRT.Interop._Bool::op_Implicit(WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Bool_op_Implicit_m6ABEEB67BBDED4A50265044F711C390CEABB641F (_Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  ___value0, const RuntimeMethod* method)
{
	{
		_Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  L_0 = ___value0;
		int32_t L_1 = L_0.get_RawValue_0();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B (_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsBool__ctor_m979BF3AD4DCDAE91B6349CA65960C281BCA937C1 (_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_mEC792F5B3852E07F3B148A233E6A2F46388681FB (_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsBool::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsBool_BeginInvoke_mC615960A7A06EDB439E1123E614DF658ABDE412D (_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_EndInvoke_mCF01F2274A6CC4DD4EF38867563DFBA90F9799AE (_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 (_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, double*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsDouble::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsDouble__ctor_m643FAB6C979B76B7F4361FE6E90832908975F1B5 (_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsDouble::Invoke(System.IntPtr,System.Double*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDouble_Invoke_mAEC6442D7F9ED08CBB4F1EF8FBA75B8B29976CB8 (_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsDouble::BeginInvoke(System.IntPtr,System.Double*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsDouble_BeginInvoke_m66D200208BD8B7C7FCC2AD5C99D192930F81BCC4 (_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * __this, intptr_t ___thisPtr0, double* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsDouble::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDouble_EndInvoke_m2B292838882528E9BCFEB86702F9AFA4F49232C1 (_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC (_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m22852AFD9790BD53475FF23EAF46D067F32DCB35 (_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_m27A6460CA1AF0E5BB4BA4D7A3B7C3AC2C033A28A (_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsEnum_BeginInvoke_mCB5636415D4526EB425672C04CCD895AA2D75546 (_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_EndInvoke_m2DAF281930E1A43EEBF53429EB6B8700F3F84B27 (_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_m1DB4471DABBACF49A902B5BA91A4B73F88325489 (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_mC9B67BFC7560DADCFB0A1E63C79B0E008B7EBD67 (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsObject_BeginInvoke_m5F5FA357EE6EF60777A666FBB9DDDDEDAA02B8B6 (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, intptr_t ___thisPtr0, intptr_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_EndInvoke_mB1E1E3274025548381842F5DE3961FB93A33E0FF (_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsUInt__ctor_mB64C91196A0E48DE68B99E0D642556E6E5BF59B4 (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_mBD83C88FADB098F0D0FE6724E8165DEAD3A1087E (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsUInt::BeginInvoke(System.IntPtr,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsUInt_BeginInvoke_mD75C76DF2E2C02D7C93894524E6B62E153EFFBFE (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_EndInvoke_m5A2610525A18B58A1A43650AC589B7A278B0CE4E (_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB (_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsBool__ctor_m2AD6C56EA33EEB55E6316D64B66EF3FA4AE840D2 (_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsBool_Invoke_m244F4A0F0D473EB71B844611A30564DF01FB1DBB (_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsBool::BeginInvoke(System.IntPtr,WinRT.Interop._Bool,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsBool_BeginInvoke_m73C86596D4915FA9D40C64A4FBBEF8BFB306008B (_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA  ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(_Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._put_PropertyAsBool::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsBool_EndInvoke_mFF2E509A469A0A83871A0322B2CC0397A5343F8F (_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsEnum__ctor_m5C615747F624A9628940DE637314BCDE303B19F7 (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_m2D90F1E6ACF9E9BB6EA4E499FA578A68E1638FCD (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsEnum_BeginInvoke_m0E24899BA1524355525809118C173BC5763A8AA4 (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, intptr_t ___thisPtr0, int32_t ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._put_PropertyAsEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_EndInvoke_mB290BA0F6628BEBD56FF79180C8EF7E6EC703BA5 (_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_pinvoke(const Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B& unmarshaled, Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.get_get_RenderTargetSize_1();
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.get_get_ViewportScaleFactor_2();
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.get_put_ViewportScaleFactor_3();
	marshaled.___get_IsStereo_4 = unmarshaled.get_get_IsStereo_4();
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_5()));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.get_SetNearPlaneDistance_6();
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.get_SetFarPlaneDistance_7();
}
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_pinvoke_back(const Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_pinvoke& marshaled, Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_RenderTargetSize_temp_1;
	memset((&unmarshaled_get_RenderTargetSize_temp_1), 0, sizeof(unmarshaled_get_RenderTargetSize_temp_1));
	unmarshaled_get_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.set_get_RenderTargetSize_1(unmarshaled_get_RenderTargetSize_temp_1);
	intptr_t unmarshaled_get_ViewportScaleFactor_temp_2;
	memset((&unmarshaled_get_ViewportScaleFactor_temp_2), 0, sizeof(unmarshaled_get_ViewportScaleFactor_temp_2));
	unmarshaled_get_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.set_get_ViewportScaleFactor_2(unmarshaled_get_ViewportScaleFactor_temp_2);
	intptr_t unmarshaled_put_ViewportScaleFactor_temp_3;
	memset((&unmarshaled_put_ViewportScaleFactor_temp_3), 0, sizeof(unmarshaled_put_ViewportScaleFactor_temp_3));
	unmarshaled_put_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.set_put_ViewportScaleFactor_3(unmarshaled_put_ViewportScaleFactor_temp_3);
	intptr_t unmarshaled_get_IsStereo_temp_4;
	memset((&unmarshaled_get_IsStereo_temp_4), 0, sizeof(unmarshaled_get_IsStereo_temp_4));
	unmarshaled_get_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.set_get_IsStereo_4(unmarshaled_get_IsStereo_temp_4);
	unmarshaled.set_get_Id_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Id_5, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_SetNearPlaneDistance_temp_6;
	memset((&unmarshaled_SetNearPlaneDistance_temp_6), 0, sizeof(unmarshaled_SetNearPlaneDistance_temp_6));
	unmarshaled_SetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.set_SetNearPlaneDistance_6(unmarshaled_SetNearPlaneDistance_temp_6);
	intptr_t unmarshaled_SetFarPlaneDistance_temp_7;
	memset((&unmarshaled_SetFarPlaneDistance_temp_7), 0, sizeof(unmarshaled_SetFarPlaneDistance_temp_7));
	unmarshaled_SetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.set_SetFarPlaneDistance_7(unmarshaled_SetFarPlaneDistance_temp_7);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_pinvoke_cleanup(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_com(const Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B& unmarshaled, Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.get_get_RenderTargetSize_1();
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.get_get_ViewportScaleFactor_2();
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.get_put_ViewportScaleFactor_3();
	marshaled.___get_IsStereo_4 = unmarshaled.get_get_IsStereo_4();
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_5()));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.get_SetNearPlaneDistance_6();
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.get_SetFarPlaneDistance_7();
}
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_com_back(const Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_com& marshaled, Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_RenderTargetSize_temp_1;
	memset((&unmarshaled_get_RenderTargetSize_temp_1), 0, sizeof(unmarshaled_get_RenderTargetSize_temp_1));
	unmarshaled_get_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.set_get_RenderTargetSize_1(unmarshaled_get_RenderTargetSize_temp_1);
	intptr_t unmarshaled_get_ViewportScaleFactor_temp_2;
	memset((&unmarshaled_get_ViewportScaleFactor_temp_2), 0, sizeof(unmarshaled_get_ViewportScaleFactor_temp_2));
	unmarshaled_get_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.set_get_ViewportScaleFactor_2(unmarshaled_get_ViewportScaleFactor_temp_2);
	intptr_t unmarshaled_put_ViewportScaleFactor_temp_3;
	memset((&unmarshaled_put_ViewportScaleFactor_temp_3), 0, sizeof(unmarshaled_put_ViewportScaleFactor_temp_3));
	unmarshaled_put_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.set_put_ViewportScaleFactor_3(unmarshaled_put_ViewportScaleFactor_temp_3);
	intptr_t unmarshaled_get_IsStereo_temp_4;
	memset((&unmarshaled_get_IsStereo_temp_4), 0, sizeof(unmarshaled_get_IsStereo_temp_4));
	unmarshaled_get_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.set_get_IsStereo_4(unmarshaled_get_IsStereo_temp_4);
	unmarshaled.set_get_Id_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687>(marshaled.___get_Id_5, _get_PropertyAsUInt_t961AEF15ECB2E1AD974355B17B469563350D5687_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_SetNearPlaneDistance_temp_6;
	memset((&unmarshaled_SetNearPlaneDistance_temp_6), 0, sizeof(unmarshaled_SetNearPlaneDistance_temp_6));
	unmarshaled_SetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.set_SetNearPlaneDistance_6(unmarshaled_SetNearPlaneDistance_temp_6);
	intptr_t unmarshaled_SetFarPlaneDistance_temp_7;
	memset((&unmarshaled_SetFarPlaneDistance_temp_7), 0, sizeof(unmarshaled_SetFarPlaneDistance_temp_7));
	unmarshaled_SetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.set_SetFarPlaneDistance_7(unmarshaled_SetFarPlaneDistance_temp_7);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshal_com_cleanup(Vftbl_t9695DFFB138D2F8D2A745BA6BE44B83A74D23E6B_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_pinvoke(const Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2& unmarshaled, Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ViewConfiguration_1()));
}
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_pinvoke_back(const Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_pinvoke& marshaled, Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_ViewConfiguration_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_pinvoke_cleanup(Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_com(const Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2& unmarshaled, Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ViewConfiguration_1()));
}
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_com_back(const Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_com& marshaled, Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_ViewConfiguration_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshal_com_cleanup(Vftbl_t998C74EEC5DF116E76728D469B1A45C8B98467C2_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_pinvoke(const Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404& unmarshaled, Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HolographicCamera_1()));
}
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_pinvoke_back(const Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_pinvoke& marshaled, Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_HolographicCamera_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_pinvoke_cleanup(Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_com(const Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404& unmarshaled, Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HolographicCamera_1()));
}
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_com_back(const Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_com& marshaled, Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_HolographicCamera_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshal_com_cleanup(Vftbl_tF973721A034EE8DE94A75635A352BE00F3706404_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_pinvoke(const Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6& unmarshaled, Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
}
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_pinvoke_back(const Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_pinvoke& marshaled, Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6& unmarshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_pinvoke_cleanup(Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_com(const Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6& unmarshaled, Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
}
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_com_back(const Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_com& marshaled, Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6& unmarshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshal_com_cleanup(Vftbl_t26C67F4AE7F69A5EC7941C46AB1B6E98D36FB5D6_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_pinvoke(const Vftbl_t7534986437606D18803D5F504E1104A9616045E6& unmarshaled, Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_DepthReprojectionMethod_1()));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_DepthReprojectionMethod_2()));
}
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_pinvoke_back(const Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_pinvoke& marshaled, Vftbl_t7534986437606D18803D5F504E1104A9616045E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_DepthReprojectionMethod_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_put_DepthReprojectionMethod_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_pinvoke_cleanup(Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_com(const Vftbl_t7534986437606D18803D5F504E1104A9616045E6& unmarshaled, Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_DepthReprojectionMethod_1()));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_DepthReprojectionMethod_2()));
}
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_com_back(const Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_com& marshaled, Vftbl_t7534986437606D18803D5F504E1104A9616045E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_DepthReprojectionMethod_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_put_DepthReprojectionMethod_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_t3FCDD75B1462F39B75961D1ABB7FF2FEA65546AF_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshal_com_cleanup(Vftbl_t7534986437606D18803D5F504E1104A9616045E6_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_pinvoke(const Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557& unmarshaled, Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.get_get_AddedCameras_1();
	marshaled.___get_RemovedCameras_2 = unmarshaled.get_get_RemovedCameras_2();
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRenderingParameters_3()));
	marshaled.___get_Duration_4 = unmarshaled.get_get_Duration_4();
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CurrentPrediction_5()));
}
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_pinvoke_back(const Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_pinvoke& marshaled, Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_AddedCameras_temp_1;
	memset((&unmarshaled_get_AddedCameras_temp_1), 0, sizeof(unmarshaled_get_AddedCameras_temp_1));
	unmarshaled_get_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.set_get_AddedCameras_1(unmarshaled_get_AddedCameras_temp_1);
	intptr_t unmarshaled_get_RemovedCameras_temp_2;
	memset((&unmarshaled_get_RemovedCameras_temp_2), 0, sizeof(unmarshaled_get_RemovedCameras_temp_2));
	unmarshaled_get_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.set_get_RemovedCameras_2(unmarshaled_get_RemovedCameras_temp_2);
	unmarshaled.set_GetRenderingParameters_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_get_Duration_temp_4;
	memset((&unmarshaled_get_Duration_temp_4), 0, sizeof(unmarshaled_get_Duration_temp_4));
	unmarshaled_get_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.set_get_Duration_4(unmarshaled_get_Duration_temp_4);
	unmarshaled.set_get_CurrentPrediction_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_pinvoke_cleanup(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_com(const Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557& unmarshaled, Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.get_get_AddedCameras_1();
	marshaled.___get_RemovedCameras_2 = unmarshaled.get_get_RemovedCameras_2();
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRenderingParameters_3()));
	marshaled.___get_Duration_4 = unmarshaled.get_get_Duration_4();
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CurrentPrediction_5()));
}
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_com_back(const Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_com& marshaled, Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_AddedCameras_temp_1;
	memset((&unmarshaled_get_AddedCameras_temp_1), 0, sizeof(unmarshaled_get_AddedCameras_temp_1));
	unmarshaled_get_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.set_get_AddedCameras_1(unmarshaled_get_AddedCameras_temp_1);
	intptr_t unmarshaled_get_RemovedCameras_temp_2;
	memset((&unmarshaled_get_RemovedCameras_temp_2), 0, sizeof(unmarshaled_get_RemovedCameras_temp_2));
	unmarshaled_get_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.set_get_RemovedCameras_2(unmarshaled_get_RemovedCameras_temp_2);
	unmarshaled.set_GetRenderingParameters_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_get_Duration_temp_4;
	memset((&unmarshaled_get_Duration_temp_4), 0, sizeof(unmarshaled_get_Duration_temp_4));
	unmarshaled_get_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.set_get_Duration_4(unmarshaled_get_Duration_temp_4);
	unmarshaled.set_get_CurrentPrediction_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshal_com_cleanup(Vftbl_t95A47E6D94D685C06DAEE8A4D68A5CFFB6C8C557_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m17769290996DDB38D7973F56BA1828E4DC96D5D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * L_0 = (U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F *)il2cpp_codegen_object_new(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF815A9A6DC6DA290F1BCBDBB5617DA239464C113(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF815A9A6DC6DA290F1BCBDBB5617DA239464C113 (U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<get_CameraPoses>b__6_0(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m281E26914BE8342EC900CD763C3271F213B23088 (U3CU3Ec_t8AD64FE0DF07215E59572BC02593CE708238921F * __this, IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tAEDA3B5BA9FD183848E9F9A218F78ECAD304FD76 * L_0 = ___obj0;
		IHolographicCameraPose_tBE5D0E6444BC355E6E947532F2C3E3CE973C153D * L_1;
		L_1 = IHolographicCameraPose_op_Implicit_mB9A5C61150237020BDC05CBBF0605B85CD78BD09(L_0, /*hidden argument*/NULL);
		HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE * L_2 = (HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE *)il2cpp_codegen_object_new(HolographicCameraPose_t7F422A2F2D97351EB7096598097ED6E644013DCE_il2cpp_TypeInfo_var);
		HolographicCameraPose__ctor_mC669309C40BF6DC8BEAF6D56A8D03B5CA4330DB7(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
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


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_pinvoke(const Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E& unmarshaled, Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CameraPoses_1()));
}
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_pinvoke_back(const Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_pinvoke& marshaled, Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_CameraPoses_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_pinvoke_cleanup(Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_com(const Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E& unmarshaled, Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CameraPoses_1()));
}
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_com_back(const Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_com& marshaled, Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_CameraPoses_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshal_com_cleanup(Vftbl_t87CD2DA7FCFD1F00FA7788683BC0F582F303313E_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_pinvoke(const Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C& unmarshaled, Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.get_get_NativeRenderTargetSize_1();
	marshaled.___get_RenderTargetSize_2 = unmarshaled.get_get_RenderTargetSize_2();
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.get_RequestRenderTargetSize_3();
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.get_get_SupportedPixelFormats_4();
	marshaled.___get_PixelFormat_5 = unmarshaled.get_get_PixelFormat_5();
	marshaled.___put_PixelFormat_6 = unmarshaled.get_put_PixelFormat_6();
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsStereo_7()));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_RefreshRate_8()));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Kind_9()));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Display_10()));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsEnabled_11()));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_IsEnabled_12()));
}
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_pinvoke_back(const Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_pinvoke& marshaled, Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_NativeRenderTargetSize_temp_1;
	memset((&unmarshaled_get_NativeRenderTargetSize_temp_1), 0, sizeof(unmarshaled_get_NativeRenderTargetSize_temp_1));
	unmarshaled_get_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.set_get_NativeRenderTargetSize_1(unmarshaled_get_NativeRenderTargetSize_temp_1);
	intptr_t unmarshaled_get_RenderTargetSize_temp_2;
	memset((&unmarshaled_get_RenderTargetSize_temp_2), 0, sizeof(unmarshaled_get_RenderTargetSize_temp_2));
	unmarshaled_get_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.set_get_RenderTargetSize_2(unmarshaled_get_RenderTargetSize_temp_2);
	intptr_t unmarshaled_RequestRenderTargetSize_temp_3;
	memset((&unmarshaled_RequestRenderTargetSize_temp_3), 0, sizeof(unmarshaled_RequestRenderTargetSize_temp_3));
	unmarshaled_RequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.set_RequestRenderTargetSize_3(unmarshaled_RequestRenderTargetSize_temp_3);
	intptr_t unmarshaled_get_SupportedPixelFormats_temp_4;
	memset((&unmarshaled_get_SupportedPixelFormats_temp_4), 0, sizeof(unmarshaled_get_SupportedPixelFormats_temp_4));
	unmarshaled_get_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.set_get_SupportedPixelFormats_4(unmarshaled_get_SupportedPixelFormats_temp_4);
	intptr_t unmarshaled_get_PixelFormat_temp_5;
	memset((&unmarshaled_get_PixelFormat_temp_5), 0, sizeof(unmarshaled_get_PixelFormat_temp_5));
	unmarshaled_get_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.set_get_PixelFormat_5(unmarshaled_get_PixelFormat_temp_5);
	intptr_t unmarshaled_put_PixelFormat_temp_6;
	memset((&unmarshaled_put_PixelFormat_temp_6), 0, sizeof(unmarshaled_put_PixelFormat_temp_6));
	unmarshaled_put_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.set_put_PixelFormat_6(unmarshaled_put_PixelFormat_temp_6);
	unmarshaled.set_get_IsStereo_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_get_RefreshRate_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Kind_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_Kind_9, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Display_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_Display_10, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_IsEnabled_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_put_IsEnabled_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_pinvoke_cleanup(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_com(const Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C& unmarshaled, Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.get_get_NativeRenderTargetSize_1();
	marshaled.___get_RenderTargetSize_2 = unmarshaled.get_get_RenderTargetSize_2();
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.get_RequestRenderTargetSize_3();
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.get_get_SupportedPixelFormats_4();
	marshaled.___get_PixelFormat_5 = unmarshaled.get_get_PixelFormat_5();
	marshaled.___put_PixelFormat_6 = unmarshaled.get_put_PixelFormat_6();
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsStereo_7()));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_RefreshRate_8()));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Kind_9()));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Display_10()));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsEnabled_11()));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_IsEnabled_12()));
}
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_com_back(const Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_com& marshaled, Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_NativeRenderTargetSize_temp_1;
	memset((&unmarshaled_get_NativeRenderTargetSize_temp_1), 0, sizeof(unmarshaled_get_NativeRenderTargetSize_temp_1));
	unmarshaled_get_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.set_get_NativeRenderTargetSize_1(unmarshaled_get_NativeRenderTargetSize_temp_1);
	intptr_t unmarshaled_get_RenderTargetSize_temp_2;
	memset((&unmarshaled_get_RenderTargetSize_temp_2), 0, sizeof(unmarshaled_get_RenderTargetSize_temp_2));
	unmarshaled_get_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.set_get_RenderTargetSize_2(unmarshaled_get_RenderTargetSize_temp_2);
	intptr_t unmarshaled_RequestRenderTargetSize_temp_3;
	memset((&unmarshaled_RequestRenderTargetSize_temp_3), 0, sizeof(unmarshaled_RequestRenderTargetSize_temp_3));
	unmarshaled_RequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.set_RequestRenderTargetSize_3(unmarshaled_RequestRenderTargetSize_temp_3);
	intptr_t unmarshaled_get_SupportedPixelFormats_temp_4;
	memset((&unmarshaled_get_SupportedPixelFormats_temp_4), 0, sizeof(unmarshaled_get_SupportedPixelFormats_temp_4));
	unmarshaled_get_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.set_get_SupportedPixelFormats_4(unmarshaled_get_SupportedPixelFormats_temp_4);
	intptr_t unmarshaled_get_PixelFormat_temp_5;
	memset((&unmarshaled_get_PixelFormat_temp_5), 0, sizeof(unmarshaled_get_PixelFormat_temp_5));
	unmarshaled_get_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.set_get_PixelFormat_5(unmarshaled_get_PixelFormat_temp_5);
	intptr_t unmarshaled_put_PixelFormat_temp_6;
	memset((&unmarshaled_put_PixelFormat_temp_6), 0, sizeof(unmarshaled_put_PixelFormat_temp_6));
	unmarshaled_put_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.set_put_PixelFormat_6(unmarshaled_put_PixelFormat_temp_6);
	unmarshaled.set_get_IsStereo_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_get_RefreshRate_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_tC92F2D17FE9E484302E3C0BDE6124821B132C023_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Kind_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC>(marshaled.___get_Kind_9, _get_PropertyAsEnum_tCE51ACBA5B43B55E59BF86A4B06DF14DC5CF48CC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Display_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_Display_10, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_IsEnabled_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t81C52D14731B69B64512D483DA29436BE355061B_il2cpp_TypeInfo_var));
	unmarshaled.set_put_IsEnabled_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_t9E600FE1A5CAADA2728BB9819FF55B956AA611EB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshal_com_cleanup(Vftbl_t15AB714628E934836F2BBBCE45208612BA29C46C_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1C9AA60A0F4C2A23EF29CCB531683842FFC8F84E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * L_0 = (U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 *)il2cpp_codegen_object_new(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mECE966FB605558D86EBF611C4F14548EC184C258(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mECE966FB605558D86EBF611C4F14548EC184C258 (U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<get_SupportedDepthReprojectionMethods>b__6_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m41F93EFE7F1942001F0EF5CCD5A070B493366893 (U3CU3Ec_t5F89FF8F269EFA0404698D56C3633D79EF15C0B4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return (int32_t)(L_0);
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


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_pinvoke(const Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF& unmarshaled, Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SupportedDepthReprojectionMethods_1()));
}
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_pinvoke_back(const Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_pinvoke& marshaled, Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_SupportedDepthReprojectionMethods_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_pinvoke_cleanup(Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_com(const Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF& unmarshaled, Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SupportedDepthReprojectionMethods_1()));
}
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_com_back(const Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_com& marshaled, Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_SupportedDepthReprojectionMethods_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t7C771A672C1D27AF590712AF8551A16CEF17383E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshal_com_cleanup(Vftbl_t44ED14D45AFDDB06A3AFA4BA7CC083571FFDE5BF_marshaled_com& marshaled)
{
	IInspectableVftbl_t1155C49D26562BDBA6C6E8DCCB41324D7D553C3C_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 (_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iidCount1, ___iids2);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetIids::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetIids__ctor_m7A9E576E665FEBE591A16418346C15080CF6BB6E (_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_mF7DF762BA04B034AEBE1B40AC384A19FFE0E8925 (_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetIids::BeginInvoke(System.IntPtr,System.UInt32*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetIids_BeginInvoke_mB5D618632834E503239954F23838DA298EA33D1F (_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iidCount1;
	__d_args[2] = ___iids2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_EndInvoke_mF8FA3CBD190A145E2D8FF96135286AD98C7098B7 (_GetIids_tE4E0C3C068308436001DAACB56DB2B7A677E31D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B (_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___className1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_mD2DE399B5B9CE11AE19E9523FB67FDF66FA29293 (_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_m1F77580101B4F30E180E3A2EB4A759AF6F7E969C (_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___className1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___className1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRuntimeClassName_BeginInvoke_m487D4E4E99988A216939144E6B389F534190FD63 (_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * __this, intptr_t ___pThis0, intptr_t* ___className1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___className1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_EndInvoke_m02FF6430C4078BAEDB961977C6EBAE094AD00063 (_GetRuntimeClassName_t59F7A2603E637F9A3FAD771BE29E1F2EDB7BBD3B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 (_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___trustLevel1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetTrustLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_mAC170D35FD770ABF5AC5AEC4417E9D6F12C87D62 (_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m7FD9373C04F0E8FF0246F13A535E50C5A2FE084F (_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___trustLevel1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___trustLevel1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetTrustLevel::BeginInvoke(System.IntPtr,WinRT.TrustLevel*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrustLevel_BeginInvoke_m74179EA83513098C8FEEA3F6B1DA37F45D87C5A2 (_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___trustLevel1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_EndInvoke_m4B0F53869E887E965FD3AC7FF3AE9471D5375E40 (_GetTrustLevel_t97D59A8F9EA0BCCCCB9247B8A473118777FB7501 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 (_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m8593C57F26651CBD3C5CCF19AF0F0D0BFBAB43D4 (_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_GetMany::Invoke(System.IntPtr,System.UInt32,System.Int32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_mEECB4389CDFC47CD954B847F52DDC00A3BA9EAC7 (_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfEnum/_GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.Int32*,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_m131A722A2DFAB752DD45FB1F7EDC326974917043 (_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___capacity1);
	__d_args[2] = ___values2;
	__d_args[3] = ___actual3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_GetMany::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mADBB01E05805763CB409538E07C208D72D69955D (_GetMany_tF5748E318DA8712894242AA584DD613CC5D6CEE1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 (_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum/_MoveNext::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MoveNext__ctor_m3746F174821B5D742CF6BE83CCF94AFD6BD4D589 (_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_m0436EE24EBEEC530D21857C057CBF4D255A7C9E3 (_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfEnum/_MoveNext::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _MoveNext_BeginInvoke_m5876E0AC836F7A65C25322AFABA3882B0B902AD6 (_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___hasCurrent1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_MoveNext::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_EndInvoke_mB5ED57367F8C30D7054DB3F8E633B8C33C2BF86C (_MoveNext_tB8CABFCE7232C6948305EA96AD30B489D38CDCB8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 (_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_mC7D965718DF976B7BD8CC625AFC6F209CEBF0873 (_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_GetMany::Invoke(System.IntPtr,System.UInt32,System.IntPtr*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_mDC3699F2176BD568E006B204CD21D7C72C716893 (_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfObject/_GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.IntPtr*,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_m75747EE3921291FE423DC4E269D31D2C1390920D (_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___capacity1);
	__d_args[2] = ___values2;
	__d_args[3] = ___actual3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_GetMany::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mFBD5D60854C2EE403CDB36AA907BA54CC8E44F97 (_GetMany_tEB44842CDBB5B2B24697D0835B7D75709D19F498 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 (_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject/_MoveNext::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MoveNext__ctor_mCC168C24A2D7B33639780BC4122B92009E158631 (_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_mF07BC29D59D853ACB5AA213F20D56262778F0947 (_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfObject/_MoveNext::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _MoveNext_BeginInvoke_m25196383C918AA1474DF624DB2CD40D1F3B8C592 (_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * __this, intptr_t ___thisPtr0, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___hasCurrent1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___hasCurrent1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_MoveNext::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_EndInvoke_m056108C61C5EEB9F612B81509A27072E2C0CF83B (_MoveNext_t94205B0A5054D612F83212B387B86A8054F68150 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 (_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_mE73FFF6488B0188E0DCA2D4E170AC5314489991B (_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_mBF62CC9F284074A724BC464FC6AE3786A4FA725F (_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_AddRef::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AddRef_BeginInvoke_m5373957CC5D34388E6A5AB307972A5CFB5FDEE02 (_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * __this, intptr_t ___pThis0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_EndInvoke_m152D57786EC4A02299CDE381C404001C99BCBE38 (_AddRef_tC0E15E1F58A4D4F881282EB5F68ECC6F5EC11450 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD (_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t *, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iid1, ___vftbl2);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m59E20564236CF95589C3E758E1E4B055B5CED6A4 (_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_m774279BA06D786EC1EA178AF440634144EF80081 (_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_QueryInterface::BeginInvoke(System.IntPtr,System.Guid*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _QueryInterface_BeginInvoke_mA777D85503A04EBAAC0399B21E639B3C6E3BAB5D (_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iid1;
	__d_args[2] = ___vftbl2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_EndInvoke_m6230AB6E2C0E44DB523E7C4311BCEB516409D011 (_QueryInterface_t337BE1CDB77E15F5330CD2850EAFD2C547C6E5DD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 (_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m71545B810993777848CB5DFE755C52E1F6F5C28A (_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_m3FF151915A4FC4B1132DB9332A2BE8872C6618FA (_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_Release::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Release_BeginInvoke_m7A747BE1CB4CBC27FEE213DE9DA6C4DDCE8B0779 (_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * __this, intptr_t ___pThis0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_EndInvoke_m8B8F07C1144ACC44DAF37301724E614BCE68AFD7 (_Release_t75C67687471D9D4B389D178CBDDD004E2BC005B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF (_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_GetAt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetAt__ctor_mF668B98DB082BB80C0085596A68DAF8392B5954E (_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetAt::Invoke(System.IntPtr,System.UInt32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_mE3451D66F3E2CFDD5E071122E419D476E5FA759B (_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum/_GetAt::BeginInvoke(System.IntPtr,System.UInt32,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetAt_BeginInvoke_m18EDAC3A0EEB3A417B17C3D8FD52FBB3CB9C9CBB (_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetAt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_EndInvoke_m9478F70B6B66886FF5FC4FF7AC6322B6BF7D99E4 (_GetAt_t68536959B253B7FF0F165A410D347926EA90F6CF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 (_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m7D2DF0626843E84075CBB29D5B7106448348E9AD (_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.Int32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m69811FD605927D42F13B1700558BE20DBEEE37DE (_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					else
						result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					else
						result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum/_GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.Int32*,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_mEFFB2F43C3C9E6AC73EC629C56CFD065A383A814 (_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___startingIndex1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___capacity2);
	__d_args[3] = ___values3;
	__d_args[4] = ___actual4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetMany::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mB3CF00D41D6DCABBFC96738ACDEB95A2FB1A8126 (_GetMany_tDD0E5AA6126DE15ED814DB4CAB21AB0912547857 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 (_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_IndexOf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IndexOf__ctor_mF4BF11674B4B1FFB590F04583E0F870BA66C368C (_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_IndexOf::Invoke(System.IntPtr,System.Int32,System.UInt32*,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_m7B6C8996EDFBB1B7D6726E4477AB2105581E6C10 (_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum/_IndexOf::BeginInvoke(System.IntPtr,System.Int32,System.UInt32*,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IndexOf_BeginInvoke_m5A7ACE616FC789777485AFCB59E1C7098BCB7027 (_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___value1);
	__d_args[2] = ___index2;
	__d_args[3] = ___found3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_IndexOf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_EndInvoke_mF1E8CAC086255BFB4F1F888D45E13871209F7138 (_IndexOf_tD52923261D4D7E9624499A321AE4F5FC8A802C86 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_GetAt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetAt__ctor_m84CB4B21FC8FF84F8D9BDBB91646987279CB35EF (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetAt::Invoke(System.IntPtr,System.UInt32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_mCE771ED64C5CACBCA136871B9DDBEB7D9058D4D2 (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject/_GetAt::BeginInvoke(System.IntPtr,System.UInt32,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetAt_BeginInvoke_m0C5343EB4E6BE3DDE61D83F68926C30425B7671F (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetAt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_EndInvoke_m6AD8E747CEBA42EA9D2324818B0FB4904620B174 (_GetAt_tA1FFD085C90BCB0F325B9DEF64BBBB00ED500A16 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE (_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m1A6243A92C08DBF50D2130CB8111C1F7E0BC49CF (_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m4134E5D0A5D4A81ABB690336E4973350433EED10 (_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					else
						result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					else
						result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject/_GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr*,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_m341A86B4E1DADADD8677F36466C15A068F9E6DF3 (_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___startingIndex1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___capacity2);
	__d_args[3] = ___values3;
	__d_args[4] = ___actual4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetMany::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_m9E51AC57509D6D83A56F362A78E044E2CEA9D557 (_GetMany_t7CFCDD6D629D513B67F0D1DAFF96AC76219E99BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 (_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_IndexOf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IndexOf__ctor_mD810CE219E1F288F6B8E6F8CD76E3CE9435033C3 (_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_IndexOf::Invoke(System.IntPtr,System.IntPtr,System.UInt32*,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_m5A6FD5136DEAA8E71A18CD8856C1DA228DC847EA (_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject/_IndexOf::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt32*,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IndexOf_BeginInvoke_mC5334BD43A66A3D1CA51355FC79AEF158B889834 (_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_tAF568BB1DA307C702B8143F011EE18CF07FB94BA * ___found3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___value1);
	__d_args[2] = ___index2;
	__d_args[3] = ___found3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_IndexOf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_EndInvoke_m9E592165F373F0CB3DCE7F4BB4C823E8DC5981EB (_IndexOf_t4E023CA7392329DD38F03013A9D74C79AF4236B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 WinRT.Platform/DotNETLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__AddDllDirectory_m5B9C1D69A582F9F15A4D010FF6EBE2116108403D (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, String_t* ___pathName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___pathName0;
		int32_t L_1;
		L_1 = DotNETLinkage_AddDllDirectory_mE66F48EFDD954961BE010A7E5E731210C3D06A9B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean WinRT.Platform/DotNETLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_m6AE54C6301BC18859C12BA73CF6530B2E010891B (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = DotNETLinkage_FreeLibrary_mE8C5C4D743E74166C019AB248497FFA9FC0B6570((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_mA1DB7D246921642791F9F7F398E9ED43CA148D40 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoIncrementMTAUsage_m6D7291D25ED726801844B693E99B0807EFD53212((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_mB1098A94E67F35078204B67CD23F59B1A03A5911 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoDecrementMTAUsage_m8110AEE595D1A18223F248808F93B0DBE9F6E9BF((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_m4A9BEBE8E6CC1D120329AD6C39F9BFE7CD8F8584 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = DotNETLinkage_WindowsDeleteString_mB6E94D83EFD431BEA045E988E944B17967C81153((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_mBA2FF8074AB9136BEBC491E7D915C7D72EC65A51 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetHRForLastWin32Error_mC4244CDFD16223106A9FDE60850A0C69607C2CAD(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_mE66F48EFDD954961BE010A7E5E731210C3D06A9B (String_t* ___pathName0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AddDllDirectory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pathName0' to native representation
	Il2CppChar* ____pathName0_marshaled = NULL;
	if (___pathName0 != NULL)
	{
		____pathName0_marshaled = ___pathName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AddDllDirectory)(____pathName0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____pathName0_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_mE8C5C4D743E74166C019AB248497FFA9FC0B6570 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___moduleHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m6D7291D25ED726801844B693E99B0807EFD53212 (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_m8110AEE595D1A18223F248808F93B0DBE9F6E9BF (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mB6E94D83EFD431BEA045E988E944B17967C81153 (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hstring0);
	#endif

	return returnValue;
}
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m0DFED97C182CE9363FD92BD874E0125C43AFB8F8 (DotNETLinkage_tC27EF5D96A2E40A9319C537B53CE90D70A0C333C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 WinRT.Platform/IL2CPPLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__AddDllDirectory_mC6645F42E60CF07B2C454882870749F17D487728 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, String_t* ___pathName0, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral376C23DA1914D1A4BFE3DE23D6B327481318B5C5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage__AddDllDirectory_mC6645F42E60CF07B2C454882870749F17D487728_RuntimeMethod_var)));
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_m392F40EBD95464E01776CFBDF5CF9B79AB489AD8 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = IL2CPPLinkage_FreeLibrary_m564BE7F1BDA65F5CD03D79E9D69C73C04CD01856((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_mB41454130DBDB2B86F71C5A9C5B768534D66A5C0 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoIncrementMTAUsage_mAA95B50D81874C9EB7AC4ED53F57F0E3213E6ABC((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_m98418E78DFD577B6006900246A4D16CEFCE572F9 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoDecrementMTAUsage_m258E77E0F1D70575CD1207C7D6A0DC123363D656((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_mFEFDAB04BA3BD338DD338EDE34C43503B6D3DE12 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_WindowsDeleteString_m98BD084D27A169898F2B6C71CBD0B2C7ECD4EFFE((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_m9738D46523D2697BD9E5F6CD36C1F7DEB0E26BE0 (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)-2147467259);
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m564BE7F1BDA65F5CD03D79E9D69C73C04CD01856 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_mAA95B50D81874C9EB7AC4ED53F57F0E3213E6ABC (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m258E77E0F1D70575CD1207C7D6A0DC123363D656 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m98BD084D27A169898F2B6C71CBD0B2C7ECD4EFFE (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m663230512BC68A9D0313691D256D7319DF46FAEE (IL2CPPLinkage_tC38C6B1B34FD1370D32D1F78696BEA5363A3F89E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___cameraPosePtr1, ___resultPtr2);

	return returnValue;
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRenderingParameters__ctor_mA0C2F4A6F2FD0BA35465FCE40CBD13F4BB4ADB35 (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_m2A732CFEC74896267D938D7EDF5A681547A41025 (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRenderingParameters_BeginInvoke_m9BEB288A4B5741A353735C4D415E4E1CA9CA3349 (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cameraPosePtr1);
	__d_args[2] = ___resultPtr2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_EndInvoke_mC77F94BE83DA96B4C86427A9B93C21B3C9D65884 (_GetRenderingParameters_t92BCCAE8D039F16284B3C6F7E8BD5FBBAA143A2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
