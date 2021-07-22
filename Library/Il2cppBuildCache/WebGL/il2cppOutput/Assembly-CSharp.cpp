#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.WheelFrictionCurve>
struct Dictionary_2_t4173C62BB745AE47A901B6BDA2A65B1192E5D5FF;
// System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>
struct Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5B9514E3D12F47B7EA1DA86A54C8BCD962D07630;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.WheelCollider>
struct IEqualityComparer_1_tF194DB722217E06DED27F72FA4C2B95B7AAF6AFD;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>
struct KeyCollection_t7A6CF7A4CF4177D722E736D629EF5AF46246F19F;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>
struct ValueCollection_t16EAA1F0057392EBE9789262C12303EE67C59E7C;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>[]
struct EntryU5BU5D_t2304D74B295E712EDC501B78E5E55FD84CDD9D5A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// Car
struct Car_t140E1231AE020708928CFAFA9E6B9BEF44462184;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DriveCar
struct DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966;
// DriveCar_Wheels
struct DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361;
// FootballPhysics
struct FootballPhysics_t4EF6377767A8CFB47B8E56F575EEB9FA1D93FB42;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.InputSystem.InputValue
struct InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A;
// KeyboardInput
struct KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NewControls
struct NewControls_t6B9F8F40EF28F982515243953A6047499D94A646;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ReloadScene
struct ReloadScene_t173F042F54F54D41C710E040CCC2D9993B53C0F8;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// WheelFollowCollider
struct WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7;
// InputManager/ButtonPressed
struct ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1;
// NewControls/IGameplayActions
struct IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA27D473D56AF923065D0F8C9E2C84A4C607396;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6A091F2B0E2F6B66AC9E898377E2996AAADA1B;
IL2CPP_EXTERN_C String_t* _stringLiteral41D2CE0586D170F54CDD438EBBA5919810D760EB;
IL2CPP_EXTERN_C String_t* _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6;
IL2CPP_EXTERN_C String_t* _stringLiteral57566EB1F1127609CB6906779A69269C7525CC98;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB8B8CC11D0917435C0A2F7E9EC60FF3E8B4F4ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m677FA810F2924F7C37A7CFD5E031275871A234A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC2B216422B63657DF9D7988BFD899B2933BA8BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveCar_Wheels_Brake_m43EF5C19E7C6AADDBABF2968DA198BCCE3B24A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveCar_Wheels_Drift_m778445B0D361936D31FBDEE068A19385705009B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DriveCar_Wheels_Reset_m06EA84AF5AFD7DB2FDFE0519AEFA43485FF2DCC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>
struct  Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2304D74B295E712EDC501B78E5E55FD84CDD9D5A* ___entries_1;
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
	KeyCollection_t7A6CF7A4CF4177D722E736D629EF5AF46246F19F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t16EAA1F0057392EBE9789262C12303EE67C59E7C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___entries_1)); }
	inline EntryU5BU5D_t2304D74B295E712EDC501B78E5E55FD84CDD9D5A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2304D74B295E712EDC501B78E5E55FD84CDD9D5A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2304D74B295E712EDC501B78E5E55FD84CDD9D5A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___keys_7)); }
	inline KeyCollection_t7A6CF7A4CF4177D722E736D629EF5AF46246F19F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7A6CF7A4CF4177D722E736D629EF5AF46246F19F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7A6CF7A4CF4177D722E736D629EF5AF46246F19F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ___values_8)); }
	inline ValueCollection_t16EAA1F0057392EBE9789262C12303EE67C59E7C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t16EAA1F0057392EBE9789262C12303EE67C59E7C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t16EAA1F0057392EBE9789262C12303EE67C59E7C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// NewControls
struct  NewControls_t6B9F8F40EF28F982515243953A6047499D94A646  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset NewControls::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap NewControls::m_Gameplay
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_Gameplay_1;
	// NewControls/IGameplayActions NewControls::m_GameplayActionsCallbackInterface
	RuntimeObject* ___m_GameplayActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Vertical
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Vertical_3;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Horizontal
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Horizontal_4;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Drift
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Drift_5;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Brake
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Brake_6;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Reset
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Reset_7;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Settings
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Settings_8;
	// UnityEngine.InputSystem.InputAction NewControls::m_Gameplay_Restart
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Gameplay_Restart_9;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_1() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_Gameplay_1() const { return ___m_Gameplay_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_Gameplay_1() { return &___m_Gameplay_1; }
	inline void set_m_Gameplay_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_Gameplay_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GameplayActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_GameplayActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_GameplayActionsCallbackInterface_2() const { return ___m_GameplayActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_GameplayActionsCallbackInterface_2() { return &___m_GameplayActionsCallbackInterface_2; }
	inline void set_m_GameplayActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_GameplayActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameplayActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Vertical_3() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Vertical_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Vertical_3() const { return ___m_Gameplay_Vertical_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Vertical_3() { return &___m_Gameplay_Vertical_3; }
	inline void set_m_Gameplay_Vertical_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Vertical_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Vertical_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Horizontal_4() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Horizontal_4)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Horizontal_4() const { return ___m_Gameplay_Horizontal_4; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Horizontal_4() { return &___m_Gameplay_Horizontal_4; }
	inline void set_m_Gameplay_Horizontal_4(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Horizontal_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Horizontal_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Drift_5() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Drift_5)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Drift_5() const { return ___m_Gameplay_Drift_5; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Drift_5() { return &___m_Gameplay_Drift_5; }
	inline void set_m_Gameplay_Drift_5(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Drift_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Drift_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Brake_6() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Brake_6)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Brake_6() const { return ___m_Gameplay_Brake_6; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Brake_6() { return &___m_Gameplay_Brake_6; }
	inline void set_m_Gameplay_Brake_6(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Brake_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Brake_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Reset_7() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Reset_7)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Reset_7() const { return ___m_Gameplay_Reset_7; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Reset_7() { return &___m_Gameplay_Reset_7; }
	inline void set_m_Gameplay_Reset_7(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Reset_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Reset_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Settings_8() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Settings_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Settings_8() const { return ___m_Gameplay_Settings_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Settings_8() { return &___m_Gameplay_Settings_8; }
	inline void set_m_Gameplay_Settings_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Settings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Settings_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gameplay_Restart_9() { return static_cast<int32_t>(offsetof(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646, ___m_Gameplay_Restart_9)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Gameplay_Restart_9() const { return ___m_Gameplay_Restart_9; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Gameplay_Restart_9() { return &___m_Gameplay_Restart_9; }
	inline void set_m_Gameplay_Restart_9(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Gameplay_Restart_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gameplay_Restart_9), (void*)value);
	}
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct  InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct  ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Array_0)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct  ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Array_0)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WheelFrictionCurve
struct  WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D 
{
public:
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumSlip
	float ___m_ExtremumSlip_0;
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumValue
	float ___m_ExtremumValue_1;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteSlip
	float ___m_AsymptoteSlip_2;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteValue
	float ___m_AsymptoteValue_3;
	// System.Single UnityEngine.WheelFrictionCurve::m_Stiffness
	float ___m_Stiffness_4;

public:
	inline static int32_t get_offset_of_m_ExtremumSlip_0() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumSlip_0)); }
	inline float get_m_ExtremumSlip_0() const { return ___m_ExtremumSlip_0; }
	inline float* get_address_of_m_ExtremumSlip_0() { return &___m_ExtremumSlip_0; }
	inline void set_m_ExtremumSlip_0(float value)
	{
		___m_ExtremumSlip_0 = value;
	}

	inline static int32_t get_offset_of_m_ExtremumValue_1() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumValue_1)); }
	inline float get_m_ExtremumValue_1() const { return ___m_ExtremumValue_1; }
	inline float* get_address_of_m_ExtremumValue_1() { return &___m_ExtremumValue_1; }
	inline void set_m_ExtremumValue_1(float value)
	{
		___m_ExtremumValue_1 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteSlip_2() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteSlip_2)); }
	inline float get_m_AsymptoteSlip_2() const { return ___m_AsymptoteSlip_2; }
	inline float* get_address_of_m_AsymptoteSlip_2() { return &___m_AsymptoteSlip_2; }
	inline void set_m_AsymptoteSlip_2(float value)
	{
		___m_AsymptoteSlip_2 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteValue_3() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteValue_3)); }
	inline float get_m_AsymptoteValue_3() const { return ___m_AsymptoteValue_3; }
	inline float* get_address_of_m_AsymptoteValue_3() { return &___m_AsymptoteValue_3; }
	inline void set_m_AsymptoteValue_3(float value)
	{
		___m_AsymptoteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_Stiffness_4() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_Stiffness_4)); }
	inline float get_m_Stiffness_4() const { return ___m_Stiffness_4; }
	inline float* get_address_of_m_Stiffness_4() { return &___m_Stiffness_4; }
	inline void set_m_Stiffness_4(float value)
	{
		___m_Stiffness_4 = value;
	}
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct  CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// NewControls/GameplayActions
struct  GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 
{
public:
	// NewControls NewControls/GameplayActions::m_Wrapper
	NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09, ___m_Wrapper_0)); }
	inline NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NewControls/GameplayActions
struct GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_pinvoke
{
	NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___m_Wrapper_0;
};
// Native definition for COM marshalling of NewControls/GameplayActions
struct GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_com
{
	NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___m_Wrapper_0;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct  Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84 
{
public:
	// T System.Nullable`1::value
	ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___value_0)); }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  get_value_0() const { return ___value_0; }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct  Nullable_1_tD760FF88A2CC328667672238CFC298364004646C 
{
public:
	// T System.Nullable`1::value
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD760FF88A2CC328667672238CFC298364004646C, ___value_0)); }
	inline CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  get_value_0() const { return ___value_0; }
	inline CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_State_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD760FF88A2CC328667672238CFC298364004646C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct  ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
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

// UnityEngine.ForceMode
struct  ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct  InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct  Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct  InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputValue
struct  InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A  : public RuntimeObject
{
public:
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_tD760FF88A2CC328667672238CFC298364004646C  ___m_Context_0;

public:
	inline static int32_t get_offset_of_m_Context_0() { return static_cast<int32_t>(offsetof(InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A, ___m_Context_0)); }
	inline Nullable_1_tD760FF88A2CC328667672238CFC298364004646C  get_m_Context_0() const { return ___m_Context_0; }
	inline Nullable_1_tD760FF88A2CC328667672238CFC298364004646C * get_address_of_m_Context_0() { return &___m_Context_0; }
	inline void set_m_Context_0(Nullable_1_tD760FF88A2CC328667672238CFC298364004646C  value)
	{
		___m_Context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Context_0))->___value_0))->___m_State_0), (void*)NULL);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct  Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct  Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// InputManager/ButtonPressed
struct  ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct  InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_DevicesCount
	int32_t ___m_DevicesCount_9;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionAsset::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_10;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_BindingMask_8)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesCount_9)); }
	inline int32_t get_m_DevicesCount_9() const { return ___m_DevicesCount_9; }
	inline int32_t* get_address_of_m_DevicesCount_9() { return &___m_DevicesCount_9; }
	inline void set_m_DevicesCount_9(int32_t value)
	{
		___m_DevicesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesArray_10)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_10() const { return ___m_DevicesArray_10; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_10() { return &___m_DevicesArray_10; }
	inline void set_m_DevicesArray_10(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionMap
struct  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.WheelCollider
struct  WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// CameraFollow
struct  CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraFollow::camLerp
	float ___camLerp_4;
	// UnityEngine.Vector3 CameraFollow::camOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___camOffset_5;
	// UnityEngine.Transform CameraFollow::cam
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cam_6;
	// UnityEngine.Rigidbody CameraFollow::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_7;

public:
	inline static int32_t get_offset_of_camLerp_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___camLerp_4)); }
	inline float get_camLerp_4() const { return ___camLerp_4; }
	inline float* get_address_of_camLerp_4() { return &___camLerp_4; }
	inline void set_camLerp_4(float value)
	{
		___camLerp_4 = value;
	}

	inline static int32_t get_offset_of_camOffset_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___camOffset_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_camOffset_5() const { return ___camOffset_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_camOffset_5() { return &___camOffset_5; }
	inline void set_camOffset_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___camOffset_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___cam_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cam_6() const { return ___cam_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___rb_7)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}
};


// Car
struct  Car_t140E1231AE020708928CFAFA9E6B9BEF44462184  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform[] Car::wheelPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___wheelPoints_4;
	// System.Single Car::wheelNormalDistance
	float ___wheelNormalDistance_5;
	// System.Single Car::wheelMaxDistance
	float ___wheelMaxDistance_6;
	// System.Single Car::wheelMinDistance
	float ___wheelMinDistance_7;
	// System.Single Car::springConstant
	float ___springConstant_8;
	// System.Single Car::maxSpringForce
	float ___maxSpringForce_9;
	// System.Single Car::springDamper
	float ___springDamper_10;
	// System.Boolean Car::pauseOnMin
	bool ___pauseOnMin_11;
	// UnityEngine.Vector3 Car::down
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___down_12;
	// System.Single Car::antiRollForce
	float ___antiRollForce_13;
	// UnityEngine.Rigidbody Car::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_14;

