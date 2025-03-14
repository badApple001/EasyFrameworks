#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4Invoker<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5Invoker<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceFuncInvoker9Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceFuncInvoker9Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[9] = { p1, p2, p3, p4, p5, p6, p7, p8, p9 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceFuncInvoker10Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceFuncInvoker10Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[10] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceFuncInvoker11Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceFuncInvoker11Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[11] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericInterfaceFuncInvoker12Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericInterfaceFuncInvoker12Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[12] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericInterfaceFuncInvoker13Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericInterfaceFuncInvoker13Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[13] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct GenericInterfaceFuncInvoker14Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct GenericInterfaceFuncInvoker14Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[14] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct GenericInterfaceFuncInvoker15Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct GenericInterfaceFuncInvoker15Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*, T15*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14, T15* p15)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[15] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct GenericInterfaceFuncInvoker16Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct GenericInterfaceFuncInvoker16Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*, T15*, T16*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14, T15* p15, T16* p16)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[16] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
struct GenericInterfaceFuncInvoker17Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
struct GenericInterfaceFuncInvoker17Invoker<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*, T15*, T16*, T17*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14, T15* p15, T16* p16, T17* p17)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[17] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t2957C3F3F922000D05C6AE59163AF0088BB8D2E4;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tCC196E183FB5A7CF798C682F9C3B70CDDA50CFFF;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t61D5D3D9EDD28391B0FE316A5641A34D7FF16FD0;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t63AA3F84ED218C4C0589371B74758F62E3EFCF85;
struct List_1_t252816FEC833E131EE88E7A538A4A833E8D85919;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
struct Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IReferenceU5BU5D_t7B4D0C90AF0386423FDBD2A6727C66F48CC831CC;
struct IReferenceU5BU5D_tC0842D049C1FA0E630414E3CBA14EB88F6FE1D2B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IReference_tD7BF54CEAA99B6C9D82D3DE03EBE03FF6ED356D2;
struct IReference_tA77CAA3CF5B8572CCCE5B9764D3F1AE2E948C93D;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct Pool_t7C1361688F5813C891384613EF265D393845D312;
struct ReferenceCollection_tEBC74E67F2EA41EBD7843FD7C9E3F9D7CF9D39AB;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct ITextHelper_t84F3FEF4F18561056F9939E65AD1E258233FD2DE;

IL2CPP_EXTERN_C RuntimeClass* DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m93558DD9A8D26C2DFD913851D30BF18B5401EF21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD4AF9186EBB8596486B23EF42C5A04021AB8F2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mEE3DF4ACDD4646579850719C6E5DA7E01B91669F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_t252816FEC833E131EE88E7A538A4A833E8D85919  : public RuntimeObject
{
	IReferenceU5BU5D_t7B4D0C90AF0386423FDBD2A6727C66F48CC831CC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533  : public RuntimeObject
{
	IReferenceU5BU5D_tC0842D049C1FA0E630414E3CBA14EB88F6FE1D2B* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct Pool_t7C1361688F5813C891384613EF265D393845D312  : public RuntimeObject
{
	List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* ___list;
};
struct ReferenceCollection_tEBC74E67F2EA41EBD7843FD7C9E3F9D7CF9D39AB  : public RuntimeObject
{
	Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* ___m_References;
	Type_t* ___m_ReferenceType;
	int32_t ___m_UsingReferenceCount;
	int32_t ___m_AcquireReferenceCount;
	int32_t ___m_ReleaseReferenceCount;
	int32_t ___m_AddReferenceCount;
	int32_t ___m_RemoveReferenceCount;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Text_tA54E658F30D031F55397B3DE9BF76752036FFE23  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters;
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_t252816FEC833E131EE88E7A538A4A833E8D85919_StaticFields
{
	IReferenceU5BU5D_t7B4D0C90AF0386423FDBD2A6727C66F48CC831CC* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields
{
	RuntimeObject* ___s_TextHelper;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

inline String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared)(___0_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared)(___0_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
inline RuntimeObject* List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57 (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64 (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t252816FEC833E131EE88E7A538A4A833E8D85919*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline int32_t Queue_1_get_Count_mEE3DF4ACDD4646579850719C6E5DA7E01B91669F_inline (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
inline RuntimeObject* Queue_1_Dequeue_m93558DD9A8D26C2DFD913851D30BF18B5401EF21 (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
inline void Queue_1_Enqueue_mD4AF9186EBB8596486B23EF42C5A04021AB8F2A9 (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_args;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pool_Get_TisRuntimeObject_m4F354EA69EBE020882B16526D56E2251209B1893_gshared (Pool_t7C1361688F5813C891384613EF265D393845D312* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_0, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}

IL_0013:
	{
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_3 = __this->___list;
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_4 = __this->___list;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_4, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57_RuntimeMethod_var);
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_7 = __this->___list;
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_8 = __this->___list;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_8, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64_RuntimeMethod_var);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_Get_TisIl2CppFullySharedGenericAny_m8C9F656B611646AB42D7DF07F200492D65617959_gshared (Pool_t7C1361688F5813C891384613EF265D393845D312* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tCBDF9F0E9BB0A045B132F4B82D1C31BD7731CF2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tCBDF9F0E9BB0A045B132F4B82D1C31BD7731CF2F);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	{
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_0, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tCBDF9F0E9BB0A045B132F4B82D1C31BD7731CF2F);
		return;
	}

IL_0013:
	{
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_3 = __this->___list;
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_4 = __this->___list;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_4, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m45B295261FE5F043190DD3D1336AF73710119E57_RuntimeMethod_var);
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_7 = __this->___list;
		List_1_t252816FEC833E131EE88E7A538A4A833E8D85919* L_8 = __this->___list;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_inline(L_8, List_1_get_Count_m435D6B4021EC137FD3C8A7C85ADF9CF622731C9F_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64(L_7, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_RemoveAt_m8EA3BEA24DB47DC3F2B09B5D8BF97CB03E9E8E64_RuntimeMethod_var);
		void* L_11 = UnBox_Any((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))), SizeOf_T_tCBDF9F0E9BB0A045B132F4B82D1C31BD7731CF2F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReferenceCollection_Acquire_TisRuntimeObject_m961144161F268F1BD07F1B09E70AA264378D0999_gshared (ReferenceCollection_tEBC74E67F2EA41EBD7843FD7C9E3F9D7CF9D39AB* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m93558DD9A8D26C2DFD913851D30BF18B5401EF21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mEE3DF4ACDD4646579850719C6E5DA7E01B91669F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = __this->___m_ReferenceType;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_4 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		int32_t L_5 = __this->___m_UsingReferenceCount;
		__this->___m_UsingReferenceCount = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = __this->___m_AcquireReferenceCount;
		__this->___m_AcquireReferenceCount = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_7 = __this->___m_References;
		V_0 = L_7;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{
				{
					bool L_8 = V_1;
					if (!L_8)
					{
						goto IL_007b;
					}
				}
				{
					Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_9 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_007b:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_10 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_1), NULL);
				Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_11 = __this->___m_References;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = Queue_1_get_Count_mEE3DF4ACDD4646579850719C6E5DA7E01B91669F_inline(L_11, Queue_1_get_Count_mEE3DF4ACDD4646579850719C6E5DA7E01B91669F_RuntimeMethod_var);
				if ((((int32_t)L_12) <= ((int32_t)0)))
				{
					goto IL_0070_1;
				}
			}
			{
				Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_13 = __this->___m_References;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = Queue_1_Dequeue_m93558DD9A8D26C2DFD913851D30BF18B5401EF21(L_13, Queue_1_Dequeue_m93558DD9A8D26C2DFD913851D30BF18B5401EF21_RuntimeMethod_var);
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0090;
			}

IL_0070_1:
			{
				goto IL_007c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		int32_t L_15 = __this->___m_AddReferenceCount;
		__this->___m_AddReferenceCount = ((int32_t)il2cpp_codegen_add(L_15, 1));
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}

IL_0090:
	{
		RuntimeObject* L_17 = V_2;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceCollection_Add_TisRuntimeObject_m31C336E5CF78F8F204787D247C61ED97E8C67490_gshared (ReferenceCollection_tEBC74E67F2EA41EBD7843FD7C9E3F9D7CF9D39AB* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD4AF9186EBB8596486B23EF42C5A04021AB8F2A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = __this->___m_ReferenceType;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_4 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_5 = __this->___m_References;
		V_0 = L_5;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_006c;
					}
				}
				{
					Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_7 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_7, NULL);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_8 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_8, (&V_1), NULL);
				int32_t L_9 = __this->___m_AddReferenceCount;
				int32_t L_10 = ___0_count;
				__this->___m_AddReferenceCount = ((int32_t)il2cpp_codegen_add(L_9, L_10));
				goto IL_0058_1;
			}

IL_0043_1:
			{
				Queue_1_t3C466C6AD520C63B104FF058CBCC3227A7CB0533* L_11 = __this->___m_References;
				RuntimeObject* L_12;
				L_12 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 1));
				NullCheck(L_11);
				Queue_1_Enqueue_mD4AF9186EBB8596486B23EF42C5A04021AB8F2A9(L_11, (RuntimeObject*)L_12, Queue_1_Enqueue_mD4AF9186EBB8596486B23EF42C5A04021AB8F2A9_RuntimeMethod_var);
			}

IL_0058_1:
			{
				int32_t L_13 = ___0_count;
				int32_t L_14 = L_13;
				___0_count = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
				if ((((int32_t)L_14) > ((int32_t)0)))
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFE98C0ECD8751FEC86E5F9CD2AFC20794571C81C_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m032CA5A330B4032D164F88B2B40B6A7F2590357F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA88A16DC097E207AD6CE15E89D3B94DBB01BDACE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3CD9CD3C768BBCC83DD02B2C76300A03AF1B1AD6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDDF220A2C757AF29FF6B3D7917AAE51C41189A4C_gshared (String_t* ___0_format, int32_t ___1_arg, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		RuntimeObject* L_8 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_9 = ___0_format;
		int32_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m216A3D6FD0FC9E2B8830AFCE3479A79754D8EC13_gshared (String_t* ___0_format, int64_t ___1_arg, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_format;
		int64_t L_4 = ___1_arg;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		RuntimeObject* L_8 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_9 = ___0_format;
		int64_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_m2833C26AB973551C4401A4EB3B2ACD48A940D12E_gshared (String_t* ___0_format, RuntimeObject* ___1_arg, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		RuntimeObject* L_6 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_7 = ___0_format;
		RuntimeObject* L_8 = ___1_arg;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = GenericInterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_6, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m15931BDD8294C5D9C38255C6EDFEB565A892BE00_gshared (String_t* ___0_format, float ___1_arg, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		RuntimeObject* L_8 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_9 = ___0_format;
		float L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_mC15E9C920C2AEB6AA067816DB9AC4C2B13A71E97_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t9B720C5BBDE34AF3860F012AE9C7C82B18987E37 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t9B720C5BBDE34AF3860F012AE9C7C82B18987E37);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_format;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg : &___1_arg), SizeOf_T_t9B720C5BBDE34AF3860F012AE9C7C82B18987E37);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		RuntimeObject* L_7 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_8 = ___0_format;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg : &___1_arg), SizeOf_T_t9B720C5BBDE34AF3860F012AE9C7C82B18987E37);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = GenericInterfaceFuncInvoker2Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_9: *(void**)L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD089BD8960223B5BDC4D72E45A1F701A30505495_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		RuntimeObject* L_11 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		int32_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_mCB38E45F38E561E39DB5C761C996D05A814BDA82_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_8 = ___0_format;
		RuntimeObject* L_9 = ___1_arg1;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_7);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, L_9, L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_mE949746104558E68DA159E77F300331A3BF3A807_gshared (String_t* ___0_format, float ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		RuntimeObject* L_9 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_10 = ___0_format;
		float L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, float, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCDB267C297F1F348B3F95E6B6D78694FAE76F7C9_gshared (String_t* ___0_format, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg1, float ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_arg1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		RuntimeObject* L_11 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_12 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_arg1;
		float L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m27D9F512A1945BAF60E66A5CF09F90BCEAAB8703_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tEB848448C5D39CD1AF757AB9D2D3979B08D1C24A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t1274509A6CB6C76E36F9602A1B4F7B42DF19F1BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tEB848448C5D39CD1AF757AB9D2D3979B08D1C24A);
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t1274509A6CB6C76E36F9602A1B4F7B42DF19F1BC);
	const Il2CppFullySharedGenericAny L_12 = L_6;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = ___0_format;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tEB848448C5D39CD1AF757AB9D2D3979B08D1C24A);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t1274509A6CB6C76E36F9602A1B4F7B42DF19F1BC);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_5, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		RuntimeObject* L_9 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_10 = ___0_format;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tEB848448C5D39CD1AF757AB9D2D3979B08D1C24A);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t1274509A6CB6C76E36F9602A1B4F7B42DF19F1BC);
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_12: *(void**)L_12));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5D598A14C88A8864FC9AACD1C67B7FAB5D6F9A8A_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_8);
		int32_t L_10 = ___3_arg3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_9, L_12, NULL);
		return L_13;
	}

