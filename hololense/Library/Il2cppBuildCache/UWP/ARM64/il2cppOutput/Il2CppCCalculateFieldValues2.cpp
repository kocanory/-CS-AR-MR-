#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// UnityStandardAssets.CinematicEffects.FXAA/Preset[]
struct PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2;
// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[]
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityStandardAssets.CinematicEffects.FXAA
struct FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityStandardAssets.CinematicEffects.SMAA
struct SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.ImageEffectHelper
struct ImageEffectHelper_t3602413F55C49DFD20AE8BDFFEBEEE89440D36FC  : public RuntimeObject
{
public:

public:
};


// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t0A1851861B12ED2F11706C17B262EE934D02C0D1  : public RuntimeObject
{
public:

public:
};


// UnityStandardAssets.ImageEffects.Quads
struct Quads_t685086360831ABD1284FD0E7B088C95075647825  : public RuntimeObject
{
public:

public:
};

struct Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::meshes
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Quads::currentQuads
	int32_t ___currentQuads_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentQuads_1() { return static_cast<int32_t>(offsetof(Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields, ___currentQuads_1)); }
	inline int32_t get_currentQuads_1() const { return ___currentQuads_1; }
	inline int32_t* get_address_of_currentQuads_1() { return &___currentQuads_1; }
	inline void set_currentQuads_1(int32_t value)
	{
		___currentQuads_1 = value;
	}
};


// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityStandardAssets.CinematicEffects.RenderTextureUtility::m_TemporaryRTs
	List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * ___m_TemporaryRTs_0;

public:
	inline static int32_t get_offset_of_m_TemporaryRTs_0() { return static_cast<int32_t>(offsetof(RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3, ___m_TemporaryRTs_0)); }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * get_m_TemporaryRTs_0() const { return ___m_TemporaryRTs_0; }
	inline List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE ** get_address_of_m_TemporaryRTs_0() { return &___m_TemporaryRTs_0; }
	inline void set_m_TemporaryRTs_0(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * value)
	{
		___m_TemporaryRTs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TemporaryRTs_0), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD  : public RuntimeObject
{
public:

public:
};

struct Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
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

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings
struct ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings::subpixelSpreadAmount
	float ___subpixelSpreadAmount_0;
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings::edgeSharpnessAmount
	float ___edgeSharpnessAmount_1;
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_2;
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_3;

public:
	inline static int32_t get_offset_of_subpixelSpreadAmount_0() { return static_cast<int32_t>(offsetof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80, ___subpixelSpreadAmount_0)); }
	inline float get_subpixelSpreadAmount_0() const { return ___subpixelSpreadAmount_0; }
	inline float* get_address_of_subpixelSpreadAmount_0() { return &___subpixelSpreadAmount_0; }
	inline void set_subpixelSpreadAmount_0(float value)
	{
		___subpixelSpreadAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeSharpnessAmount_1() { return static_cast<int32_t>(offsetof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80, ___edgeSharpnessAmount_1)); }
	inline float get_edgeSharpnessAmount_1() const { return ___edgeSharpnessAmount_1; }
	inline float* get_address_of_edgeSharpnessAmount_1() { return &___edgeSharpnessAmount_1; }
	inline void set_edgeSharpnessAmount_1(float value)
	{
		___edgeSharpnessAmount_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_2() { return static_cast<int32_t>(offsetof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80, ___edgeDetectionThreshold_2)); }
	inline float get_edgeDetectionThreshold_2() const { return ___edgeDetectionThreshold_2; }
	inline float* get_address_of_edgeDetectionThreshold_2() { return &___edgeDetectionThreshold_2; }
	inline void set_edgeDetectionThreshold_2(float value)
	{
		___edgeDetectionThreshold_2 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_3() { return static_cast<int32_t>(offsetof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80, ___minimumRequiredLuminance_3)); }
	inline float get_minimumRequiredLuminance_3() const { return ___minimumRequiredLuminance_3; }
	inline float* get_address_of_minimumRequiredLuminance_3() { return &___minimumRequiredLuminance_3; }
	inline void set_minimumRequiredLuminance_3(float value)
	{
		___minimumRequiredLuminance_3 = value;
	}
};


// UnityStandardAssets.CinematicEffects.FXAA/QualitySettings
struct QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/QualitySettings::subpixelAliasingRemovalAmount
	float ___subpixelAliasingRemovalAmount_0;
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/QualitySettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_1;
	// System.Single UnityStandardAssets.CinematicEffects.FXAA/QualitySettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_2;

public:
	inline static int32_t get_offset_of_subpixelAliasingRemovalAmount_0() { return static_cast<int32_t>(offsetof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643, ___subpixelAliasingRemovalAmount_0)); }
	inline float get_subpixelAliasingRemovalAmount_0() const { return ___subpixelAliasingRemovalAmount_0; }
	inline float* get_address_of_subpixelAliasingRemovalAmount_0() { return &___subpixelAliasingRemovalAmount_0; }
	inline void set_subpixelAliasingRemovalAmount_0(float value)
	{
		___subpixelAliasingRemovalAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_1() { return static_cast<int32_t>(offsetof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643, ___edgeDetectionThreshold_1)); }
	inline float get_edgeDetectionThreshold_1() const { return ___edgeDetectionThreshold_1; }
	inline float* get_address_of_edgeDetectionThreshold_1() { return &___edgeDetectionThreshold_1; }
	inline void set_edgeDetectionThreshold_1(float value)
	{
		___edgeDetectionThreshold_1 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_2() { return static_cast<int32_t>(offsetof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643, ___minimumRequiredLuminance_2)); }
	inline float get_minimumRequiredLuminance_2() const { return ___minimumRequiredLuminance_2; }
	inline float* get_address_of_minimumRequiredLuminance_2() { return &___minimumRequiredLuminance_2; }
	inline void set_minimumRequiredLuminance_2(float value)
	{
		___minimumRequiredLuminance_2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup
struct ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::threshold
	float ___threshold_1;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::scale
	float ___scale_2;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::strength
	float ___strength_3;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_strength_3() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___strength_3)); }
	inline float get_strength_3() const { return ___strength_3; }
	inline float* get_address_of_strength_3() { return &___strength_3; }
	inline void set_strength_3(float value)
	{
		___strength_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};

// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::diagonalDetection
	bool ___diagonalDetection_0;
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::cornerDetection
	bool ___cornerDetection_1;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::threshold
	float ___threshold_2;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::depthThreshold
	float ___depthThreshold_3;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::maxSearchSteps
	int32_t ___maxSearchSteps_4;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::maxDiagonalSearchSteps
	int32_t ___maxDiagonalSearchSteps_5;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::cornerRounding
	int32_t ___cornerRounding_6;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::localContrastAdaptationFactor
	float ___localContrastAdaptationFactor_7;

public:
	inline static int32_t get_offset_of_diagonalDetection_0() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___diagonalDetection_0)); }
	inline bool get_diagonalDetection_0() const { return ___diagonalDetection_0; }
	inline bool* get_address_of_diagonalDetection_0() { return &___diagonalDetection_0; }
	inline void set_diagonalDetection_0(bool value)
	{
		___diagonalDetection_0 = value;
	}

	inline static int32_t get_offset_of_cornerDetection_1() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___cornerDetection_1)); }
	inline bool get_cornerDetection_1() const { return ___cornerDetection_1; }
	inline bool* get_address_of_cornerDetection_1() { return &___cornerDetection_1; }
	inline void set_cornerDetection_1(bool value)
	{
		___cornerDetection_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_depthThreshold_3() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___depthThreshold_3)); }
	inline float get_depthThreshold_3() const { return ___depthThreshold_3; }
	inline float* get_address_of_depthThreshold_3() { return &___depthThreshold_3; }
	inline void set_depthThreshold_3(float value)
	{
		___depthThreshold_3 = value;
	}

	inline static int32_t get_offset_of_maxSearchSteps_4() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___maxSearchSteps_4)); }
	inline int32_t get_maxSearchSteps_4() const { return ___maxSearchSteps_4; }
	inline int32_t* get_address_of_maxSearchSteps_4() { return &___maxSearchSteps_4; }
	inline void set_maxSearchSteps_4(int32_t value)
	{
		___maxSearchSteps_4 = value;
	}

	inline static int32_t get_offset_of_maxDiagonalSearchSteps_5() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___maxDiagonalSearchSteps_5)); }
	inline int32_t get_maxDiagonalSearchSteps_5() const { return ___maxDiagonalSearchSteps_5; }
	inline int32_t* get_address_of_maxDiagonalSearchSteps_5() { return &___maxDiagonalSearchSteps_5; }
	inline void set_maxDiagonalSearchSteps_5(int32_t value)
	{
		___maxDiagonalSearchSteps_5 = value;
	}

	inline static int32_t get_offset_of_cornerRounding_6() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___cornerRounding_6)); }
	inline int32_t get_cornerRounding_6() const { return ___cornerRounding_6; }
	inline int32_t* get_address_of_cornerRounding_6() { return &___cornerRounding_6; }
	inline void set_cornerRounding_6(int32_t value)
	{
		___cornerRounding_6 = value;
	}

	inline static int32_t get_offset_of_localContrastAdaptationFactor_7() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___localContrastAdaptationFactor_7)); }
	inline float get_localContrastAdaptationFactor_7() const { return ___localContrastAdaptationFactor_7; }
	inline float* get_address_of_localContrastAdaptationFactor_7() { return &___localContrastAdaptationFactor_7; }
	inline void set_localContrastAdaptationFactor_7(float value)
	{
		___localContrastAdaptationFactor_7 = value;
	}
};

struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[] UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::presetQualitySettings
	QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* ___presetQualitySettings_8;

public:
	inline static int32_t get_offset_of_presetQualitySettings_8() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields, ___presetQualitySettings_8)); }
	inline QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* get_presetQualitySettings_8() const { return ___presetQualitySettings_8; }
	inline QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296** get_address_of_presetQualitySettings_8() { return &___presetQualitySettings_8; }
	inline void set_presetQualitySettings_8(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* value)
	{
		___presetQualitySettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presetQualitySettings_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke
{
	int32_t ___diagonalDetection_0;
	int32_t ___cornerDetection_1;
	float ___threshold_2;
	float ___depthThreshold_3;
	int32_t ___maxSearchSteps_4;
	int32_t ___maxDiagonalSearchSteps_5;
	int32_t ___cornerRounding_6;
	float ___localContrastAdaptationFactor_7;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com
{
	int32_t ___diagonalDetection_0;
	int32_t ___cornerDetection_1;
	float ___threshold_2;
	float ___depthThreshold_3;
	int32_t ___maxSearchSteps_4;
	int32_t ___maxDiagonalSearchSteps_5;
	int32_t ___cornerRounding_6;
	float ___localContrastAdaptationFactor_7;
};

// UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup
struct SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::fuzzSize
	float ___fuzzSize_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_fuzzSize_1() { return static_cast<int32_t>(offsetof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0, ___fuzzSize_1)); }
	inline float get_fuzzSize_1() const { return ___fuzzSize_1; }
	inline float* get_address_of_fuzzSize_1() { return &___fuzzSize_1; }
	inline void set_fuzzSize_1(float value)
	{
		___fuzzSize_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};

// UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings
struct TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.MinAttribute
struct MinAttribute_t1D10E00D0468AD487C3FAAB4CB92F6B6F369CDD7  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.MinAttribute::min
	float ___min_0;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(MinAttribute_t1D10E00D0468AD487C3FAAB4CB92F6B6F369CDD7, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityStandardAssets.CinematicEffects.AntiAliasing/Method
struct Method_tF4EF088D79F7911C6D442CA604FF0DFA47A3A94D 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing/Method::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Method_tF4EF088D79F7911C6D442CA604FF0DFA47A3A94D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType
struct BlurType_t94A911ADBD4916CBDC4FFB5AD1B64297D64AC761 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/BlurType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlurType_t94A911ADBD4916CBDC4FFB5AD1B64297D64AC761, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution
struct Resolution_tED3167AE8EA34198994C3A9B589C2D65ACFFAC97 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized/Resolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Resolution_tED3167AE8EA34198994C3A9B589C2D65ACFFAC97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.FXAA/Preset
struct Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 
{
public:
	// UnityStandardAssets.CinematicEffects.FXAA/QualitySettings UnityStandardAssets.CinematicEffects.FXAA/Preset::qualitySettings
	QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  ___qualitySettings_0;
	// UnityStandardAssets.CinematicEffects.FXAA/ConsoleSettings UnityStandardAssets.CinematicEffects.FXAA/Preset::consoleSettings
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  ___consoleSettings_1;

public:
	inline static int32_t get_offset_of_qualitySettings_0() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87, ___qualitySettings_0)); }
	inline QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  get_qualitySettings_0() const { return ___qualitySettings_0; }
	inline QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 * get_address_of_qualitySettings_0() { return &___qualitySettings_0; }
	inline void set_qualitySettings_0(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  value)
	{
		___qualitySettings_0 = value;
	}

	inline static int32_t get_offset_of_consoleSettings_1() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87, ___consoleSettings_1)); }
	inline ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  get_consoleSettings_1() const { return ___consoleSettings_1; }
	inline ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 * get_address_of_consoleSettings_1() { return &___consoleSettings_1; }
	inline void set_consoleSettings_1(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  value)
	{
		___consoleSettings_1 = value;
	}
};