public:
	inline static int32_t get_offset_of_wheelPoints_4() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___wheelPoints_4)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_wheelPoints_4() const { return ___wheelPoints_4; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_wheelPoints_4() { return &___wheelPoints_4; }
	inline void set_wheelPoints_4(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___wheelPoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelPoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_wheelNormalDistance_5() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___wheelNormalDistance_5)); }
	inline float get_wheelNormalDistance_5() const { return ___wheelNormalDistance_5; }
	inline float* get_address_of_wheelNormalDistance_5() { return &___wheelNormalDistance_5; }
	inline void set_wheelNormalDistance_5(float value)
	{
		___wheelNormalDistance_5 = value;
	}

	inline static int32_t get_offset_of_wheelMaxDistance_6() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___wheelMaxDistance_6)); }
	inline float get_wheelMaxDistance_6() const { return ___wheelMaxDistance_6; }
	inline float* get_address_of_wheelMaxDistance_6() { return &___wheelMaxDistance_6; }
	inline void set_wheelMaxDistance_6(float value)
	{
		___wheelMaxDistance_6 = value;
	}

	inline static int32_t get_offset_of_wheelMinDistance_7() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___wheelMinDistance_7)); }
	inline float get_wheelMinDistance_7() const { return ___wheelMinDistance_7; }
	inline float* get_address_of_wheelMinDistance_7() { return &___wheelMinDistance_7; }
	inline void set_wheelMinDistance_7(float value)
	{
		___wheelMinDistance_7 = value;
	}

	inline static int32_t get_offset_of_springConstant_8() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___springConstant_8)); }
	inline float get_springConstant_8() const { return ___springConstant_8; }
	inline float* get_address_of_springConstant_8() { return &___springConstant_8; }
	inline void set_springConstant_8(float value)
	{
		___springConstant_8 = value;
	}

	inline static int32_t get_offset_of_maxSpringForce_9() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___maxSpringForce_9)); }
	inline float get_maxSpringForce_9() const { return ___maxSpringForce_9; }
	inline float* get_address_of_maxSpringForce_9() { return &___maxSpringForce_9; }
	inline void set_maxSpringForce_9(float value)
	{
		___maxSpringForce_9 = value;
	}

	inline static int32_t get_offset_of_springDamper_10() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___springDamper_10)); }
	inline float get_springDamper_10() const { return ___springDamper_10; }
	inline float* get_address_of_springDamper_10() { return &___springDamper_10; }
	inline void set_springDamper_10(float value)
	{
		___springDamper_10 = value;
	}

	inline static int32_t get_offset_of_pauseOnMin_11() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___pauseOnMin_11)); }
	inline bool get_pauseOnMin_11() const { return ___pauseOnMin_11; }
	inline bool* get_address_of_pauseOnMin_11() { return &___pauseOnMin_11; }
	inline void set_pauseOnMin_11(bool value)
	{
		___pauseOnMin_11 = value;
	}

	inline static int32_t get_offset_of_down_12() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___down_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_down_12() const { return ___down_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_down_12() { return &___down_12; }
	inline void set_down_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___down_12 = value;
	}

	inline static int32_t get_offset_of_antiRollForce_13() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___antiRollForce_13)); }
	inline float get_antiRollForce_13() const { return ___antiRollForce_13; }
	inline float* get_address_of_antiRollForce_13() { return &___antiRollForce_13; }
	inline void set_antiRollForce_13(float value)
	{
		___antiRollForce_13 = value;
	}

	inline static int32_t get_offset_of_rb_14() { return static_cast<int32_t>(offsetof(Car_t140E1231AE020708928CFAFA9E6B9BEF44462184, ___rb_14)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_14() const { return ___rb_14; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_14() { return &___rb_14; }
	inline void set_rb_14(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_14), (void*)value);
	}
};


// DriveCar
struct  DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// InputManager DriveCar::input
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___input_4;
	// System.Single DriveCar::flipAngle
	float ___flipAngle_5;
	// System.Single DriveCar::turnSensitivity
	float ___turnSensitivity_6;
	// System.Single DriveCar::gravity
	float ___gravity_7;
	// System.Single DriveCar::maxSpeed
	float ___maxSpeed_8;
	// System.Single DriveCar::maxReverseSpeed
	float ___maxReverseSpeed_9;
	// System.Single DriveCar::brakePower
	float ___brakePower_10;
	// System.Single DriveCar::collDownDist
	float ___collDownDist_11;
	// System.Single DriveCar::maxTurnAngle
	float ___maxTurnAngle_12;
	// System.Single DriveCar::accelerationTime
	float ___accelerationTime_13;
	// UnityEngine.Vector3 DriveCar::down
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___down_14;
	// UnityEngine.AnimationCurve DriveCar::acceleration
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___acceleration_15;
	// UnityEngine.WheelCollider[] DriveCar::drivingWheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___drivingWheels_16;
	// UnityEngine.WheelCollider[] DriveCar::steeringWheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___steeringWheels_17;
	// System.Single DriveCar::speed
	float ___speed_18;
	// System.Single DriveCar::turn
	float ___turn_19;
	// UnityEngine.Rigidbody DriveCar::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_20;
	// System.Boolean DriveCar::isJumping
	bool ___isJumping_21;
	// System.Single DriveCar::xIn
	float ___xIn_22;
	// System.Single DriveCar::yIn
	float ___yIn_23;
	// UnityEngine.Vector3 DriveCar::GravDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___GravDir_24;
	// UnityEngine.Vector3 DriveCar::Up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Up_25;

public:
	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___input_4)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_input_4() const { return ___input_4; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_4), (void*)value);
	}

	inline static int32_t get_offset_of_flipAngle_5() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___flipAngle_5)); }
	inline float get_flipAngle_5() const { return ___flipAngle_5; }
	inline float* get_address_of_flipAngle_5() { return &___flipAngle_5; }
	inline void set_flipAngle_5(float value)
	{
		___flipAngle_5 = value;
	}

	inline static int32_t get_offset_of_turnSensitivity_6() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___turnSensitivity_6)); }
	inline float get_turnSensitivity_6() const { return ___turnSensitivity_6; }
	inline float* get_address_of_turnSensitivity_6() { return &___turnSensitivity_6; }
	inline void set_turnSensitivity_6(float value)
	{
		___turnSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_gravity_7() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___gravity_7)); }
	inline float get_gravity_7() const { return ___gravity_7; }
	inline float* get_address_of_gravity_7() { return &___gravity_7; }
	inline void set_gravity_7(float value)
	{
		___gravity_7 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_8() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___maxSpeed_8)); }
	inline float get_maxSpeed_8() const { return ___maxSpeed_8; }
	inline float* get_address_of_maxSpeed_8() { return &___maxSpeed_8; }
	inline void set_maxSpeed_8(float value)
	{
		___maxSpeed_8 = value;
	}

	inline static int32_t get_offset_of_maxReverseSpeed_9() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___maxReverseSpeed_9)); }
	inline float get_maxReverseSpeed_9() const { return ___maxReverseSpeed_9; }
	inline float* get_address_of_maxReverseSpeed_9() { return &___maxReverseSpeed_9; }
	inline void set_maxReverseSpeed_9(float value)
	{
		___maxReverseSpeed_9 = value;
	}

	inline static int32_t get_offset_of_brakePower_10() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___brakePower_10)); }
	inline float get_brakePower_10() const { return ___brakePower_10; }
	inline float* get_address_of_brakePower_10() { return &___brakePower_10; }
	inline void set_brakePower_10(float value)
	{
		___brakePower_10 = value;
	}

	inline static int32_t get_offset_of_collDownDist_11() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___collDownDist_11)); }
	inline float get_collDownDist_11() const { return ___collDownDist_11; }
	inline float* get_address_of_collDownDist_11() { return &___collDownDist_11; }
	inline void set_collDownDist_11(float value)
	{
		___collDownDist_11 = value;
	}

	inline static int32_t get_offset_of_maxTurnAngle_12() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___maxTurnAngle_12)); }
	inline float get_maxTurnAngle_12() const { return ___maxTurnAngle_12; }
	inline float* get_address_of_maxTurnAngle_12() { return &___maxTurnAngle_12; }
	inline void set_maxTurnAngle_12(float value)
	{
		___maxTurnAngle_12 = value;
	}

	inline static int32_t get_offset_of_accelerationTime_13() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___accelerationTime_13)); }
	inline float get_accelerationTime_13() const { return ___accelerationTime_13; }
	inline float* get_address_of_accelerationTime_13() { return &___accelerationTime_13; }
	inline void set_accelerationTime_13(float value)
	{
		___accelerationTime_13 = value;
	}

	inline static int32_t get_offset_of_down_14() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___down_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_down_14() const { return ___down_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_down_14() { return &___down_14; }
	inline void set_down_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___down_14 = value;
	}

	inline static int32_t get_offset_of_acceleration_15() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___acceleration_15)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_acceleration_15() const { return ___acceleration_15; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_acceleration_15() { return &___acceleration_15; }
	inline void set_acceleration_15(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___acceleration_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___acceleration_15), (void*)value);
	}

	inline static int32_t get_offset_of_drivingWheels_16() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___drivingWheels_16)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_drivingWheels_16() const { return ___drivingWheels_16; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_drivingWheels_16() { return &___drivingWheels_16; }
	inline void set_drivingWheels_16(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___drivingWheels_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drivingWheels_16), (void*)value);
	}

	inline static int32_t get_offset_of_steeringWheels_17() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___steeringWheels_17)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_steeringWheels_17() const { return ___steeringWheels_17; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_steeringWheels_17() { return &___steeringWheels_17; }
	inline void set_steeringWheels_17(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___steeringWheels_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steeringWheels_17), (void*)value);
	}

	inline static int32_t get_offset_of_speed_18() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___speed_18)); }
	inline float get_speed_18() const { return ___speed_18; }
	inline float* get_address_of_speed_18() { return &___speed_18; }
	inline void set_speed_18(float value)
	{
		___speed_18 = value;
	}

	inline static int32_t get_offset_of_turn_19() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___turn_19)); }
	inline float get_turn_19() const { return ___turn_19; }
	inline float* get_address_of_turn_19() { return &___turn_19; }
	inline void set_turn_19(float value)
	{
		___turn_19 = value;
	}

	inline static int32_t get_offset_of_rb_20() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___rb_20)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_20() const { return ___rb_20; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_20() { return &___rb_20; }
	inline void set_rb_20(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_20), (void*)value);
	}

	inline static int32_t get_offset_of_isJumping_21() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___isJumping_21)); }
	inline bool get_isJumping_21() const { return ___isJumping_21; }
	inline bool* get_address_of_isJumping_21() { return &___isJumping_21; }
	inline void set_isJumping_21(bool value)
	{
		___isJumping_21 = value;
	}

	inline static int32_t get_offset_of_xIn_22() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___xIn_22)); }
	inline float get_xIn_22() const { return ___xIn_22; }
	inline float* get_address_of_xIn_22() { return &___xIn_22; }
	inline void set_xIn_22(float value)
	{
		___xIn_22 = value;
	}

	inline static int32_t get_offset_of_yIn_23() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___yIn_23)); }
	inline float get_yIn_23() const { return ___yIn_23; }
	inline float* get_address_of_yIn_23() { return &___yIn_23; }
	inline void set_yIn_23(float value)
	{
		___yIn_23 = value;
	}

	inline static int32_t get_offset_of_GravDir_24() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___GravDir_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_GravDir_24() const { return ___GravDir_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_GravDir_24() { return &___GravDir_24; }
	inline void set_GravDir_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___GravDir_24 = value;
	}

	inline static int32_t get_offset_of_Up_25() { return static_cast<int32_t>(offsetof(DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966, ___Up_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Up_25() const { return ___Up_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Up_25() { return &___Up_25; }
	inline void set_Up_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Up_25 = value;
	}
};


// DriveCar_Wheels
struct  DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DriveCar_Wheels::speed
	float ___speed_4;
	// System.Single DriveCar_Wheels::turnAngle
	float ___turnAngle_5;
	// System.Single DriveCar_Wheels::antiRollForce
	float ___antiRollForce_6;
	// System.Single DriveCar_Wheels::brakeForce
	float ___brakeForce_7;
	// System.Single DriveCar_Wheels::turnTorque
	float ___turnTorque_8;
	// UnityEngine.Vector3 DriveCar_Wheels::centerOfMass
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerOfMass_9;
	// System.Single DriveCar_Wheels::antiSlideForce
	float ___antiSlideForce_10;
	// InputManager DriveCar_Wheels::input
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___input_11;
	// UnityEngine.WheelCollider[] DriveCar_Wheels::driveWheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___driveWheels_12;
	// UnityEngine.WheelCollider[] DriveCar_Wheels::steerWheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___steerWheels_13;
	// UnityEngine.Vector3[] DriveCar_Wheels::wheelpoints
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___wheelpoints_14;
	// UnityEngine.Rigidbody DriveCar_Wheels::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_15;
	// System.Single DriveCar_Wheels::throttle
	float ___throttle_16;
	// System.Single DriveCar_Wheels::steer
	float ___steer_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve> DriveCar_Wheels::originalCurves
	Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * ___originalCurves_18;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_turnAngle_5() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___turnAngle_5)); }
	inline float get_turnAngle_5() const { return ___turnAngle_5; }
	inline float* get_address_of_turnAngle_5() { return &___turnAngle_5; }
	inline void set_turnAngle_5(float value)
	{
		___turnAngle_5 = value;
	}

	inline static int32_t get_offset_of_antiRollForce_6() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___antiRollForce_6)); }
	inline float get_antiRollForce_6() const { return ___antiRollForce_6; }
	inline float* get_address_of_antiRollForce_6() { return &___antiRollForce_6; }
	inline void set_antiRollForce_6(float value)
	{
		___antiRollForce_6 = value;
	}

	inline static int32_t get_offset_of_brakeForce_7() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___brakeForce_7)); }
	inline float get_brakeForce_7() const { return ___brakeForce_7; }
	inline float* get_address_of_brakeForce_7() { return &___brakeForce_7; }
	inline void set_brakeForce_7(float value)
	{
		___brakeForce_7 = value;
	}

	inline static int32_t get_offset_of_turnTorque_8() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___turnTorque_8)); }
	inline float get_turnTorque_8() const { return ___turnTorque_8; }
	inline float* get_address_of_turnTorque_8() { return &___turnTorque_8; }
	inline void set_turnTorque_8(float value)
	{
		___turnTorque_8 = value;
	}

	inline static int32_t get_offset_of_centerOfMass_9() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___centerOfMass_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_centerOfMass_9() const { return ___centerOfMass_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_centerOfMass_9() { return &___centerOfMass_9; }
	inline void set_centerOfMass_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___centerOfMass_9 = value;
	}

	inline static int32_t get_offset_of_antiSlideForce_10() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___antiSlideForce_10)); }
	inline float get_antiSlideForce_10() const { return ___antiSlideForce_10; }
	inline float* get_address_of_antiSlideForce_10() { return &___antiSlideForce_10; }
	inline void set_antiSlideForce_10(float value)
	{
		___antiSlideForce_10 = value;
	}

	inline static int32_t get_offset_of_input_11() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___input_11)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_input_11() const { return ___input_11; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_input_11() { return &___input_11; }
	inline void set_input_11(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___input_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_11), (void*)value);
	}

	inline static int32_t get_offset_of_driveWheels_12() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___driveWheels_12)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_driveWheels_12() const { return ___driveWheels_12; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_driveWheels_12() { return &___driveWheels_12; }
	inline void set_driveWheels_12(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___driveWheels_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___driveWheels_12), (void*)value);
	}

	inline static int32_t get_offset_of_steerWheels_13() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___steerWheels_13)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_steerWheels_13() const { return ___steerWheels_13; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_steerWheels_13() { return &___steerWheels_13; }
	inline void set_steerWheels_13(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___steerWheels_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___steerWheels_13), (void*)value);
	}

	inline static int32_t get_offset_of_wheelpoints_14() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___wheelpoints_14)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_wheelpoints_14() const { return ___wheelpoints_14; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_wheelpoints_14() { return &___wheelpoints_14; }
	inline void set_wheelpoints_14(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___wheelpoints_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelpoints_14), (void*)value);
	}

	inline static int32_t get_offset_of_rb_15() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___rb_15)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_15() const { return ___rb_15; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_15() { return &___rb_15; }
	inline void set_rb_15(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_15), (void*)value);
	}

	inline static int32_t get_offset_of_throttle_16() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___throttle_16)); }
	inline float get_throttle_16() const { return ___throttle_16; }
	inline float* get_address_of_throttle_16() { return &___throttle_16; }
	inline void set_throttle_16(float value)
	{
		___throttle_16 = value;
	}

	inline static int32_t get_offset_of_steer_17() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___steer_17)); }
	inline float get_steer_17() const { return ___steer_17; }
	inline float* get_address_of_steer_17() { return &___steer_17; }
	inline void set_steer_17(float value)
	{
		___steer_17 = value;
	}

	inline static int32_t get_offset_of_originalCurves_18() { return static_cast<int32_t>(offsetof(DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361, ___originalCurves_18)); }
	inline Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * get_originalCurves_18() const { return ___originalCurves_18; }
	inline Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 ** get_address_of_originalCurves_18() { return &___originalCurves_18; }
	inline void set_originalCurves_18(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * value)
	{
		___originalCurves_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalCurves_18), (void*)value);
	}
};