IL_002e:
	{
		RuntimeObject* L_14 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_15 = ___0_format;
		int32_t L_16 = ___1_arg1;
		int32_t L_17 = ___2_arg2;
		int32_t L_18 = ___3_arg3;
		NullCheck(L_14);
		String_t* L_19;
		L_19 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_14, L_15, L_16, L_17, L_18);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m51D392CF55CEB95F2B850FC95005EE27428B3F56_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_arg3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_10, NULL);
		return L_11;
	}

IL_002e:
	{
		RuntimeObject* L_12 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_13 = ___0_format;
		int32_t L_14 = ___1_arg1;
		RuntimeObject* L_15 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = ___3_arg3;
		NullCheck(L_12);
		String_t* L_17;
		L_17 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_12, L_13, L_14, L_15, L_16);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m620A5D1A5D3CF574E4767CAD7AD5266026EF95A0_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		RuntimeObject* L_6 = ___3_arg3;
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_002e:
	{
		RuntimeObject* L_8 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_9 = ___0_format;
		RuntimeObject* L_10 = ___1_arg1;
		RuntimeObject* L_11 = ___2_arg2;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_8);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_8, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m750277E901F1426A0516CC052EECE008462A731D_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t096788BE8E4A4CF90D8356592E63121FABCB693F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_tE368496F4136F2952F3A3B0A3DF6F04FD3E395B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tAE5FD60A4420A2A21FC024E5381372B9047C7B80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t096788BE8E4A4CF90D8356592E63121FABCB693F);
	const Il2CppFullySharedGenericAny L_13 = L_4;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tE368496F4136F2952F3A3B0A3DF6F04FD3E395B6);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T3_tAE5FD60A4420A2A21FC024E5381372B9047C7B80);
	const Il2CppFullySharedGenericAny L_15 = L_8;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t096788BE8E4A4CF90D8356592E63121FABCB693F);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_4);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tE368496F4136F2952F3A3B0A3DF6F04FD3E395B6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tAE5FD60A4420A2A21FC024E5381372B9047C7B80);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_5, L_7, L_9, NULL);
		return L_10;
	}

IL_002e:
	{
		RuntimeObject* L_11 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_12 = ___0_format;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t096788BE8E4A4CF90D8356592E63121FABCB693F);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tE368496F4136F2952F3A3B0A3DF6F04FD3E395B6);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tAE5FD60A4420A2A21FC024E5381372B9047C7B80);
		NullCheck(L_11);
		String_t* L_16;
		L_16 = GenericInterfaceFuncInvoker4Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_11, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_15: *(void**)L_15));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m5755C16F71FC1DF9E58654881D9D2E2C579566CD_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_17;
	}

IL_0047:
	{
		RuntimeObject* L_18 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_19 = ___0_format;
		int32_t L_20 = ___1_arg1;
		RuntimeObject* L_21 = ___2_arg2;
		RuntimeObject* L_22 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = ___4_arg4;
		NullCheck(L_18);
		String_t* L_24;
		L_24 = GenericInterfaceFuncInvoker5< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_18, L_19, L_20, L_21, L_22, L_23);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFF513731408B134203D998921236C6205B95FEDD_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tAA948BF51A63A24D906C414015EFD159CCF3E9AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_tF38F0B9A4360A6526D701BCD486279A3887B0301 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tA9F3BCD7FE2429EB9A23DBF205DFFFD673D6AED6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_t90EC9B76C8D4438E2F4E77C73A28A335046D8EAC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tAA948BF51A63A24D906C414015EFD159CCF3E9AB);
	const Il2CppFullySharedGenericAny L_20 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tF38F0B9A4360A6526D701BCD486279A3887B0301);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tA9F3BCD7FE2429EB9A23DBF205DFFFD673D6AED6);
	const Il2CppFullySharedGenericAny L_22 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_t90EC9B76C8D4438E2F4E77C73A28A335046D8EAC);
	const Il2CppFullySharedGenericAny L_23 = L_15;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tAA948BF51A63A24D906C414015EFD159CCF3E9AB);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tF38F0B9A4360A6526D701BCD486279A3887B0301);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tA9F3BCD7FE2429EB9A23DBF205DFFFD673D6AED6);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t90EC9B76C8D4438E2F4E77C73A28A335046D8EAC);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_14, NULL);
		return L_17;
	}

IL_0047:
	{
		RuntimeObject* L_18 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_19 = ___0_format;
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tAA948BF51A63A24D906C414015EFD159CCF3E9AB);
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tF38F0B9A4360A6526D701BCD486279A3887B0301);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tA9F3BCD7FE2429EB9A23DBF205DFFFD673D6AED6);
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t90EC9B76C8D4438E2F4E77C73A28A335046D8EAC);
		NullCheck(L_18);
		String_t* L_24;
		L_24 = GenericInterfaceFuncInvoker5Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_18, L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_23: *(void**)L_23));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8FB072D494AA70A5DBD967A236AC6381F94D0565_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, float ___5_arg5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		float L_22 = ___5_arg5;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		RuntimeObject* L_26 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_27 = ___0_format;
		uint8_t L_28 = ___1_arg1;
		uint8_t L_29 = ___2_arg2;
		uint8_t L_30 = ___3_arg3;
		uint8_t L_31 = ___4_arg4;
		float L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF7C18F0035686B12B9EACF5ABDEEF206B573A640_gshared (String_t* ___0_format, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_arg1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_arg2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_arg3, float ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___3_arg3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = ___4_arg4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = ___5_arg5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		RuntimeObject* L_26 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_27 = ___0_format;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___3_arg3;
		float L_31 = ___4_arg4;
		int32_t L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m960ADF8B09A11F9C468D351149A6807677C7CE4A_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t9C2F1B99F9550BF54A827AA25BE7067687246F45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t07EA818C2CF1DBBE796A1EAE9DF0FA720C16214B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t2D81CDF195225380802E3119468DDE50F5B96B7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_t40A4DB34D6C1380B71164E21BE1990708320007E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tDDE2813E560498A71AEF436DD94F3CC248DB2FD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t9C2F1B99F9550BF54A827AA25BE7067687246F45);
	const Il2CppFullySharedGenericAny L_23 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t07EA818C2CF1DBBE796A1EAE9DF0FA720C16214B);
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t2D81CDF195225380802E3119468DDE50F5B96B7F);
	const Il2CppFullySharedGenericAny L_25 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_t40A4DB34D6C1380B71164E21BE1990708320007E);
	const Il2CppFullySharedGenericAny L_26 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tDDE2813E560498A71AEF436DD94F3CC248DB2FD0);
	const Il2CppFullySharedGenericAny L_27 = L_18;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t9C2F1B99F9550BF54A827AA25BE7067687246F45);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t07EA818C2CF1DBBE796A1EAE9DF0FA720C16214B);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t2D81CDF195225380802E3119468DDE50F5B96B7F);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t40A4DB34D6C1380B71164E21BE1990708320007E);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tDDE2813E560498A71AEF436DD94F3CC248DB2FD0);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_17, NULL);
		return L_20;
	}