struct Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::s_ExtremePerformance
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___s_ExtremePerformance_2;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::s_Performance
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___s_Performance_3;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::s_Default
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___s_Default_4;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::s_Quality
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___s_Quality_5;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::s_ExtremeQuality
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___s_ExtremeQuality_6;

public:
	inline static int32_t get_offset_of_s_ExtremePerformance_2() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields, ___s_ExtremePerformance_2)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_s_ExtremePerformance_2() const { return ___s_ExtremePerformance_2; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_s_ExtremePerformance_2() { return &___s_ExtremePerformance_2; }
	inline void set_s_ExtremePerformance_2(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___s_ExtremePerformance_2 = value;
	}

	inline static int32_t get_offset_of_s_Performance_3() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields, ___s_Performance_3)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_s_Performance_3() const { return ___s_Performance_3; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_s_Performance_3() { return &___s_Performance_3; }
	inline void set_s_Performance_3(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___s_Performance_3 = value;
	}

	inline static int32_t get_offset_of_s_Default_4() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields, ___s_Default_4)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_s_Default_4() const { return ___s_Default_4; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_s_Default_4() { return &___s_Default_4; }
	inline void set_s_Default_4(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___s_Default_4 = value;
	}

	inline static int32_t get_offset_of_s_Quality_5() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields, ___s_Quality_5)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_s_Quality_5() const { return ___s_Quality_5; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_s_Quality_5() { return &___s_Quality_5; }
	inline void set_s_Quality_5(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___s_Quality_5 = value;
	}

	inline static int32_t get_offset_of_s_ExtremeQuality_6() { return static_cast<int32_t>(offsetof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields, ___s_ExtremeQuality_6)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_s_ExtremeQuality_6() const { return ___s_ExtremeQuality_6; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_s_ExtremeQuality_6() { return &___s_ExtremeQuality_6; }
	inline void set_s_ExtremeQuality_6(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___s_ExtremeQuality_6 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/DebugPass
struct DebugPass_t835D611250EF49DC013CF21C8411961737646035 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/DebugPass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugPass_t835D611250EF49DC013CF21C8411961737646035, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod
struct EdgeDetectionMethod_t6F48B69229C4DA152B55205E85F49A47D2187F16 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EdgeDetectionMethod_t6F48B69229C4DA152B55205E85F49A47D2187F16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/QualityPreset
struct QualityPreset_t008737739C456CED4CBE733461599D75A1465571 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualityPreset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QualityPreset_t008737739C456CED4CBE733461599D75A1465571, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
struct OverlayBlendMode_t9A18E4CA6DAA32E24DF693277ACE351A42DF0D94 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverlayBlendMode_t9A18E4CA6DAA32E24DF693277ACE351A42DF0D94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
struct ShaftsScreenBlendMode_tCF5C48273C6AC4213465B69B3F040CAEFC98B668 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaftsScreenBlendMode_tCF5C48273C6AC4213465B69B3F040CAEFC98B668, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
struct SunShaftsResolution_t6C3971C37DC56772080D6690AD5AEE2DE775C549 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SunShaftsResolution_t6C3971C37DC56772080D6690AD5AEE2DE775C549, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute
struct LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.FXAA
struct FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.FXAA::m_Shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_Shader_0;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.FXAA::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_1;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA::preset
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  ___preset_2;
	// System.Boolean UnityStandardAssets.CinematicEffects.FXAA::<validSourceFormat>k__BackingField
	bool ___U3CvalidSourceFormatU3Ek__BackingField_4;
	// System.Int32 UnityStandardAssets.CinematicEffects.FXAA::m_QualitySettings
	int32_t ___m_QualitySettings_5;
	// System.Int32 UnityStandardAssets.CinematicEffects.FXAA::m_ConsoleSettings
	int32_t ___m_ConsoleSettings_6;

public:
	inline static int32_t get_offset_of_m_Shader_0() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___m_Shader_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_Shader_0() const { return ___m_Shader_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_Shader_0() { return &___m_Shader_0; }
	inline void set_m_Shader_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_Shader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shader_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Material_1() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___m_Material_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_1() const { return ___m_Material_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_1() { return &___m_Material_1; }
	inline void set_m_Material_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_1), (void*)value);
	}

	inline static int32_t get_offset_of_preset_2() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___preset_2)); }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  get_preset_2() const { return ___preset_2; }
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * get_address_of_preset_2() { return &___preset_2; }
	inline void set_preset_2(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		___preset_2 = value;
	}

	inline static int32_t get_offset_of_U3CvalidSourceFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___U3CvalidSourceFormatU3Ek__BackingField_4)); }
	inline bool get_U3CvalidSourceFormatU3Ek__BackingField_4() const { return ___U3CvalidSourceFormatU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CvalidSourceFormatU3Ek__BackingField_4() { return &___U3CvalidSourceFormatU3Ek__BackingField_4; }
	inline void set_U3CvalidSourceFormatU3Ek__BackingField_4(bool value)
	{
		___U3CvalidSourceFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_QualitySettings_5() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___m_QualitySettings_5)); }
	inline int32_t get_m_QualitySettings_5() const { return ___m_QualitySettings_5; }
	inline int32_t* get_address_of_m_QualitySettings_5() { return &___m_QualitySettings_5; }
	inline void set_m_QualitySettings_5(int32_t value)
	{
		___m_QualitySettings_5 = value;
	}

	inline static int32_t get_offset_of_m_ConsoleSettings_6() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075, ___m_ConsoleSettings_6)); }
	inline int32_t get_m_ConsoleSettings_6() const { return ___m_ConsoleSettings_6; }
	inline int32_t* get_address_of_m_ConsoleSettings_6() { return &___m_ConsoleSettings_6; }
	inline void set_m_ConsoleSettings_6(int32_t value)
	{
		___m_ConsoleSettings_6 = value;
	}
};