// FootballPhysics
struct  FootballPhysics_t4EF6377767A8CFB47B8E56F575EEB9FA1D93FB42  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single FootballPhysics::extraOomph
	float ___extraOomph_4;

public:
	inline static int32_t get_offset_of_extraOomph_4() { return static_cast<int32_t>(offsetof(FootballPhysics_t4EF6377767A8CFB47B8E56F575EEB9FA1D93FB42, ___extraOomph_4)); }
	inline float get_extraOomph_4() const { return ___extraOomph_4; }
	inline float* get_address_of_extraOomph_4() { return &___extraOomph_4; }
	inline void set_extraOomph_4(float value)
	{
		___extraOomph_4 = value;
	}
};


// InputManager
struct  InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single InputManager::horizontal
	float ___horizontal_4;
	// System.Single InputManager::vertical
	float ___vertical_5;
	// System.Boolean InputManager::brakePressed
	bool ___brakePressed_6;
	// System.Boolean InputManager::driftPressed
	bool ___driftPressed_7;
	// System.Boolean InputManager::resetPressed
	bool ___resetPressed_8;
	// System.Boolean InputManager::settingsPressed
	bool ___settingsPressed_9;
	// InputManager/ButtonPressed InputManager::OnResetPressed
	ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * ___OnResetPressed_10;
	// InputManager/ButtonPressed InputManager::OnDriftPressed
	ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * ___OnDriftPressed_11;
	// InputManager/ButtonPressed InputManager::OnSettingsPressed
	ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * ___OnSettingsPressed_12;
	// InputManager/ButtonPressed InputManager::OnBrakePressed
	ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * ___OnBrakePressed_13;

public:
	inline static int32_t get_offset_of_horizontal_4() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___horizontal_4)); }
	inline float get_horizontal_4() const { return ___horizontal_4; }
	inline float* get_address_of_horizontal_4() { return &___horizontal_4; }
	inline void set_horizontal_4(float value)
	{
		___horizontal_4 = value;
	}

	inline static int32_t get_offset_of_vertical_5() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___vertical_5)); }
	inline float get_vertical_5() const { return ___vertical_5; }
	inline float* get_address_of_vertical_5() { return &___vertical_5; }
	inline void set_vertical_5(float value)
	{
		___vertical_5 = value;
	}

	inline static int32_t get_offset_of_brakePressed_6() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___brakePressed_6)); }
	inline bool get_brakePressed_6() const { return ___brakePressed_6; }
	inline bool* get_address_of_brakePressed_6() { return &___brakePressed_6; }
	inline void set_brakePressed_6(bool value)
	{
		___brakePressed_6 = value;
	}

	inline static int32_t get_offset_of_driftPressed_7() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___driftPressed_7)); }
	inline bool get_driftPressed_7() const { return ___driftPressed_7; }
	inline bool* get_address_of_driftPressed_7() { return &___driftPressed_7; }
	inline void set_driftPressed_7(bool value)
	{
		___driftPressed_7 = value;
	}

	inline static int32_t get_offset_of_resetPressed_8() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___resetPressed_8)); }
	inline bool get_resetPressed_8() const { return ___resetPressed_8; }
	inline bool* get_address_of_resetPressed_8() { return &___resetPressed_8; }
	inline void set_resetPressed_8(bool value)
	{
		___resetPressed_8 = value;
	}

	inline static int32_t get_offset_of_settingsPressed_9() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___settingsPressed_9)); }
	inline bool get_settingsPressed_9() const { return ___settingsPressed_9; }
	inline bool* get_address_of_settingsPressed_9() { return &___settingsPressed_9; }
	inline void set_settingsPressed_9(bool value)
	{
		___settingsPressed_9 = value;
	}

	inline static int32_t get_offset_of_OnResetPressed_10() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnResetPressed_10)); }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * get_OnResetPressed_10() const { return ___OnResetPressed_10; }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 ** get_address_of_OnResetPressed_10() { return &___OnResetPressed_10; }
	inline void set_OnResetPressed_10(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * value)
	{
		___OnResetPressed_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetPressed_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnDriftPressed_11() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnDriftPressed_11)); }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * get_OnDriftPressed_11() const { return ___OnDriftPressed_11; }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 ** get_address_of_OnDriftPressed_11() { return &___OnDriftPressed_11; }
	inline void set_OnDriftPressed_11(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * value)
	{
		___OnDriftPressed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDriftPressed_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnSettingsPressed_12() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnSettingsPressed_12)); }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * get_OnSettingsPressed_12() const { return ___OnSettingsPressed_12; }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 ** get_address_of_OnSettingsPressed_12() { return &___OnSettingsPressed_12; }
	inline void set_OnSettingsPressed_12(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * value)
	{
		___OnSettingsPressed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSettingsPressed_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnBrakePressed_13() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnBrakePressed_13)); }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * get_OnBrakePressed_13() const { return ___OnBrakePressed_13; }
	inline ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 ** get_address_of_OnBrakePressed_13() { return &___OnBrakePressed_13; }
	inline void set_OnBrakePressed_13(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * value)
	{
		___OnBrakePressed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBrakePressed_13), (void*)value);
	}
};


// ReloadScene
struct  ReloadScene_t173F042F54F54D41C710E040CCC2D9993B53C0F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WheelFollowCollider
struct  WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.WheelCollider WheelFollowCollider::wheelC
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___wheelC_4;
	// UnityEngine.Vector3 WheelFollowCollider::wheelCCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wheelCCenter_5;
	// UnityEngine.Quaternion WheelFollowCollider::wheelCForward
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___wheelCForward_6;
	// UnityEngine.RaycastHit WheelFollowCollider::hit
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hit_7;
	// System.Single WheelFollowCollider::rotation
	float ___rotation_8;