IL_0051:
	{
		RuntimeObject* L_21 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_22 = ___0_format;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t9C2F1B99F9550BF54A827AA25BE7067687246F45);
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t07EA818C2CF1DBBE796A1EAE9DF0FA720C16214B);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t2D81CDF195225380802E3119468DDE50F5B96B7F);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t40A4DB34D6C1380B71164E21BE1990708320007E);
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tDDE2813E560498A71AEF436DD94F3CC248DB2FD0);
		NullCheck(L_21);
		String_t* L_28;
		L_28 = GenericInterfaceFuncInvoker6Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_23: *(void**)L_23), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_27: *(void**)L_27));
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF271B946285825A9036DFC5871432566905C1DC3_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, int32_t ___5_arg5, RuntimeObject* ___6_arg6, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = ___5_arg5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___6_arg6;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_23;
	}

IL_005b:
	{
		RuntimeObject* L_24 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_25 = ___0_format;
		int32_t L_26 = ___1_arg1;
		RuntimeObject* L_27 = ___2_arg2;
		RuntimeObject* L_28 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = ___4_arg4;
		int32_t L_30 = ___5_arg5;
		RuntimeObject* L_31 = ___6_arg6;
		NullCheck(L_24);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker7< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAC5C02EF0F58801FF41E835D32203E89566D6F37_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t9A4FB520E8A30C937CDCAE2555594CF5C5964F2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_tD6AABEF27BB43E42FE2042A2E5E7D85056E7370B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t34B7BDE9953BAF67D3D7BD16E0A62CAB6328AFEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_t22D5A1758818B75FCB62B500039EE0B1300C1CA8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_t11E38328AD8C851AAFC739651D30956AC863BB38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_tC9909A38F3676EE8731F65609D89950E2AB3A1D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t9A4FB520E8A30C937CDCAE2555594CF5C5964F2B);
	const Il2CppFullySharedGenericAny L_26 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tD6AABEF27BB43E42FE2042A2E5E7D85056E7370B);
	const Il2CppFullySharedGenericAny L_27 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t34B7BDE9953BAF67D3D7BD16E0A62CAB6328AFEA);
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_t22D5A1758818B75FCB62B500039EE0B1300C1CA8);
	const Il2CppFullySharedGenericAny L_29 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_t11E38328AD8C851AAFC739651D30956AC863BB38);
	const Il2CppFullySharedGenericAny L_30 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_tC9909A38F3676EE8731F65609D89950E2AB3A1D8);
	const Il2CppFullySharedGenericAny L_31 = L_21;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t9A4FB520E8A30C937CDCAE2555594CF5C5964F2B);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tD6AABEF27BB43E42FE2042A2E5E7D85056E7370B);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t34B7BDE9953BAF67D3D7BD16E0A62CAB6328AFEA);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t22D5A1758818B75FCB62B500039EE0B1300C1CA8);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t11E38328AD8C851AAFC739651D30956AC863BB38);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tC9909A38F3676EE8731F65609D89950E2AB3A1D8);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_20, NULL);
		return L_23;
	}

IL_005b:
	{
		RuntimeObject* L_24 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_25 = ___0_format;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t9A4FB520E8A30C937CDCAE2555594CF5C5964F2B);
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tD6AABEF27BB43E42FE2042A2E5E7D85056E7370B);
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t34B7BDE9953BAF67D3D7BD16E0A62CAB6328AFEA);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t22D5A1758818B75FCB62B500039EE0B1300C1CA8);
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t11E38328AD8C851AAFC739651D30956AC863BB38);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tC9909A38F3676EE8731F65609D89950E2AB3A1D8);
		NullCheck(L_24);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker7Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_24, L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_31: *(void**)L_31));
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m838000CA70665D89362A4EFAB8826D978690F8DA_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___5_arg5, int32_t ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = ___5_arg5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = ___6_arg6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		RuntimeObject* L_30 = ___7_arg7;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_31;
	}

IL_0065:
	{
		RuntimeObject* L_32 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_33 = ___0_format;
		uint8_t L_34 = ___1_arg1;
		uint8_t L_35 = ___2_arg2;
		uint8_t L_36 = ___3_arg3;
		uint8_t L_37 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = ___5_arg5;
		int32_t L_39 = ___6_arg6;
		RuntimeObject* L_40 = ___7_arg7;
		NullCheck(L_32);
		String_t* L_41;
		L_41 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40);
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mAB93EBA3F1265733DA6F697BF9F383E54845C826_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___5_arg5;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___6_arg6;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___7_arg7;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_27;
	}

IL_0065:
	{
		RuntimeObject* L_28 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_29 = ___0_format;
		uint8_t L_30 = ___1_arg1;
		uint8_t L_31 = ___2_arg2;
		uint8_t L_32 = ___3_arg3;
		uint8_t L_33 = ___4_arg4;
		RuntimeObject* L_34 = ___5_arg5;
		RuntimeObject* L_35 = ___6_arg6;
		RuntimeObject* L_36 = ___7_arg7;
		NullCheck(L_28);
		String_t* L_37;
		L_37 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36);
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m01E596FA9D21BAB3B89AD15927C8D457C5F9F6B3_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t3023F115A342C0D338C5AAC6E75AEFC1F18F2BB4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t346B5B31B41D43F0CF0F740F77A9B85B2E769679 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tF6D3569A8C7AE7315122A64A48DB6DFAA5C7354A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tED6194D7B1252ADA7894E11E8913703D362D3EC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tC377083E7D7156B75F8020E2752A04305FE6BC55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t80863AB69730255983742A79B464584DF3D04294 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_tD79BC0D115DB77BD96E1524AC1CDE470E41A141E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t3023F115A342C0D338C5AAC6E75AEFC1F18F2BB4);
	const Il2CppFullySharedGenericAny L_29 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t346B5B31B41D43F0CF0F740F77A9B85B2E769679);
	const Il2CppFullySharedGenericAny L_30 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tF6D3569A8C7AE7315122A64A48DB6DFAA5C7354A);
	const Il2CppFullySharedGenericAny L_31 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tED6194D7B1252ADA7894E11E8913703D362D3EC0);
	const Il2CppFullySharedGenericAny L_32 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tC377083E7D7156B75F8020E2752A04305FE6BC55);
	const Il2CppFullySharedGenericAny L_33 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t80863AB69730255983742A79B464584DF3D04294);
	const Il2CppFullySharedGenericAny L_34 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_tD79BC0D115DB77BD96E1524AC1CDE470E41A141E);
	const Il2CppFullySharedGenericAny L_35 = L_24;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t3023F115A342C0D338C5AAC6E75AEFC1F18F2BB4);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t346B5B31B41D43F0CF0F740F77A9B85B2E769679);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tF6D3569A8C7AE7315122A64A48DB6DFAA5C7354A);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tED6194D7B1252ADA7894E11E8913703D362D3EC0);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tC377083E7D7156B75F8020E2752A04305FE6BC55);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t80863AB69730255983742A79B464584DF3D04294);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tD79BC0D115DB77BD96E1524AC1CDE470E41A141E);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		String_t* L_26;
		L_26 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_23, NULL);
		return L_26;
	}

IL_0065:
	{
		RuntimeObject* L_27 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_28 = ___0_format;
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t3023F115A342C0D338C5AAC6E75AEFC1F18F2BB4);
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t346B5B31B41D43F0CF0F740F77A9B85B2E769679);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tF6D3569A8C7AE7315122A64A48DB6DFAA5C7354A);
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tED6194D7B1252ADA7894E11E8913703D362D3EC0);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tC377083E7D7156B75F8020E2752A04305FE6BC55);
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t80863AB69730255983742A79B464584DF3D04294);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tD79BC0D115DB77BD96E1524AC1CDE470E41A141E);
		NullCheck(L_27);
		String_t* L_36;
		L_36 = GenericInterfaceFuncInvoker8Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_27, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_31: *(void**)L_31), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_33: *(void**)L_33), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_35: *(void**)L_35));
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA8871433A62B402C7CA24F44269E3C7835C269D0_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tEAAEAFBBF483F87E2D4413464AB3C4E5591AF5CA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t0992D102CD56A9B39F8CC7A7301B65E860174003 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t69DE34E8A1906D40FF6EC680CC6B3C4EA194E390 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tE1A65B551865429CE97811F5F31C9E91272C02AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_t07F687557FC69DF0FF9C6B99F41B06651D361592 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t15BE0E8654FFF3674888BD2E075AF7145D3A01DD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t45B734A807A7281FA339D97843CD543156693C00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t14EB7D842446E9E567C2DAC071D8140A26212C91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tEAAEAFBBF483F87E2D4413464AB3C4E5591AF5CA);
	const Il2CppFullySharedGenericAny L_32 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t0992D102CD56A9B39F8CC7A7301B65E860174003);
	const Il2CppFullySharedGenericAny L_33 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t69DE34E8A1906D40FF6EC680CC6B3C4EA194E390);
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tE1A65B551865429CE97811F5F31C9E91272C02AF);
	const Il2CppFullySharedGenericAny L_35 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_t07F687557FC69DF0FF9C6B99F41B06651D361592);
	const Il2CppFullySharedGenericAny L_36 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t15BE0E8654FFF3674888BD2E075AF7145D3A01DD);
	const Il2CppFullySharedGenericAny L_37 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t45B734A807A7281FA339D97843CD543156693C00);
	const Il2CppFullySharedGenericAny L_38 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t14EB7D842446E9E567C2DAC071D8140A26212C91);
	const Il2CppFullySharedGenericAny L_39 = L_27;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tEAAEAFBBF483F87E2D4413464AB3C4E5591AF5CA);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t0992D102CD56A9B39F8CC7A7301B65E860174003);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t69DE34E8A1906D40FF6EC680CC6B3C4EA194E390);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tE1A65B551865429CE97811F5F31C9E91272C02AF);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t07F687557FC69DF0FF9C6B99F41B06651D361592);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t15BE0E8654FFF3674888BD2E075AF7145D3A01DD);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t45B734A807A7281FA339D97843CD543156693C00);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t14EB7D842446E9E567C2DAC071D8140A26212C91);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_26, NULL);
		return L_29;
	}