struct FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.FXAA/Preset[] UnityStandardAssets.CinematicEffects.FXAA::availablePresets
	PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* ___availablePresets_3;

public:
	inline static int32_t get_offset_of_availablePresets_3() { return static_cast<int32_t>(offsetof(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_StaticFields, ___availablePresets_3)); }
	inline PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* get_availablePresets_3() const { return ___availablePresets_3; }
	inline PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2** get_address_of_availablePresets_3() { return &___availablePresets_3; }
	inline void set_availablePresets_3(PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* value)
	{
		___availablePresets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availablePresets_3), (void*)value);
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings
struct GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE 
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/DebugPass UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::debugPass
	int32_t ___debugPass_0;
	// UnityStandardAssets.CinematicEffects.SMAA/QualityPreset UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::quality
	int32_t ___quality_1;
	// UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::edgeDetectionMethod
	int32_t ___edgeDetectionMethod_2;

public:
	inline static int32_t get_offset_of_debugPass_0() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___debugPass_0)); }
	inline int32_t get_debugPass_0() const { return ___debugPass_0; }
	inline int32_t* get_address_of_debugPass_0() { return &___debugPass_0; }
	inline void set_debugPass_0(int32_t value)
	{
		___debugPass_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___quality_1)); }
	inline int32_t get_quality_1() const { return ___quality_1; }
	inline int32_t* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(int32_t value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionMethod_2() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___edgeDetectionMethod_2)); }
	inline int32_t get_edgeDetectionMethod_2() const { return ___edgeDetectionMethod_2; }
	inline int32_t* get_address_of_edgeDetectionMethod_2() { return &___edgeDetectionMethod_2; }
	inline void set_edgeDetectionMethod_2(int32_t value)
	{
		___edgeDetectionMethod_2 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.SMAA
struct SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70  : public RuntimeObject
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings UnityStandardAssets.CinematicEffects.SMAA::settings
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  ___settings_0;
	// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings UnityStandardAssets.CinematicEffects.SMAA::quality
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  ___quality_1;
	// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings UnityStandardAssets.CinematicEffects.SMAA::predication
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  ___predication_2;
	// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings UnityStandardAssets.CinematicEffects.SMAA::temporal
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  ___temporal_3;
	// UnityEngine.Matrix4x4 UnityStandardAssets.CinematicEffects.SMAA::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityStandardAssets.CinematicEffects.SMAA::m_PreviousViewProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_PreviousViewProjectionMatrix_5;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA::m_FlipFlop
	float ___m_FlipFlop_6;
	// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.SMAA::m_Accumulation
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_Accumulation_7;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.SMAA::m_Shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_Shader_8;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::m_AreaTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_AreaTexture_9;
	// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::m_SearchTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_SearchTexture_10;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.SMAA::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_11;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_AreaTex
	int32_t ___m_AreaTex_12;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_SearchTex
	int32_t ___m_SearchTex_13;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_Metrics
	int32_t ___m_Metrics_14;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_Params1
	int32_t ___m_Params1_15;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_Params2
	int32_t ___m_Params2_16;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_Params3
	int32_t ___m_Params3_17;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_ReprojectionMatrix
	int32_t ___m_ReprojectionMatrix_18;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_SubsampleIndices
	int32_t ___m_SubsampleIndices_19;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_BlendTex
	int32_t ___m_BlendTex_20;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA::m_AccumulationTex
	int32_t ___m_AccumulationTex_21;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___settings_0)); }
	inline GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  get_settings_0() const { return ___settings_0; }
	inline GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  value)
	{
		___settings_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___quality_1)); }
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  get_quality_1() const { return ___quality_1; }
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F * get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_predication_2() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___predication_2)); }
	inline PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  get_predication_2() const { return ___predication_2; }
	inline PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D * get_address_of_predication_2() { return &___predication_2; }
	inline void set_predication_2(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  value)
	{
		___predication_2 = value;
	}

	inline static int32_t get_offset_of_temporal_3() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___temporal_3)); }
	inline TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  get_temporal_3() const { return ___temporal_3; }
	inline TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * get_address_of_temporal_3() { return &___temporal_3; }
	inline void set_temporal_3(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  value)
	{
		___temporal_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_PreviousViewProjectionMatrix_5() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_PreviousViewProjectionMatrix_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_PreviousViewProjectionMatrix_5() const { return ___m_PreviousViewProjectionMatrix_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_PreviousViewProjectionMatrix_5() { return &___m_PreviousViewProjectionMatrix_5; }
	inline void set_m_PreviousViewProjectionMatrix_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_PreviousViewProjectionMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_FlipFlop_6() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_FlipFlop_6)); }
	inline float get_m_FlipFlop_6() const { return ___m_FlipFlop_6; }
	inline float* get_address_of_m_FlipFlop_6() { return &___m_FlipFlop_6; }
	inline void set_m_FlipFlop_6(float value)
	{
		___m_FlipFlop_6 = value;
	}

	inline static int32_t get_offset_of_m_Accumulation_7() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Accumulation_7)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_Accumulation_7() const { return ___m_Accumulation_7; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_Accumulation_7() { return &___m_Accumulation_7; }
	inline void set_m_Accumulation_7(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_Accumulation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Accumulation_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Shader_8() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Shader_8)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_Shader_8() const { return ___m_Shader_8; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_Shader_8() { return &___m_Shader_8; }
	inline void set_m_Shader_8(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_Shader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Shader_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AreaTexture_9() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_AreaTexture_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_AreaTexture_9() const { return ___m_AreaTexture_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_AreaTexture_9() { return &___m_AreaTexture_9; }
	inline void set_m_AreaTexture_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_AreaTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AreaTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_SearchTexture_10() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_SearchTexture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_SearchTexture_10() const { return ___m_SearchTexture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_SearchTexture_10() { return &___m_SearchTexture_10; }
	inline void set_m_SearchTexture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_SearchTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SearchTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Material_11() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Material_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_11() const { return ___m_Material_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_11() { return &___m_Material_11; }
	inline void set_m_Material_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_AreaTex_12() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_AreaTex_12)); }
	inline int32_t get_m_AreaTex_12() const { return ___m_AreaTex_12; }
	inline int32_t* get_address_of_m_AreaTex_12() { return &___m_AreaTex_12; }
	inline void set_m_AreaTex_12(int32_t value)
	{
		___m_AreaTex_12 = value;
	}

	inline static int32_t get_offset_of_m_SearchTex_13() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_SearchTex_13)); }
	inline int32_t get_m_SearchTex_13() const { return ___m_SearchTex_13; }
	inline int32_t* get_address_of_m_SearchTex_13() { return &___m_SearchTex_13; }
	inline void set_m_SearchTex_13(int32_t value)
	{
		___m_SearchTex_13 = value;
	}

	inline static int32_t get_offset_of_m_Metrics_14() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Metrics_14)); }
	inline int32_t get_m_Metrics_14() const { return ___m_Metrics_14; }
	inline int32_t* get_address_of_m_Metrics_14() { return &___m_Metrics_14; }
	inline void set_m_Metrics_14(int32_t value)
	{
		___m_Metrics_14 = value;
	}

	inline static int32_t get_offset_of_m_Params1_15() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Params1_15)); }
	inline int32_t get_m_Params1_15() const { return ___m_Params1_15; }
	inline int32_t* get_address_of_m_Params1_15() { return &___m_Params1_15; }
	inline void set_m_Params1_15(int32_t value)
	{
		___m_Params1_15 = value;
	}

	inline static int32_t get_offset_of_m_Params2_16() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Params2_16)); }
	inline int32_t get_m_Params2_16() const { return ___m_Params2_16; }
	inline int32_t* get_address_of_m_Params2_16() { return &___m_Params2_16; }
	inline void set_m_Params2_16(int32_t value)
	{
		___m_Params2_16 = value;
	}

	inline static int32_t get_offset_of_m_Params3_17() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_Params3_17)); }
	inline int32_t get_m_Params3_17() const { return ___m_Params3_17; }
	inline int32_t* get_address_of_m_Params3_17() { return &___m_Params3_17; }
	inline void set_m_Params3_17(int32_t value)
	{
		___m_Params3_17 = value;
	}

	inline static int32_t get_offset_of_m_ReprojectionMatrix_18() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_ReprojectionMatrix_18)); }
	inline int32_t get_m_ReprojectionMatrix_18() const { return ___m_ReprojectionMatrix_18; }
	inline int32_t* get_address_of_m_ReprojectionMatrix_18() { return &___m_ReprojectionMatrix_18; }
	inline void set_m_ReprojectionMatrix_18(int32_t value)
	{
		___m_ReprojectionMatrix_18 = value;
	}

	inline static int32_t get_offset_of_m_SubsampleIndices_19() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_SubsampleIndices_19)); }
	inline int32_t get_m_SubsampleIndices_19() const { return ___m_SubsampleIndices_19; }
	inline int32_t* get_address_of_m_SubsampleIndices_19() { return &___m_SubsampleIndices_19; }
	inline void set_m_SubsampleIndices_19(int32_t value)
	{
		___m_SubsampleIndices_19 = value;
	}

	inline static int32_t get_offset_of_m_BlendTex_20() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_BlendTex_20)); }
	inline int32_t get_m_BlendTex_20() const { return ___m_BlendTex_20; }
	inline int32_t* get_address_of_m_BlendTex_20() { return &___m_BlendTex_20; }
	inline void set_m_BlendTex_20(int32_t value)
	{
		___m_BlendTex_20 = value;
	}

	inline static int32_t get_offset_of_m_AccumulationTex_21() { return static_cast<int32_t>(offsetof(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70, ___m_AccumulationTex_21)); }
	inline int32_t get_m_AccumulationTex_21() const { return ___m_AccumulationTex_21; }
	inline int32_t* get_address_of_m_AccumulationTex_21() { return &___m_AccumulationTex_21; }
	inline void set_m_AccumulationTex_21(int32_t value)
	{
		___m_AccumulationTex_21 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.AntiAliasing
struct AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA UnityStandardAssets.CinematicEffects.AntiAliasing::m_SMAA
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * ___m_SMAA_4;
	// UnityStandardAssets.CinematicEffects.FXAA UnityStandardAssets.CinematicEffects.AntiAliasing::m_FXAA
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * ___m_FXAA_5;
	// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing::m_Method
	int32_t ___m_Method_6;
	// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AntiAliasing::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_7;

public:
	inline static int32_t get_offset_of_m_SMAA_4() { return static_cast<int32_t>(offsetof(AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236, ___m_SMAA_4)); }
	inline SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * get_m_SMAA_4() const { return ___m_SMAA_4; }
	inline SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 ** get_address_of_m_SMAA_4() { return &___m_SMAA_4; }
	inline void set_m_SMAA_4(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * value)
	{
		___m_SMAA_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SMAA_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_FXAA_5() { return static_cast<int32_t>(offsetof(AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236, ___m_FXAA_5)); }
	inline FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * get_m_FXAA_5() const { return ___m_FXAA_5; }
	inline FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 ** get_address_of_m_FXAA_5() { return &___m_FXAA_5; }
	inline void set_m_FXAA_5(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * value)
	{
		___m_FXAA_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FXAA_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Method_6() { return static_cast<int32_t>(offsetof(AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236, ___m_Method_6)); }
	inline int32_t get_m_Method_6() const { return ___m_Method_6; }
	inline int32_t* get_address_of_m_Method_6() { return &___m_Method_6; }
	inline void set_m_Method_6(int32_t value)
	{
		___m_Method_6 = value;
	}

	inline static int32_t get_offset_of_m_Camera_7() { return static_cast<int32_t>(offsetof(AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236, ___m_Camera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_7() const { return ___m_Camera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_7() { return &___m_Camera_7; }
	inline void set_m_Camera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_7), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_5;

public:
	inline static int32_t get_offset_of_shader_4() { return static_cast<int32_t>(offsetof(ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82, ___shader_4)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shader_4() const { return ___shader_4; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shader_4() { return &___shader_4; }
	inline void set_shader_4(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shader_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Material_5() { return static_cast<int32_t>(offsetof(ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82, ___m_Material_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_5() const { return ___m_Material_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_5() { return &___m_Material_5; }
	inline void set_m_Material_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_5), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
	// System.Collections.Generic.List`1<UnityEngine.Material> UnityStandardAssets.ImageEffects.PostEffectsBase::createdMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___createdMaterials_7;

public:
	inline static int32_t get_offset_of_supportHDRTextures_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___supportHDRTextures_4)); }
	inline bool get_supportHDRTextures_4() const { return ___supportHDRTextures_4; }
	inline bool* get_address_of_supportHDRTextures_4() { return &___supportHDRTextures_4; }
	inline void set_supportHDRTextures_4(bool value)
	{
		___supportHDRTextures_4 = value;
	}

	inline static int32_t get_offset_of_supportDX11_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___supportDX11_5)); }
	inline bool get_supportDX11_5() const { return ___supportDX11_5; }
	inline bool* get_address_of_supportDX11_5() { return &___supportDX11_5; }
	inline void set_supportDX11_5(bool value)
	{
		___supportDX11_5 = value;
	}

	inline static int32_t get_offset_of_isSupported_6() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___isSupported_6)); }
	inline bool get_isSupported_6() const { return ___isSupported_6; }
	inline bool* get_address_of_isSupported_6() { return &___isSupported_6; }
	inline void set_isSupported_6(bool value)
	{
		___isSupported_6 = value;
	}

	inline static int32_t get_offset_of_createdMaterials_7() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___createdMaterials_7)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_createdMaterials_7() const { return ___createdMaterials_7; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_createdMaterials_7() { return &___createdMaterials_7; }
	inline void set_createdMaterials_7(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___createdMaterials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createdMaterials_7), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t0C30C1DB73A1A9090F39849415D76390F9F5BDA0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.ImageEffects.BloomOptimized
struct BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::threshold
	float ___threshold_8;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::intensity
	float ___intensity_9;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::blurSize
	float ___blurSize_10;
	// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution UnityStandardAssets.ImageEffects.BloomOptimized::resolution
	int32_t ___resolution_11;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized::blurIterations
	int32_t ___blurIterations_12;
	// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType UnityStandardAssets.ImageEffects.BloomOptimized::blurType
	int32_t ___blurType_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___fastBloomShader_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fastBloomMaterial_15;

public:
	inline static int32_t get_offset_of_threshold_8() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___threshold_8)); }
	inline float get_threshold_8() const { return ___threshold_8; }
	inline float* get_address_of_threshold_8() { return &___threshold_8; }
	inline void set_threshold_8(float value)
	{
		___threshold_8 = value;
	}

	inline static int32_t get_offset_of_intensity_9() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___intensity_9)); }
	inline float get_intensity_9() const { return ___intensity_9; }
	inline float* get_address_of_intensity_9() { return &___intensity_9; }
	inline void set_intensity_9(float value)
	{
		___intensity_9 = value;
	}

	inline static int32_t get_offset_of_blurSize_10() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___blurSize_10)); }
	inline float get_blurSize_10() const { return ___blurSize_10; }
	inline float* get_address_of_blurSize_10() { return &___blurSize_10; }
	inline void set_blurSize_10(float value)
	{
		___blurSize_10 = value;
	}

	inline static int32_t get_offset_of_resolution_11() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___resolution_11)); }
	inline int32_t get_resolution_11() const { return ___resolution_11; }
	inline int32_t* get_address_of_resolution_11() { return &___resolution_11; }
	inline void set_resolution_11(int32_t value)
	{
		___resolution_11 = value;
	}

	inline static int32_t get_offset_of_blurIterations_12() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___blurIterations_12)); }
	inline int32_t get_blurIterations_12() const { return ___blurIterations_12; }
	inline int32_t* get_address_of_blurIterations_12() { return &___blurIterations_12; }
	inline void set_blurIterations_12(int32_t value)
	{
		___blurIterations_12 = value;
	}

	inline static int32_t get_offset_of_blurType_13() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___blurType_13)); }
	inline int32_t get_blurType_13() const { return ___blurType_13; }
	inline int32_t* get_address_of_blurType_13() { return &___blurType_13; }
	inline void set_blurType_13(int32_t value)
	{
		___blurType_13 = value;
	}

	inline static int32_t get_offset_of_fastBloomShader_14() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___fastBloomShader_14)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_fastBloomShader_14() const { return ___fastBloomShader_14; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_fastBloomShader_14() { return &___fastBloomShader_14; }
	inline void set_fastBloomShader_14(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___fastBloomShader_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fastBloomShader_14), (void*)value);
	}

	inline static int32_t get_offset_of_fastBloomMaterial_15() { return static_cast<int32_t>(offsetof(BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8, ___fastBloomMaterial_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fastBloomMaterial_15() const { return ___fastBloomMaterial_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fastBloomMaterial_15() { return &___fastBloomMaterial_15; }
	inline void set_fastBloomMaterial_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fastBloomMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fastBloomMaterial_15), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.ScreenOverlay
struct ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_8;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___overlayShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___overlayMaterial_12;

public:
	inline static int32_t get_offset_of_blendMode_8() { return static_cast<int32_t>(offsetof(ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236, ___blendMode_8)); }
	inline int32_t get_blendMode_8() const { return ___blendMode_8; }
	inline int32_t* get_address_of_blendMode_8() { return &___blendMode_8; }
	inline void set_blendMode_8(int32_t value)
	{
		___blendMode_8 = value;
	}

	inline static int32_t get_offset_of_intensity_9() { return static_cast<int32_t>(offsetof(ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236, ___intensity_9)); }
	inline float get_intensity_9() const { return ___intensity_9; }
	inline float* get_address_of_intensity_9() { return &___intensity_9; }
	inline void set_intensity_9(float value)
	{
		___intensity_9 = value;
	}

	inline static int32_t get_offset_of_texture_10() { return static_cast<int32_t>(offsetof(ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236, ___texture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_texture_10() const { return ___texture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_texture_10() { return &___texture_10; }
	inline void set_texture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___texture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_10), (void*)value);
	}

	inline static int32_t get_offset_of_overlayShader_11() { return static_cast<int32_t>(offsetof(ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236, ___overlayShader_11)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_overlayShader_11() const { return ___overlayShader_11; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_overlayShader_11() { return &___overlayShader_11; }
	inline void set_overlayShader_11(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___overlayShader_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlayShader_11), (void*)value);
	}

	inline static int32_t get_offset_of_overlayMaterial_12() { return static_cast<int32_t>(offsetof(ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236, ___overlayMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_overlayMaterial_12() const { return ___overlayMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_overlayMaterial_12() { return &___overlayMaterial_12; }
	inline void set_overlayMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___overlayMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlayMaterial_12), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_8;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_9;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___sunTransform_10;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___sunColor_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___sunThreshold_13;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_14;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_15;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_16;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___sunShaftsShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___sunShaftsMaterial_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___simpleClearShader_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___simpleClearMaterial_21;

public:
	inline static int32_t get_offset_of_resolution_8() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___resolution_8)); }
	inline int32_t get_resolution_8() const { return ___resolution_8; }
	inline int32_t* get_address_of_resolution_8() { return &___resolution_8; }
	inline void set_resolution_8(int32_t value)
	{
		___resolution_8 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_9() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___screenBlendMode_9)); }
	inline int32_t get_screenBlendMode_9() const { return ___screenBlendMode_9; }
	inline int32_t* get_address_of_screenBlendMode_9() { return &___screenBlendMode_9; }
	inline void set_screenBlendMode_9(int32_t value)
	{
		___screenBlendMode_9 = value;
	}

	inline static int32_t get_offset_of_sunTransform_10() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunTransform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_sunTransform_10() const { return ___sunTransform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_sunTransform_10() { return &___sunTransform_10; }
	inline void set_sunTransform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___sunTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_radialBlurIterations_11() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___radialBlurIterations_11)); }
	inline int32_t get_radialBlurIterations_11() const { return ___radialBlurIterations_11; }
	inline int32_t* get_address_of_radialBlurIterations_11() { return &___radialBlurIterations_11; }
	inline void set_radialBlurIterations_11(int32_t value)
	{
		___radialBlurIterations_11 = value;
	}

	inline static int32_t get_offset_of_sunColor_12() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_sunColor_12() const { return ___sunColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_sunColor_12() { return &___sunColor_12; }
	inline void set_sunColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___sunColor_12 = value;
	}

	inline static int32_t get_offset_of_sunThreshold_13() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunThreshold_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_sunThreshold_13() const { return ___sunThreshold_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_sunThreshold_13() { return &___sunThreshold_13; }
	inline void set_sunThreshold_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___sunThreshold_13 = value;
	}

	inline static int32_t get_offset_of_sunShaftBlurRadius_14() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunShaftBlurRadius_14)); }
	inline float get_sunShaftBlurRadius_14() const { return ___sunShaftBlurRadius_14; }
	inline float* get_address_of_sunShaftBlurRadius_14() { return &___sunShaftBlurRadius_14; }
	inline void set_sunShaftBlurRadius_14(float value)
	{
		___sunShaftBlurRadius_14 = value;
	}

	inline static int32_t get_offset_of_sunShaftIntensity_15() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunShaftIntensity_15)); }
	inline float get_sunShaftIntensity_15() const { return ___sunShaftIntensity_15; }
	inline float* get_address_of_sunShaftIntensity_15() { return &___sunShaftIntensity_15; }
	inline void set_sunShaftIntensity_15(float value)
	{
		___sunShaftIntensity_15 = value;
	}

	inline static int32_t get_offset_of_maxRadius_16() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___maxRadius_16)); }
	inline float get_maxRadius_16() const { return ___maxRadius_16; }
	inline float* get_address_of_maxRadius_16() { return &___maxRadius_16; }
	inline void set_maxRadius_16(float value)
	{
		___maxRadius_16 = value;
	}

	inline static int32_t get_offset_of_useDepthTexture_17() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___useDepthTexture_17)); }
	inline bool get_useDepthTexture_17() const { return ___useDepthTexture_17; }
	inline bool* get_address_of_useDepthTexture_17() { return &___useDepthTexture_17; }
	inline void set_useDepthTexture_17(bool value)
	{
		___useDepthTexture_17 = value;
	}

	inline static int32_t get_offset_of_sunShaftsShader_18() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunShaftsShader_18)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_sunShaftsShader_18() const { return ___sunShaftsShader_18; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_sunShaftsShader_18() { return &___sunShaftsShader_18; }
	inline void set_sunShaftsShader_18(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___sunShaftsShader_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunShaftsShader_18), (void*)value);
	}

	inline static int32_t get_offset_of_sunShaftsMaterial_19() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___sunShaftsMaterial_19)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_sunShaftsMaterial_19() const { return ___sunShaftsMaterial_19; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_sunShaftsMaterial_19() { return &___sunShaftsMaterial_19; }
	inline void set_sunShaftsMaterial_19(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___sunShaftsMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunShaftsMaterial_19), (void*)value);
	}

	inline static int32_t get_offset_of_simpleClearShader_20() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___simpleClearShader_20)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_simpleClearShader_20() const { return ___simpleClearShader_20; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_simpleClearShader_20() { return &___simpleClearShader_20; }
	inline void set_simpleClearShader_20(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___simpleClearShader_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___simpleClearShader_20), (void*)value);
	}

	inline static int32_t get_offset_of_simpleClearMaterial_21() { return static_cast<int32_t>(offsetof(SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71, ___simpleClearMaterial_21)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_simpleClearMaterial_21() const { return ___simpleClearMaterial_21; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_simpleClearMaterial_21() { return &___simpleClearMaterial_21; }
	inline void set_simpleClearMaterial_21(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___simpleClearMaterial_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___simpleClearMaterial_21), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5748[3] = 
{
	Resolution_tED3167AE8EA34198994C3A9B589C2D65ACFFAC97::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5749[3] = 
{
	BlurType_t94A911ADBD4916CBDC4FFB5AD1B64297D64AC761::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5750[8] = 
{
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_threshold_8(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_intensity_9(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_blurSize_10(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_resolution_11(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_blurIterations_12(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_blurType_13(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_fastBloomShader_14(),
	BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8::get_offset_of_fastBloomMaterial_15(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5751[2] = 
{
	ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82::get_offset_of_shader_4(),
	ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82::get_offset_of_m_Material_5(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5753[4] = 
{
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E::get_offset_of_supportHDRTextures_4(),
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E::get_offset_of_supportDX11_5(),
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E::get_offset_of_isSupported_6(),
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E::get_offset_of_createdMaterials_7(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5755[2] = 
{
	Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields::get_offset_of_meshes_0(),
	Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields::get_offset_of_currentQuads_1(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5756[6] = 
{
	OverlayBlendMode_t9A18E4CA6DAA32E24DF693277ACE351A42DF0D94::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5757[5] = 
{
	ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236::get_offset_of_blendMode_8(),
	ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236::get_offset_of_intensity_9(),
	ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236::get_offset_of_texture_10(),
	ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236::get_offset_of_overlayShader_11(),
	ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236::get_offset_of_overlayMaterial_12(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5758[4] = 
{
	SunShaftsResolution_t6C3971C37DC56772080D6690AD5AEE2DE775C549::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5759[3] = 
{
	ShaftsScreenBlendMode_tCF5C48273C6AC4213465B69B3F040CAEFC98B668::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5760[14] = 
{
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_resolution_8(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_screenBlendMode_9(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunTransform_10(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_radialBlurIterations_11(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunColor_12(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunThreshold_13(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunShaftBlurRadius_14(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunShaftIntensity_15(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_maxRadius_16(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_useDepthTexture_17(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunShaftsShader_18(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_sunShaftsMaterial_19(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_simpleClearShader_20(),
	SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71::get_offset_of_simpleClearMaterial_21(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5761[2] = 
{
	Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields::get_offset_of_meshes_0(),
	Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields::get_offset_of_currentTris_1(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5762[3] = 
{
	Method_tF4EF088D79F7911C6D442CA604FF0DFA47A3A94D::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5763[4] = 
{
	AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236::get_offset_of_m_SMAA_4(),
	AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236::get_offset_of_m_FXAA_5(),
	AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236::get_offset_of_m_Method_6(),
	AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236::get_offset_of_m_Camera_7(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5764[3] = 
{
	QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643::get_offset_of_subpixelAliasingRemovalAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643::get_offset_of_edgeDetectionThreshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643::get_offset_of_minimumRequiredLuminance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5765[4] = 
{
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80::get_offset_of_subpixelSpreadAmount_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80::get_offset_of_edgeSharpnessAmount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80::get_offset_of_edgeDetectionThreshold_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80::get_offset_of_minimumRequiredLuminance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5767[7] = 
{
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87::get_offset_of_qualitySettings_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87::get_offset_of_consoleSettings_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields::get_offset_of_s_ExtremePerformance_2(),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields::get_offset_of_s_Performance_3(),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields::get_offset_of_s_Default_4(),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields::get_offset_of_s_Quality_5(),
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields::get_offset_of_s_ExtremeQuality_6(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5768[7] = 
{
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_m_Shader_0(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_m_Material_1(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_preset_2(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_StaticFields::get_offset_of_availablePresets_3(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_U3CvalidSourceFormatU3Ek__BackingField_4(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_m_QualitySettings_5(),
	FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075::get_offset_of_m_ConsoleSettings_6(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5773[5] = 
{
	DebugPass_t835D611250EF49DC013CF21C8411961737646035::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5774[6] = 
{
	QualityPreset_t008737739C456CED4CBE733461599D75A1465571::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5775[4] = 
{
	EdgeDetectionMethod_t6F48B69229C4DA152B55205E85F49A47D2187F16::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5776[3] = 
{
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE::get_offset_of_debugPass_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE::get_offset_of_quality_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE::get_offset_of_edgeDetectionMethod_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5777[9] = 
{
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_diagonalDetection_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_cornerDetection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_threshold_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_depthThreshold_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_maxSearchSteps_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_maxDiagonalSearchSteps_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_cornerRounding_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F::get_offset_of_localContrastAdaptationFactor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields::get_offset_of_presetQualitySettings_8(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5778[2] = 
{
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0::get_offset_of_enabled_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0::get_offset_of_fuzzSize_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5779[4] = 
{
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D::get_offset_of_enabled_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D::get_offset_of_threshold_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D::get_offset_of_strength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5780[22] = 
{
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_settings_0(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_quality_1(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_predication_2(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_temporal_3(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_ProjectionMatrix_4(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_PreviousViewProjectionMatrix_5(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_FlipFlop_6(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Accumulation_7(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Shader_8(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_AreaTexture_9(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_SearchTexture_10(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Material_11(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_AreaTex_12(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_SearchTex_13(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Metrics_14(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Params1_15(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Params2_16(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_Params3_17(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_ReprojectionMatrix_18(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_SubsampleIndices_19(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_BlendTex_20(),
	SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70::get_offset_of_m_AccumulationTex_21(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5782[1] = 
{
	MinAttribute_t1D10E00D0468AD487C3FAAB4CB92F6B6F369CDD7::get_offset_of_min_0(),
};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable5783[1] = 
{
	RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3::get_offset_of_m_TemporaryRTs_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