public:
	inline static int32_t get_offset_of_wheelC_4() { return static_cast<int32_t>(offsetof(WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7, ___wheelC_4)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_wheelC_4() const { return ___wheelC_4; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_wheelC_4() { return &___wheelC_4; }
	inline void set_wheelC_4(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___wheelC_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelC_4), (void*)value);
	}

	inline static int32_t get_offset_of_wheelCCenter_5() { return static_cast<int32_t>(offsetof(WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7, ___wheelCCenter_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_wheelCCenter_5() const { return ___wheelCCenter_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_wheelCCenter_5() { return &___wheelCCenter_5; }
	inline void set_wheelCCenter_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___wheelCCenter_5 = value;
	}

	inline static int32_t get_offset_of_wheelCForward_6() { return static_cast<int32_t>(offsetof(WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7, ___wheelCForward_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_wheelCForward_6() const { return ___wheelCForward_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_wheelCForward_6() { return &___wheelCForward_6; }
	inline void set_wheelCForward_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___wheelCForward_6 = value;
	}

	inline static int32_t get_offset_of_hit_7() { return static_cast<int32_t>(offsetof(WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7, ___hit_7)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_hit_7() const { return ___hit_7; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_hit_7() { return &___hit_7; }
	inline void set_hit_7(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___hit_7 = value;
	}

	inline static int32_t get_offset_of_rotation_8() { return static_cast<int32_t>(offsetof(WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7, ___rotation_8)); }
	inline float get_rotation_8() const { return ___rotation_8; }
	inline float* get_address_of_rotation_8() { return &___rotation_8; }
	inline void set_rotation_8(float value)
	{
		___rotation_8 = value;
	}
};


// KeyboardInput
struct  KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709  : public InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * m_Items[1];

public:
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  m_Items[1];

public:
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017  value)
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.WheelFrictionCurve>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  Dictionary_2_get_Item_m032E333F161799C54D14697CB3D43F629938419E_gshared (Dictionary_2_t4173C62BB745AE47A901B6BDA2A65B1192E5D5FF * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.WheelFrictionCurve>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m75436F0796D860CBFCD1C5ABF9D331A6926403F8_gshared (Dictionary_2_t4173C62BB745AE47A901B6BDA2A65B1192E5D5FF * __this, RuntimeObject * ___key0, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.WheelFrictionCurve>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF7FB3E4EF1147364B2BA2C4B0F57596E4B9226A_gshared (Dictionary_2_t4173C62BB745AE47A901B6BDA2A65B1192E5D5FF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputValue::Get<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_gshared (InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_worldCenterOfMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_worldCenterOfMass_mF825B0D5110903BD0A3FDC1DC4317902305DE143 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WheelCollider::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.RaycastHit DriveCar::Map(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  DriveCar_Map_m5C4B2A6206399B94753BEB72BE28201C7A11F1F0 (DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___grav0, float ___maxDist1, float ___deltaTime2, float ___duration3, int32_t ___layermask4, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_mAEB5758FA773B1A0ECDD328934BB3A7202D21EB3 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___torque0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeForce_m45E6C06CE742C72905BB126945B454FBA54D84E1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_mEDE3483056FB07222A4D096F22D45C7D8A6E2552 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___torque0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_asymptoteSlip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_asymptoteSlip_m4B04347AAEDFA2A5A5CA812117EB2BF4A1CA062D (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_asymptoteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_asymptoteValue_mF2D071806D295FD5D414B990F8955AA175EA90D1 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_extremumSlip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_extremumSlip_m5F8C078803DEC63B8521C75BDC5661A9A0AB9CA6 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_extremumValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_extremumValue_m67FBB03CFE1515140C8DBA2F14ABC9C6ED0BC71E (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_stiffness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_sidewaysFriction(UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>::get_Item(!0)
inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  Dictionary_2_get_Item_mC2B216422B63657DF9D7988BFD899B2933BA8BC7 (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * __this, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___key0, const RuntimeMethod* method)
{
	return ((  WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  (*) (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 *, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 *, const RuntimeMethod*))Dictionary_2_get_Item_m032E333F161799C54D14697CB3D43F629938419E_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_sidewaysFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>::Add(!0,!1)
inline void Dictionary_2_Add_mB8B8CC11D0917435C0A2F7E9EC60FF3E8B4F4ADC (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * __this, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___key0, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 *, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 *, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D , const RuntimeMethod*))Dictionary_2_Add_m75436F0796D860CBFCD1C5ABF9D331A6926403F8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void InputManager/ButtonPressed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressed__ctor_m0B8CF5B859D0F5C51D00414F02A5C2ECE6783934 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(!0)
inline bool List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// System.Void DriveCar_Wheels::Throttle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Throttle_m70ED73EC157DB427D9473B1E79E9908C5ED5FE2E (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method);
// System.Void DriveCar_Wheels::Steer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Steer_m5FF1AA90F1A2974CBB495C3BBBED8CF8CBC1A41A (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.WheelCollider,UnityEngine.WheelFrictionCurve>::.ctor()
inline void Dictionary_2__ctor_m677FA810F2924F7C37A7CFD5E031275871A234A7 (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 *, const RuntimeMethod*))Dictionary_2__ctor_mAF7FB3E4EF1147364B2BA2C4B0F57596E4B9226A_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC (ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputValue::Get<System.Single>()
inline float InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077 (InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A *, const RuntimeMethod*))InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A (InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * __this, const RuntimeMethod* method);
// System.Void InputManager/ButtonPressed::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, bool ___isPressed0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698 (String_t* ___json0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset NewControls::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> NewControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_GetEnumerator_mB5265317FFFBEE8273600B3492707BAC252222FB (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void NewControls/GameplayActions::.ctor(NewControls)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC_inline (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___wrapper0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.WheelCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WheelCollider_get_center_mB3A87CDDC57D64E6A9D07F39C9C86E816A177CED (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_steerAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_rpm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_suspensionDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Drift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Brake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap NewControls/GameplayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void NewControls/GameplayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Enable_mF0630790D014D0C7888F86A5129A45A8F2387B06 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void NewControls/GameplayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Disable_mBB5C8E1EA3FA24963179E955A8E9EDFAB0024EB0 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean NewControls/GameplayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameplayActions_get_enabled_mB54AFC87866B97183236DF45B13819856AEF6BE8 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void NewControls/GameplayActions::SetCallbacks(NewControls/IGameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_SetCallbacks_m3062A07A0235D9C307CECDE7E994AFBB8A0485FD (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mC13DAB135378AADB3E72275F75CDEAF53343810D (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// cam.position = transform.TransformPoint(camOffset * 2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_cam_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_camOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_1, L_3, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_4, /*hidden argument*/NULL);
		// cam.LookAt(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_cam_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m140D0956A03E1CD6C6DF9B74330BDA2A0813248F (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 transformApplied = Vector3.Lerp(cam.position, transform.TransformPoint(camOffset), camLerp * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_cam_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_camOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_camLerp_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_1, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		V_0 = L_7;
		// cam.position = transformApplied;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_cam_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// cam.LookAt(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_cam_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// public float camLerp = 0.95f;
		__this->set_camLerp_4((0.949999988f));
		// public Vector3 camOffset = new Vector3(0, 3, -5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (3.0f), (-5.0f), /*hidden argument*/NULL);
		__this->set_camOffset_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Car::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_Start_m00A333F5D31CB78DFEFA44BA016427FA0B8D18E0 (Car_t140E1231AE020708928CFAFA9E6B9BEF44462184 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_14(L_0);
		// }
		return;
	}
}
// System.Void Car::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_FixedUpdate_mA05E5BB7D0193E9CD5CE9C613975A5BAA0018C31 (Car_t140E1231AE020708928CFAFA9E6B9BEF44462184 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// rb.AddForce(down * rb.mass, ForceMode.Acceleration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rb_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_down_12();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_rb_14();
		float L_3;
		L_3 = Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_3, /*hidden argument*/NULL);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_0, L_4, 5, /*hidden argument*/NULL);
		// foreach (Transform wheelpoint in wheelPoints)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_wheelPoints_4();
		V_0 = L_5;
		V_1 = 0;
		goto IL_0173;
	}

IL_0030:
	{
		// foreach (Transform wheelpoint in wheelPoints)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (Physics.Raycast(wheelpoint.position, wheelpoint.forward, out hit, wheelMaxDistance))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_wheelMaxDistance_6();
		bool L_15;
		L_15 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_11, L_13, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00e4;
		}
	}
	{
		// float distance = wheelNormalDistance - hit.distance;
		float L_16 = __this->get_wheelNormalDistance_5();
		float L_17;
		L_17 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_17));
		// Vector3 force = -wheelpoint.forward * Mathf.Min(springConstant * Time.fixedDeltaTime / hit.distance, maxSpringForce);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_springConstant_8();
		float L_22;
		L_22 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_23;
		L_23 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		float L_24 = __this->get_maxSpringForce_9();
		float L_25;
		L_25 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22))/(float)L_23)), L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		// rb.AddForceAtPosition(force / springDamper, wheelpoint.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27 = __this->get_rb_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_6;
		float L_29 = __this->get_springDamper_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_28, L_29, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5(L_27, L_30, L_32, /*hidden argument*/NULL);
		// Debug.DrawLine(wheelpoint.position, hit.point, Color.Lerp(Color.red, Color.yellow, (distance - wheelMinDistance) / wheelMaxDistance));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		L_37 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		float L_38 = V_5;
		float L_39 = __this->get_wheelMinDistance_7();
		float L_40 = __this->get_wheelMaxDistance_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_36, L_37, ((float)((float)((float)il2cpp_codegen_subtract((float)L_38, (float)L_39))/(float)L_40)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_34, L_35, L_41, /*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_00e4:
	{
		// Debug.DrawRay(wheelpoint.position, wheelpoint.forward * wheelMaxDistance, Color.green);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_wheelMaxDistance_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, L_46, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_43, L_47, L_48, /*hidden argument*/NULL);
	}

IL_0105:
	{
		// Vector3 unrollforce = Vector3.Project(wheelpoint.position - rb.worldCenterOfMass, -down);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_51 = __this->get_rb_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Rigidbody_get_worldCenterOfMass_mF825B0D5110903BD0A3FDC1DC4317902305DE143(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_50, L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = __this->get_down_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6(L_53, L_55, /*hidden argument*/NULL);
		// Vector3 antiTurnForce = -unrollforce.y * antiRollForce * -wheelpoint.forward;
		float L_57 = L_56.get_y_3();
		float L_58 = __this->get_antiRollForce_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_multiply((float)((-L_57)), (float)L_58)), L_61, /*hidden argument*/NULL);
		V_4 = L_62;
		// rb.AddForceAtPosition(antiTurnForce, wheelpoint.position);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_63 = __this->get_rb_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		Rigidbody_AddForceAtPosition_m5190249D95CE1882B37481C5BFD2ABF201902BA5(L_63, L_64, L_66, /*hidden argument*/NULL);
		// Debug.DrawRay(wheelpoint.position, antiTurnForce, Color.blue);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		L_70 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_68, L_69, L_70, /*hidden argument*/NULL);
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_0173:
	{
		// foreach (Transform wheelpoint in wheelPoints)
		int32_t L_72 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_73 = V_0;
		if ((((int32_t)L_72) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Car::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car__ctor_m60DBEB43627049079D3DB87585F1E132B1C4DC41 (Car_t140E1231AE020708928CFAFA9E6B9BEF44462184 * __this, const RuntimeMethod* method)
{
	{
		// public float wheelNormalDistance = 1;
		__this->set_wheelNormalDistance_5((1.0f));
		// public float wheelMaxDistance = 2;
		__this->set_wheelMaxDistance_6((2.0f));
		// public float wheelMinDistance = 0.6f;
		__this->set_wheelMinDistance_7((0.600000024f));
		// public float springConstant = 1;
		__this->set_springConstant_8((1.0f));
		// public float maxSpringForce = 100;
		__this->set_maxSpringForce_9((100.0f));
		// public float springDamper = .9f;
		__this->set_springDamper_10((0.899999976f));
		// public bool pauseOnMin = true;
		__this->set_pauseOnMin_11((bool)1);
		// public float antiRollForce = 10;
		__this->set_antiRollForce_13((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DriveCar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Start_m630CFB6364CD1DCBFACFDF16FE3688B0B819E082 (DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GravDir = down;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_down_14();
		__this->set_GravDir_24(L_0);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_20(L_1);
		// }
		return;
	}
}
// System.Void DriveCar::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_LateUpdate_m8347BAAA9B36EE0450A03006810EF36DFD69188A (DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FA27D473D56AF923065D0F8C9E2C84A4C607396);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// xIn = input.horizontal;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_input_4();
		float L_1 = L_0->get_horizontal_4();
		__this->set_xIn_22(L_1);
		// yIn = input.vertical;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = __this->get_input_4();
		float L_3 = L_2->get_vertical_5();
		__this->set_yIn_23(L_3);
		// Up = transform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_4, /*hidden argument*/NULL);
		__this->set_Up_25(L_5);
		// speed = Mathf.Clamp(speed + yIn * maxSpeed * Time.deltaTime, -maxReverseSpeed, maxSpeed);
		float L_6 = __this->get_speed_18();
		float L_7 = __this->get_yIn_23();
		float L_8 = __this->get_maxSpeed_8();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_10 = __this->get_maxReverseSpeed_9();
		float L_11 = __this->get_maxSpeed_8();
		float L_12;
		L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9)))), ((-L_10)), L_11, /*hidden argument*/NULL);
		__this->set_speed_18(L_12);
		// Vector3 gravForce = GravDir * gravity * Time.deltaTime * rb.mass;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_GravDir_24();
		float L_14 = __this->get_gravity_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18 = __this->get_rb_20();
		float L_19;
		L_19 = Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// rb.AddForce(gravForce, ForceMode.Impulse);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_21 = __this->get_rb_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_21, L_22, 1, /*hidden argument*/NULL);
		// bool isGrounded = false;
		V_1 = (bool)0;
		// foreach (WheelCollider wheel in drivingWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_23 = __this->get_drivingWheels_16();
		V_2 = L_23;
		V_3 = 0;
		goto IL_00cd;
	}

IL_00ab:
	{
		// foreach (WheelCollider wheel in drivingWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = L_25;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		// wheel.motorTorque = speed * Time.deltaTime;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_28 = L_27;
		float L_29 = __this->get_speed_18();
		float L_30;
		L_30 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_28, ((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), /*hidden argument*/NULL);
		// if (wheel.isGrounded)
		bool L_31;
		L_31 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_28, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00c9;
		}
	}
	{
		// isGrounded = true;
		V_1 = (bool)1;
	}

IL_00c9:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00cd:
	{
		// foreach (WheelCollider wheel in drivingWheels)
		int32_t L_33 = V_3;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_00ab;
		}
	}
	{
		// foreach (WheelCollider wheel in steeringWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_35 = __this->get_steeringWheels_17();
		V_2 = L_35;
		V_3 = 0;
		goto IL_00fa;
	}

IL_00de:
	{
		// foreach (WheelCollider wheel in steeringWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		// wheel.steerAngle = turn;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_40 = L_39;
		float L_41 = __this->get_turn_19();
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_40, L_41, /*hidden argument*/NULL);
		// if (wheel.isGrounded)
		bool L_42;
		L_42 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_40, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00f6;
		}
	}
	{
		// isGrounded = true;
		V_1 = (bool)1;
	}

IL_00f6:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00fa:
	{
		// foreach (WheelCollider wheel in steeringWheels)
		int32_t L_44 = V_3;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_00de;
		}
	}
	{
		// float angle = Vector3.Angle(transform.up, Up);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = __this->get_Up_25();
		float L_49;
		L_49 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_47, L_48, /*hidden argument*/NULL);
		// if (angle < flipAngle)
		float L_50 = __this->get_flipAngle_5();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_018d;
		}
	}
	{
		// if (!isGrounded)
		bool L_51 = V_1;
		if (L_51)
		{
			goto IL_0184;
		}
	}
	{
		// if (!isJumping)
		bool L_52 = __this->get_isJumping_21();
		if (L_52)
		{
			goto IL_01a2;
		}
	}
	{
		// isJumping = true;
		__this->set_isJumping_21((bool)1);
		// int layerMask = 1 << 8;
		V_4 = ((int32_t)256);
		// layerMask = ~layerMask;
		int32_t L_53 = V_4;
		V_4 = ((~L_53));
		// RaycastHit hit = Map(new Vector3(0, -9.8f, 0), 1000, 0.0333f, 30, layerMask);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), (0.0f), (-9.80000019f), (0.0f), /*hidden argument*/NULL);
		int32_t L_55 = V_4;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_56;
		L_56 = DriveCar_Map_m5C4B2A6206399B94753BEB72BE28201C7A11F1F0(__this, L_54, (1000.0f), (0.0333000012f), (30.0f), L_55, /*hidden argument*/NULL);
		V_5 = L_56;
		// if (hit.collider != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_57;
		L_57 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_57, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_01a2;
		}
	}
	{
		// Debug.Log("PooPooPooP");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2FA27D473D56AF923065D0F8C9E2C84A4C607396, /*hidden argument*/NULL);
		// }
		goto IL_01a2;
	}