IL_006f:
	{
		RuntimeObject* L_30 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_31 = ___0_format;
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tEAAEAFBBF483F87E2D4413464AB3C4E5591AF5CA);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t0992D102CD56A9B39F8CC7A7301B65E860174003);
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t69DE34E8A1906D40FF6EC680CC6B3C4EA194E390);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tE1A65B551865429CE97811F5F31C9E91272C02AF);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t07F687557FC69DF0FF9C6B99F41B06651D361592);
		il2cpp_codegen_memcpy(L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t15BE0E8654FFF3674888BD2E075AF7145D3A01DD);
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t45B734A807A7281FA339D97843CD543156693C00);
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t14EB7D842446E9E567C2DAC071D8140A26212C91);
		NullCheck(L_30);
		String_t* L_40;
		L_40 = GenericInterfaceFuncInvoker9Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 8), L_30, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_33: *(void**)L_33), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_35: *(void**)L_35), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_37: *(void**)L_37), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_38: *(void**)L_38), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_39: *(void**)L_39));
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1052CDB021DB811A50CA5376E1A15FFD78F6CBD0_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tA372938ACD1E36D7E4BCA3D43E3D6041966DCFCA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_tC8B10A1BAE78C125F517966B82883359B2F21E28 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tA489428CD776EE4E90407FD36B7D775F28FE73D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tB41E26DED7AA1BFBB77FBDE68B1ABF637AC3D517 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tE15AA7BA8CEE391CC8EA8B27BD1399AAD5D84246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_tE714F88DDDF407A380069D826BB3212F0153A342 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_tE1FECD3A99C2D59F07628072FD3C86E2487F0E40 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t5A91528894D5DE5D4FDB72A6C01F27AF82950B92 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_t4DBDD6CFB7178A01F1AD020EF1187F98A32CD7BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tA372938ACD1E36D7E4BCA3D43E3D6041966DCFCA);
	const Il2CppFullySharedGenericAny L_35 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tC8B10A1BAE78C125F517966B82883359B2F21E28);
	const Il2CppFullySharedGenericAny L_36 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tA489428CD776EE4E90407FD36B7D775F28FE73D2);
	const Il2CppFullySharedGenericAny L_37 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tB41E26DED7AA1BFBB77FBDE68B1ABF637AC3D517);
	const Il2CppFullySharedGenericAny L_38 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tE15AA7BA8CEE391CC8EA8B27BD1399AAD5D84246);
	const Il2CppFullySharedGenericAny L_39 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_tE714F88DDDF407A380069D826BB3212F0153A342);
	const Il2CppFullySharedGenericAny L_40 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_tE1FECD3A99C2D59F07628072FD3C86E2487F0E40);
	const Il2CppFullySharedGenericAny L_41 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t5A91528894D5DE5D4FDB72A6C01F27AF82950B92);
	const Il2CppFullySharedGenericAny L_42 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_t4DBDD6CFB7178A01F1AD020EF1187F98A32CD7BF);
	const Il2CppFullySharedGenericAny L_43 = L_30;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tA372938ACD1E36D7E4BCA3D43E3D6041966DCFCA);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tC8B10A1BAE78C125F517966B82883359B2F21E28);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tA489428CD776EE4E90407FD36B7D775F28FE73D2);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tB41E26DED7AA1BFBB77FBDE68B1ABF637AC3D517);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tE15AA7BA8CEE391CC8EA8B27BD1399AAD5D84246);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tE714F88DDDF407A380069D826BB3212F0153A342);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tE1FECD3A99C2D59F07628072FD3C86E2487F0E40);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t5A91528894D5DE5D4FDB72A6C01F27AF82950B92);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t4DBDD6CFB7178A01F1AD020EF1187F98A32CD7BF);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		String_t* L_32;
		L_32 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_32;
	}

IL_007a:
	{
		RuntimeObject* L_33 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_34 = ___0_format;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tA372938ACD1E36D7E4BCA3D43E3D6041966DCFCA);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tC8B10A1BAE78C125F517966B82883359B2F21E28);
		il2cpp_codegen_memcpy(L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tA489428CD776EE4E90407FD36B7D775F28FE73D2);
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tB41E26DED7AA1BFBB77FBDE68B1ABF637AC3D517);
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tE15AA7BA8CEE391CC8EA8B27BD1399AAD5D84246);
		il2cpp_codegen_memcpy(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tE714F88DDDF407A380069D826BB3212F0153A342);
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tE1FECD3A99C2D59F07628072FD3C86E2487F0E40);
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t5A91528894D5DE5D4FDB72A6C01F27AF82950B92);
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t4DBDD6CFB7178A01F1AD020EF1187F98A32CD7BF);
		NullCheck(L_33);
		String_t* L_44;
		L_44 = GenericInterfaceFuncInvoker10Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 9), L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_35: *(void**)L_35), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_37: *(void**)L_37), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_38: *(void**)L_38), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_39: *(void**)L_39), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_42: *(void**)L_42), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_43: *(void**)L_43));
		return L_44;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6B0CF30CCD4BBE04DD2B8BB8A1F7D8A856A1170A_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t6D793E48CFFC76F5284586B19A0A099A493AA0B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t0501DB60D4877E2FC409C1B1382775C925CAD20F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t0F425C866C3D9634B5D07D14EFDBF06B4462E497 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tF8B8A1FF6A145569F7C0D09A092E79761BA0374F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tAAA6039DAB7D2649CF6EB101C0CD67A1B0FE6D0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_tD02E4AB8A776D236FD8E047783E5C9DEA917F8DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t72A5A0C8CBBAE2175AE4C08D7C3B312B0635EDB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t09955A735D341F341FA7166EAE7D7A3AECE264DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_tB1DFD705226CBF7EA3A4BC151440535D639C8465 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_t2726AD41D4B421785D33A2D164A538AE439583FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t6D793E48CFFC76F5284586B19A0A099A493AA0B6);
	const Il2CppFullySharedGenericAny L_38 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t0501DB60D4877E2FC409C1B1382775C925CAD20F);
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t0F425C866C3D9634B5D07D14EFDBF06B4462E497);
	const Il2CppFullySharedGenericAny L_40 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tF8B8A1FF6A145569F7C0D09A092E79761BA0374F);
	const Il2CppFullySharedGenericAny L_41 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tAAA6039DAB7D2649CF6EB101C0CD67A1B0FE6D0D);
	const Il2CppFullySharedGenericAny L_42 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_tD02E4AB8A776D236FD8E047783E5C9DEA917F8DE);
	const Il2CppFullySharedGenericAny L_43 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t72A5A0C8CBBAE2175AE4C08D7C3B312B0635EDB3);
	const Il2CppFullySharedGenericAny L_44 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t09955A735D341F341FA7166EAE7D7A3AECE264DB);
	const Il2CppFullySharedGenericAny L_45 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_tB1DFD705226CBF7EA3A4BC151440535D639C8465);
	const Il2CppFullySharedGenericAny L_46 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_t2726AD41D4B421785D33A2D164A538AE439583FE);
	const Il2CppFullySharedGenericAny L_47 = L_33;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t6D793E48CFFC76F5284586B19A0A099A493AA0B6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t0501DB60D4877E2FC409C1B1382775C925CAD20F);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t0F425C866C3D9634B5D07D14EFDBF06B4462E497);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tF8B8A1FF6A145569F7C0D09A092E79761BA0374F);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tAAA6039DAB7D2649CF6EB101C0CD67A1B0FE6D0D);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tD02E4AB8A776D236FD8E047783E5C9DEA917F8DE);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t72A5A0C8CBBAE2175AE4C08D7C3B312B0635EDB3);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t09955A735D341F341FA7166EAE7D7A3AECE264DB);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tB1DFD705226CBF7EA3A4BC151440535D639C8465);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t2726AD41D4B421785D33A2D164A538AE439583FE);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_32, NULL);
		return L_35;
	}

IL_0085:
	{
		RuntimeObject* L_36 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_37 = ___0_format;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t6D793E48CFFC76F5284586B19A0A099A493AA0B6);
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t0501DB60D4877E2FC409C1B1382775C925CAD20F);
		il2cpp_codegen_memcpy(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t0F425C866C3D9634B5D07D14EFDBF06B4462E497);
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tF8B8A1FF6A145569F7C0D09A092E79761BA0374F);
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tAAA6039DAB7D2649CF6EB101C0CD67A1B0FE6D0D);
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_tD02E4AB8A776D236FD8E047783E5C9DEA917F8DE);
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t72A5A0C8CBBAE2175AE4C08D7C3B312B0635EDB3);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t09955A735D341F341FA7166EAE7D7A3AECE264DB);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tB1DFD705226CBF7EA3A4BC151440535D639C8465);
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t2726AD41D4B421785D33A2D164A538AE439583FE);
		NullCheck(L_36);
		String_t* L_48;
		L_48 = GenericInterfaceFuncInvoker11Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 10), L_36, L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_38: *(void**)L_38), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_39: *(void**)L_39), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_42: *(void**)L_42), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_43: *(void**)L_43), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_45: *(void**)L_45), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_46: *(void**)L_46), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_47: *(void**)L_47));
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB5C42FCA4A880B7C8E626F7E98DF57ECECC20F71_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t1B7648C9D66940A2B94BAAFC2A474612F1F9E126 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t7CF9E5FE3EC333FFE7E32A9B0DF436676503D5F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tDE18310D23E17D41B549CB2C1B8583F6E1A92A13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tE8268000E5402077395A2AF3602990C507D2FB0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tFCBC1D27EF50B80DD1F186BF55D5E7BDD6E4B48E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t5A4B62E26AEDCD8DB1C1E8FBABE1472E05C4B86D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t579F2E8171EE63DF9ED2025744AF99957D4987F1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t3E04C68B0D96517F44B4C61302A79851E51C4CA2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_t5A490DC5D4609BE7AC2A79DF3611DB42E45F4D7C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_tEFB34640003A1E8D3E261B5BDDC94C94D4EAA524 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_tB75D64C25C03D6ACB3CCF01E1B35107AA3D27A9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1B7648C9D66940A2B94BAAFC2A474612F1F9E126);
	const Il2CppFullySharedGenericAny L_41 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t7CF9E5FE3EC333FFE7E32A9B0DF436676503D5F4);
	const Il2CppFullySharedGenericAny L_42 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tDE18310D23E17D41B549CB2C1B8583F6E1A92A13);
	const Il2CppFullySharedGenericAny L_43 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tE8268000E5402077395A2AF3602990C507D2FB0D);
	const Il2CppFullySharedGenericAny L_44 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tFCBC1D27EF50B80DD1F186BF55D5E7BDD6E4B48E);
	const Il2CppFullySharedGenericAny L_45 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t5A4B62E26AEDCD8DB1C1E8FBABE1472E05C4B86D);
	const Il2CppFullySharedGenericAny L_46 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t579F2E8171EE63DF9ED2025744AF99957D4987F1);
	const Il2CppFullySharedGenericAny L_47 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t3E04C68B0D96517F44B4C61302A79851E51C4CA2);
	const Il2CppFullySharedGenericAny L_48 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_t5A490DC5D4609BE7AC2A79DF3611DB42E45F4D7C);
	const Il2CppFullySharedGenericAny L_49 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_tEFB34640003A1E8D3E261B5BDDC94C94D4EAA524);
	const Il2CppFullySharedGenericAny L_50 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_tB75D64C25C03D6ACB3CCF01E1B35107AA3D27A9C);
	const Il2CppFullySharedGenericAny L_51 = L_36;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t1B7648C9D66940A2B94BAAFC2A474612F1F9E126);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t7CF9E5FE3EC333FFE7E32A9B0DF436676503D5F4);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tDE18310D23E17D41B549CB2C1B8583F6E1A92A13);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tE8268000E5402077395A2AF3602990C507D2FB0D);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tFCBC1D27EF50B80DD1F186BF55D5E7BDD6E4B48E);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t5A4B62E26AEDCD8DB1C1E8FBABE1472E05C4B86D);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t579F2E8171EE63DF9ED2025744AF99957D4987F1);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t3E04C68B0D96517F44B4C61302A79851E51C4CA2);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t5A490DC5D4609BE7AC2A79DF3611DB42E45F4D7C);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tEFB34640003A1E8D3E261B5BDDC94C94D4EAA524);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tB75D64C25C03D6ACB3CCF01E1B35107AA3D27A9C);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		String_t* L_38;
		L_38 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_35, NULL);
		return L_38;
	}

IL_0090:
	{
		RuntimeObject* L_39 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_40 = ___0_format;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t1B7648C9D66940A2B94BAAFC2A474612F1F9E126);
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t7CF9E5FE3EC333FFE7E32A9B0DF436676503D5F4);
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tDE18310D23E17D41B549CB2C1B8583F6E1A92A13);
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tE8268000E5402077395A2AF3602990C507D2FB0D);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tFCBC1D27EF50B80DD1F186BF55D5E7BDD6E4B48E);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t5A4B62E26AEDCD8DB1C1E8FBABE1472E05C4B86D);
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t579F2E8171EE63DF9ED2025744AF99957D4987F1);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t3E04C68B0D96517F44B4C61302A79851E51C4CA2);
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t5A490DC5D4609BE7AC2A79DF3611DB42E45F4D7C);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tEFB34640003A1E8D3E261B5BDDC94C94D4EAA524);
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tB75D64C25C03D6ACB3CCF01E1B35107AA3D27A9C);
		NullCheck(L_39);
		String_t* L_52;
		L_52 = GenericInterfaceFuncInvoker12Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 11), L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_41: *(void**)L_41), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_42: *(void**)L_42), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_43: *(void**)L_43), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_45: *(void**)L_45), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_46: *(void**)L_46), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_47: *(void**)L_47), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_48: *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_49: *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_50: *(void**)L_50), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_51: *(void**)L_51));
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m484366659AFCE3983E654094D2D159D903CC5AEC_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, Il2CppFullySharedGenericAny ___12_arg12, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tC047546127C33FAA3EFBC234806ADFD7917DF84A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t4903389E22F55AADCFECB34A799688BF4572CFDD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t4D067F387E4DD449E96E22443584181A24E5F772 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_t9B04B8D7CC2E91B9721AB4B8CB1AFE2470A8FDEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tD9D54C744AAB321D0CBC996918983A27B90F8D07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t23B9953FBBBE7329BE5280D1B3C7E555F9B4641C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t524EAE6010AD8D51C2FF66F2EB3044D20F4B9426 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t2BE382F9647AE59B2DC6D0C275C0864A9C9CD783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_t33C67BCC09E546640F6EEFD53DCCD4776D44338E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_t481F275BB83E944BD25471B29F445697F7258F96 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_t671F90D2B4EF68BE6587E0851DAEE0FA210E7369 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_T12_tF95D779CE4B366D36964308F56BFABA29679BE78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tC047546127C33FAA3EFBC234806ADFD7917DF84A);
	const Il2CppFullySharedGenericAny L_44 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t4903389E22F55AADCFECB34A799688BF4572CFDD);
	const Il2CppFullySharedGenericAny L_45 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t4D067F387E4DD449E96E22443584181A24E5F772);
	const Il2CppFullySharedGenericAny L_46 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_t9B04B8D7CC2E91B9721AB4B8CB1AFE2470A8FDEB);
	const Il2CppFullySharedGenericAny L_47 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tD9D54C744AAB321D0CBC996918983A27B90F8D07);
	const Il2CppFullySharedGenericAny L_48 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t23B9953FBBBE7329BE5280D1B3C7E555F9B4641C);
	const Il2CppFullySharedGenericAny L_49 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t524EAE6010AD8D51C2FF66F2EB3044D20F4B9426);
	const Il2CppFullySharedGenericAny L_50 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t2BE382F9647AE59B2DC6D0C275C0864A9C9CD783);
	const Il2CppFullySharedGenericAny L_51 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_t33C67BCC09E546640F6EEFD53DCCD4776D44338E);
	const Il2CppFullySharedGenericAny L_52 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_t481F275BB83E944BD25471B29F445697F7258F96);
	const Il2CppFullySharedGenericAny L_53 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_t671F90D2B4EF68BE6587E0851DAEE0FA210E7369);
	const Il2CppFullySharedGenericAny L_54 = L_36;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T12_tF95D779CE4B366D36964308F56BFABA29679BE78);
	const Il2CppFullySharedGenericAny L_55 = L_39;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tC047546127C33FAA3EFBC234806ADFD7917DF84A);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t4903389E22F55AADCFECB34A799688BF4572CFDD);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t4D067F387E4DD449E96E22443584181A24E5F772);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t9B04B8D7CC2E91B9721AB4B8CB1AFE2470A8FDEB);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tD9D54C744AAB321D0CBC996918983A27B90F8D07);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t23B9953FBBBE7329BE5280D1B3C7E555F9B4641C);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t524EAE6010AD8D51C2FF66F2EB3044D20F4B9426);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t2BE382F9647AE59B2DC6D0C275C0864A9C9CD783);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t33C67BCC09E546640F6EEFD53DCCD4776D44338E);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t481F275BB83E944BD25471B29F445697F7258F96);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t671F90D2B4EF68BE6587E0851DAEE0FA210E7369);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tF95D779CE4B366D36964308F56BFABA29679BE78);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 11), L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_40);
		String_t* L_41;
		L_41 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_38, NULL);
		return L_41;
	}