IL_0184:
	{
		// isJumping = false;
		__this->set_isJumping_21((bool)0);
		// }
		goto IL_01a2;
	}

IL_018d:
	{
		// rb.AddTorque(new Vector3());
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_59 = __this->get_rb_20();
		il2cpp_codegen_initobj((&V_6), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_6;
		Rigidbody_AddTorque_mAEB5758FA773B1A0ECDD328934BB3A7202D21EB3(L_59, L_60, /*hidden argument*/NULL);
	}

IL_01a2:
	{
		// turn = xIn * maxTurnAngle;
		float L_61 = __this->get_xIn_22();
		float L_62 = __this->get_maxTurnAngle_12();
		__this->set_turn_19(((float)il2cpp_codegen_multiply((float)L_61, (float)L_62)));
		// }
		return;
	}
}
// UnityEngine.RaycastHit DriveCar::Map(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  DriveCar_Map_m5C4B2A6206399B94753BEB72BE28201C7A11F1F0 (DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___grav0, float ___maxDist1, float ___deltaTime2, float ___duration3, int32_t ___layermask4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 velocity = rb.velocity;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_rb_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// float totalDist = 0;
		V_2 = (0.0f);
		goto IL_0073;
	}

IL_0020:
	{
		// Vector3 nextpos = pos + velocity * deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_1;
		float L_6 = ___deltaTime2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// Ray ray = new Ray(pos, nextpos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_3;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_11), L_9, L_10, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_12;
		L_12 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_11, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.collider != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13;
		L_13 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// return hit;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_15 = V_4;
		return L_15;
	}

IL_0050:
	{
		// totalDist += (pos - nextpos).magnitude;
		float L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20;
		L_20 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_16, (float)L_20));
		// pos = nextpos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		V_0 = L_21;
		// velocity += grav * deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = ___grav0;
		float L_24 = ___deltaTime2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
	}

IL_0073:
	{
		// while (totalDist < maxDist)
		float L_27 = V_2;
		float L_28 = ___maxDist1;
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_0020;
		}
	}
	{
		// return new RaycastHit();
		il2cpp_codegen_initobj((&V_6), sizeof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 ));
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_29 = V_6;
		return L_29;
	}
}
// System.Void DriveCar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar__ctor_m525887EF3C578665381558798AB2BB2985080013 (DriveCar_t3E013E865D89D20C9E43ACF0ACFE5A086ACF6966 * __this, const RuntimeMethod* method)
{
	{
		// public float flipAngle = 60;
		__this->set_flipAngle_5((60.0f));
		// public float turnSensitivity = 5;
		__this->set_turnSensitivity_6((5.0f));
		// public float gravity = 9.81f;
		__this->set_gravity_7((9.81000042f));
		// public float maxSpeed = 20;
		__this->set_maxSpeed_8((20.0f));
		// public float maxReverseSpeed = 10;
		__this->set_maxReverseSpeed_9((10.0f));
		// public float brakePower = 5;
		__this->set_brakePower_10((5.0f));
		// public float collDownDist = 0.501f;
		__this->set_collDownDist_11((0.500999987f));
		// public float maxTurnAngle = 20;
		__this->set_maxTurnAngle_12((20.0f));
		// public float accelerationTime = 5;
		__this->set_accelerationTime_13((5.0f));
		// public Vector3 down = -Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_0, /*hidden argument*/NULL);
		__this->set_down_14(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DriveCar_Wheels::Throttle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Throttle_m70ED73EC157DB427D9473B1E79E9908C5ED5FE2E (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method)
{
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_driveWheels_12();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// wheel.motorTorque = throttle * speed;
		float L_5 = __this->get_throttle_16();
		float L_6 = __this->get_speed_4();
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_8 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::Steer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Steer_m5FF1AA90F1A2974CBB495C3BBBED8CF8CBC1A41A (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method)
{
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (WheelCollider wheel in steerWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_steerWheels_13();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		// foreach (WheelCollider wheel in steerWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// wheel.steerAngle = steer * turnAngle;
		float L_5 = __this->get_steer_17();
		float L_6 = __this->get_turnAngle_5();
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// foreach (WheelCollider wheel in steerWheels)
		int32_t L_8 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// rb.AddRelativeForce(steer * antiSlideForce * Time.deltaTime * transform.right);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_rb_15();
		float L_11 = __this->get_steer_17();
		float L_12 = __this->get_antiSlideForce_10();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_13)), L_15, /*hidden argument*/NULL);
		Rigidbody_AddRelativeForce_m45E6C06CE742C72905BB126945B454FBA54D84E1(L_10, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::Brake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Brake_m43EF5C19E7C6AADDBABF2968DA198BCCE3B24A71 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (isPressed)
		bool L_0 = ___isPressed0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_driveWheels_12();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000e:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// wheel.brakeTorque = brakeForce;
		float L_6 = __this->get_brakeForce_7();
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_8 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}

IL_0027:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_10 = __this->get_driveWheels_12();
		V_0 = L_10;
		V_1 = 0;
		goto IL_0043;
	}

IL_0032:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		// wheel.brakeTorque = 0;
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_14, (0.0f), /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_16 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Reset_m06EA84AF5AFD7DB2FDFE0519AEFA43485FF2DCC9 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!isPressed)
		bool L_0 = ___isPressed0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// transform.position += Vector3.up * 3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_6, /*hidden argument*/NULL);
		// Vector3 eulers = Vector3.up * transform.rotation.eulerAngles.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// transform.rotation = Quaternion.Euler(eulers);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_15, /*hidden argument*/NULL);
		// rb.AddTorque(-rb.angularVelocity, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_16 = __this->get_rb_15();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_17 = __this->get_rb_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_18, /*hidden argument*/NULL);
		Rigidbody_AddTorque_mEDE3483056FB07222A4D096F22D45C7D8A6E2552(L_16, L_19, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::Drift(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Drift_m778445B0D361936D31FBDEE068A19385705009B3 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC2B216422B63657DF9D7988BFD899B2933BA8BC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_0 = NULL;
	int32_t V_1 = 0;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * V_3 = NULL;
	{
		// if (isPressed)
		bool L_0 = ___isPressed0;
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_driveWheels_12();
		V_0 = L_1;
		V_1 = 0;
		goto IL_005f;
	}

IL_000e:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// WheelFrictionCurve wheelSlideCurve = new WheelFrictionCurve();
		il2cpp_codegen_initobj((&V_2), sizeof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D ));
		// wheelSlideCurve.asymptoteSlip = 1;
		WheelFrictionCurve_set_asymptoteSlip_m4B04347AAEDFA2A5A5CA812117EB2BF4A1CA062D((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_2), (1.0f), /*hidden argument*/NULL);
		// wheelSlideCurve.asymptoteValue = 1;
		WheelFrictionCurve_set_asymptoteValue_mF2D071806D295FD5D414B990F8955AA175EA90D1((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_2), (1.0f), /*hidden argument*/NULL);
		// wheelSlideCurve.extremumSlip = 1;
		WheelFrictionCurve_set_extremumSlip_m5F8C078803DEC63B8521C75BDC5661A9A0AB9CA6((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_2), (1.0f), /*hidden argument*/NULL);
		// wheelSlideCurve.extremumValue = 1;
		WheelFrictionCurve_set_extremumValue_m67FBB03CFE1515140C8DBA2F14ABC9C6ED0BC71E((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_2), (1.0f), /*hidden argument*/NULL);
		// wheelSlideCurve.stiffness = 1;
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_2), (1.0f), /*hidden argument*/NULL);
		// wheel.sidewaysFriction = wheelSlideCurve;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_6 = V_2;
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_005f:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_8 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}

IL_0066:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_10 = __this->get_driveWheels_12();
		V_0 = L_10;
		V_1 = 0;
		goto IL_008b;
	}

IL_0071:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		// wheel.sidewaysFriction = originalCurves[wheel];
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_15 = V_3;
		Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * L_16 = __this->get_originalCurves_18();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_17 = V_3;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_18;
		L_18 = Dictionary_2_get_Item_mC2B216422B63657DF9D7988BFD899B2933BA8BC7(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_mC2B216422B63657DF9D7988BFD899B2933BA8BC7_RuntimeMethod_var);
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_15, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_008b:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_20 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_Start_m41F9F1682712814E529FA3C96D2E3A29C304ACA9 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB8B8CC11D0917435C0A2F7E9EC60FF3E8B4F4ADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveCar_Wheels_Brake_m43EF5C19E7C6AADDBABF2968DA198BCCE3B24A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveCar_Wheels_Drift_m778445B0D361936D31FBDEE068A19385705009B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveCar_Wheels_Reset_m06EA84AF5AFD7DB2FDFE0519AEFA43485FF2DCC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_0 = NULL;
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* V_1 = NULL;
	int32_t V_2 = 0;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * V_3 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * V_4 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * V_6 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_15(L_0);
		// rb.centerOfMass = centerOfMass;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rb_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_centerOfMass_9();
		Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC(L_1, L_2, /*hidden argument*/NULL);
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_3 = __this->get_driveWheels_12();
		V_1 = L_3;
		V_2 = 0;
		goto IL_0042;
	}