IL_009e:
	{
		RuntimeObject* L_42 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_43 = ___0_format;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tC047546127C33FAA3EFBC234806ADFD7917DF84A);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t4903389E22F55AADCFECB34A799688BF4572CFDD);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t4D067F387E4DD449E96E22443584181A24E5F772);
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t9B04B8D7CC2E91B9721AB4B8CB1AFE2470A8FDEB);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tD9D54C744AAB321D0CBC996918983A27B90F8D07);
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t23B9953FBBBE7329BE5280D1B3C7E555F9B4641C);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t524EAE6010AD8D51C2FF66F2EB3044D20F4B9426);
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t2BE382F9647AE59B2DC6D0C275C0864A9C9CD783);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t33C67BCC09E546640F6EEFD53DCCD4776D44338E);
		il2cpp_codegen_memcpy(L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t481F275BB83E944BD25471B29F445697F7258F96);
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t671F90D2B4EF68BE6587E0851DAEE0FA210E7369);
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tF95D779CE4B366D36964308F56BFABA29679BE78);
		NullCheck(L_42);
		String_t* L_56;
		L_56 = GenericInterfaceFuncInvoker13Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), L_42, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_45: *(void**)L_45), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_46: *(void**)L_46), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_47: *(void**)L_47), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_48: *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_49: *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_50: *(void**)L_50), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_52: *(void**)L_52), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_53: *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? L_55: *(void**)L_55));
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB5C501777FCCF91E9A79B0454CA61537701EF3E_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, Il2CppFullySharedGenericAny ___12_arg12, Il2CppFullySharedGenericAny ___13_arg13, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t3A98C84D52D8EE46442EC40410EA87978B49E814 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t6DE08227E3DA56712662DD037CBD1DC612D6C39F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t2E984C3640500E2E76141306A4E616FC86A50EC4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_t88106F6229C73D215E8746D0FC5CFBAD8634DB2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_t95D1D7E7FFD8D1C23F065F63AE74A5ECA17D7146 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t2B37C2396BFA7F6F4FD052237F582A44324A8A0E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t957CA188114507080E912356DE5C9CFF4F2C6BCC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t52E0D7D65391EC0D5CD1866B1B6720EE18EE4ABF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_t943DF8CE190F70B0BAE88F662E6FBCF1A600928B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_t85E2E1E7B1EAA000B680C5F149EEE61ED8BD0F96 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_t7D9E24B96F8F1F0A2C8D8AC8B249F8FADCE67C69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_T12_tB6949A727E997B4880F2F9BA38AB682CE6EAB8B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 11));
	const uint32_t SizeOf_T13_tFCB6CB6E85686B3E5C5DB0D0BAA3966BA00658EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t3A98C84D52D8EE46442EC40410EA87978B49E814);
	const Il2CppFullySharedGenericAny L_47 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t6DE08227E3DA56712662DD037CBD1DC612D6C39F);
	const Il2CppFullySharedGenericAny L_48 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_t2E984C3640500E2E76141306A4E616FC86A50EC4);
	const Il2CppFullySharedGenericAny L_49 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_t88106F6229C73D215E8746D0FC5CFBAD8634DB2E);
	const Il2CppFullySharedGenericAny L_50 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_t95D1D7E7FFD8D1C23F065F63AE74A5ECA17D7146);
	const Il2CppFullySharedGenericAny L_51 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t2B37C2396BFA7F6F4FD052237F582A44324A8A0E);
	const Il2CppFullySharedGenericAny L_52 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t957CA188114507080E912356DE5C9CFF4F2C6BCC);
	const Il2CppFullySharedGenericAny L_53 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t52E0D7D65391EC0D5CD1866B1B6720EE18EE4ABF);
	const Il2CppFullySharedGenericAny L_54 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_t943DF8CE190F70B0BAE88F662E6FBCF1A600928B);
	const Il2CppFullySharedGenericAny L_55 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_t85E2E1E7B1EAA000B680C5F149EEE61ED8BD0F96);
	const Il2CppFullySharedGenericAny L_56 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_t7D9E24B96F8F1F0A2C8D8AC8B249F8FADCE67C69);
	const Il2CppFullySharedGenericAny L_57 = L_36;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T12_tB6949A727E997B4880F2F9BA38AB682CE6EAB8B8);
	const Il2CppFullySharedGenericAny L_58 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T13_tFCB6CB6E85686B3E5C5DB0D0BAA3966BA00658EE);
	const Il2CppFullySharedGenericAny L_59 = L_42;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t3A98C84D52D8EE46442EC40410EA87978B49E814);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t6DE08227E3DA56712662DD037CBD1DC612D6C39F);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t2E984C3640500E2E76141306A4E616FC86A50EC4);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t88106F6229C73D215E8746D0FC5CFBAD8634DB2E);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t95D1D7E7FFD8D1C23F065F63AE74A5ECA17D7146);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t2B37C2396BFA7F6F4FD052237F582A44324A8A0E);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t957CA188114507080E912356DE5C9CFF4F2C6BCC);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t52E0D7D65391EC0D5CD1866B1B6720EE18EE4ABF);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t943DF8CE190F70B0BAE88F662E6FBCF1A600928B);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t85E2E1E7B1EAA000B680C5F149EEE61ED8BD0F96);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t7D9E24B96F8F1F0A2C8D8AC8B249F8FADCE67C69);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tB6949A727E997B4880F2F9BA38AB682CE6EAB8B8);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 11), L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_38;
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_tFCB6CB6E85686B3E5C5DB0D0BAA3966BA00658EE);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_42);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_43);
		String_t* L_44;
		L_44 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_41, NULL);
		return L_44;
	}

IL_00a9:
	{
		RuntimeObject* L_45 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_46 = ___0_format;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t3A98C84D52D8EE46442EC40410EA87978B49E814);
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t6DE08227E3DA56712662DD037CBD1DC612D6C39F);
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_t2E984C3640500E2E76141306A4E616FC86A50EC4);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_t88106F6229C73D215E8746D0FC5CFBAD8634DB2E);
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t95D1D7E7FFD8D1C23F065F63AE74A5ECA17D7146);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t2B37C2396BFA7F6F4FD052237F582A44324A8A0E);
		il2cpp_codegen_memcpy(L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t957CA188114507080E912356DE5C9CFF4F2C6BCC);
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t52E0D7D65391EC0D5CD1866B1B6720EE18EE4ABF);
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t943DF8CE190F70B0BAE88F662E6FBCF1A600928B);
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t85E2E1E7B1EAA000B680C5F149EEE61ED8BD0F96);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t7D9E24B96F8F1F0A2C8D8AC8B249F8FADCE67C69);
		il2cpp_codegen_memcpy(L_58, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tB6949A727E997B4880F2F9BA38AB682CE6EAB8B8);
		il2cpp_codegen_memcpy(L_59, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_tFCB6CB6E85686B3E5C5DB0D0BAA3966BA00658EE);
		NullCheck(L_45);
		String_t* L_60;
		L_60 = GenericInterfaceFuncInvoker14Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 13), L_45, L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_47: *(void**)L_47), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_48: *(void**)L_48), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_49: *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_50: *(void**)L_50), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_52: *(void**)L_52), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_53: *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_55: *(void**)L_55), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_57: *(void**)L_57), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? L_58: *(void**)L_58), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_59: *(void**)L_59));
		return L_60;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m96D28762E2CA314002D0CF1B1AF5FAF5D5CE0680_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, Il2CppFullySharedGenericAny ___12_arg12, Il2CppFullySharedGenericAny ___13_arg13, Il2CppFullySharedGenericAny ___14_arg14, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t92B891850EEE84252ADDDD7782DF3F0F396EEC49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t6710B37719F02396359D56DD19758E3F634A8077 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tE42D5ABBA67A6CA020F1754119F440122B42F0D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tFF6A9117B7F5E6A5006377FFAA7DF91C003EC361 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tC7B5ED3DEC489021DA664FFA7854B12D49FA392F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t4AEBF38E798D1A7E432CC2F51EA1B4B6FAE54EF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t958A7D30AB09B2A4438969155226350E6E9BF7CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_t51D1D254C53E1F16594A51604F61F23BA1AB6ACF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_tC7FA8D95A8D8F91BE60336083C3916B48BF14353 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_tB117CC961504869D060DFB82BC72FF547C3DC2F8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_tEF341065F659A62D06A12C3A0D5B8F7A5C2909BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_T12_t7FA542DEB9327F58BB67F22B3E663BE52F588E92 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 11));
	const uint32_t SizeOf_T13_t2A78F041E0ACE09FC56F738B87B600BD37486A0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const uint32_t SizeOf_T14_t1CABD85364C2008E3CF693CEB95A016E40E4061F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t92B891850EEE84252ADDDD7782DF3F0F396EEC49);
	const Il2CppFullySharedGenericAny L_50 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t6710B37719F02396359D56DD19758E3F634A8077);
	const Il2CppFullySharedGenericAny L_51 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tE42D5ABBA67A6CA020F1754119F440122B42F0D4);
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tFF6A9117B7F5E6A5006377FFAA7DF91C003EC361);
	const Il2CppFullySharedGenericAny L_53 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tC7B5ED3DEC489021DA664FFA7854B12D49FA392F);
	const Il2CppFullySharedGenericAny L_54 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t4AEBF38E798D1A7E432CC2F51EA1B4B6FAE54EF3);
	const Il2CppFullySharedGenericAny L_55 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t958A7D30AB09B2A4438969155226350E6E9BF7CE);
	const Il2CppFullySharedGenericAny L_56 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_t51D1D254C53E1F16594A51604F61F23BA1AB6ACF);
	const Il2CppFullySharedGenericAny L_57 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_tC7FA8D95A8D8F91BE60336083C3916B48BF14353);
	const Il2CppFullySharedGenericAny L_58 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_tB117CC961504869D060DFB82BC72FF547C3DC2F8);
	const Il2CppFullySharedGenericAny L_59 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_tEF341065F659A62D06A12C3A0D5B8F7A5C2909BD);
	const Il2CppFullySharedGenericAny L_60 = L_36;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T12_t7FA542DEB9327F58BB67F22B3E663BE52F588E92);
	const Il2CppFullySharedGenericAny L_61 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T13_t2A78F041E0ACE09FC56F738B87B600BD37486A0B);
	const Il2CppFullySharedGenericAny L_62 = L_42;
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T14_t1CABD85364C2008E3CF693CEB95A016E40E4061F);
	const Il2CppFullySharedGenericAny L_63 = L_45;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t92B891850EEE84252ADDDD7782DF3F0F396EEC49);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t6710B37719F02396359D56DD19758E3F634A8077);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tE42D5ABBA67A6CA020F1754119F440122B42F0D4);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tFF6A9117B7F5E6A5006377FFAA7DF91C003EC361);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tC7B5ED3DEC489021DA664FFA7854B12D49FA392F);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t4AEBF38E798D1A7E432CC2F51EA1B4B6FAE54EF3);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t958A7D30AB09B2A4438969155226350E6E9BF7CE);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t51D1D254C53E1F16594A51604F61F23BA1AB6ACF);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tC7FA8D95A8D8F91BE60336083C3916B48BF14353);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tB117CC961504869D060DFB82BC72FF547C3DC2F8);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tEF341065F659A62D06A12C3A0D5B8F7A5C2909BD);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_t7FA542DEB9327F58BB67F22B3E663BE52F588E92);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 11), L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_38;
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t2A78F041E0ACE09FC56F738B87B600BD37486A0B);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_42);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_41;
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t1CABD85364C2008E3CF693CEB95A016E40E4061F);
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 13), L_45);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_46);
		String_t* L_47;
		L_47 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_44, NULL);
		return L_47;
	}

IL_00b4:
	{
		RuntimeObject* L_48 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_49 = ___0_format;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t92B891850EEE84252ADDDD7782DF3F0F396EEC49);
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t6710B37719F02396359D56DD19758E3F634A8077);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tE42D5ABBA67A6CA020F1754119F440122B42F0D4);
		il2cpp_codegen_memcpy(L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tFF6A9117B7F5E6A5006377FFAA7DF91C003EC361);
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tC7B5ED3DEC489021DA664FFA7854B12D49FA392F);
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t4AEBF38E798D1A7E432CC2F51EA1B4B6FAE54EF3);
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t958A7D30AB09B2A4438969155226350E6E9BF7CE);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_t51D1D254C53E1F16594A51604F61F23BA1AB6ACF);
		il2cpp_codegen_memcpy(L_58, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tC7FA8D95A8D8F91BE60336083C3916B48BF14353);
		il2cpp_codegen_memcpy(L_59, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tB117CC961504869D060DFB82BC72FF547C3DC2F8);
		il2cpp_codegen_memcpy(L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tEF341065F659A62D06A12C3A0D5B8F7A5C2909BD);
		il2cpp_codegen_memcpy(L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_t7FA542DEB9327F58BB67F22B3E663BE52F588E92);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t2A78F041E0ACE09FC56F738B87B600BD37486A0B);
		il2cpp_codegen_memcpy(L_63, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t1CABD85364C2008E3CF693CEB95A016E40E4061F);
		NullCheck(L_48);
		String_t* L_64;
		L_64 = GenericInterfaceFuncInvoker15Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 14), L_48, L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_50: *(void**)L_50), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_52: *(void**)L_52), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_53: *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_55: *(void**)L_55), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_57: *(void**)L_57), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_58: *(void**)L_58), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_59: *(void**)L_59), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_60: *(void**)L_60), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? L_61: *(void**)L_61), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_62: *(void**)L_62), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? L_63: *(void**)L_63));
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF4DB30A415FF56B31B437A354CCFA03A21C6F82D_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, Il2CppFullySharedGenericAny ___12_arg12, Il2CppFullySharedGenericAny ___13_arg13, Il2CppFullySharedGenericAny ___14_arg14, Il2CppFullySharedGenericAny ___15_arg15, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_t1702279760B4798BDE23ABED1AC718DEDC3538C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t4923FDAFE2555F54C0B9F4E8F38EE935CF8AA2E4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tB64C3FA7292971BD56BF8C7791764E6A5FBDD3BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tA56800074B552C9A196E492FD08208C49C783BC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_t61EE6BBB263A1B8004F92BE5E22D74D54F0A7D6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t0865C35E026144EF6AB9F4890E9CED4D45287C2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_tC84415D68150D163247E8154D0A6F93AE8494605 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_tD02DD23A3D011F1C4BF02A73C1D2E6AD41965D17 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_t903D29584E88432547C8DEB3C4EA98277596C59F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_tA1929ECF945BDAB95191A8D1CD6B46D449521166 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_tB49634EF3EC68BBA7A355D9BA4E4F11C89FC03F3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_T12_t1F2F594AFA281E40D1DE78916C331E71F4BC8C1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 11));
	const uint32_t SizeOf_T13_t26B855B2AAF60C0BD6A0D519108B8BB4910A9422 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const uint32_t SizeOf_T14_t8DCC57AAF13EE006528E85CFE2B205942B528F55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 13));
	const uint32_t SizeOf_T15_tBF11C098EE9B571B318F1A38340F642139BFE9D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1702279760B4798BDE23ABED1AC718DEDC3538C2);
	const Il2CppFullySharedGenericAny L_53 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_t4923FDAFE2555F54C0B9F4E8F38EE935CF8AA2E4);
	const Il2CppFullySharedGenericAny L_54 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tB64C3FA7292971BD56BF8C7791764E6A5FBDD3BA);
	const Il2CppFullySharedGenericAny L_55 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tA56800074B552C9A196E492FD08208C49C783BC0);
	const Il2CppFullySharedGenericAny L_56 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_t61EE6BBB263A1B8004F92BE5E22D74D54F0A7D6B);
	const Il2CppFullySharedGenericAny L_57 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t0865C35E026144EF6AB9F4890E9CED4D45287C2F);
	const Il2CppFullySharedGenericAny L_58 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_tC84415D68150D163247E8154D0A6F93AE8494605);
	const Il2CppFullySharedGenericAny L_59 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_tD02DD23A3D011F1C4BF02A73C1D2E6AD41965D17);
	const Il2CppFullySharedGenericAny L_60 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_t903D29584E88432547C8DEB3C4EA98277596C59F);
	const Il2CppFullySharedGenericAny L_61 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_tA1929ECF945BDAB95191A8D1CD6B46D449521166);
	const Il2CppFullySharedGenericAny L_62 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_tB49634EF3EC68BBA7A355D9BA4E4F11C89FC03F3);
	const Il2CppFullySharedGenericAny L_63 = L_36;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T12_t1F2F594AFA281E40D1DE78916C331E71F4BC8C1A);
	const Il2CppFullySharedGenericAny L_64 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T13_t26B855B2AAF60C0BD6A0D519108B8BB4910A9422);
	const Il2CppFullySharedGenericAny L_65 = L_42;
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T14_t8DCC57AAF13EE006528E85CFE2B205942B528F55);
	const Il2CppFullySharedGenericAny L_66 = L_45;
	const Il2CppFullySharedGenericAny L_48 = alloca(SizeOf_T15_tBF11C098EE9B571B318F1A38340F642139BFE9D1);
	const Il2CppFullySharedGenericAny L_67 = L_48;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t1702279760B4798BDE23ABED1AC718DEDC3538C2);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t4923FDAFE2555F54C0B9F4E8F38EE935CF8AA2E4);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tB64C3FA7292971BD56BF8C7791764E6A5FBDD3BA);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tA56800074B552C9A196E492FD08208C49C783BC0);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t61EE6BBB263A1B8004F92BE5E22D74D54F0A7D6B);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t0865C35E026144EF6AB9F4890E9CED4D45287C2F);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tC84415D68150D163247E8154D0A6F93AE8494605);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_tD02DD23A3D011F1C4BF02A73C1D2E6AD41965D17);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t903D29584E88432547C8DEB3C4EA98277596C59F);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tA1929ECF945BDAB95191A8D1CD6B46D449521166);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tB49634EF3EC68BBA7A355D9BA4E4F11C89FC03F3);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_t1F2F594AFA281E40D1DE78916C331E71F4BC8C1A);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 11), L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_38;
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t26B855B2AAF60C0BD6A0D519108B8BB4910A9422);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_42);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_41;
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t8DCC57AAF13EE006528E85CFE2B205942B528F55);
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 13), L_45);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_46);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_44;
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? ___15_arg15 : &___15_arg15), SizeOf_T15_tBF11C098EE9B571B318F1A38340F642139BFE9D1);
		RuntimeObject* L_49 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 14), L_48);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_49);
		String_t* L_50;
		L_50 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_47, NULL);
		return L_50;
	}