IL_0028:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// originalCurves.Add(wheel, wheel.sidewaysFriction);
		Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * L_8 = __this->get_originalCurves_18();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_9 = V_3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_10 = V_3;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_11;
		L_11 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_10, /*hidden argument*/NULL);
		Dictionary_2_Add_mB8B8CC11D0917435C0A2F7E9EC60FF3E8B4F4ADC(L_8, L_9, L_11, /*hidden argument*/Dictionary_2_Add_mB8B8CC11D0917435C0A2F7E9EC60FF3E8B4F4ADC_RuntimeMethod_var);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0042:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_13 = V_2;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		// input.OnResetPressed += Reset;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_15 = __this->get_input_11();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_16 = L_15;
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_17 = L_16->get_OnResetPressed_10();
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_18 = (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)il2cpp_codegen_object_new(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var);
		ButtonPressed__ctor_m0B8CF5B859D0F5C51D00414F02A5C2ECE6783934(L_18, __this, (intptr_t)((intptr_t)DriveCar_Wheels_Reset_m06EA84AF5AFD7DB2FDFE0519AEFA43485FF2DCC9_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_19;
		L_19 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_17, L_18, /*hidden argument*/NULL);
		L_16->set_OnResetPressed_10(((ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)CastclassSealed((RuntimeObject*)L_19, ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var)));
		// input.OnBrakePressed += Brake;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_20 = __this->get_input_11();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_21 = L_20;
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_22 = L_21->get_OnBrakePressed_13();
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_23 = (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)il2cpp_codegen_object_new(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var);
		ButtonPressed__ctor_m0B8CF5B859D0F5C51D00414F02A5C2ECE6783934(L_23, __this, (intptr_t)((intptr_t)DriveCar_Wheels_Brake_m43EF5C19E7C6AADDBABF2968DA198BCCE3B24A71_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_24;
		L_24 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_22, L_23, /*hidden argument*/NULL);
		L_21->set_OnBrakePressed_13(((ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)CastclassSealed((RuntimeObject*)L_24, ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var)));
		// input.OnDriftPressed += Drift;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_25 = __this->get_input_11();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_26 = L_25;
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_27 = L_26->get_OnDriftPressed_11();
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_28 = (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)il2cpp_codegen_object_new(ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var);
		ButtonPressed__ctor_m0B8CF5B859D0F5C51D00414F02A5C2ECE6783934(L_28, __this, (intptr_t)((intptr_t)DriveCar_Wheels_Drift_m778445B0D361936D31FBDEE068A19385705009B3_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_29;
		L_29 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_27, L_28, /*hidden argument*/NULL);
		L_26->set_OnDriftPressed_11(((ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 *)CastclassSealed((RuntimeObject*)L_29, ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1_il2cpp_TypeInfo_var)));
		// List<Vector3> wheelpointsList = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_30 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_30, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		V_0 = L_30;
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_31 = __this->get_driveWheels_12();
		V_1 = L_31;
		V_2 = 0;
		goto IL_010c;
	}

IL_00ce:
	{
		// foreach (WheelCollider wheel in driveWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = L_33;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = L_35;
		// Vector3 point = transform.position - wheel.gameObject.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_38 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_37, L_41, /*hidden argument*/NULL);
		V_5 = L_42;
		// if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_43 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_5;
		bool L_45;
		L_45 = List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE(L_43, L_44, /*hidden argument*/List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_RuntimeMethod_var);
		if (L_45)
		{
			goto IL_0108;
		}
	}
	{
		// if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_46 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_5;
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_46, L_47, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
	}

IL_0108:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_010c:
	{
		// foreach (WheelCollider wheel in driveWheels)
		int32_t L_49 = V_2;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_50 = V_1;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))))
		{
			goto IL_00ce;
		}
	}
	{
		// foreach (WheelCollider wheel in steerWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_51 = __this->get_steerWheels_13();
		V_1 = L_51;
		V_2 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		// foreach (WheelCollider wheel in steerWheels)
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_52 = V_1;
		int32_t L_53 = V_2;
		int32_t L_54 = L_53;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		V_6 = L_55;
		// Vector3 point = transform.position - wheel.gameObject.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_58 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_58, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_57, L_61, /*hidden argument*/NULL);
		V_7 = L_62;
		// if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_63 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_7;
		bool L_65;
		L_65 = List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE(L_63, L_64, /*hidden argument*/List_1_Contains_mB872EC41D0CF4F0492BB4A99B1A016AAD189EBAE_RuntimeMethod_var);
		if (L_65)
		{
			goto IL_0157;
		}
	}
	{
		// if (!wheelpointsList.Contains(point)) wheelpointsList.Add(point);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_66 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_7;
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_66, L_67, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
	}

IL_0157:
	{
		int32_t L_68 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_015b:
	{
		// foreach (WheelCollider wheel in steerWheels)
		int32_t L_69 = V_2;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_70 = V_1;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		// wheelpoints = wheelpointsList.ToArray();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_71 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72;
		L_72 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_71, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		__this->set_wheelpoints_14(L_72);
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels_FixedUpdate_m21698D51DF03FA66BA409AA49703205EEEF455E5 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method)
{
	{
		// throttle = input.vertical;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_input_11();
		float L_1 = L_0->get_vertical_5();
		__this->set_throttle_16(L_1);
		// steer = input.horizontal;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = __this->get_input_11();
		float L_3 = L_2->get_horizontal_4();
		__this->set_steer_17(L_3);
		// Throttle();
		DriveCar_Wheels_Throttle_m70ED73EC157DB427D9473B1E79E9908C5ED5FE2E(__this, /*hidden argument*/NULL);
		// Steer();
		DriveCar_Wheels_Steer_m5FF1AA90F1A2974CBB495C3BBBED8CF8CBC1A41A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DriveCar_Wheels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveCar_Wheels__ctor_m43166BCB13AFEFF2C37A53522483C52B31594060 (DriveCar_Wheels_t59276B5D94074C34CCABAFB4A023E85E0451B361 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m677FA810F2924F7C37A7CFD5E031275871A234A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 10;
		__this->set_speed_4((10.0f));
		// public float turnAngle = 20;
		__this->set_turnAngle_5((20.0f));
		// public float antiRollForce = 4;
		__this->set_antiRollForce_6((4.0f));
		// public float brakeForce = 100000;
		__this->set_brakeForce_7((100000.0f));
		// public float turnTorque = 100;
		__this->set_turnTorque_8((100.0f));
		// public Vector3 centerOfMass = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_centerOfMass_9(L_0);
		// public float antiSlideForce = 1000;
		__this->set_antiSlideForce_10((1000.0f));
		// private Dictionary<WheelCollider, WheelFrictionCurve> originalCurves = new Dictionary<WheelCollider, WheelFrictionCurve>();
		Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 * L_1 = (Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71 *)il2cpp_codegen_object_new(Dictionary_2_t9F455BBA03D7B5178D1E42B8AA345CFB5A378F71_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m677FA810F2924F7C37A7CFD5E031275871A234A7(L_1, /*hidden argument*/Dictionary_2__ctor_m677FA810F2924F7C37A7CFD5E031275871A234A7_RuntimeMethod_var);
		__this->set_originalCurves_18(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FootballPhysics::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FootballPhysics_OnCollisionEnter_m0AD5248A1C8F6991DF97B025EB5AB72EF1356FE4 (FootballPhysics_t4EF6377767A8CFB47B8E56F575EEB9FA1D93FB42 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("Hit" + other.gameObject.tag);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if (other.gameObject.tag == "Player")
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_4 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		// Debug.Log("Bounce");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE, /*hidden argument*/NULL);
		// Vector3 point = other.contacts[0].point;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_8 = ___other0;
		ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* L_9;
		L_9 = Collision_get_contacts_m8C3D39F3332DD2AC623A9FB5F2127CE2754AF54B(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = ContactPoint_get_point_mEA976D5E3BC57FAB78F68BE0AA17A97293AEA5BC((ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 *)((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// Vector3 direction = point - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// GetComponent<Rigidbody>().AddForce(-direction * extraOomph, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14;
		L_14 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_extraOomph_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_14, L_18, 2, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void FootballPhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FootballPhysics__ctor_mAFD3FF304C244BFE6B93E5D6074E34F5515567C6 (FootballPhysics_t4EF6377767A8CFB47B8E56F575EEB9FA1D93FB42 * __this, const RuntimeMethod* method)
{
	{
		// public float extraOomph = 10;
		__this->set_extraOomph_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void KeyboardInput::OnHorizontal(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnHorizontal_m2CB0AFFA049640AA1826AFD3753C8A0E0B64A1D6 (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// horizontal = value.Get<float>();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		float L_1;
		L_1 = InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077(L_0, /*hidden argument*/InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_RuntimeMethod_var);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_horizontal_4(L_1);
		// }
		return;
	}
}
// System.Void KeyboardInput::OnVertical(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnVertical_mCF420B84ABB1D9690023E1DBF5240AE3FA83B0FE (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertical = value.Get<float>();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		float L_1;
		L_1 = InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077(L_0, /*hidden argument*/InputValue_Get_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA8FAE05CD2588B4A0A8A7B6C3C5DE62D4FB34077_RuntimeMethod_var);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_vertical_5(L_1);
		// }
		return;
	}
}
// System.Void KeyboardInput::OnEscape(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnEscape_m3C86C416DEBC6385CE64B04C2B6864E3CA48B537 (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	{
		// settingsPressed = value.isPressed;
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_0, /*hidden argument*/NULL);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_settingsPressed_9(L_1);
		// if (OnBrakePressed != null) OnSettingsPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnBrakePressed_13();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (OnBrakePressed != null) OnSettingsPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnSettingsPressed_12();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_4 = ___value0;
		bool L_5;
		L_5 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_4, /*hidden argument*/NULL);
		ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void KeyboardInput::OnDrift(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnDrift_m34CF0DC548D3D4599A6EDC99D51EDB494BAA316F (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	{
		// driftPressed = value.isPressed;
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_0, /*hidden argument*/NULL);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_driftPressed_7(L_1);
		// if (OnBrakePressed != null) OnDriftPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnBrakePressed_13();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (OnBrakePressed != null) OnDriftPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnDriftPressed_11();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_4 = ___value0;
		bool L_5;
		L_5 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_4, /*hidden argument*/NULL);
		ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void KeyboardInput::OnBrake(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnBrake_mBA9DAD47AA94CCACF75A605970A091AA57F8D90C (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	{
		// brakePressed = value.isPressed;
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_0, /*hidden argument*/NULL);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_brakePressed_6(L_1);
		// if (OnBrakePressed != null) OnBrakePressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnBrakePressed_13();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (OnBrakePressed != null) OnBrakePressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnBrakePressed_13();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_4 = ___value0;
		bool L_5;
		L_5 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_4, /*hidden argument*/NULL);
		ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void KeyboardInput::OnReset(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnReset_mC247075B708558F96DF4A0B241D32C13B8CAE674 (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	{
		// resetPressed = value.isPressed;
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_0, /*hidden argument*/NULL);
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->set_resetPressed_8(L_1);
		// if (OnBrakePressed != null) OnResetPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnBrakePressed_13();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (OnBrakePressed != null) OnResetPressed(value.isPressed);
		ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A *)__this)->get_OnResetPressed_10();
		InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * L_4 = ___value0;
		bool L_5;
		L_5 = InputValue_get_isPressed_m61A04B8FD6180F5A3FB065A3B2DEAFD70087DC4A(L_4, /*hidden argument*/NULL);
		ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void KeyboardInput::OnRestart(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput_OnRestart_m6B30F1407E0824D72B30927C2A0DDAE6ACDE68F0 (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, InputValue_t310BBA52EF008D59FD92A1454CD49D2B1AAC1C4A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void KeyboardInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInput__ctor_m00DE9CD7793D7127857B3F17A5B4AEF19CC7450A (KeyboardInput_t45E5CA0B3886C3853E7ECE09AA33FE8C43533709 * __this, const RuntimeMethod* method)
{
	{
		InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.InputActionAsset NewControls::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void NewControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls__ctor_m02F52B20E4171887F44A8B9382D57F9A7EE8E927 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6A091F2B0E2F6B66AC9E898377E2996AAADA1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D2CE0586D170F54CDD438EBBA5919810D760EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57566EB1F1127609CB6906779A69269C7525CC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @NewControls()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""New Controls"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Gameplay"",
		//             ""id"": ""48f5c2a3-6390-45cc-962c-56959644f44e"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Vertical"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""4edbf268-2f84-43de-8b3d-4b086caf0acd"",
		//                     ""expectedControlType"": ""Axis"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Horizontal"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""0d534647-905c-4aff-a041-6e0d11d568c3"",
		//                     ""expectedControlType"": ""Axis"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Drift"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""ea2dc58d-3baa-4b3f-ad24-4059ee1150de"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Brake"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""be93c464-ee82-469f-9048-a58751fcc0f5"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Reset"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""f803eb63-8e21-47e9-83c5-675efa039ee5"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Settings"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""6e4c2bf2-e2fe-4bab-8f81-9f0f3a225459"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""Restart"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""f07a2620-1390-4b46-a54b-6a20b5eeeb08"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""1D Axis"",
		//                     ""id"": ""4996d28b-e4a5-45cb-9106-07499bb8ae6b"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""6423d302-e0b6-4d68-a0d6-96069c9657c5"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""91d555b9-12b5-4165-b2f0-be54a08435d7"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""1D Axis"",
		//                     ""id"": ""2a746b46-108c-4d10-b7da-0118a5beca93"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""d82c3b3f-fe67-4a23-8833-4106a22ee9e0"",
		//                     ""path"": ""<Gamepad>/rightTrigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""824a46cc-d136-40bd-b66f-74ef539ace2a"",
		//                     ""path"": ""<Gamepad>/leftTrigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Vertical"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""1D Axis"",
		//                     ""id"": ""1cf5057d-5a99-4175-a671-0457ff1f7ad2"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""51e8c92a-9e49-4571-9c05-2aa2e9ad603c"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""f5e84100-ee97-4611-b66e-ddb89f1296bf"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""1D Axis"",
		//                     ""id"": ""c941ca78-f0a0-4d23-b1c4-b41976c0cc21"",
		//                     ""path"": ""1DAxis"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""negative"",
		//                     ""id"": ""ed0f100e-f2d5-4d01-9862-ee892411e3c7"",
		//                     ""path"": ""<Gamepad>/dpad/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""positive"",
		//                     ""id"": ""e704ad1a-dd0e-483e-8df0-fd01ab58f413"",
		//                     ""path"": ""<Gamepad>/dpad/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""cc5e83f7-7d0b-401c-9d71-74463a944099"",
		//                     ""path"": ""<Gamepad>/leftStick/x"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Horizontal"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""2c8c1322-4600-4ca3-aabe-8fae37abab45"",
		//                     ""path"": ""<Keyboard>/shift"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Drift"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""419fb55e-3820-47ef-b59a-cccd1d4b22e2"",
		//                     ""path"": ""<Gamepad>/buttonEast"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Drift"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""7edb3cb5-62b5-4596-8242-7fe65aff70cc"",
		//                     ""path"": ""<Keyboard>/space"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Reset"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""cd1814ee-f9a8-4eab-894a-75dbc15f3133"",
		//                     ""path"": ""<Gamepad>/buttonNorth"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Reset"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""7a4c920e-f2f4-41d8-9a59-021581f0640e"",
		//                     ""path"": ""<Keyboard>/t"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Settings"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""fc14e031-5eb6-451d-a886-507d39f0dd85"",
		//                     ""path"": ""<Keyboard>/ctrl"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Brake"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""132c1147-3cba-4d04-a523-3aabf8f0a34c"",
		//                     ""path"": ""<Gamepad>/buttonSouth"",
		//                     ""interactions"": ""Press(behavior=2)"",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Brake"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""81c75fe8-67d1-4c55-a6bf-3bcb9510b20c"",
		//                     ""path"": ""<Keyboard>/tab"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Restart"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""0ae11853-a2ca-4918-9ddc-385b3350a1ab"",
		//                     ""path"": ""<Gamepad>/leftShoulder"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Restart"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698(_stringLiteral57566EB1F1127609CB6906779A69269C7525CC98, /*hidden argument*/NULL);
		__this->set_U3CassetU3Ek__BackingField_0(L_0);
		// m_Gameplay = asset.FindActionMap("Gameplay", throwIfNotFound: true);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_1;
		L_1 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_2;
		L_2 = InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70(L_1, _stringLiteral42BE89C6A66E84EE1086370DF52323B75A26F3D6, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_1(L_2);
		// m_Gameplay_Vertical = m_Gameplay.FindAction("Vertical", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_3 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_3, _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Vertical_3(L_4);
		// m_Gameplay_Horizontal = m_Gameplay.FindAction("Horizontal", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_5 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6;
		L_6 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_5, _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Horizontal_4(L_6);
		// m_Gameplay_Drift = m_Gameplay.FindAction("Drift", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_7 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_8;
		L_8 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_7, _stringLiteral3D6A091F2B0E2F6B66AC9E898377E2996AAADA1B, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Drift_5(L_8);
		// m_Gameplay_Brake = m_Gameplay.FindAction("Brake", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_9 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_10;
		L_10 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_9, _stringLiteral41D2CE0586D170F54CDD438EBBA5919810D760EB, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Brake_6(L_10);
		// m_Gameplay_Reset = m_Gameplay.FindAction("Reset", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_11 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_11, _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Reset_7(L_12);
		// m_Gameplay_Settings = m_Gameplay.FindAction("Settings", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_13 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_14;
		L_14 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_13, _stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Settings_8(L_14);
		// m_Gameplay_Restart = m_Gameplay.FindAction("Restart", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_15 = __this->get_m_Gameplay_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_16;
		L_16 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_15, _stringLiteral838E394589B5693706685699154545855BEAE0B2, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Gameplay_Restart_9(L_16);
		// }
		return;
	}
}
// System.Void NewControls::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Dispose_m5071E09B3037831526DA9F32544CC91018FD07EE (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> NewControls::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  NewControls_get_bindingMask_m6A00F48178388D00CC8FD797345DBB9E9830DA8B (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1;
		L_1 = InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NewControls::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_set_bindingMask_m4C4E0E701CB9A915C008CC197AE3BD6578A7B5EF (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1 = ___value0;
		InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> NewControls::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  NewControls_get_devices_m1B307232F509A796DF2533C1E896C4EADB3CB400 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// get => asset.devices;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1;
		L_1 = InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NewControls::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_set_devices_mC500B28AF4545C7966050C43DFD83C104F2F04A9 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.devices = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1 = ___value0;
		InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> NewControls::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  NewControls_get_controlSchemes_mE851B4BB54128858C8C69886E01513D2C0C56648 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  L_1;
		L_1 = InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean NewControls::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NewControls_Contains_mC10DF28D9BADFB2AF3A1691DB7B64FE041619330 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method)
{
	{
		// return asset.Contains(action);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = ___action0;
		bool L_2;
		L_2 = InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> NewControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_GetEnumerator_mB5265317FFFBEE8273600B3492707BAC252222FB (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator NewControls::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControls_System_Collections_IEnumerable_GetEnumerator_m76CF1B82261C19217293A4706ED269C02CFCDA4B (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = NewControls_GetEnumerator_mB5265317FFFBEE8273600B3492707BAC252222FB(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void NewControls::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Enable_m7E6B8F57A420AAD9DDD9E618FD64013C1CACED42 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// asset.Enable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NewControls::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControls_Disable_m95D9EFBB30DDFBCF651DBB357DA16314736FA40D (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// asset.Disable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// NewControls/GameplayActions NewControls::get_Gameplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09  NewControls_get_Gameplay_m0BE7E10E6A68D64C6A4A1A8453329F304601FA12 (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// public GameplayActions @Gameplay => new GameplayActions(this);
		GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09  L_0;
		memset((&L_0), 0, sizeof(L_0));
		GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC_inline((&L_0), __this, /*hidden argument*/NULL);
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
// System.Void ReloadScene::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadScene_Reload_mE8231893B02EB08F61BA3D33417AE67E9FC0A59D (ReloadScene_t173F042F54F54D41C710E040CCC2D9993B53C0F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ReloadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadScene__ctor_mDDA626CD723DA4B7EE5BD4F0DA2CCAADF3F2081E (ReloadScene_t173F042F54F54D41C710E040CCC2D9993B53C0F8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WheelFollowCollider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFollowCollider_Update_mDB185D9D206C7D53AFEB7AF17FC77EF9E7871EC1 (WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// wheelCCenter = wheelC.transform.TransformPoint(wheelC.center);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_0 = __this->get_wheelC_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = __this->get_wheelC_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = WheelCollider_get_center_mB3A87CDDC57D64E6A9D07F39C9C86E816A177CED(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_1, L_3, /*hidden argument*/NULL);
		__this->set_wheelCCenter_5(L_4);
		// wheelCForward = wheelC.transform.rotation;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_5 = __this->get_wheelC_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		__this->set_wheelCForward_6(L_7);
		// float steerAngle = wheelC.steerAngle;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_8 = __this->get_wheelC_4();
		float L_9;
		L_9 = WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// rotation += Mathf.Rad2Deg * (2 * Mathf.PI * wheelC.rpm / 60 * Time.deltaTime);
		float L_10 = __this->get_rotation_8();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_11 = __this->get_wheelC_4();
		float L_12;
		L_12 = WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_rotation_8(((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_12))/(float)(60.0f))), (float)L_13)))))));
		// Quaternion rot = new Quaternion();
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// rot = Quaternion.Euler(rotation, steerAngle, 0);
		float L_14 = __this->get_rotation_8();
		float L_15 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_14, L_15, (0.0f), /*hidden argument*/NULL);
		V_1 = L_16;
		// if (Physics.Raycast(wheelCCenter, -wheelC.transform.up, out hit, wheelC.suspensionDistance + wheelC.radius))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_wheelCCenter_5();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_18 = __this->get_wheelC_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_20, /*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_22 = __this->get_address_of_hit_7();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_23 = __this->get_wheelC_4();
		float L_24;
		L_24 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_23, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_25 = __this->get_wheelC_4();
		float L_26;
		L_26 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_17, L_21, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_22, ((float)il2cpp_codegen_add((float)L_24, (float)L_26)), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_011f;
		}
	}
	{
		// transform.position = hit.point + (wheelC.transform.up * wheelC.radius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_29 = __this->get_address_of_hit_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_29, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_31 = __this->get_wheelC_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_32, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_34 = __this->get_wheelC_4();
		float L_35;
		L_35 = WheelCollider_get_radius_mDB04C14DAB0BB1D5D7A2D160C5EE3F159CE3FA26(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_30, L_36, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_37, /*hidden argument*/NULL);
		// transform.rotation = wheelCForward * rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = __this->get_wheelCForward_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_39, L_40, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_38, L_41, /*hidden argument*/NULL);
		// }
		return;
	}

IL_011f:
	{
		// transform.position = wheelCCenter - (wheelC.transform.up * wheelC.suspensionDistance);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_wheelCCenter_5();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_44 = __this->get_wheelC_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_45, /*hidden argument*/NULL);
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_47 = __this->get_wheelC_4();
		float L_48;
		L_48 = WheelCollider_get_suspensionDistance_m716BAA97103E158AAD36ECA2D775047D41ADB368(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_46, L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_43, L_49, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_50, /*hidden argument*/NULL);
		// transform.rotation = wheelCForward * rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52 = __this->get_wheelCForward_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_52, L_53, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_51, L_54, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WheelFollowCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFollowCollider__ctor_m028110F7F99E2F04D6377B52C514ED891C21F127 (WheelFollowCollider_t158FDA6F0AB36779BAC09D5BEDABC63909A1D1F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isPressed0));

}
// System.Void InputManager/ButtonPressed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressed__ctor_m0B8CF5B859D0F5C51D00414F02A5C2ECE6783934 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void InputManager/ButtonPressed::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressed_Invoke_m852C7F31AB1D6E9B9ADA48D6E7AF41342BCAC109 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isPressed0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isPressed0, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isPressed0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isPressed0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isPressed0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isPressed0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isPressed0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult InputManager/ButtonPressed::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonPressed_BeginInvoke_m9C5F44B15D66F1C278F41E6779E4DF863134D803 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, bool ___isPressed0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isPressed0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void InputManager/ButtonPressed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPressed_EndInvoke_mA0E7CAE6A2AF50CBAB9CDCDAFA5D16D9BB2041E4 (ButtonPressed_t5F11418FAC9DA6BABD360A5AF533E0564EE8D6D1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: NewControls/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_pinvoke(const GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09& unmarshaled, GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_pinvoke_back(const GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_pinvoke& marshaled, GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControls/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_pinvoke_cleanup(GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NewControls/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_com(const GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09& unmarshaled, GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_com_back(const GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_com& marshaled, GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GameplayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: NewControls/GameplayActions
IL2CPP_EXTERN_C void GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshal_com_cleanup(GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09_marshaled_com& marshaled)
{
}
// System.Void NewControls/GameplayActions::.ctor(NewControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public GameplayActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public GameplayActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC_AdjustorThunk (RuntimeObject * __this, NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Vertical => m_Wrapper.m_Gameplay_Vertical;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Vertical_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Horizontal => m_Wrapper.m_Gameplay_Horizontal;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Horizontal_4();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Drift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Drift => m_Wrapper.m_Gameplay_Drift;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Drift_5();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Brake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Brake => m_Wrapper.m_Gameplay_Brake;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Brake_6();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Reset => m_Wrapper.m_Gameplay_Reset;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Reset_7();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Settings => m_Wrapper.m_Gameplay_Settings;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Settings_8();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction NewControls/GameplayActions::get_Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Restart => m_Wrapper.m_Gameplay_Restart;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Gameplay_Restart_9();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControls/GameplayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Gameplay; }
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_Gameplay_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void NewControls/GameplayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Enable_mF0630790D014D0C7888F86A5129A45A8F2387B06 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_Enable_mF0630790D014D0C7888F86A5129A45A8F2387B06_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	GameplayActions_Enable_mF0630790D014D0C7888F86A5129A45A8F2387B06(_thisAdjusted, method);
}
// System.Void NewControls/GameplayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_Disable_mBB5C8E1EA3FA24963179E955A8E9EDFAB0024EB0 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_Disable_mBB5C8E1EA3FA24963179E955A8E9EDFAB0024EB0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	GameplayActions_Disable_mBB5C8E1EA3FA24963179E955A8E9EDFAB0024EB0(_thisAdjusted, method);
}
// System.Boolean NewControls/GameplayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameplayActions_get_enabled_mB54AFC87866B97183236DF45B13819856AEF6BE8 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool GameplayActions_get_enabled_mB54AFC87866B97183236DF45B13819856AEF6BE8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	bool _returnValue;
	_returnValue = GameplayActions_get_enabled_mB54AFC87866B97183236DF45B13819856AEF6BE8(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap NewControls/GameplayActions::op_Implicit(NewControls/GameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GameplayActions_op_Implicit_m74EDAB2A7DE396492FCE26B07F4FCAFAAC8C9434 (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(GameplayActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GameplayActions_Get_m9D72D6746548623DDDDC6E993E6272C2C6071B1B((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void NewControls/GameplayActions::SetCallbacks(NewControls/IGameplayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayActions_SetCallbacks_m3062A07A0235D9C307CECDE7E994AFBB8A0485FD (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_GameplayActionsCallbackInterface != null)
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = __this->get_m_Wrapper_0();
		RuntimeObject* L_1 = L_0->get_m_GameplayActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_02da;
		}
	}
	{
		// @Vertical.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_3 = __this->get_m_Wrapper_0();
		RuntimeObject* L_4 = L_3->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_6 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_2, L_6, /*hidden argument*/NULL);
		// @Vertical.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_8 = __this->get_m_Wrapper_0();
		RuntimeObject* L_9 = L_8->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_11, /*hidden argument*/NULL);
		// @Vertical.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_13 = __this->get_m_Wrapper_0();
		RuntimeObject* L_14 = L_13->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_12, L_16, /*hidden argument*/NULL);
		// @Horizontal.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_17;
		L_17 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_18 = __this->get_m_Wrapper_0();
		RuntimeObject* L_19 = L_18->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_20 = L_19;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_21 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_21, L_20, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_20, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_17, L_21, /*hidden argument*/NULL);
		// @Horizontal.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_22;
		L_22 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_23 = __this->get_m_Wrapper_0();
		RuntimeObject* L_24 = L_23->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_25 = L_24;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_26 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_26, L_25, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_25, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_22, L_26, /*hidden argument*/NULL);
		// @Horizontal.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_27;
		L_27 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_28 = __this->get_m_Wrapper_0();
		RuntimeObject* L_29 = L_28->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_30 = L_29;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_31 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_27, L_31, /*hidden argument*/NULL);
		// @Drift.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_32;
		L_32 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_33 = __this->get_m_Wrapper_0();
		RuntimeObject* L_34 = L_33->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_35 = L_34;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_36 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_36, L_35, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_35, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_32, L_36, /*hidden argument*/NULL);
		// @Drift.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_37;
		L_37 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_38 = __this->get_m_Wrapper_0();
		RuntimeObject* L_39 = L_38->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_40 = L_39;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_41 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_41, L_40, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_40, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_37, L_41, /*hidden argument*/NULL);
		// @Drift.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_42;
		L_42 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_43 = __this->get_m_Wrapper_0();
		RuntimeObject* L_44 = L_43->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_45 = L_44;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_46 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_46, L_45, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_45, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_42, L_46, /*hidden argument*/NULL);
		// @Brake.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_47;
		L_47 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_48 = __this->get_m_Wrapper_0();
		RuntimeObject* L_49 = L_48->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_50 = L_49;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_51 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_51, L_50, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_50, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_47, L_51, /*hidden argument*/NULL);
		// @Brake.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_52;
		L_52 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_53 = __this->get_m_Wrapper_0();
		RuntimeObject* L_54 = L_53->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_55 = L_54;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_56 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_56, L_55, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_55, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_52, L_56, /*hidden argument*/NULL);
		// @Brake.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_57;
		L_57 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_58 = __this->get_m_Wrapper_0();
		RuntimeObject* L_59 = L_58->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_60 = L_59;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_61 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_61, L_60, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_60, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_57, L_61, /*hidden argument*/NULL);
		// @Reset.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_62;
		L_62 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_63 = __this->get_m_Wrapper_0();
		RuntimeObject* L_64 = L_63->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_65 = L_64;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_66 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_66, L_65, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_65, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_62, L_66, /*hidden argument*/NULL);
		// @Reset.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_67;
		L_67 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_68 = __this->get_m_Wrapper_0();
		RuntimeObject* L_69 = L_68->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_70 = L_69;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_71 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_71, L_70, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_70, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_67, L_71, /*hidden argument*/NULL);
		// @Reset.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_72;
		L_72 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_73 = __this->get_m_Wrapper_0();
		RuntimeObject* L_74 = L_73->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_75 = L_74;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_76 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_76, L_75, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_75, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_72, L_76, /*hidden argument*/NULL);
		// @Settings.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_77;
		L_77 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_78 = __this->get_m_Wrapper_0();
		RuntimeObject* L_79 = L_78->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_80 = L_79;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_81 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_81, L_80, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_80, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_77, L_81, /*hidden argument*/NULL);
		// @Settings.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_82;
		L_82 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_83 = __this->get_m_Wrapper_0();
		RuntimeObject* L_84 = L_83->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_85 = L_84;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_86 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_86, L_85, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_85, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_82, L_86, /*hidden argument*/NULL);
		// @Settings.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_87;
		L_87 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_88 = __this->get_m_Wrapper_0();
		RuntimeObject* L_89 = L_88->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_90 = L_89;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_91 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_91, L_90, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_90, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_87, L_91, /*hidden argument*/NULL);
		// @Restart.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_92;
		L_92 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_93 = __this->get_m_Wrapper_0();
		RuntimeObject* L_94 = L_93->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_95 = L_94;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_96 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_96, L_95, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_95, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_92, L_96, /*hidden argument*/NULL);
		// @Restart.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_97;
		L_97 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_98 = __this->get_m_Wrapper_0();
		RuntimeObject* L_99 = L_98->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_100 = L_99;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_101 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_101, L_100, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_100, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_97, L_101, /*hidden argument*/NULL);
		// @Restart.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_102;
		L_102 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_103 = __this->get_m_Wrapper_0();
		RuntimeObject* L_104 = L_103->get_m_GameplayActionsCallbackInterface_2();
		RuntimeObject* L_105 = L_104;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_106 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_106, L_105, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_105, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_102, L_106, /*hidden argument*/NULL);
	}