IL_00bf:
	{
		RuntimeObject* L_51 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_52 = ___0_format;
		il2cpp_codegen_memcpy(L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_t1702279760B4798BDE23ABED1AC718DEDC3538C2);
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_t4923FDAFE2555F54C0B9F4E8F38EE935CF8AA2E4);
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tB64C3FA7292971BD56BF8C7791764E6A5FBDD3BA);
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tA56800074B552C9A196E492FD08208C49C783BC0);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_t61EE6BBB263A1B8004F92BE5E22D74D54F0A7D6B);
		il2cpp_codegen_memcpy(L_58, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t0865C35E026144EF6AB9F4890E9CED4D45287C2F);
		il2cpp_codegen_memcpy(L_59, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_tC84415D68150D163247E8154D0A6F93AE8494605);
		il2cpp_codegen_memcpy(L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_tD02DD23A3D011F1C4BF02A73C1D2E6AD41965D17);
		il2cpp_codegen_memcpy(L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_t903D29584E88432547C8DEB3C4EA98277596C59F);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_tA1929ECF945BDAB95191A8D1CD6B46D449521166);
		il2cpp_codegen_memcpy(L_63, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_tB49634EF3EC68BBA7A355D9BA4E4F11C89FC03F3);
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_t1F2F594AFA281E40D1DE78916C331E71F4BC8C1A);
		il2cpp_codegen_memcpy(L_65, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t26B855B2AAF60C0BD6A0D519108B8BB4910A9422);
		il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t8DCC57AAF13EE006528E85CFE2B205942B528F55);
		il2cpp_codegen_memcpy(L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? ___15_arg15 : &___15_arg15), SizeOf_T15_tBF11C098EE9B571B318F1A38340F642139BFE9D1);
		NullCheck(L_51);
		String_t* L_68;
		L_68 = GenericInterfaceFuncInvoker16Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 15), L_51, L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_53: *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_54: *(void**)L_54), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_55: *(void**)L_55), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_57: *(void**)L_57), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_58: *(void**)L_58), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_59: *(void**)L_59), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_60: *(void**)L_60), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_61: *(void**)L_61), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_62: *(void**)L_62), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_63: *(void**)L_63), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? L_64: *(void**)L_64), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_65: *(void**)L_65), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? L_66: *(void**)L_66), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? L_67: *(void**)L_67));
		return L_68;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8549899CDF1EF378E6A44D5B30FCB61AB1A3E73A_gshared (String_t* ___0_format, Il2CppFullySharedGenericAny ___1_arg1, Il2CppFullySharedGenericAny ___2_arg2, Il2CppFullySharedGenericAny ___3_arg3, Il2CppFullySharedGenericAny ___4_arg4, Il2CppFullySharedGenericAny ___5_arg5, Il2CppFullySharedGenericAny ___6_arg6, Il2CppFullySharedGenericAny ___7_arg7, Il2CppFullySharedGenericAny ___8_arg8, Il2CppFullySharedGenericAny ___9_arg9, Il2CppFullySharedGenericAny ___10_arg10, Il2CppFullySharedGenericAny ___11_arg11, Il2CppFullySharedGenericAny ___12_arg12, Il2CppFullySharedGenericAny ___13_arg13, Il2CppFullySharedGenericAny ___14_arg14, Il2CppFullySharedGenericAny ___15_arg15, Il2CppFullySharedGenericAny ___16_arg16, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T1_tF5EEA6D4B7CD2DA163D3A0AF724DDA169CDDADFC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_tC442AD22BB905647A05ACA78CD30449AD31C0FB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_tD20138FAB0F9B38292FC1B2B2454312A1F259865 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_T4_tABB6B11697415B23540E253469502D8D1D2C59CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T5_tBC2401693CD68CC7FC0A1EA67B3D80E699142575 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_T6_t83B7D394F437F4798F4448E730D183B1E4E14637 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const uint32_t SizeOf_T7_t2DBE54BAD0A40C51F5D94A3D471E83D9C6225623 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 6));
	const uint32_t SizeOf_T8_tC0011CD684B7D84354AFFB79A6A3B607F9AD9D64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T9_tBD222255418063F6B252D7DABC05C036FB8D9AD4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const uint32_t SizeOf_T10_t17E4A8AD459DDEBD4BAA392AAC075E992770FC61 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 9));
	const uint32_t SizeOf_T11_t3FCAAAB3231B035E191E5469F9399C608C3D8C34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const uint32_t SizeOf_T12_tA658BBB86939F753ED352331D0ECBADB5AF6EA73 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 11));
	const uint32_t SizeOf_T13_t17BB14C26C01FB99C19B7E97D323609E6E1CAB76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 12));
	const uint32_t SizeOf_T14_t934325672C81EF313241BF43DBD93AC9CAFD8482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 13));
	const uint32_t SizeOf_T15_tBFBBC1FD777B2C715B95531E5CB483C313ACBFB6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 14));
	const uint32_t SizeOf_T16_t856D678B27C11DAD3E70693BCA35ED47F7151D65 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tF5EEA6D4B7CD2DA163D3A0AF724DDA169CDDADFC);
	const Il2CppFullySharedGenericAny L_56 = L_6;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T2_tC442AD22BB905647A05ACA78CD30449AD31C0FB1);
	const Il2CppFullySharedGenericAny L_57 = L_9;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T3_tD20138FAB0F9B38292FC1B2B2454312A1F259865);
	const Il2CppFullySharedGenericAny L_58 = L_12;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T4_tABB6B11697415B23540E253469502D8D1D2C59CE);
	const Il2CppFullySharedGenericAny L_59 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T5_tBC2401693CD68CC7FC0A1EA67B3D80E699142575);
	const Il2CppFullySharedGenericAny L_60 = L_18;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T6_t83B7D394F437F4798F4448E730D183B1E4E14637);
	const Il2CppFullySharedGenericAny L_61 = L_21;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T7_t2DBE54BAD0A40C51F5D94A3D471E83D9C6225623);
	const Il2CppFullySharedGenericAny L_62 = L_24;
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T8_tC0011CD684B7D84354AFFB79A6A3B607F9AD9D64);
	const Il2CppFullySharedGenericAny L_63 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T9_tBD222255418063F6B252D7DABC05C036FB8D9AD4);
	const Il2CppFullySharedGenericAny L_64 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T10_t17E4A8AD459DDEBD4BAA392AAC075E992770FC61);
	const Il2CppFullySharedGenericAny L_65 = L_33;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_T11_t3FCAAAB3231B035E191E5469F9399C608C3D8C34);
	const Il2CppFullySharedGenericAny L_66 = L_36;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T12_tA658BBB86939F753ED352331D0ECBADB5AF6EA73);
	const Il2CppFullySharedGenericAny L_67 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T13_t17BB14C26C01FB99C19B7E97D323609E6E1CAB76);
	const Il2CppFullySharedGenericAny L_68 = L_42;
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T14_t934325672C81EF313241BF43DBD93AC9CAFD8482);
	const Il2CppFullySharedGenericAny L_69 = L_45;
	const Il2CppFullySharedGenericAny L_48 = alloca(SizeOf_T15_tBFBBC1FD777B2C715B95531E5CB483C313ACBFB6);
	const Il2CppFullySharedGenericAny L_70 = L_48;
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T16_t856D678B27C11DAD3E70693BCA35ED47F7151D65);
	const Il2CppFullySharedGenericAny L_71 = L_51;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382* L_1 = (DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebuggerException_tB6778BDE9F905B23139FF557AE21D7E78382B382_il2cpp_TypeInfo_var)));
		DebuggerException__ctor_mA6E32F520E67D1274394305AE062A425DDE4750E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		if (L_2)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tF5EEA6D4B7CD2DA163D3A0AF724DDA169CDDADFC);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tC442AD22BB905647A05ACA78CD30449AD31C0FB1);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tD20138FAB0F9B38292FC1B2B2454312A1F259865);
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tABB6B11697415B23540E253469502D8D1D2C59CE);
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tBC2401693CD68CC7FC0A1EA67B3D80E699142575);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t83B7D394F437F4798F4448E730D183B1E4E14637);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_21);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t2DBE54BAD0A40C51F5D94A3D471E83D9C6225623);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 6), L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_23;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_tC0011CD684B7D84354AFFB79A6A3B607F9AD9D64);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 7), L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_26;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tBD222255418063F6B252D7DABC05C036FB8D9AD4);
		RuntimeObject* L_31 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 8), L_30);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t17E4A8AD459DDEBD4BAA392AAC075E992770FC61);
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 9), L_33);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_32;
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t3FCAAAB3231B035E191E5469F9399C608C3D8C34);
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 10), L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tA658BBB86939F753ED352331D0ECBADB5AF6EA73);
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 11), L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_38;
		il2cpp_codegen_memcpy(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t17BB14C26C01FB99C19B7E97D323609E6E1CAB76);
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 12), L_42);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_41;
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t934325672C81EF313241BF43DBD93AC9CAFD8482);
		RuntimeObject* L_46 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 13), L_45);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_46);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_44;
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? ___15_arg15 : &___15_arg15), SizeOf_T15_tBFBBC1FD777B2C715B95531E5CB483C313ACBFB6);
		RuntimeObject* L_49 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 14), L_48);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_47;
		il2cpp_codegen_memcpy(L_51, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? ___16_arg16 : &___16_arg16), SizeOf_T16_t856D678B27C11DAD3E70693BCA35ED47F7151D65);
		RuntimeObject* L_52 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 15), L_51);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_52);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_52);
		String_t* L_53;
		L_53 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_50, NULL);
		return L_53;
	}

IL_00ca:
	{
		RuntimeObject* L_54 = ((Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_StaticFields*)il2cpp_codegen_static_fields_for(Text_tA54E658F30D031F55397B3DE9BF76752036FFE23_il2cpp_TypeInfo_var))->___s_TextHelper;
		String_t* L_55 = ___0_format;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_arg1 : &___1_arg1), SizeOf_T1_tF5EEA6D4B7CD2DA163D3A0AF724DDA169CDDADFC);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg2 : &___2_arg2), SizeOf_T2_tC442AD22BB905647A05ACA78CD30449AD31C0FB1);
		il2cpp_codegen_memcpy(L_58, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg3 : &___3_arg3), SizeOf_T3_tD20138FAB0F9B38292FC1B2B2454312A1F259865);
		il2cpp_codegen_memcpy(L_59, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___4_arg4 : &___4_arg4), SizeOf_T4_tABB6B11697415B23540E253469502D8D1D2C59CE);
		il2cpp_codegen_memcpy(L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___5_arg5 : &___5_arg5), SizeOf_T5_tBC2401693CD68CC7FC0A1EA67B3D80E699142575);
		il2cpp_codegen_memcpy(L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___6_arg6 : &___6_arg6), SizeOf_T6_t83B7D394F437F4798F4448E730D183B1E4E14637);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? ___7_arg7 : &___7_arg7), SizeOf_T7_t2DBE54BAD0A40C51F5D94A3D471E83D9C6225623);
		il2cpp_codegen_memcpy(L_63, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___8_arg8 : &___8_arg8), SizeOf_T8_tC0011CD684B7D84354AFFB79A6A3B607F9AD9D64);
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? ___9_arg9 : &___9_arg9), SizeOf_T9_tBD222255418063F6B252D7DABC05C036FB8D9AD4);
		il2cpp_codegen_memcpy(L_65, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? ___10_arg10 : &___10_arg10), SizeOf_T10_t17E4A8AD459DDEBD4BAA392AAC075E992770FC61);
		il2cpp_codegen_memcpy(L_66, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? ___11_arg11 : &___11_arg11), SizeOf_T11_t3FCAAAB3231B035E191E5469F9399C608C3D8C34);
		il2cpp_codegen_memcpy(L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? ___12_arg12 : &___12_arg12), SizeOf_T12_tA658BBB86939F753ED352331D0ECBADB5AF6EA73);
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? ___13_arg13 : &___13_arg13), SizeOf_T13_t17BB14C26C01FB99C19B7E97D323609E6E1CAB76);
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? ___14_arg14 : &___14_arg14), SizeOf_T14_t934325672C81EF313241BF43DBD93AC9CAFD8482);
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? ___15_arg15 : &___15_arg15), SizeOf_T15_tBFBBC1FD777B2C715B95531E5CB483C313ACBFB6);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? ___16_arg16 : &___16_arg16), SizeOf_T16_t856D678B27C11DAD3E70693BCA35ED47F7151D65);
		NullCheck(L_54);
		String_t* L_72;
		L_72 = GenericInterfaceFuncInvoker17Invoker< String_t*, String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 16), L_54, L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_57: *(void**)L_57), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_58: *(void**)L_58), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_59: *(void**)L_59), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_60: *(void**)L_60), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_61: *(void**)L_61), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 6)) ? L_62: *(void**)L_62), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_63: *(void**)L_63), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_64: *(void**)L_64), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 9)) ? L_65: *(void**)L_65), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_66: *(void**)L_66), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 11)) ? L_67: *(void**)L_67), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 12)) ? L_68: *(void**)L_68), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 13)) ? L_69: *(void**)L_69), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 14)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 15)) ? L_71: *(void**)L_71));
		return L_72;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