IL_02da:
	{
		// m_Wrapper.m_GameplayActionsCallbackInterface = instance;
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_107 = __this->get_m_Wrapper_0();
		RuntimeObject* L_108 = ___instance0;
		L_107->set_m_GameplayActionsCallbackInterface_2(L_108);
		// if (instance != null)
		RuntimeObject* L_109 = ___instance0;
		if (!L_109)
		{
			goto IL_04e4;
		}
	}
	{
		// @Vertical.started += instance.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_110;
		L_110 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_111 = ___instance0;
		RuntimeObject* L_112 = L_111;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_113 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_113, L_112, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_112, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_110, L_113, /*hidden argument*/NULL);
		// @Vertical.performed += instance.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_114;
		L_114 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_115 = ___instance0;
		RuntimeObject* L_116 = L_115;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_117 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_117, L_116, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_116, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_114, L_117, /*hidden argument*/NULL);
		// @Vertical.canceled += instance.OnVertical;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_118;
		L_118 = GameplayActions_get_Vertical_m7FCD755387E40964AFFEBDA72C2568B221B9249F((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_119 = ___instance0;
		RuntimeObject* L_120 = L_119;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_121 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_121, L_120, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_120, 0, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_118, L_121, /*hidden argument*/NULL);
		// @Horizontal.started += instance.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_122;
		L_122 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_123 = ___instance0;
		RuntimeObject* L_124 = L_123;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_125 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_125, L_124, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_124, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_122, L_125, /*hidden argument*/NULL);
		// @Horizontal.performed += instance.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_126;
		L_126 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_127 = ___instance0;
		RuntimeObject* L_128 = L_127;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_129 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_129, L_128, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_128, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_126, L_129, /*hidden argument*/NULL);
		// @Horizontal.canceled += instance.OnHorizontal;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_130;
		L_130 = GameplayActions_get_Horizontal_m3797F87A72C301BECDAFF17132F013BDC7500C87((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_131 = ___instance0;
		RuntimeObject* L_132 = L_131;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_133 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_133, L_132, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_132, 1, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_130, L_133, /*hidden argument*/NULL);
		// @Drift.started += instance.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_134;
		L_134 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_135 = ___instance0;
		RuntimeObject* L_136 = L_135;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_137 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_137, L_136, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_136, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_134, L_137, /*hidden argument*/NULL);
		// @Drift.performed += instance.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_138;
		L_138 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_139 = ___instance0;
		RuntimeObject* L_140 = L_139;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_141 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_141, L_140, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_140, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_138, L_141, /*hidden argument*/NULL);
		// @Drift.canceled += instance.OnDrift;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_142;
		L_142 = GameplayActions_get_Drift_mABA0384B06A8D90FF3AA51757729F2C1008D584C((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_143 = ___instance0;
		RuntimeObject* L_144 = L_143;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_145 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_145, L_144, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_144, 2, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_142, L_145, /*hidden argument*/NULL);
		// @Brake.started += instance.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_146;
		L_146 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_147 = ___instance0;
		RuntimeObject* L_148 = L_147;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_149 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_149, L_148, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_148, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_146, L_149, /*hidden argument*/NULL);
		// @Brake.performed += instance.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_150;
		L_150 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_151 = ___instance0;
		RuntimeObject* L_152 = L_151;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_153 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_153, L_152, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_152, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_150, L_153, /*hidden argument*/NULL);
		// @Brake.canceled += instance.OnBrake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_154;
		L_154 = GameplayActions_get_Brake_mCBF8B7339214DD9A94F955AA99D9F497EBAA25CD((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_155 = ___instance0;
		RuntimeObject* L_156 = L_155;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_157 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_157, L_156, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_156, 3, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_154, L_157, /*hidden argument*/NULL);
		// @Reset.started += instance.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_158;
		L_158 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_159 = ___instance0;
		RuntimeObject* L_160 = L_159;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_161 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_161, L_160, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_160, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_158, L_161, /*hidden argument*/NULL);
		// @Reset.performed += instance.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_162;
		L_162 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_163 = ___instance0;
		RuntimeObject* L_164 = L_163;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_165 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_165, L_164, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_164, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_162, L_165, /*hidden argument*/NULL);
		// @Reset.canceled += instance.OnReset;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_166;
		L_166 = GameplayActions_get_Reset_m6DB77305804BE9266479EC0E511F69B251DD3D1E((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_167 = ___instance0;
		RuntimeObject* L_168 = L_167;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_169 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_169, L_168, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_168, 4, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_166, L_169, /*hidden argument*/NULL);
		// @Settings.started += instance.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_170;
		L_170 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_171 = ___instance0;
		RuntimeObject* L_172 = L_171;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_173 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_173, L_172, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_172, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_170, L_173, /*hidden argument*/NULL);
		// @Settings.performed += instance.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_174;
		L_174 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_175 = ___instance0;
		RuntimeObject* L_176 = L_175;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_177 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_177, L_176, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_176, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_174, L_177, /*hidden argument*/NULL);
		// @Settings.canceled += instance.OnSettings;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_178;
		L_178 = GameplayActions_get_Settings_mD44CFA49EE654AF61FB9B98D927DA8E81405A53D((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_179 = ___instance0;
		RuntimeObject* L_180 = L_179;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_181 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_181, L_180, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_180, 5, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_178, L_181, /*hidden argument*/NULL);
		// @Restart.started += instance.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_182;
		L_182 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_183 = ___instance0;
		RuntimeObject* L_184 = L_183;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_185 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_185, L_184, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_184, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_182, L_185, /*hidden argument*/NULL);
		// @Restart.performed += instance.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_186;
		L_186 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_187 = ___instance0;
		RuntimeObject* L_188 = L_187;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_189 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_189, L_188, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_188, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_186, L_189, /*hidden argument*/NULL);
		// @Restart.canceled += instance.OnRestart;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_190;
		L_190 = GameplayActions_get_Restart_m206DCEB1B25724E1B8DD8755C9B731CC7D2F42B9((GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_191 = ___instance0;
		RuntimeObject* L_192 = L_191;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_193 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_193, L_192, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_192, 6, IGameplayActions_t7C432B067B6C853F1CEDF4D057258C802F081838_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_190, L_193, /*hidden argument*/NULL);
	}

IL_04e4:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GameplayActions_SetCallbacks_m3062A07A0235D9C307CECDE7E994AFBB8A0485FD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * _thisAdjusted = reinterpret_cast<GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 *>(__this + _offset);
	GameplayActions_SetCallbacks_m3062A07A0235D9C307CECDE7E994AFBB8A0485FD(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * NewControls_get_asset_mA19DBDDD56D5783108D2D88FF3013EA7A1C77B90_inline (NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method)
{
	{
		// get => m_BindingMask;
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_0 = __this->get_m_BindingMask_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameplayActions__ctor_m52FE6FE299154A27F2D3BD75A81B47EA1C7905FC_inline (GameplayActions_t743DBC68970E5E8AD7156232427CFB179B625E09 * __this, NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public GameplayActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		NewControls_t6B9F8F40EF28F982515243953A6047499D94A646 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public GameplayActions(@NewControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
