#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityStandardAssets.CinematicEffects.FXAA/Preset[]
struct PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2;
// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[]
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296;
// UnityStandardAssets.CinematicEffects.AntiAliasing
struct AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Blackhole
struct Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53;
// Blackhole_init
struct Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C;
// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57;
// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F;
// UnityStandardAssets.ImageEffects.BloomOptimized
struct BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094;
// UnityStandardAssets.CinematicEffects.FXAA
struct FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityStandardAssets.CinematicEffects.IAntiAliasing
struct IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82;
// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t0A1851861B12ED2F11706C17B262EE934D02C0D1;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityStandardAssets.CinematicEffects.MinAttribute
struct MinAttribute_t1D10E00D0468AD487C3FAAB4CB92F6B6F369CDD7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E;
// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t0C30C1DB73A1A9090F39849415D76390F9F5BDA0;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// UnityStandardAssets.ImageEffects.Quads
struct Quads_t685086360831ABD1284FD0E7B088C95075647825;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3;
// Revolution
struct Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6;
// UnityStandardAssets.CinematicEffects.SMAA
struct SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70;
// UnityStandardAssets.ImageEffects.ScreenOverlay
struct ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup
struct ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93;
// UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup
struct SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B;
// UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings
struct TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9;
// UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute
struct LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B11F860FF8C381A1FF227DE40533A0B9CA1D46;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral0335E64BB6A6DFBCE2222FDE6A1062A2DEDF7CA8;
IL2CPP_EXTERN_C String_t* _stringLiteral0A4CC46F93EB5208EA1486E5A23F371E49B2063C;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE;
IL2CPP_EXTERN_C String_t* _stringLiteral0F7A023A239BB215681B85276C28784B4D63B2FA;
IL2CPP_EXTERN_C String_t* _stringLiteral16162466A59B1F704A79BF605DBE4A4C42A88BE7;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B57EAD824AA2C842A67739712342646C4A59776;
IL2CPP_EXTERN_C String_t* _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8B45D2CC154CD46A5DEC0BEF8CF1A1A22F6A58;
IL2CPP_EXTERN_C String_t* _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F;
IL2CPP_EXTERN_C String_t* _stringLiteral440680263E51B27E42CA9B716635C2C46E80EE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE40C9FA86BB24BA9A7D5971851B402EB7E9345;
IL2CPP_EXTERN_C String_t* _stringLiteral577B724681B6E49F462DA98700A79269E1C87123;
IL2CPP_EXTERN_C String_t* _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC;
IL2CPP_EXTERN_C String_t* _stringLiteral57FB9DFACBFE48E27FF41AD3736D224560181347;
IL2CPP_EXTERN_C String_t* _stringLiteral595BC3F009999C4BA69531829D26C2BE9553704C;
IL2CPP_EXTERN_C String_t* _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCA94BB4298BE981FD665F0F2C50CEA5C2F78BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral65475A1B3DFC490EDDD33B0E6DF006100D019631;
IL2CPP_EXTERN_C String_t* _stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral67B419C953EE33E1EE16B0ACABD5471F6CE61ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3;
IL2CPP_EXTERN_C String_t* _stringLiteral690C12CED9E5E166F02EC56E4CD00E7A873F3E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral695D229A3B2BF92681D3EA830026704D8437B6A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9DBBB36008D3A805B36290AF3FF2FBEE996716;
IL2CPP_EXTERN_C String_t* _stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87;
IL2CPP_EXTERN_C String_t* _stringLiteral76FCB83A2CFD60F542AA68620686429A9A37751B;
IL2CPP_EXTERN_C String_t* _stringLiteral84C21B49A0EFC55D4E6A7FC4AC4D2CDF265FFBF7;
IL2CPP_EXTERN_C String_t* _stringLiteral850C3DF4DDB756461A3C0B1E52E31A4A004B6CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9CD79DBD5A71482F4B23A300AEEF7F7E7D67D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9568B4C9204E9BAEF2B8D4B56DF9E542885D7052;
IL2CPP_EXTERN_C String_t* _stringLiteralA086A6D9AD836D4605CB5C98A8BA47013EAF9260;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CB49B59798F342981AE2AFA3000EDF7F7EF738;
IL2CPP_EXTERN_C String_t* _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62;
IL2CPP_EXTERN_C String_t* _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286;
IL2CPP_EXTERN_C String_t* _stringLiteralAD016911F3BB41B42B288D457051120F9DD11897;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352;
IL2CPP_EXTERN_C String_t* _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC;
IL2CPP_EXTERN_C String_t* _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralBECA1CA80A2219025F323A4D79354F0CC4EC3D8B;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralC36C08270F0656B15564B93B095160EB52C35960;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA;
IL2CPP_EXTERN_C String_t* _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277;
IL2CPP_EXTERN_C String_t* _stringLiteralF276D189E03BD9BC981E82BBCF3EB423DF85ED8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m349187567A32003F40D80782846000CDB8CFF973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD0EDE9FF6890119758A4B37DC3487C2E48473F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0017DE35AB699323E96337D8657F6A64C416529B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2;
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____items_1)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get__items_1() const { return ____items_1; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_StaticFields, ____emptyArray_5)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityStandardAssets.ImageEffects.BloomScreenBlendMode
struct BloomScreenBlendMode_t2CFF6ABE8764EE417746C6B7A78DE7405B4227D9 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BloomScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BloomScreenBlendMode_t2CFF6ABE8764EE417746C6B7A78DE7405B4227D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.HDRBloomMode
struct HDRBloomMode_t51AF98D2B97191B7E6253EE8495D8C4837F89A03 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.HDRBloomMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HDRBloomMode_t51AF98D2B97191B7E6253EE8495D8C4837F89A03, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.LensflareStyle34
struct LensflareStyle34_t385737D4D3850C4E022292CD01D1E0965EA4B708 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.LensflareStyle34::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LensflareStyle34_t385737D4D3850C4E022292CD01D1E0965EA4B708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureReadWrite
struct RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.TweakMode34
struct TweakMode34_tA1BC4531C39FD8719B22FED2D7ECAFF9386051A3 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TweakMode34::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweakMode34_tA1BC4531C39FD8719B22FED2D7ECAFF9386051A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityStandardAssets.ImageEffects.Bloom/BloomQuality
struct BloomQuality_tBABD4E45E0B3FBE453ECE45414D8061623708970 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BloomQuality_tBABD4E45E0B3FBE453ECE45414D8061623708970, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode
struct BloomScreenBlendMode_t6DD092993C8BBE6BB032391244848CB236B4CD49 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BloomScreenBlendMode_t6DD092993C8BBE6BB032391244848CB236B4CD49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode
struct HDRBloomMode_tD05CF34EBC04A0E153A20933612721F1DB34631D 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HDRBloomMode_tD05CF34EBC04A0E153A20933612721F1DB34631D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle
struct LensFlareStyle_t26A73EC00BEC079F19141DD54A43E2AA8423ECF1 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LensFlareStyle_t26A73EC00BEC079F19141DD54A43E2AA8423ECF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Bloom/TweakMode
struct TweakMode_t94413EBB247EE99219E4249EDCF74E9AC0C87776 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom/TweakMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweakMode_t94413EBB247EE99219E4249EDCF74E9AC0C87776, ___value___2)); }
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


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
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


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
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


// Blackhole
struct Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Blackhole::stars
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___stars_4;
	// System.Single Blackhole::time
	float ___time_5;
	// UnityEngine.Vector3 Blackhole::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_6;

public:
	inline static int32_t get_offset_of_stars_4() { return static_cast<int32_t>(offsetof(Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53, ___stars_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_stars_4() const { return ___stars_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_stars_4() { return &___stars_4; }
	inline void set_stars_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___stars_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_dir_6() { return static_cast<int32_t>(offsetof(Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53, ___dir_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_6() const { return ___dir_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_6() { return &___dir_6; }
	inline void set_dir_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_6 = value;
	}
};


// Blackhole_init
struct Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Blackhole_init::blackhole
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___blackhole_4;
	// System.Single Blackhole_init::time
	float ___time_5;
	// System.Boolean Blackhole_init::flag
	bool ___flag_6;

public:
	inline static int32_t get_offset_of_blackhole_4() { return static_cast<int32_t>(offsetof(Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C, ___blackhole_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_blackhole_4() const { return ___blackhole_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_blackhole_4() { return &___blackhole_4; }
	inline void set_blackhole_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___blackhole_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blackhole_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_flag_6() { return static_cast<int32_t>(offsetof(Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C, ___flag_6)); }
	inline bool get_flag_6() const { return ___flag_6; }
	inline bool* get_address_of_flag_6() { return &___flag_6; }
	inline void set_flag_6(bool value)
	{
		___flag_6 = value;
	}
};


// UnityStandardAssets.Utility.FPSCounter
struct FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_5;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_6;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_7;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Text_9;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_5() { return static_cast<int32_t>(offsetof(FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094, ___m_FpsAccumulator_5)); }
	inline int32_t get_m_FpsAccumulator_5() const { return ___m_FpsAccumulator_5; }
	inline int32_t* get_address_of_m_FpsAccumulator_5() { return &___m_FpsAccumulator_5; }
	inline void set_m_FpsAccumulator_5(int32_t value)
	{
		___m_FpsAccumulator_5 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_6() { return static_cast<int32_t>(offsetof(FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094, ___m_FpsNextPeriod_6)); }
	inline float get_m_FpsNextPeriod_6() const { return ___m_FpsNextPeriod_6; }
	inline float* get_address_of_m_FpsNextPeriod_6() { return &___m_FpsNextPeriod_6; }
	inline void set_m_FpsNextPeriod_6(float value)
	{
		___m_FpsNextPeriod_6 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_7() { return static_cast<int32_t>(offsetof(FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094, ___m_CurrentFps_7)); }
	inline int32_t get_m_CurrentFps_7() const { return ___m_CurrentFps_7; }
	inline int32_t* get_address_of_m_CurrentFps_7() { return &___m_CurrentFps_7; }
	inline void set_m_CurrentFps_7(int32_t value)
	{
		___m_CurrentFps_7 = value;
	}

	inline static int32_t get_offset_of_m_Text_9() { return static_cast<int32_t>(offsetof(FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094, ___m_Text_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Text_9() const { return ___m_Text_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Text_9() { return &___m_Text_9; }
	inline void set_m_Text_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Text_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_9), (void*)value);
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


// Revolution
struct Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Revolution::Revolution_period
	float ___Revolution_period_4;
	// UnityEngine.GameObject Revolution::Planet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Planet_5;

public:
	inline static int32_t get_offset_of_Revolution_period_4() { return static_cast<int32_t>(offsetof(Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6, ___Revolution_period_4)); }
	inline float get_Revolution_period_4() const { return ___Revolution_period_4; }
	inline float* get_address_of_Revolution_period_4() { return &___Revolution_period_4; }
	inline void set_Revolution_period_4(float value)
	{
		___Revolution_period_4 = value;
	}

	inline static int32_t get_offset_of_Planet_5() { return static_cast<int32_t>(offsetof(Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6, ___Planet_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Planet_5() const { return ___Planet_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Planet_5() { return &___Planet_5; }
	inline void set_Planet_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Planet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Planet_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_8;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_9;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_10;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_12;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_13;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_14;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_15;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bloomThresholdColor_16;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_17;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_19;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_21;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_22;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_23;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorA_25;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorB_26;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorC_27;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorD_28;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lensFlareVignetteMask_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___lensFlareShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lensFlareMaterial_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___screenBlendShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___screenBlend_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___blurAndFlaresShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___blurAndFlaresMaterial_35;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___brightPassFilterShader_36;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___brightPassFilterMaterial_37;

public:
	inline static int32_t get_offset_of_tweakMode_8() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___tweakMode_8)); }
	inline int32_t get_tweakMode_8() const { return ___tweakMode_8; }
	inline int32_t* get_address_of_tweakMode_8() { return &___tweakMode_8; }
	inline void set_tweakMode_8(int32_t value)
	{
		___tweakMode_8 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_9() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___screenBlendMode_9)); }
	inline int32_t get_screenBlendMode_9() const { return ___screenBlendMode_9; }
	inline int32_t* get_address_of_screenBlendMode_9() { return &___screenBlendMode_9; }
	inline void set_screenBlendMode_9(int32_t value)
	{
		___screenBlendMode_9 = value;
	}

	inline static int32_t get_offset_of_hdr_10() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___hdr_10)); }
	inline int32_t get_hdr_10() const { return ___hdr_10; }
	inline int32_t* get_address_of_hdr_10() { return &___hdr_10; }
	inline void set_hdr_10(int32_t value)
	{
		___hdr_10 = value;
	}

	inline static int32_t get_offset_of_doHdr_11() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___doHdr_11)); }
	inline bool get_doHdr_11() const { return ___doHdr_11; }
	inline bool* get_address_of_doHdr_11() { return &___doHdr_11; }
	inline void set_doHdr_11(bool value)
	{
		___doHdr_11 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_12() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___sepBlurSpread_12)); }
	inline float get_sepBlurSpread_12() const { return ___sepBlurSpread_12; }
	inline float* get_address_of_sepBlurSpread_12() { return &___sepBlurSpread_12; }
	inline void set_sepBlurSpread_12(float value)
	{
		___sepBlurSpread_12 = value;
	}

	inline static int32_t get_offset_of_quality_13() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___quality_13)); }
	inline int32_t get_quality_13() const { return ___quality_13; }
	inline int32_t* get_address_of_quality_13() { return &___quality_13; }
	inline void set_quality_13(int32_t value)
	{
		___quality_13 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_14() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___bloomIntensity_14)); }
	inline float get_bloomIntensity_14() const { return ___bloomIntensity_14; }
	inline float* get_address_of_bloomIntensity_14() { return &___bloomIntensity_14; }
	inline void set_bloomIntensity_14(float value)
	{
		___bloomIntensity_14 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_15() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___bloomThreshold_15)); }
	inline float get_bloomThreshold_15() const { return ___bloomThreshold_15; }
	inline float* get_address_of_bloomThreshold_15() { return &___bloomThreshold_15; }
	inline void set_bloomThreshold_15(float value)
	{
		___bloomThreshold_15 = value;
	}

	inline static int32_t get_offset_of_bloomThresholdColor_16() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___bloomThresholdColor_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bloomThresholdColor_16() const { return ___bloomThresholdColor_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bloomThresholdColor_16() { return &___bloomThresholdColor_16; }
	inline void set_bloomThresholdColor_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bloomThresholdColor_16 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_17() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___bloomBlurIterations_17)); }
	inline int32_t get_bloomBlurIterations_17() const { return ___bloomBlurIterations_17; }
	inline int32_t* get_address_of_bloomBlurIterations_17() { return &___bloomBlurIterations_17; }
	inline void set_bloomBlurIterations_17(int32_t value)
	{
		___bloomBlurIterations_17 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_18() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___hollywoodFlareBlurIterations_18)); }
	inline int32_t get_hollywoodFlareBlurIterations_18() const { return ___hollywoodFlareBlurIterations_18; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_18() { return &___hollywoodFlareBlurIterations_18; }
	inline void set_hollywoodFlareBlurIterations_18(int32_t value)
	{
		___hollywoodFlareBlurIterations_18 = value;
	}

	inline static int32_t get_offset_of_flareRotation_19() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___flareRotation_19)); }
	inline float get_flareRotation_19() const { return ___flareRotation_19; }
	inline float* get_address_of_flareRotation_19() { return &___flareRotation_19; }
	inline void set_flareRotation_19(float value)
	{
		___flareRotation_19 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_20() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensflareMode_20)); }
	inline int32_t get_lensflareMode_20() const { return ___lensflareMode_20; }
	inline int32_t* get_address_of_lensflareMode_20() { return &___lensflareMode_20; }
	inline void set_lensflareMode_20(int32_t value)
	{
		___lensflareMode_20 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_21() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___hollyStretchWidth_21)); }
	inline float get_hollyStretchWidth_21() const { return ___hollyStretchWidth_21; }
	inline float* get_address_of_hollyStretchWidth_21() { return &___hollyStretchWidth_21; }
	inline void set_hollyStretchWidth_21(float value)
	{
		___hollyStretchWidth_21 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_22() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensflareIntensity_22)); }
	inline float get_lensflareIntensity_22() const { return ___lensflareIntensity_22; }
	inline float* get_address_of_lensflareIntensity_22() { return &___lensflareIntensity_22; }
	inline void set_lensflareIntensity_22(float value)
	{
		___lensflareIntensity_22 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_23() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensflareThreshold_23)); }
	inline float get_lensflareThreshold_23() const { return ___lensflareThreshold_23; }
	inline float* get_address_of_lensflareThreshold_23() { return &___lensflareThreshold_23; }
	inline void set_lensflareThreshold_23(float value)
	{
		___lensflareThreshold_23 = value;
	}

	inline static int32_t get_offset_of_lensFlareSaturation_24() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensFlareSaturation_24)); }
	inline float get_lensFlareSaturation_24() const { return ___lensFlareSaturation_24; }
	inline float* get_address_of_lensFlareSaturation_24() { return &___lensFlareSaturation_24; }
	inline void set_lensFlareSaturation_24(float value)
	{
		___lensFlareSaturation_24 = value;
	}

	inline static int32_t get_offset_of_flareColorA_25() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___flareColorA_25)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorA_25() const { return ___flareColorA_25; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorA_25() { return &___flareColorA_25; }
	inline void set_flareColorA_25(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorA_25 = value;
	}

	inline static int32_t get_offset_of_flareColorB_26() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___flareColorB_26)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorB_26() const { return ___flareColorB_26; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorB_26() { return &___flareColorB_26; }
	inline void set_flareColorB_26(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorB_26 = value;
	}

	inline static int32_t get_offset_of_flareColorC_27() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___flareColorC_27)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorC_27() const { return ___flareColorC_27; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorC_27() { return &___flareColorC_27; }
	inline void set_flareColorC_27(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorC_27 = value;
	}

	inline static int32_t get_offset_of_flareColorD_28() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___flareColorD_28)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorD_28() const { return ___flareColorD_28; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorD_28() { return &___flareColorD_28; }
	inline void set_flareColorD_28(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorD_28 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_29() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensFlareVignetteMask_29)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_lensFlareVignetteMask_29() const { return ___lensFlareVignetteMask_29; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_lensFlareVignetteMask_29() { return &___lensFlareVignetteMask_29; }
	inline void set_lensFlareVignetteMask_29(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___lensFlareVignetteMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareVignetteMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_lensFlareShader_30() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensFlareShader_30)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_lensFlareShader_30() const { return ___lensFlareShader_30; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_lensFlareShader_30() { return &___lensFlareShader_30; }
	inline void set_lensFlareShader_30(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___lensFlareShader_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareShader_30), (void*)value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_31() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___lensFlareMaterial_31)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lensFlareMaterial_31() const { return ___lensFlareMaterial_31; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lensFlareMaterial_31() { return &___lensFlareMaterial_31; }
	inline void set_lensFlareMaterial_31(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lensFlareMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareMaterial_31), (void*)value);
	}

	inline static int32_t get_offset_of_screenBlendShader_32() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___screenBlendShader_32)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_screenBlendShader_32() const { return ___screenBlendShader_32; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_screenBlendShader_32() { return &___screenBlendShader_32; }
	inline void set_screenBlendShader_32(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___screenBlendShader_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenBlendShader_32), (void*)value);
	}

	inline static int32_t get_offset_of_screenBlend_33() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___screenBlend_33)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_screenBlend_33() const { return ___screenBlend_33; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_screenBlend_33() { return &___screenBlend_33; }
	inline void set_screenBlend_33(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___screenBlend_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenBlend_33), (void*)value);
	}

	inline static int32_t get_offset_of_blurAndFlaresShader_34() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___blurAndFlaresShader_34)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_blurAndFlaresShader_34() const { return ___blurAndFlaresShader_34; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_blurAndFlaresShader_34() { return &___blurAndFlaresShader_34; }
	inline void set_blurAndFlaresShader_34(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___blurAndFlaresShader_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blurAndFlaresShader_34), (void*)value);
	}

	inline static int32_t get_offset_of_blurAndFlaresMaterial_35() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___blurAndFlaresMaterial_35)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_blurAndFlaresMaterial_35() const { return ___blurAndFlaresMaterial_35; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_blurAndFlaresMaterial_35() { return &___blurAndFlaresMaterial_35; }
	inline void set_blurAndFlaresMaterial_35(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___blurAndFlaresMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blurAndFlaresMaterial_35), (void*)value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_36() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___brightPassFilterShader_36)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_brightPassFilterShader_36() const { return ___brightPassFilterShader_36; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_brightPassFilterShader_36() { return &___brightPassFilterShader_36; }
	inline void set_brightPassFilterShader_36(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___brightPassFilterShader_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightPassFilterShader_36), (void*)value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_37() { return static_cast<int32_t>(offsetof(Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57, ___brightPassFilterMaterial_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_brightPassFilterMaterial_37() const { return ___brightPassFilterMaterial_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_brightPassFilterMaterial_37() { return &___brightPassFilterMaterial_37; }
	inline void set_brightPassFilterMaterial_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___brightPassFilterMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightPassFilterMaterial_37), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// UnityStandardAssets.ImageEffects.TweakMode34 UnityStandardAssets.ImageEffects.BloomAndFlares::tweakMode
	int32_t ___tweakMode_8;
	// UnityStandardAssets.ImageEffects.BloomScreenBlendMode UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendMode
	int32_t ___screenBlendMode_9;
	// UnityStandardAssets.ImageEffects.HDRBloomMode UnityStandardAssets.ImageEffects.BloomAndFlares::hdr
	int32_t ___hdr_10;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::doHdr
	bool ___doHdr_11;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::sepBlurSpread
	float ___sepBlurSpread_12;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_13;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomIntensity
	float ___bloomIntensity_14;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomThreshold
	float ___bloomThreshold_15;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_16;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::lensflares
	bool ___lensflares_17;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_18;
	// UnityStandardAssets.ImageEffects.LensflareStyle34 UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareMode
	int32_t ___lensflareMode_19;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::hollyStretchWidth
	float ___hollyStretchWidth_20;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareIntensity
	float ___lensflareIntensity_21;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareThreshold
	float ___lensflareThreshold_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorA
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorA_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorB
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorB_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorC
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorC_25;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorD
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___flareColorD_26;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareVignetteMask
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lensFlareVignetteMask_27;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___lensFlareShader_28;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lensFlareMaterial_29;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___vignetteShader_30;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___vignetteMaterial_31;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___separableBlurShader_32;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___separableBlurMaterial_33;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffOneOneShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___addBrightStuffOneOneShader_34;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffBlendOneOneMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___addBrightStuffBlendOneOneMaterial_35;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___screenBlendShader_36;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlend
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___screenBlend_37;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___hollywoodFlaresShader_38;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___hollywoodFlaresMaterial_39;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___brightPassFilterShader_40;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___brightPassFilterMaterial_41;

public:
	inline static int32_t get_offset_of_tweakMode_8() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___tweakMode_8)); }
	inline int32_t get_tweakMode_8() const { return ___tweakMode_8; }
	inline int32_t* get_address_of_tweakMode_8() { return &___tweakMode_8; }
	inline void set_tweakMode_8(int32_t value)
	{
		___tweakMode_8 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_9() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___screenBlendMode_9)); }
	inline int32_t get_screenBlendMode_9() const { return ___screenBlendMode_9; }
	inline int32_t* get_address_of_screenBlendMode_9() { return &___screenBlendMode_9; }
	inline void set_screenBlendMode_9(int32_t value)
	{
		___screenBlendMode_9 = value;
	}

	inline static int32_t get_offset_of_hdr_10() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___hdr_10)); }
	inline int32_t get_hdr_10() const { return ___hdr_10; }
	inline int32_t* get_address_of_hdr_10() { return &___hdr_10; }
	inline void set_hdr_10(int32_t value)
	{
		___hdr_10 = value;
	}

	inline static int32_t get_offset_of_doHdr_11() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___doHdr_11)); }
	inline bool get_doHdr_11() const { return ___doHdr_11; }
	inline bool* get_address_of_doHdr_11() { return &___doHdr_11; }
	inline void set_doHdr_11(bool value)
	{
		___doHdr_11 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_12() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___sepBlurSpread_12)); }
	inline float get_sepBlurSpread_12() const { return ___sepBlurSpread_12; }
	inline float* get_address_of_sepBlurSpread_12() { return &___sepBlurSpread_12; }
	inline void set_sepBlurSpread_12(float value)
	{
		___sepBlurSpread_12 = value;
	}

	inline static int32_t get_offset_of_useSrcAlphaAsMask_13() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___useSrcAlphaAsMask_13)); }
	inline float get_useSrcAlphaAsMask_13() const { return ___useSrcAlphaAsMask_13; }
	inline float* get_address_of_useSrcAlphaAsMask_13() { return &___useSrcAlphaAsMask_13; }
	inline void set_useSrcAlphaAsMask_13(float value)
	{
		___useSrcAlphaAsMask_13 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_14() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___bloomIntensity_14)); }
	inline float get_bloomIntensity_14() const { return ___bloomIntensity_14; }
	inline float* get_address_of_bloomIntensity_14() { return &___bloomIntensity_14; }
	inline void set_bloomIntensity_14(float value)
	{
		___bloomIntensity_14 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_15() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___bloomThreshold_15)); }
	inline float get_bloomThreshold_15() const { return ___bloomThreshold_15; }
	inline float* get_address_of_bloomThreshold_15() { return &___bloomThreshold_15; }
	inline void set_bloomThreshold_15(float value)
	{
		___bloomThreshold_15 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_16() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___bloomBlurIterations_16)); }
	inline int32_t get_bloomBlurIterations_16() const { return ___bloomBlurIterations_16; }
	inline int32_t* get_address_of_bloomBlurIterations_16() { return &___bloomBlurIterations_16; }
	inline void set_bloomBlurIterations_16(int32_t value)
	{
		___bloomBlurIterations_16 = value;
	}

	inline static int32_t get_offset_of_lensflares_17() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensflares_17)); }
	inline bool get_lensflares_17() const { return ___lensflares_17; }
	inline bool* get_address_of_lensflares_17() { return &___lensflares_17; }
	inline void set_lensflares_17(bool value)
	{
		___lensflares_17 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_18() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___hollywoodFlareBlurIterations_18)); }
	inline int32_t get_hollywoodFlareBlurIterations_18() const { return ___hollywoodFlareBlurIterations_18; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_18() { return &___hollywoodFlareBlurIterations_18; }
	inline void set_hollywoodFlareBlurIterations_18(int32_t value)
	{
		___hollywoodFlareBlurIterations_18 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_19() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensflareMode_19)); }
	inline int32_t get_lensflareMode_19() const { return ___lensflareMode_19; }
	inline int32_t* get_address_of_lensflareMode_19() { return &___lensflareMode_19; }
	inline void set_lensflareMode_19(int32_t value)
	{
		___lensflareMode_19 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_20() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___hollyStretchWidth_20)); }
	inline float get_hollyStretchWidth_20() const { return ___hollyStretchWidth_20; }
	inline float* get_address_of_hollyStretchWidth_20() { return &___hollyStretchWidth_20; }
	inline void set_hollyStretchWidth_20(float value)
	{
		___hollyStretchWidth_20 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_21() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensflareIntensity_21)); }
	inline float get_lensflareIntensity_21() const { return ___lensflareIntensity_21; }
	inline float* get_address_of_lensflareIntensity_21() { return &___lensflareIntensity_21; }
	inline void set_lensflareIntensity_21(float value)
	{
		___lensflareIntensity_21 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_22() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensflareThreshold_22)); }
	inline float get_lensflareThreshold_22() const { return ___lensflareThreshold_22; }
	inline float* get_address_of_lensflareThreshold_22() { return &___lensflareThreshold_22; }
	inline void set_lensflareThreshold_22(float value)
	{
		___lensflareThreshold_22 = value;
	}

	inline static int32_t get_offset_of_flareColorA_23() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___flareColorA_23)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorA_23() const { return ___flareColorA_23; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorA_23() { return &___flareColorA_23; }
	inline void set_flareColorA_23(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorA_23 = value;
	}

	inline static int32_t get_offset_of_flareColorB_24() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___flareColorB_24)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorB_24() const { return ___flareColorB_24; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorB_24() { return &___flareColorB_24; }
	inline void set_flareColorB_24(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorB_24 = value;
	}

	inline static int32_t get_offset_of_flareColorC_25() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___flareColorC_25)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorC_25() const { return ___flareColorC_25; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorC_25() { return &___flareColorC_25; }
	inline void set_flareColorC_25(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorC_25 = value;
	}

	inline static int32_t get_offset_of_flareColorD_26() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___flareColorD_26)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_flareColorD_26() const { return ___flareColorD_26; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_flareColorD_26() { return &___flareColorD_26; }
	inline void set_flareColorD_26(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___flareColorD_26 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_27() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensFlareVignetteMask_27)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_lensFlareVignetteMask_27() const { return ___lensFlareVignetteMask_27; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_lensFlareVignetteMask_27() { return &___lensFlareVignetteMask_27; }
	inline void set_lensFlareVignetteMask_27(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___lensFlareVignetteMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareVignetteMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_lensFlareShader_28() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensFlareShader_28)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_lensFlareShader_28() const { return ___lensFlareShader_28; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_lensFlareShader_28() { return &___lensFlareShader_28; }
	inline void set_lensFlareShader_28(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___lensFlareShader_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareShader_28), (void*)value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_29() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___lensFlareMaterial_29)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lensFlareMaterial_29() const { return ___lensFlareMaterial_29; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lensFlareMaterial_29() { return &___lensFlareMaterial_29; }
	inline void set_lensFlareMaterial_29(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lensFlareMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lensFlareMaterial_29), (void*)value);
	}

	inline static int32_t get_offset_of_vignetteShader_30() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___vignetteShader_30)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_vignetteShader_30() const { return ___vignetteShader_30; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_vignetteShader_30() { return &___vignetteShader_30; }
	inline void set_vignetteShader_30(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___vignetteShader_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vignetteShader_30), (void*)value);
	}

	inline static int32_t get_offset_of_vignetteMaterial_31() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___vignetteMaterial_31)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_vignetteMaterial_31() const { return ___vignetteMaterial_31; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_vignetteMaterial_31() { return &___vignetteMaterial_31; }
	inline void set_vignetteMaterial_31(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___vignetteMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vignetteMaterial_31), (void*)value);
	}

	inline static int32_t get_offset_of_separableBlurShader_32() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___separableBlurShader_32)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_separableBlurShader_32() const { return ___separableBlurShader_32; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_separableBlurShader_32() { return &___separableBlurShader_32; }
	inline void set_separableBlurShader_32(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___separableBlurShader_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separableBlurShader_32), (void*)value);
	}

	inline static int32_t get_offset_of_separableBlurMaterial_33() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___separableBlurMaterial_33)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_separableBlurMaterial_33() const { return ___separableBlurMaterial_33; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_separableBlurMaterial_33() { return &___separableBlurMaterial_33; }
	inline void set_separableBlurMaterial_33(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___separableBlurMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separableBlurMaterial_33), (void*)value);
	}

	inline static int32_t get_offset_of_addBrightStuffOneOneShader_34() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___addBrightStuffOneOneShader_34)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_addBrightStuffOneOneShader_34() const { return ___addBrightStuffOneOneShader_34; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_addBrightStuffOneOneShader_34() { return &___addBrightStuffOneOneShader_34; }
	inline void set_addBrightStuffOneOneShader_34(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___addBrightStuffOneOneShader_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addBrightStuffOneOneShader_34), (void*)value);
	}

	inline static int32_t get_offset_of_addBrightStuffBlendOneOneMaterial_35() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___addBrightStuffBlendOneOneMaterial_35)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_addBrightStuffBlendOneOneMaterial_35() const { return ___addBrightStuffBlendOneOneMaterial_35; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_addBrightStuffBlendOneOneMaterial_35() { return &___addBrightStuffBlendOneOneMaterial_35; }
	inline void set_addBrightStuffBlendOneOneMaterial_35(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___addBrightStuffBlendOneOneMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addBrightStuffBlendOneOneMaterial_35), (void*)value);
	}

	inline static int32_t get_offset_of_screenBlendShader_36() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___screenBlendShader_36)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_screenBlendShader_36() const { return ___screenBlendShader_36; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_screenBlendShader_36() { return &___screenBlendShader_36; }
	inline void set_screenBlendShader_36(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___screenBlendShader_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenBlendShader_36), (void*)value);
	}

	inline static int32_t get_offset_of_screenBlend_37() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___screenBlend_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_screenBlend_37() const { return ___screenBlend_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_screenBlend_37() { return &___screenBlend_37; }
	inline void set_screenBlend_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___screenBlend_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenBlend_37), (void*)value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresShader_38() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___hollywoodFlaresShader_38)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_hollywoodFlaresShader_38() const { return ___hollywoodFlaresShader_38; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_hollywoodFlaresShader_38() { return &___hollywoodFlaresShader_38; }
	inline void set_hollywoodFlaresShader_38(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___hollywoodFlaresShader_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hollywoodFlaresShader_38), (void*)value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresMaterial_39() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___hollywoodFlaresMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_hollywoodFlaresMaterial_39() const { return ___hollywoodFlaresMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_hollywoodFlaresMaterial_39() { return &___hollywoodFlaresMaterial_39; }
	inline void set_hollywoodFlaresMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___hollywoodFlaresMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hollywoodFlaresMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_40() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___brightPassFilterShader_40)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_brightPassFilterShader_40() const { return ___brightPassFilterShader_40; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_brightPassFilterShader_40() { return &___brightPassFilterShader_40; }
	inline void set_brightPassFilterShader_40(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___brightPassFilterShader_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightPassFilterShader_40), (void*)value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_41() { return static_cast<int32_t>(offsetof(BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F, ___brightPassFilterMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_brightPassFilterMaterial_41() const { return ___brightPassFilterMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_brightPassFilterMaterial_41() { return &___brightPassFilterMaterial_41; }
	inline void set_brightPassFilterMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___brightPassFilterMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brightPassFilterMaterial_41), (void*)value);
	}
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


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
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


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityStandardAssets.CinematicEffects.FXAA/Preset[]
struct PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  m_Items[1];

public:
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[]
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  m_Items[1];

public:
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);

// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing::get_method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAliasing_get_method_mBB89949A0B301D891C5BF2ACADDF5671116041F2_inline (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_Awake_m637D4020B99247C483919A3D9A65487E0929C373 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.FXAA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_Awake_m41646E5EE5897A42CB0219873C28365FFE67E3AE (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnEnable_mA2B32CBE7115D53052880A80883B494BCA166A99 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * ___owner0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnEnable_m6E6D10E392E8F38855EE1A049B282F0CACB4519E (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * ___owner0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnDisable_m0094A6597F745929315B57CE87E797E695693BA7 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnDisable_m2187D1D8EF9C753EEBD21F53A382589B4A30AF90 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.IAntiAliasing UnityStandardAssets.CinematicEffects.AntiAliasing::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAliasing_get_current_mADED71DCC5BD97DBB0FC273F628147BBDBE5E47F (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AntiAliasing::get_cameraComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * AntiAliasing_get_cameraComponent_mF960D1D88DC97FB5BD3426E798046360187D02C7 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.SMAA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA__ctor_m3AF4A1FB73C7302DE8AA7641C4A76B2045E17782 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.FXAA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA__ctor_m3028A7070454D03ED7B4B98D58B74EDA6474DC12 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, int32_t ___pass3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_mFC3EB8038116A40FA8C6D2A20DC76D9E4C3045DC (float ___b0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_mDB8E6E61C66AA4000F9E8F91DC8CE4BF4C2ED220 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___threshColor0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93 (bool ___clearDepth0, bool ___clearColor1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m817B77709580CCBC1D8F0787F855AAF1BBF4CEA9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m6C6D8BFB58961F35054F43E065A77797883CB39B (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___thresh0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_Vignette_m3FA8F2D04EA6A142424E133BCB8FBE663E3988CC (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___amount0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BlendFlares_m34738C3C9263CD5584C8EB15EB78507F975E98B5 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::DiscardContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_AddTo_mE9619BE3C2641B447503A370C89FC639D7B5AF4D (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___intensity_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_BrightFilter_mA7575BBFC217875E02F0454025CE76D6CF05FDAE (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___thresh0, float ___useAlphaAsMask1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from2, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to3, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_Vignette_m671C8CAE9ED6BD64797AEF8CF982EE8414AA353E (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___amount0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_BlendFlares_m9EFFC2222A16EC1BE33B83E870F8670D480FAE0A (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_AddTo_m96E721A8767A6E55237EB23A193309006A13A376 (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___intensity_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.FXAA::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * FXAA_get_shader_mE4706B1CC10998BE0214345255C4E60B52B01B1B (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.CinematicEffects.ImageEffectHelper::CheckShaderAndCreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ImageEffectHelper_CheckShaderAndCreateMaterial_mA23E47F06288E7A1E1B32C5C3295999D5AEBD4CB (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CinematicEffects.ImageEffectHelper::IsSupported(UnityEngine.Shader,System.Boolean,System.Boolean,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageEffectHelper_IsSupported_m01A6E37E5C09AA67594A2246D2C999DA17AE1E43 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, bool ___needDepth1, bool ___needHdr2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___effect3, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.CinematicEffects.FXAA::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * FXAA_get_material_m73CD41ABDFDD957FA69D7BE673C86200BBD84EDF (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_defaultPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_defaultPreset_mD01A6F06B2BA7679A068AEDB8532175D4ABCE70B_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_extremePerformancePreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremePerformancePreset_m2018CA7D4240D6CF21CB2C25D487CEBF7485DE62_inline (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_performancePreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_performancePreset_mBB188710C56BCAC6ECB6B33302EEBC56457D47A7_inline (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_qualityPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_qualityPreset_m24960A987050A205A2B7CF377CE7CFD577759B79_inline (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_extremeQualityPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremeQualityPreset_mB0E7F93A5C296AE2450514FFFF3801BBEF76E382_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B (int32_t ___format0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95 (const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_mBEBA178F780915D8BC2FF9ED04D75FBB361987C6 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::RemoveCreatedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_RemoveCreatedMaterials_m26103527EFE3EAB5C80AD7C6042416BB87C8093C (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD0EDE9FF6890119758A4B37DC3487C2E48473F5F (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.GL::LoadIdentity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadIdentity_m96F26C752C5EED5A747414BC7435F1B58626E052 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadProjectionMatrix_mD7E3AD9BF6D314163FD0CFB7C75BE545DDB400BA (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___mat0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m4BC0E7A503FDD62C1B6AFD11BF42C48C44D4ABF3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * Quads_GetMesh_m389C16D7D2D2163D185AFF636C94B799C16DFC19 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_mE60F42676D5CD294524617262BABEB81B9FB8F22 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Add(!0)
inline void List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Contains(!0)
inline bool List_1_Contains_m349187567A32003F40D80782846000CDB8CFF973 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Remove(!0)
inline bool List_1_Remove_m0017DE35AB699323E96337D8657F6A64C416529B (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Item(System.Int32)
inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_inline (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Count()
inline int32_t List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Clear()
inline void List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::.ctor()
inline void List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714 (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Revolution::Revolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Revolution_Revolve_m5DB4CE5C7F8D014F05E5717BE438E36266E5F6B6 (Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.SMAA::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * SMAA_get_shader_mD3B92058908B060B284BC9B93B9A727548A978F9 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::UseTemporal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetProjectionMatrix_m3010D24D6ACC1880F046CAB995A1EF69B4D3C2BE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GL_GetGPUProjectionMatrix_m8DAC433EACD75ECD86B3148EA7658F6604378457 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj0, bool ___renderIntoTexture1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.CinematicEffects.SMAA::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_areaTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SMAA_get_areaTexture_m6559E98F714D0E0C61C75656E08E139A4D309ECC (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_searchTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SMAA_get_searchTexture_mF0B8D821CF0530E8CF20624DE7E874941B9C2649 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Inverse_m2A60D822437B96567202296F39BFBD617D49E72F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m7266FA4400474D08A30181EE08E01760CCAEBA0A (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF (String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE (String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.SMAA::TempRT(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * SMAA_TempRT_mAD94E1E3DE7B19BA17494BC26E6BA089F3B23E32 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  GlobalSettings_get_defaultSettings_m85E900E383D040C4AE3CACDF13F1234B920E1719 (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  PredicationSettings_get_defaultSettings_m4B5D6EC28014F4DB9BE982F667C6C61E25CB1151 (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  TemporalSettings_get_defaultSettings_m1054DAE951E9EC6DEA217F7F8F46460FF073CE47 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_m8E43C234388D8688B70498F6663F05925EFBD4C9 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_ClearWithSkybox_m13E436C5D2509D68BB488AF21313BE238E756EB2 (bool ___clearDepth0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m0FA412FECC786A5623F734DBD9D1F7EE016BE7E2 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m3FBACEA56E7B0437BE854A153B647480531C2F7A (const RuntimeMethod* method);
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * Triangles_GetMesh_m28C77B830B07AECCBA2E163BFA8B37768E738602 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Int32 UnityStandardAssets.CinematicEffects.AntiAliasing::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AntiAliasing_get_method_mBB89949A0B301D891C5BF2ACADDF5671116041F2 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Method; }
		int32_t L_0 = __this->get_m_Method_6();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::set_method(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_set_method_m1EC98B748D2229DAF34B23C5DA47C071B2645B99 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (m_Method == value)
		int32_t L_0 = __this->get_m_Method_6();
		int32_t L_1 = ___value0;
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
		// m_Method = value;
		int32_t L_2 = ___value0;
		__this->set_m_Method_6(L_2);
		// }
		return;
	}
}
// UnityStandardAssets.CinematicEffects.IAntiAliasing UnityStandardAssets.CinematicEffects.AntiAliasing::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AntiAliasing_get_current_mADED71DCC5BD97DBB0FC273F628147BBDBE5E47F (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// if (method == (int)Method.Smaa)
		int32_t L_0;
		L_0 = AntiAliasing_get_method_mBB89949A0B301D891C5BF2ACADDF5671116041F2_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return m_SMAA;
		SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * L_1 = __this->get_m_SMAA_4();
		return L_1;
	}

IL_000f:
	{
		// return m_FXAA;
		FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * L_2 = __this->get_m_FXAA_5();
		return L_2;
	}
}
// UnityEngine.Camera UnityStandardAssets.CinematicEffects.AntiAliasing::get_cameraComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * AntiAliasing_get_cameraComponent_mF960D1D88DC97FB5BD3426E798046360187D02C7 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Camera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_Camera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_m_Camera_7(L_2);
	}

IL_001a:
	{
		// return m_Camera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_m_Camera_7();
		return L_3;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_Awake_mA0232FD52705192B8C10EDA5E46FE9DEEA686CC1 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// m_SMAA.Awake();
		SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * L_0 = __this->get_m_SMAA_4();
		NullCheck(L_0);
		SMAA_Awake_m637D4020B99247C483919A3D9A65487E0929C373(L_0, /*hidden argument*/NULL);
		// m_FXAA.Awake();
		FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * L_1 = __this->get_m_FXAA_5();
		NullCheck(L_1);
		FXAA_Awake_m41646E5EE5897A42CB0219873C28365FFE67E3AE(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_OnEnable_m9519CC14082FCA55DEE6FDEE336E421E65564F15 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// m_SMAA.OnEnable(this);
		SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * L_0 = __this->get_m_SMAA_4();
		NullCheck(L_0);
		SMAA_OnEnable_mA2B32CBE7115D53052880A80883B494BCA166A99(L_0, __this, /*hidden argument*/NULL);
		// m_FXAA.OnEnable(this);
		FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * L_1 = __this->get_m_FXAA_5();
		NullCheck(L_1);
		FXAA_OnEnable_m6E6D10E392E8F38855EE1A049B282F0CACB4519E(L_1, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_OnDisable_m0D41F7D75DCD687D02DE0DCD05ED4573D4D079EF (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// m_SMAA.OnDisable();
		SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * L_0 = __this->get_m_SMAA_4();
		NullCheck(L_0);
		SMAA_OnDisable_m0094A6597F745929315B57CE87E797E695693BA7(L_0, /*hidden argument*/NULL);
		// m_FXAA.OnDisable();
		FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * L_1 = __this->get_m_FXAA_5();
		NullCheck(L_1);
		FXAA_OnDisable_m2187D1D8EF9C753EEBD21F53A382589B4A30AF90(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_OnPreCull_m1503BE542EC834C872563A0EBA8968D77476E547 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// current.OnPreCull(cameraComponent);
		RuntimeObject* L_0;
		L_0 = AntiAliasing_get_current_mADED71DCC5BD97DBB0FC273F628147BBDBE5E47F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = AntiAliasing_get_cameraComponent_mF960D1D88DC97FB5BD3426E798046360187D02C7(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(3 /* System.Void UnityStandardAssets.CinematicEffects.IAntiAliasing::OnPreCull(UnityEngine.Camera) */, IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_OnPostRender_mE58CB582D60A32B79DB2BFA4B3C9C80A8D6FFB71 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// current.OnPostRender(cameraComponent);
		RuntimeObject* L_0;
		L_0 = AntiAliasing_get_current_mADED71DCC5BD97DBB0FC273F628147BBDBE5E47F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = AntiAliasing_get_cameraComponent_mF960D1D88DC97FB5BD3426E798046360187D02C7(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(4 /* System.Void UnityStandardAssets.CinematicEffects.IAntiAliasing::OnPostRender(UnityEngine.Camera) */, IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing_OnRenderImage_m0C7F26ECC72E841EAFDDAD6C934204D75C3F931F (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// current.OnRenderImage(cameraComponent, source, destination);
		RuntimeObject* L_0;
		L_0 = AntiAliasing_get_current_mADED71DCC5BD97DBB0FC273F628147BBDBE5E47F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = AntiAliasing_get_cameraComponent_mF960D1D88DC97FB5BD3426E798046360187D02C7(__this, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___destination1;
		NullCheck(L_0);
		InterfaceActionInvoker3< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(5 /* System.Void UnityStandardAssets.CinematicEffects.IAntiAliasing::OnRenderImage(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.RenderTexture) */, IAntiAliasing_t2E5985CD6A10F3B258C40464252A3F69EF346347_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.AntiAliasing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntiAliasing__ctor_m879E8BAED3440F8AB4B3F13ABEFFAC14285C4929 (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SMAA m_SMAA = new SMAA();
		SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * L_0 = (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 *)il2cpp_codegen_object_new(SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70_il2cpp_TypeInfo_var);
		SMAA__ctor_m3AF4A1FB73C7302DE8AA7641C4A76B2045E17782(L_0, /*hidden argument*/NULL);
		__this->set_m_SMAA_4(L_0);
		// private FXAA m_FXAA = new FXAA();
		FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * L_1 = (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 *)il2cpp_codegen_object_new(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_il2cpp_TypeInfo_var);
		FXAA__ctor_m3028A7070454D03ED7B4B98D58B74EDA6474DC12(L_1, /*hidden argument*/NULL);
		__this->set_m_FXAA_5(L_1);
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
// System.Void Blackhole::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole_Start_mE1C86C2223EBDA538DAEB752DCC44414CBC50D2E (Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stars = GameObject.FindGameObjectsWithTag("Star");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralE7094430547E03C78278153540CA2EF9B26CA54C, /*hidden argument*/NULL);
		__this->set_stars_4(L_0);
		// }
		return;
	}
}
// System.Void Blackhole::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole_Update_mF954F60D07FC61D262ACE31CE93CB2E93B9AC1A9 (Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53 * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// time += Time.deltaTime;
		float L_0 = __this->get_time_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// foreach (GameObject star in stars)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_stars_4();
		V_0 = L_2;
		V_1 = 0;
		goto IL_0144;
	}

IL_0020:
	{
		// foreach (GameObject star in stars)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// float dis = Vector3.Distance(this.transform.position, star.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_8, L_11, /*hidden argument*/NULL);
		// if (time > 1)
		float L_13 = __this->get_time_5();
		G_B2_0 = L_12;
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			G_B3_0 = L_12;
			goto IL_009d;
		}
	}
	{
		// dir = this.transform.position - star.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_18, /*hidden argument*/NULL);
		__this->set_dir_6(L_19);
		// star.transform.position += dir * 0.1f * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_2;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_dir_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, (0.100000001f), /*hidden argument*/NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_28, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_009d:
	{
		// if (dis <= 0.3f)
		float L_29 = G_B3_0;
		G_B4_0 = L_29;
		if ((!(((float)L_29) <= ((float)(0.300000012f)))))
		{
			G_B5_0 = L_29;
			goto IL_00d5;
		}
	}
	{
		// star.transform.position += dir * 0.2f * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = L_31;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_dir_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, (0.200000003f), /*hidden argument*/NULL);
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_37, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_38, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
	}

IL_00d5:
	{
		// if (dis <= 0.05f)
		if ((!(((float)G_B5_0) <= ((float)(0.0500000007f)))))
		{
			goto IL_0127;
		}
	}
	{
		// star.transform.position += dir * 0.5f * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_2;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = L_40;
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_dir_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, (0.5f), /*hidden argument*/NULL);
		float L_45;
		L_45 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_44, L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_46, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_47, /*hidden argument*/NULL);
		// star.transform.localScale *= 0.9f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_2;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = L_49;
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_51, (0.899999976f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_50, L_52, /*hidden argument*/NULL);
	}

IL_0127:
	{
		// if (time >= 10)
		float L_53 = __this->get_time_5();
		if ((!(((float)L_53) >= ((float)(10.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)0, /*hidden argument*/NULL);
	}

IL_0140:
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0144:
	{
		// foreach (GameObject star in stars)
		int32_t L_56 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_57 = V_0;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Blackhole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole__ctor_m6578DB391BD5C5B5B4E1AC813216F4758C809831 (Blackhole_tADA10A4E9D2DA2D7C8F92D6B39571CDC1053EE53 * __this, const RuntimeMethod* method)
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
// System.Void Blackhole_init::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole_init_Start_mB835DE4EBBDDA742E3FBC2E62E22325D17A19362 (Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Blackhole_init::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole_init_Update_m13CBA2826A84B1D6E3544E4B4891ECEF88C2F450 (Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C * __this, const RuntimeMethod* method)
{
	{
		// time += Time.deltaTime;
		float L_0 = __this->get_time_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_5(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (time > 10 && flag)
		float L_2 = __this->get_time_5();
		if ((!(((float)L_2) > ((float)(10.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		bool L_3 = __this->get_flag_6();
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// blackhole.transform.position = this.transform.forward * 0.4f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_blackhole_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, (0.400000006f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// blackhole.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_blackhole_4();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// flag = false;
		__this->set_flag_6((bool)0);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Blackhole_init::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blackhole_init__ctor_m197EC6C985E7EF45EB9143E9F6C43F11F57A8431 (Blackhole_init_t7BE5EA234A2E7F9356385809967701F1FF5E7E9C * __this, const RuntimeMethod* method)
{
	{
		// bool flag = true;
		__this->set_flag_6((bool)1);
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
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bloom_CheckResources_m7F6DA8B2BB6563257CC3E067DAF8B800C8C9D460 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		// screenBlend = CheckShaderAndCreateMaterial (screenBlendShader, screenBlend);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_screenBlendShader_32();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_screenBlend_33();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->set_screenBlend_33(L_3);
		// lensFlareMaterial = CheckShaderAndCreateMaterial(lensFlareShader,lensFlareMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = __this->get_lensFlareShader_30();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_lensFlareMaterial_31();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_4, L_5, /*hidden argument*/NULL);
		__this->set_lensFlareMaterial_31(L_6);
		// blurAndFlaresMaterial = CheckShaderAndCreateMaterial (blurAndFlaresShader, blurAndFlaresMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = __this->get_blurAndFlaresShader_34();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_blurAndFlaresMaterial_35();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_7, L_8, /*hidden argument*/NULL);
		__this->set_blurAndFlaresMaterial_35(L_9);
		// brightPassFilterMaterial = CheckShaderAndCreateMaterial(brightPassFilterShader, brightPassFilterMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = __this->get_brightPassFilterShader_36();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_brightPassFilterMaterial_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12;
		L_12 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_10, L_11, /*hidden argument*/NULL);
		__this->set_brightPassFilterMaterial_37(L_12);
		// if (!isSupported)
		bool L_13 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// return isSupported;
		bool L_14 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_14;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_OnRenderImage_m9E04CDDA91EBF9CE543417E1326FB89E771E3329 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_8 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_9 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_10 = NULL;
	int32_t V_11 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_12 = NULL;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_15 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_16 = NULL;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_21 = NULL;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B5_0 = NULL;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B6_1 = NULL;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B10_0 = NULL;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * G_B11_1 = NULL;
	int32_t G_B16_0 = 0;
	{
		// if (CheckResources()==false)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// doHdr = false;
		__this->set_doHdr_11((bool)0);
		// if (hdr == HDRBloomMode.Auto)
		int32_t L_3 = __this->get_hdr_10();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// doHdr = source.format == RenderTextureFormat.ARGBHalf && GetComponent<Camera>().allowHDR;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_4, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_0036;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_7;
		L_7 = Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_doHdr_11((bool)G_B6_0);
		goto IL_004d;
	}

IL_003e:
	{
		// doHdr = hdr == HDRBloomMode.On;
		int32_t L_8 = __this->get_hdr_10();
		__this->set_doHdr_11((bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0));
	}

IL_004d:
	{
		// doHdr = doHdr && supportHDRTextures;
		bool L_9 = __this->get_doHdr_11();
		G_B9_0 = __this;
		if (!L_9)
		{
			G_B10_0 = __this;
			goto IL_005e;
		}
	}
	{
		bool L_10 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_supportHDRTextures_4();
		G_B11_0 = ((int32_t)(L_10));
		G_B11_1 = G_B9_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_005f:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_doHdr_11((bool)G_B11_0);
		// BloomScreenBlendMode realBlendMode = screenBlendMode;
		int32_t L_11 = __this->get_screenBlendMode_9();
		V_0 = L_11;
		// if (doHdr)
		bool L_12 = __this->get_doHdr_11();
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// realBlendMode = BloomScreenBlendMode.Add;
		V_0 = 1;
	}

IL_0075:
	{
		// var rtFormat= (doHdr) ? RenderTextureFormat.ARGBHalf : RenderTextureFormat.Default;
		bool L_13 = __this->get_doHdr_11();
		if (L_13)
		{
			goto IL_0080;
		}
	}
	{
		G_B16_0 = 7;
		goto IL_0081;
	}

IL_0080:
	{
		G_B16_0 = 2;
	}

IL_0081:
	{
		V_1 = G_B16_0;
		// var rtW2= source.width/2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		V_2 = ((int32_t)((int32_t)L_15/(int32_t)2));
		// var rtH2= source.height/2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		V_3 = ((int32_t)((int32_t)L_17/(int32_t)2));
		// var rtW4= source.width/4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		V_4 = ((int32_t)((int32_t)L_19/(int32_t)4));
		// var rtH4= source.height/4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		V_5 = ((int32_t)((int32_t)L_21/(int32_t)4));
		// float widthOverHeight = (1.0f * source.width) / (1.0f * source.height);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22 = ___source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = ___source0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_23))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_25))))));
		// float oneOverBaseSize = 1.0f / 512.0f;
		V_7 = (0.001953125f);
		// RenderTexture quarterRezColor = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_29;
		L_29 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_26, L_27, 0, L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		// RenderTexture halfRezColorDown = RenderTexture.GetTemporary (rtW2, rtH2, 0, rtFormat);
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_33;
		L_33 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_30, L_31, 0, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		// if (quality > BloomQuality.Cheap) {
		int32_t L_34 = __this->get_quality_13();
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		// Graphics.Blit (source, halfRezColorDown, screenBlend, 2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_35 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_36 = V_9;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_screenBlend_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_35, L_36, L_37, 2, /*hidden argument*/NULL);
		// RenderTexture rtDown4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_41;
		L_41 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_38, L_39, 0, L_40, /*hidden argument*/NULL);
		V_12 = L_41;
		// Graphics.Blit (halfRezColorDown, rtDown4, screenBlend, 2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42 = V_9;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_43 = V_12;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_screenBlend_33();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_42, L_43, L_44, 2, /*hidden argument*/NULL);
		// Graphics.Blit (rtDown4, quarterRezColor, screenBlend, 6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = V_12;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = __this->get_screenBlend_33();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_45, L_46, L_47, 6, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(rtDown4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_48 = V_12;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_48, /*hidden argument*/NULL);
		// }
		goto IL_014a;
	}

IL_0132:
	{
		// Graphics.Blit (source, halfRezColorDown);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_49 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_49, L_50, /*hidden argument*/NULL);
		// Graphics.Blit (halfRezColorDown, quarterRezColor, screenBlend, 6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_51 = V_9;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_52 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = __this->get_screenBlend_33();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_51, L_52, L_53, 6, /*hidden argument*/NULL);
	}

IL_014a:
	{
		// RenderTexture.ReleaseTemporary (halfRezColorDown);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = V_9;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_54, /*hidden argument*/NULL);
		// RenderTexture secondQuarterRezColor = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_58;
		L_58 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_55, L_56, 0, L_57, /*hidden argument*/NULL);
		V_10 = L_58;
		// BrightFilter (bloomThreshold * bloomThresholdColor, quarterRezColor, secondQuarterRezColor);
		float L_59 = __this->get_bloomThreshold_15();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60 = __this->get_bloomThresholdColor_16();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = Color_op_Multiply_mFC3EB8038116A40FA8C6D2A20DC76D9E4C3045DC(L_59, L_60, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_62 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = V_10;
		Bloom_BrightFilter_mDB8E6E61C66AA4000F9E8F91DC8CE4BF4C2ED220(__this, L_61, L_62, L_63, /*hidden argument*/NULL);
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		int32_t L_64 = __this->get_bloomBlurIterations_17();
		if ((((int32_t)L_64) >= ((int32_t)1)))
		{
			goto IL_018b;
		}
	}
	{
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		__this->set_bloomBlurIterations_17(1);
		goto IL_019d;
	}

IL_018b:
	{
		// else if (bloomBlurIterations > 10) bloomBlurIterations = 10;
		int32_t L_65 = __this->get_bloomBlurIterations_17();
		if ((((int32_t)L_65) <= ((int32_t)((int32_t)10))))
		{
			goto IL_019d;
		}
	}
	{
		// else if (bloomBlurIterations > 10) bloomBlurIterations = 10;
		__this->set_bloomBlurIterations_17(((int32_t)10));
	}

IL_019d:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		V_13 = 0;
		goto IL_02ab;
	}

IL_01a5:
	{
		// float spreadForPass = (1.0f + (iter * 0.25f)) * sepBlurSpread;
		int32_t L_66 = V_13;
		float L_67 = __this->get_sepBlurSpread_12();
		V_14 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_66)), (float)(0.25f))))), (float)L_67));
		// RenderTexture blur4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_71;
		L_71 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_68, L_69, 0, L_70, /*hidden argument*/NULL);
		V_15 = L_71;
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (0.0f, spreadForPass * oneOverBaseSize, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72 = __this->get_blurAndFlaresMaterial_35();
		float L_73 = V_14;
		float L_74 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_75), (0.0f), ((float)il2cpp_codegen_multiply((float)L_73, (float)L_74)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_72, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_75, /*hidden argument*/NULL);
		// Graphics.Blit (secondQuarterRezColor, blur4, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_76 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_77 = V_15;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78 = __this->get_blurAndFlaresMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_76, L_77, L_78, 4, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_79 = V_10;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_79, /*hidden argument*/NULL);
		// secondQuarterRezColor = blur4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_80 = V_15;
		V_10 = L_80;
		// blur4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_81 = V_4;
		int32_t L_82 = V_5;
		int32_t L_83 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_84;
		L_84 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_81, L_82, 0, L_83, /*hidden argument*/NULL);
		V_15 = L_84;
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 ((spreadForPass / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_85 = __this->get_blurAndFlaresMaterial_35();
		float L_86 = V_14;
		float L_87 = V_6;
		float L_88 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_89), ((float)il2cpp_codegen_multiply((float)((float)((float)L_86/(float)L_87)), (float)L_88)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_85, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_89, /*hidden argument*/NULL);
		// Graphics.Blit (secondQuarterRezColor, blur4, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_90 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_91 = V_15;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_92 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_90, L_91, L_92, 4, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_93 = V_10;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_93, /*hidden argument*/NULL);
		// secondQuarterRezColor = blur4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_94 = V_15;
		V_10 = L_94;
		// if (quality > BloomQuality.Cheap)
		int32_t L_95 = __this->get_quality_13();
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a5;
		}
	}
	{
		// if (iter == 0)
		int32_t L_96 = V_13;
		if (L_96)
		{
			goto IL_028d;
		}
	}
	{
		// Graphics.SetRenderTarget(quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_97 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_97, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98;
		L_98 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_98, /*hidden argument*/NULL);
		// Graphics.Blit (secondQuarterRezColor, quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_99 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_100 = V_8;
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_99, L_100, /*hidden argument*/NULL);
		// }
		goto IL_02a5;
	}

IL_028d:
	{
		// quarterRezColor.MarkRestoreExpected(); // using max blending, RT restore expected
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_101 = V_8;
		NullCheck(L_101);
		RenderTexture_MarkRestoreExpected_m817B77709580CCBC1D8F0787F855AAF1BBF4CEA9(L_101, /*hidden argument*/NULL);
		// Graphics.Blit (secondQuarterRezColor, quarterRezColor, screenBlend, 10);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_102 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_103 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_104 = __this->get_screenBlend_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_102, L_103, L_104, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_02a5:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_105 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_02ab:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_106 = V_13;
		int32_t L_107 = __this->get_bloomBlurIterations_17();
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_01a5;
		}
	}
	{
		// if (quality > BloomQuality.Cheap)
		int32_t L_108 = __this->get_quality_13();
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_02e4;
		}
	}
	{
		// Graphics.SetRenderTarget(secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_109 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_109, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_110;
		L_110 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_110, /*hidden argument*/NULL);
		// Graphics.Blit (quarterRezColor, secondQuarterRezColor, screenBlend, 6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_111 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_112 = V_10;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_113 = __this->get_screenBlend_33();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_111, L_112, L_113, 6, /*hidden argument*/NULL);
	}

IL_02e4:
	{
		// if (lensflareIntensity > Mathf.Epsilon)
		float L_114 = __this->get_lensflareIntensity_22();
		float L_115 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_114) > ((float)L_115))))
		{
			goto IL_06d7;
		}
	}
	{
		// RenderTexture rtFlares4 = RenderTexture.GetTemporary (rtW4, rtH4, 0, rtFormat);
		int32_t L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_119;
		L_119 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_116, L_117, 0, L_118, /*hidden argument*/NULL);
		V_16 = L_119;
		// if (lensflareMode == 0)
		int32_t L_120 = __this->get_lensflareMode_20();
		if (L_120)
		{
			goto IL_03fc;
		}
	}
	{
		// BrightFilter (lensflareThreshold, secondQuarterRezColor, rtFlares4);
		float L_121 = __this->get_lensflareThreshold_23();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_122 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_123 = V_16;
		Bloom_BrightFilter_m6C6D8BFB58961F35054F43E065A77797883CB39B(__this, L_121, L_122, L_123, /*hidden argument*/NULL);
		// if (quality > BloomQuality.Cheap)
		int32_t L_124 = __this->get_quality_13();
		if ((((int32_t)L_124) <= ((int32_t)0)))
		{
			goto IL_03de;
		}
	}
	{
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (0.0f, (1.5f) / (1.0f * quarterRezColor.height), 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125 = __this->get_blurAndFlaresMaterial_35();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_126 = V_8;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_126);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_128;
		memset((&L_128), 0, sizeof(L_128));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_128), (0.0f), ((float)((float)(1.5f)/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_127)))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_125);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_125, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_128, /*hidden argument*/NULL);
		// Graphics.SetRenderTarget(quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_129 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_129, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_130;
		L_130 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_130, /*hidden argument*/NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_132 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_131, L_132, L_133, 4, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 ((1.5f) / (1.0f * quarterRezColor.width), 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_134 = __this->get_blurAndFlaresMaterial_35();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_135 = V_8;
		NullCheck(L_135);
		int32_t L_136;
		L_136 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_135);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_137;
		memset((&L_137), 0, sizeof(L_137));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_137), ((float)((float)(1.5f)/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_136)))))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_134);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_134, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_137, /*hidden argument*/NULL);
		// Graphics.SetRenderTarget(rtFlares4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_138 = V_16;
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_138, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black); // Clear to avoid RT restore
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_139;
		L_139 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_139, /*hidden argument*/NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_140 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_141 = V_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_142 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_140, L_141, L_142, 4, /*hidden argument*/NULL);
	}

IL_03de:
	{
		// Vignette (0.975f, rtFlares4, rtFlares4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_143 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_144 = V_16;
		Bloom_Vignette_m3FA8F2D04EA6A142424E133BCB8FBE663E3988CC(__this, (0.975000024f), L_143, L_144, /*hidden argument*/NULL);
		// BlendFlares (rtFlares4, secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_145 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_146 = V_10;
		Bloom_BlendFlares_m34738C3C9263CD5584C8EB15EB78507F975E98B5(__this, L_145, L_146, /*hidden argument*/NULL);
		// }
		goto IL_06d0;
	}

IL_03fc:
	{
		// float flareXRot = 1.0f * Mathf.Cos(flareRotation);
		float L_147 = __this->get_flareRotation_19();
		float L_148;
		L_148 = cosf(L_147);
		V_17 = ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_148));
		// float flareyRot = 1.0f * Mathf.Sin(flareRotation);
		float L_149 = __this->get_flareRotation_19();
		float L_150;
		L_150 = sinf(L_149);
		V_18 = ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_150));
		// float stretchWidth = (hollyStretchWidth * 1.0f / widthOverHeight) * oneOverBaseSize;
		float L_151 = __this->get_hollyStretchWidth_21();
		float L_152 = V_6;
		float L_153 = V_7;
		V_19 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_151, (float)(1.0f)))/(float)L_152)), (float)L_153));
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (flareXRot, flareyRot, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_154 = __this->get_blurAndFlaresMaterial_35();
		float L_155 = V_17;
		float L_156 = V_18;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_157), L_155, L_156, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_154);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_154, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_157, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetVector ("_Threshhold", new Vector4 (lensflareThreshold, 1.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_158 = __this->get_blurAndFlaresMaterial_35();
		float L_159 = __this->get_lensflareThreshold_23();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_160;
		memset((&L_160), 0, sizeof(L_160));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_160), L_159, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_158);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_158, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_160, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetVector ("_TintColor", new Vector4 (flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * flareColorA.a * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_161 = __this->get_blurAndFlaresMaterial_35();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_162 = __this->get_address_of_flareColorA_25();
		float L_163 = L_162->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_164 = __this->get_address_of_flareColorA_25();
		float L_165 = L_164->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_166 = __this->get_address_of_flareColorA_25();
		float L_167 = L_166->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_168 = __this->get_address_of_flareColorA_25();
		float L_169 = L_168->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_170;
		memset((&L_170), 0, sizeof(L_170));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_170), L_163, L_165, L_167, L_169, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_171 = __this->get_address_of_flareColorA_25();
		float L_172 = L_171->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_173;
		L_173 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_170, L_172, /*hidden argument*/NULL);
		float L_174 = __this->get_lensflareIntensity_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_175;
		L_175 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_173, L_174, /*hidden argument*/NULL);
		NullCheck(L_161);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_161, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_175, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetFloat ("_Saturation", lensFlareSaturation);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_176 = __this->get_blurAndFlaresMaterial_35();
		float L_177 = __this->get_lensFlareSaturation_24();
		NullCheck(L_176);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_176, _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9, L_177, /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_178 = V_8;
		NullCheck(L_178);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_178, /*hidden argument*/NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_179 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_180 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_181 = __this->get_blurAndFlaresMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_179, L_180, L_181, 2, /*hidden argument*/NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_182 = V_16;
		NullCheck(L_182);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_182, /*hidden argument*/NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 3);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_183 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_184 = V_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_185 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_183, L_184, L_185, 3, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (flareXRot * stretchWidth, flareyRot * stretchWidth, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_186 = __this->get_blurAndFlaresMaterial_35();
		float L_187 = V_17;
		float L_188 = V_19;
		float L_189 = V_18;
		float L_190 = V_19;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_191;
		memset((&L_191), 0, sizeof(L_191));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_191), ((float)il2cpp_codegen_multiply((float)L_187, (float)L_188)), ((float)il2cpp_codegen_multiply((float)L_189, (float)L_190)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_186);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_186, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_191, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_192 = __this->get_blurAndFlaresMaterial_35();
		float L_193 = __this->get_hollyStretchWidth_21();
		NullCheck(L_192);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_192, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, L_193, /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_194 = V_8;
		NullCheck(L_194);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_194, /*hidden argument*/NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_195 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_196 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_197 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_195, L_196, L_197, 1, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth * 2.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_198 = __this->get_blurAndFlaresMaterial_35();
		float L_199 = __this->get_hollyStretchWidth_21();
		NullCheck(L_198);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_198, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, ((float)il2cpp_codegen_multiply((float)L_199, (float)(2.0f))), /*hidden argument*/NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_200 = V_16;
		NullCheck(L_200);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_200, /*hidden argument*/NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_201 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_202 = V_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_203 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_201, L_202, L_203, 1, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetFloat ("_StretchWidth", hollyStretchWidth * 4.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_204 = __this->get_blurAndFlaresMaterial_35();
		float L_205 = __this->get_hollyStretchWidth_21();
		NullCheck(L_204);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_204, _stringLiteralB833C1DE39BD5DD134693D3DA383EDCB10E681EC, ((float)il2cpp_codegen_multiply((float)L_205, (float)(4.0f))), /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_206 = V_8;
		NullCheck(L_206);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_206, /*hidden argument*/NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_207 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_208 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_209 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_207, L_208, L_209, 1, /*hidden argument*/NULL);
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		V_20 = 0;
		goto IL_0681;
	}

IL_05e7:
	{
		// stretchWidth = (hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize;
		float L_210 = __this->get_hollyStretchWidth_21();
		float L_211 = V_6;
		float L_212 = V_7;
		V_19 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_210, (float)(2.0f)))/(float)L_211)), (float)L_212));
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (stretchWidth * flareXRot, stretchWidth * flareyRot, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_213 = __this->get_blurAndFlaresMaterial_35();
		float L_214 = V_19;
		float L_215 = V_17;
		float L_216 = V_19;
		float L_217 = V_18;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_218;
		memset((&L_218), 0, sizeof(L_218));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_218), ((float)il2cpp_codegen_multiply((float)L_214, (float)L_215)), ((float)il2cpp_codegen_multiply((float)L_216, (float)L_217)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_213);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_213, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_218, /*hidden argument*/NULL);
		// rtFlares4.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_219 = V_16;
		NullCheck(L_219);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_219, /*hidden argument*/NULL);
		// Graphics.Blit (quarterRezColor, rtFlares4, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_220 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_221 = V_16;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_222 = __this->get_blurAndFlaresMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_220, L_221, L_222, 4, /*hidden argument*/NULL);
		// blurAndFlaresMaterial.SetVector ("_Offsets", new Vector4 (stretchWidth * flareXRot, stretchWidth * flareyRot, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_223 = __this->get_blurAndFlaresMaterial_35();
		float L_224 = V_19;
		float L_225 = V_17;
		float L_226 = V_19;
		float L_227 = V_18;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_228;
		memset((&L_228), 0, sizeof(L_228));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_228), ((float)il2cpp_codegen_multiply((float)L_224, (float)L_225)), ((float)il2cpp_codegen_multiply((float)L_226, (float)L_227)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_223);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_223, _stringLiteral57AEAB49B21AC0908ED01F037D901DAE0EAF40CC, L_228, /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_229 = V_8;
		NullCheck(L_229);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_229, /*hidden argument*/NULL);
		// Graphics.Blit (rtFlares4, quarterRezColor, blurAndFlaresMaterial, 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_230 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_231 = V_8;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_232 = __this->get_blurAndFlaresMaterial_35();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_230, L_231, L_232, 4, /*hidden argument*/NULL);
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		int32_t L_233 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_233, (int32_t)1));
	}

IL_0681:
	{
		// for (int iter = 0; iter < hollywoodFlareBlurIterations; iter++)
		int32_t L_234 = V_20;
		int32_t L_235 = __this->get_hollywoodFlareBlurIterations_18();
		if ((((int32_t)L_234) < ((int32_t)L_235)))
		{
			goto IL_05e7;
		}
	}
	{
		// if (lensflareMode == (LensFlareStyle) 1)
		int32_t L_236 = __this->get_lensflareMode_20();
		if ((!(((uint32_t)L_236) == ((uint32_t)1))))
		{
			goto IL_06a8;
		}
	}
	{
		// AddTo (1.0f, quarterRezColor, secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_237 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_238 = V_10;
		Bloom_AddTo_mE9619BE3C2641B447503A370C89FC639D7B5AF4D(__this, (1.0f), L_237, L_238, /*hidden argument*/NULL);
		goto IL_06d0;
	}

IL_06a8:
	{
		// Vignette (1.0f, quarterRezColor, rtFlares4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_239 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_240 = V_16;
		Bloom_Vignette_m3FA8F2D04EA6A142424E133BCB8FBE663E3988CC(__this, (1.0f), L_239, L_240, /*hidden argument*/NULL);
		// BlendFlares (rtFlares4, quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_241 = V_16;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_242 = V_8;
		Bloom_BlendFlares_m34738C3C9263CD5584C8EB15EB78507F975E98B5(__this, L_241, L_242, /*hidden argument*/NULL);
		// AddTo (1.0f, quarterRezColor, secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_243 = V_8;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_244 = V_10;
		Bloom_AddTo_mE9619BE3C2641B447503A370C89FC639D7B5AF4D(__this, (1.0f), L_243, L_244, /*hidden argument*/NULL);
	}

IL_06d0:
	{
		// RenderTexture.ReleaseTemporary (rtFlares4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_245 = V_16;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_245, /*hidden argument*/NULL);
	}

IL_06d7:
	{
		// int blendPass = (int) realBlendMode;
		int32_t L_246 = V_0;
		V_11 = L_246;
		// screenBlend.SetFloat ("_Intensity", bloomIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_247 = __this->get_screenBlend_33();
		float L_248 = __this->get_bloomIntensity_14();
		NullCheck(L_247);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_247, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_248, /*hidden argument*/NULL);
		// screenBlend.SetTexture ("_ColorBuffer", source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_249 = __this->get_screenBlend_33();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_250 = ___source0;
		NullCheck(L_249);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_249, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_250, /*hidden argument*/NULL);
		// if (quality > BloomQuality.Cheap)
		int32_t L_251 = __this->get_quality_13();
		if ((((int32_t)L_251) <= ((int32_t)0)))
		{
			goto IL_0737;
		}
	}
	{
		// RenderTexture halfRezColorUp = RenderTexture.GetTemporary (rtW2, rtH2, 0, rtFormat);
		int32_t L_252 = V_2;
		int32_t L_253 = V_3;
		int32_t L_254 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_255;
		L_255 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_252, L_253, 0, L_254, /*hidden argument*/NULL);
		V_21 = L_255;
		// Graphics.Blit (secondQuarterRezColor, halfRezColorUp);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_256 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_257 = V_21;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_256, L_257, /*hidden argument*/NULL);
		// Graphics.Blit (halfRezColorUp, destination, screenBlend, blendPass);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_258 = V_21;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_259 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_260 = __this->get_screenBlend_33();
		int32_t L_261 = V_11;
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_258, L_259, L_260, L_261, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (halfRezColorUp);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_262 = V_21;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_262, /*hidden argument*/NULL);
		// }
		goto IL_0747;
	}

IL_0737:
	{
		// Graphics.Blit (secondQuarterRezColor, destination, screenBlend, blendPass);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_263 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_264 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_265 = __this->get_screenBlend_33();
		int32_t L_266 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_263, L_264, L_265, L_266, /*hidden argument*/NULL);
	}

IL_0747:
	{
		// RenderTexture.ReleaseTemporary (quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_267 = V_8;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_267, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_268 = V_10;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_268, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_AddTo_mE9619BE3C2641B447503A370C89FC639D7B5AF4D (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___intensity_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screenBlend.SetFloat ("_Intensity", intensity_);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_screenBlend_33();
		float L_1 = ___intensity_0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_1, /*hidden argument*/NULL);
		// to.MarkRestoreExpected(); // additive blending, RT restore expected
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___to2;
		NullCheck(L_2);
		RenderTexture_MarkRestoreExpected_m817B77709580CCBC1D8F0787F855AAF1BBF4CEA9(L_2, /*hidden argument*/NULL);
		// Graphics.Blit (from, to, screenBlend, 9);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_screenBlend_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_3, L_4, L_5, ((int32_t)9), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BlendFlares_m34738C3C9263CD5584C8EB15EB78507F975E98B5 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B57EAD824AA2C842A67739712342646C4A59776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lensFlareMaterial.SetVector ("colorA", new Vector4 (flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_lensFlareMaterial_31();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_1 = __this->get_address_of_flareColorA_25();
		float L_2 = L_1->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_3 = __this->get_address_of_flareColorA_25();
		float L_4 = L_3->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_5 = __this->get_address_of_flareColorA_25();
		float L_6 = L_5->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = __this->get_address_of_flareColorA_25();
		float L_8 = L_7->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_lensflareIntensity_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11;
		L_11 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_0, _stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2, L_11, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector ("colorB", new Vector4 (flareColorB.r, flareColorB.g, flareColorB.b, flareColorB.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_lensFlareMaterial_31();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_13 = __this->get_address_of_flareColorB_26();
		float L_14 = L_13->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_15 = __this->get_address_of_flareColorB_26();
		float L_16 = L_15->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_17 = __this->get_address_of_flareColorB_26();
		float L_18 = L_17->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_19 = __this->get_address_of_flareColorB_26();
		float L_20 = L_19->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_21), L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_lensflareIntensity_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_12, _stringLiteral2B57EAD824AA2C842A67739712342646C4A59776, L_23, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector ("colorC", new Vector4 (flareColorC.r, flareColorC.g, flareColorC.b, flareColorC.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = __this->get_lensFlareMaterial_31();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_25 = __this->get_address_of_flareColorC_27();
		float L_26 = L_25->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_27 = __this->get_address_of_flareColorC_27();
		float L_28 = L_27->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_29 = __this->get_address_of_flareColorC_27();
		float L_30 = L_29->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_31 = __this->get_address_of_flareColorC_27();
		float L_32 = L_31->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_33), L_26, L_28, L_30, L_32, /*hidden argument*/NULL);
		float L_34 = __this->get_lensflareIntensity_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_35;
		L_35 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_24, _stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87, L_35, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector ("colorD", new Vector4 (flareColorD.r, flareColorD.g, flareColorD.b, flareColorD.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_lensFlareMaterial_31();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_37 = __this->get_address_of_flareColorD_28();
		float L_38 = L_37->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_39 = __this->get_address_of_flareColorD_28();
		float L_40 = L_39->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_41 = __this->get_address_of_flareColorD_28();
		float L_42 = L_41->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_43 = __this->get_address_of_flareColorD_28();
		float L_44 = L_43->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_45), L_38, L_40, L_42, L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_lensflareIntensity_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_47;
		L_47 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_36, _stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6, L_47, /*hidden argument*/NULL);
		// to.MarkRestoreExpected(); // additive blending, RT restore expected
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_48 = ___to1;
		NullCheck(L_48);
		RenderTexture_MarkRestoreExpected_m817B77709580CCBC1D8F0787F855AAF1BBF4CEA9(L_48, /*hidden argument*/NULL);
		// Graphics.Blit (from, to, lensFlareMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_49 = ___from0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_50 = ___to1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51 = __this->get_lensFlareMaterial_31();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_49, L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_m6C6D8BFB58961F35054F43E065A77797883CB39B (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___thresh0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		s_Il2CppMethodInitialized = true;
	}
	{
		// brightPassFilterMaterial.SetVector ("_Threshhold", new Vector4 (thresh, thresh, thresh, thresh));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_brightPassFilterMaterial_37();
		float L_1 = ___thresh0;
		float L_2 = ___thresh0;
		float L_3 = ___thresh0;
		float L_4 = ___thresh0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_5), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_0, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_5, /*hidden argument*/NULL);
		// Graphics.Blit (from, to, brightPassFilterMaterial, 0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_brightPassFilterMaterial_37();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_6, L_7, L_8, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_BrightFilter_mDB8E6E61C66AA4000F9E8F91DC8CE4BF4C2ED220 (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___threshColor0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495);
		s_Il2CppMethodInitialized = true;
	}
	{
		// brightPassFilterMaterial.SetVector ("_Threshhold", threshColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_brightPassFilterMaterial_37();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___threshColor0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		L_2 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_0, _stringLiteral33B3A84FF54C600D8BE3E5EA0DCADED338B39495, L_2, /*hidden argument*/NULL);
		// Graphics.Blit (from, to, brightPassFilterMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_brightPassFilterMaterial_37();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_3, L_4, L_5, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_Vignette_m3FA8F2D04EA6A142424E133BCB8FBE663E3988CC (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, float ___amount0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B4_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B6_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B6_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B6_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B5_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B5_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B7_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B7_2 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B7_3 = NULL;
	{
		// if (lensFlareVignetteMask)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_lensFlareVignetteMask_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// screenBlend.SetTexture ("_ColorBuffer", lensFlareVignetteMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_screenBlend_33();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_lensFlareVignetteMask_29();
		NullCheck(L_2);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_2, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_3, /*hidden argument*/NULL);
		// to.MarkRestoreExpected(); // using blending, RT restore expected
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___to2;
		NullCheck(L_4);
		RenderTexture_MarkRestoreExpected_m817B77709580CCBC1D8F0787F855AAF1BBF4CEA9(L_4, /*hidden argument*/NULL);
		// Graphics.Blit (from == to ? null : from, to, screenBlend, from == to ? 7 : 3);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = ___to2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = ___from1;
		G_B4_0 = L_8;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = ((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)(NULL));
	}

IL_0036:
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_screenBlend_33();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = ___to2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, L_12, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		G_B5_2 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			G_B6_2 = G_B4_0;
			goto IL_0049;
		}
	}
	{
		G_B7_0 = 3;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 7;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(G_B7_3, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if (from != to)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = ___to2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		// Graphics.SetRenderTarget (to);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = ___to2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_17, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black); // clear destination to avoid RT restore
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_18, /*hidden argument*/NULL);
		// Graphics.Blit (from, to);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___to2;
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom__ctor_m9CE8D3A0AF0E8090F05E79AE479FEEC869C4A2BC (Bloom_tB4E7DF6744D5EC847611881291D7CE9C010BFD57 * __this, const RuntimeMethod* method)
{
	{
		// public BloomScreenBlendMode screenBlendMode = BloomScreenBlendMode.Add;
		__this->set_screenBlendMode_9(1);
		// public float sepBlurSpread = 2.5f;
		__this->set_sepBlurSpread_12((2.5f));
		// public BloomQuality quality = BloomQuality.High;
		__this->set_quality_13(1);
		// public float bloomIntensity = 0.5f;
		__this->set_bloomIntensity_14((0.5f));
		// public float bloomThreshold = 0.5f;
		__this->set_bloomThreshold_15((0.5f));
		// public Color bloomThresholdColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_bloomThresholdColor_16(L_0);
		// public int bloomBlurIterations = 2;
		__this->set_bloomBlurIterations_17(2);
		// public int hollywoodFlareBlurIterations = 2;
		__this->set_hollywoodFlareBlurIterations_18(2);
		// public LensFlareStyle lensflareMode = (LensFlareStyle) 1;
		__this->set_lensflareMode_20(1);
		// public float hollyStretchWidth = 2.5f;
		__this->set_hollyStretchWidth_21((2.5f));
		// public float lensflareThreshold = 0.3f;
		__this->set_lensflareThreshold_23((0.300000012f));
		// public float lensFlareSaturation = 0.75f;
		__this->set_lensFlareSaturation_24((0.75f));
		// public Color flareColorA = new Color (0.4f, 0.4f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.400000006f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorA_25(L_1);
		// public Color flareColorB = new Color (0.4f, 0.8f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.400000006f), (0.800000012f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorB_26(L_2);
		// public Color flareColorC = new Color (0.8f, 0.4f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.800000012f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorC_27(L_3);
		// public Color flareColorD = new Color (0.8f, 0.4f, 0.0f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (0.800000012f), (0.400000006f), (0.0f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorD_28(L_4);
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BloomAndFlares_CheckResources_m5D302EB81163C3C7C73E15BD16B22EA430F136D7 (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport(false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		// screenBlend = CheckShaderAndCreateMaterial(screenBlendShader, screenBlend);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_screenBlendShader_36();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_screenBlend_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->set_screenBlend_37(L_3);
		// lensFlareMaterial = CheckShaderAndCreateMaterial(lensFlareShader, lensFlareMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = __this->get_lensFlareShader_28();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_lensFlareMaterial_29();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_4, L_5, /*hidden argument*/NULL);
		__this->set_lensFlareMaterial_29(L_6);
		// vignetteMaterial = CheckShaderAndCreateMaterial(vignetteShader, vignetteMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = __this->get_vignetteShader_30();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_vignetteMaterial_31();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_7, L_8, /*hidden argument*/NULL);
		__this->set_vignetteMaterial_31(L_9);
		// separableBlurMaterial = CheckShaderAndCreateMaterial(separableBlurShader, separableBlurMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = __this->get_separableBlurShader_32();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_separableBlurMaterial_33();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12;
		L_12 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_10, L_11, /*hidden argument*/NULL);
		__this->set_separableBlurMaterial_33(L_12);
		// addBrightStuffBlendOneOneMaterial = CheckShaderAndCreateMaterial(addBrightStuffOneOneShader, addBrightStuffBlendOneOneMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = __this->get_addBrightStuffOneOneShader_34();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_addBrightStuffBlendOneOneMaterial_35();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_13, L_14, /*hidden argument*/NULL);
		__this->set_addBrightStuffBlendOneOneMaterial_35(L_15);
		// hollywoodFlaresMaterial = CheckShaderAndCreateMaterial(hollywoodFlaresShader, hollywoodFlaresMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_16 = __this->get_hollywoodFlaresShader_38();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_hollywoodFlaresMaterial_39();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_16, L_17, /*hidden argument*/NULL);
		__this->set_hollywoodFlaresMaterial_39(L_18);
		// brightPassFilterMaterial = CheckShaderAndCreateMaterial(brightPassFilterShader, brightPassFilterMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_19 = __this->get_brightPassFilterShader_40();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_brightPassFilterMaterial_41();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_19, L_20, /*hidden argument*/NULL);
		__this->set_brightPassFilterMaterial_41(L_21);
		// if (!isSupported)
		bool L_22 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_22)
		{
			goto IL_00be;
		}
	}
	{
		// ReportAutoDisable();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_00be:
	{
		// return isSupported;
		bool L_23 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_23;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_OnRenderImage_m820BD8E7E5CD76FB1A0D8727FE55C68CA4D9E4A0 (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCA94BB4298BE981FD665F0F2C50CEA5C2F78BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C21B49A0EFC55D4E6A7FC4AC4D2CDF265FFBF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9CD79DBD5A71482F4B23A300AEEF7F7E7D67D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_4 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B5_0 = NULL;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B6_1 = NULL;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B10_0 = NULL;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * G_B11_1 = NULL;
	int32_t G_B16_0 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B22_0 = NULL;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit(source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// doHdr = false;
		__this->set_doHdr_11((bool)0);
		// if (hdr == HDRBloomMode.Auto)
		int32_t L_3 = __this->get_hdr_10();
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		// doHdr = source.format == RenderTextureFormat.ARGBHalf && GetComponent<Camera>().allowHDR;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_4, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_0036;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_7;
		L_7 = Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_doHdr_11((bool)G_B6_0);
		goto IL_004d;
	}

IL_003e:
	{
		// doHdr = hdr == HDRBloomMode.On;
		int32_t L_8 = __this->get_hdr_10();
		__this->set_doHdr_11((bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0));
	}

IL_004d:
	{
		// doHdr = doHdr && supportHDRTextures;
		bool L_9 = __this->get_doHdr_11();
		G_B9_0 = __this;
		if (!L_9)
		{
			G_B10_0 = __this;
			goto IL_005e;
		}
	}
	{
		bool L_10 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_supportHDRTextures_4();
		G_B11_0 = ((int32_t)(L_10));
		G_B11_1 = G_B9_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_005f:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_doHdr_11((bool)G_B11_0);
		// BloomScreenBlendMode realBlendMode = screenBlendMode;
		int32_t L_11 = __this->get_screenBlendMode_9();
		V_0 = L_11;
		// if (doHdr)
		bool L_12 = __this->get_doHdr_11();
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// realBlendMode = BloomScreenBlendMode.Add;
		V_0 = 1;
	}

IL_0075:
	{
		// var rtFormat = (doHdr) ? RenderTextureFormat.ARGBHalf : RenderTextureFormat.Default;
		bool L_13 = __this->get_doHdr_11();
		if (L_13)
		{
			goto IL_0080;
		}
	}
	{
		G_B16_0 = 7;
		goto IL_0081;
	}

IL_0080:
	{
		G_B16_0 = 2;
	}

IL_0081:
	{
		V_1 = G_B16_0;
		// RenderTexture halfRezColor = RenderTexture.GetTemporary(source.width / 2, source.height / 2, 0, rtFormat);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = ___source0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = ___source0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		int32_t L_18 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19;
		L_19 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(((int32_t)((int32_t)L_15/(int32_t)2)), ((int32_t)((int32_t)L_17/(int32_t)2)), 0, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// RenderTexture quarterRezColor = RenderTexture.GetTemporary(source.width / 4, source.height / 4, 0, rtFormat);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22 = ___source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		int32_t L_24 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_25;
		L_25 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(((int32_t)((int32_t)L_21/(int32_t)4)), ((int32_t)((int32_t)L_23/(int32_t)4)), 0, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// RenderTexture secondQuarterRezColor = RenderTexture.GetTemporary(source.width / 4, source.height / 4, 0, rtFormat);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_26 = ___source0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_28 = ___source0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		int32_t L_30 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31;
		L_31 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(((int32_t)((int32_t)L_27/(int32_t)4)), ((int32_t)((int32_t)L_29/(int32_t)4)), 0, L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		// RenderTexture thirdQuarterRezColor = RenderTexture.GetTemporary(source.width / 4, source.height / 4, 0, rtFormat);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_32 = ___source0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_32);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_34 = ___source0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_34);
		int32_t L_36 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_37;
		L_37 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(((int32_t)((int32_t)L_33/(int32_t)4)), ((int32_t)((int32_t)L_35/(int32_t)4)), 0, L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		// float widthOverHeight = (1.0f * source.width) / (1.0f * source.height);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_38 = ___source0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_38);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_40 = ___source0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_40);
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_39))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_41))))));
		// float oneOverBaseSize = 1.0f / 512.0f;
		V_7 = (0.001953125f);
		// Graphics.Blit(source, halfRezColor, screenBlend, 2); // <- 2 is stable downsample
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_43 = V_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_screenBlend_37();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_42, L_43, L_44, 2, /*hidden argument*/NULL);
		// Graphics.Blit(halfRezColor, quarterRezColor, screenBlend, 2); // <- 2 is stable downsample
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = __this->get_screenBlend_37();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_45, L_46, L_47, 2, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(halfRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_48 = V_2;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_48, /*hidden argument*/NULL);
		// BrightFilter(bloomThreshold, useSrcAlphaAsMask, quarterRezColor, secondQuarterRezColor);
		float L_49 = __this->get_bloomThreshold_15();
		float L_50 = __this->get_useSrcAlphaAsMask_13();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_51 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_52 = V_4;
		BloomAndFlares_BrightFilter_mA7575BBFC217875E02F0454025CE76D6CF05FDAE(__this, L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_53 = V_3;
		NullCheck(L_53);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_53, /*hidden argument*/NULL);
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		int32_t L_54 = __this->get_bloomBlurIterations_16();
		if ((((int32_t)L_54) >= ((int32_t)1)))
		{
			goto IL_0155;
		}
	}
	{
		// if (bloomBlurIterations < 1) bloomBlurIterations = 1;
		__this->set_bloomBlurIterations_16(1);
	}

IL_0155:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		V_8 = 0;
		goto IL_0201;
	}

IL_015d:
	{
		// float spreadForPass = (1.0f + (iter * 0.5f)) * sepBlurSpread;
		int32_t L_55 = V_8;
		float L_56 = __this->get_sepBlurSpread_12();
		V_9 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_55)), (float)(0.5f))))), (float)L_56));
		// separableBlurMaterial.SetVector("offsets", new Vector4(0.0f, spreadForPass * oneOverBaseSize, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = __this->get_separableBlurMaterial_33();
		float L_58 = V_9;
		float L_59 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_60), (0.0f), ((float)il2cpp_codegen_multiply((float)L_58, (float)L_59)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_57, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_60, /*hidden argument*/NULL);
		// RenderTexture src = iter == 0 ? secondQuarterRezColor : quarterRezColor;
		int32_t L_61 = V_8;
		if (!L_61)
		{
			goto IL_01a5;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_62 = V_3;
		G_B22_0 = L_62;
		goto IL_01a7;
	}

IL_01a5:
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = V_4;
		G_B22_0 = L_63;
	}

IL_01a7:
	{
		// Graphics.Blit(src, thirdQuarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_64 = G_B22_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_65 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_66 = __this->get_separableBlurMaterial_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_64, L_65, L_66, /*hidden argument*/NULL);
		// src.DiscardContents();
		NullCheck(L_64);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_64, /*hidden argument*/NULL);
		// separableBlurMaterial.SetVector("offsets", new Vector4((spreadForPass / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67 = __this->get_separableBlurMaterial_33();
		float L_68 = V_9;
		float L_69 = V_6;
		float L_70 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_71), ((float)il2cpp_codegen_multiply((float)((float)((float)L_68/(float)L_69)), (float)L_70)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_67, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_71, /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, quarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_72 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_73 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74 = __this->get_separableBlurMaterial_33();
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_72, L_73, L_74, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_75 = V_5;
		NullCheck(L_75);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_75, /*hidden argument*/NULL);
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0201:
	{
		// for (int iter = 0; iter < bloomBlurIterations; iter++)
		int32_t L_77 = V_8;
		int32_t L_78 = __this->get_bloomBlurIterations_16();
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_015d;
		}
	}
	{
		// if (lensflares)
		bool L_79 = __this->get_lensflares_17();
		if (!L_79)
		{
			goto IL_05b8;
		}
	}
	{
		// if (lensflareMode == 0)
		int32_t L_80 = __this->get_lensflareMode_19();
		if (L_80)
		{
			goto IL_0266;
		}
	}
	{
		// BrightFilter(lensflareThreshold, 0.0f, quarterRezColor, thirdQuarterRezColor);
		float L_81 = __this->get_lensflareThreshold_22();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_82 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_83 = V_5;
		BloomAndFlares_BrightFilter_mA7575BBFC217875E02F0454025CE76D6CF05FDAE(__this, L_81, (0.0f), L_82, L_83, /*hidden argument*/NULL);
		// quarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_84 = V_3;
		NullCheck(L_84);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_84, /*hidden argument*/NULL);
		// Vignette(0.975f, thirdQuarterRezColor, secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_85 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_86 = V_4;
		BloomAndFlares_Vignette_m671C8CAE9ED6BD64797AEF8CF982EE8414AA353E(__this, (0.975000024f), L_85, L_86, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_87 = V_5;
		NullCheck(L_87);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_87, /*hidden argument*/NULL);
		// BlendFlares(secondQuarterRezColor, quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_88 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_89 = V_3;
		BloomAndFlares_BlendFlares_m9EFFC2222A16EC1BE33B83E870F8670D480FAE0A(__this, L_88, L_89, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_90 = V_4;
		NullCheck(L_90);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_90, /*hidden argument*/NULL);
		// }
		goto IL_05b8;
	}

IL_0266:
	{
		// hollywoodFlaresMaterial.SetVector("_threshold", new Vector4(lensflareThreshold, 1.0f / (1.0f - lensflareThreshold), 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_91 = __this->get_hollywoodFlaresMaterial_39();
		float L_92 = __this->get_lensflareThreshold_22();
		float L_93 = __this->get_lensflareThreshold_22();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_94), L_92, ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_93)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_91);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_91, _stringLiteral5BCA94BB4298BE981FD665F0F2C50CEA5C2F78BF, L_94, /*hidden argument*/NULL);
		// hollywoodFlaresMaterial.SetVector("tintColor", new Vector4(flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * flareColorA.a * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95 = __this->get_hollywoodFlaresMaterial_39();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_96 = __this->get_address_of_flareColorA_23();
		float L_97 = L_96->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_98 = __this->get_address_of_flareColorA_23();
		float L_99 = L_98->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_100 = __this->get_address_of_flareColorA_23();
		float L_101 = L_100->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_102 = __this->get_address_of_flareColorA_23();
		float L_103 = L_102->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_104), L_97, L_99, L_101, L_103, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_105 = __this->get_address_of_flareColorA_23();
		float L_106 = L_105->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_107;
		L_107 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_104, L_106, /*hidden argument*/NULL);
		float L_108 = __this->get_lensflareIntensity_21();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_109;
		L_109 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_107, L_108, /*hidden argument*/NULL);
		NullCheck(L_95);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_95, _stringLiteral84C21B49A0EFC55D4E6A7FC4AC4D2CDF265FFBF7, L_109, /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, secondQuarterRezColor, hollywoodFlaresMaterial, 2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_110 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_111 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_112 = __this->get_hollywoodFlaresMaterial_39();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_110, L_111, L_112, 2, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_113 = V_5;
		NullCheck(L_113);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_113, /*hidden argument*/NULL);
		// Graphics.Blit(secondQuarterRezColor, thirdQuarterRezColor, hollywoodFlaresMaterial, 3);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_114 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_115 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_116 = __this->get_hollywoodFlaresMaterial_39();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_114, L_115, L_116, 3, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_117 = V_4;
		NullCheck(L_117);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_117, /*hidden argument*/NULL);
		// hollywoodFlaresMaterial.SetVector("offsets", new Vector4((sepBlurSpread * 1.0f / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_118 = __this->get_hollywoodFlaresMaterial_39();
		float L_119 = __this->get_sepBlurSpread_12();
		float L_120 = V_6;
		float L_121 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_122;
		memset((&L_122), 0, sizeof(L_122));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_122), ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_119, (float)(1.0f)))/(float)L_120)), (float)L_121)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_118);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_118, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_122, /*hidden argument*/NULL);
		// hollywoodFlaresMaterial.SetFloat("stretchWidth", hollyStretchWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_123 = __this->get_hollywoodFlaresMaterial_39();
		float L_124 = __this->get_hollyStretchWidth_20();
		NullCheck(L_123);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_123, _stringLiteral8E9CD79DBD5A71482F4B23A300AEEF7F7E7D67D2, L_124, /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, secondQuarterRezColor, hollywoodFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_125 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_126 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_127 = __this->get_hollywoodFlaresMaterial_39();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_125, L_126, L_127, 1, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_128 = V_5;
		NullCheck(L_128);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_128, /*hidden argument*/NULL);
		// hollywoodFlaresMaterial.SetFloat("stretchWidth", hollyStretchWidth * 2.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_129 = __this->get_hollywoodFlaresMaterial_39();
		float L_130 = __this->get_hollyStretchWidth_20();
		NullCheck(L_129);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_129, _stringLiteral8E9CD79DBD5A71482F4B23A300AEEF7F7E7D67D2, ((float)il2cpp_codegen_multiply((float)L_130, (float)(2.0f))), /*hidden argument*/NULL);
		// Graphics.Blit(secondQuarterRezColor, thirdQuarterRezColor, hollywoodFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_132 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133 = __this->get_hollywoodFlaresMaterial_39();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_131, L_132, L_133, 1, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_134 = V_4;
		NullCheck(L_134);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_134, /*hidden argument*/NULL);
		// hollywoodFlaresMaterial.SetFloat("stretchWidth", hollyStretchWidth * 4.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_135 = __this->get_hollywoodFlaresMaterial_39();
		float L_136 = __this->get_hollyStretchWidth_20();
		NullCheck(L_135);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_135, _stringLiteral8E9CD79DBD5A71482F4B23A300AEEF7F7E7D67D2, ((float)il2cpp_codegen_multiply((float)L_136, (float)(4.0f))), /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, secondQuarterRezColor, hollywoodFlaresMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_138 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_139 = __this->get_hollywoodFlaresMaterial_39();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_137, L_138, L_139, 1, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_140 = V_5;
		NullCheck(L_140);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_140, /*hidden argument*/NULL);
		// if (lensflareMode == (LensflareStyle34)1)
		int32_t L_141 = __this->get_lensflareMode_19();
		if ((!(((uint32_t)L_141) == ((uint32_t)1))))
		{
			goto IL_04c9;
		}
	}
	{
		// for (int itera = 0; itera < hollywoodFlareBlurIterations; itera++)
		V_10 = 0;
		goto IL_04a2;
	}

IL_0404:
	{
		// separableBlurMaterial.SetVector("offsets", new Vector4((hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_142 = __this->get_separableBlurMaterial_33();
		float L_143 = __this->get_hollyStretchWidth_20();
		float L_144 = V_6;
		float L_145 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_146;
		memset((&L_146), 0, sizeof(L_146));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_146), ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_143, (float)(2.0f)))/(float)L_144)), (float)L_145)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_142);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_142, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_146, /*hidden argument*/NULL);
		// Graphics.Blit(secondQuarterRezColor, thirdQuarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_147 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_148 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_149 = __this->get_separableBlurMaterial_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_147, L_148, L_149, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_150 = V_4;
		NullCheck(L_150);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_150, /*hidden argument*/NULL);
		// separableBlurMaterial.SetVector("offsets", new Vector4((hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_151 = __this->get_separableBlurMaterial_33();
		float L_152 = __this->get_hollyStretchWidth_20();
		float L_153 = V_6;
		float L_154 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_155), ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_152, (float)(2.0f)))/(float)L_153)), (float)L_154)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_151);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_151, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_155, /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, secondQuarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_156 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_157 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_158 = __this->get_separableBlurMaterial_33();
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_156, L_157, L_158, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_159 = V_5;
		NullCheck(L_159);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_159, /*hidden argument*/NULL);
		// for (int itera = 0; itera < hollywoodFlareBlurIterations; itera++)
		int32_t L_160 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_04a2:
	{
		// for (int itera = 0; itera < hollywoodFlareBlurIterations; itera++)
		int32_t L_161 = V_10;
		int32_t L_162 = __this->get_hollywoodFlareBlurIterations_18();
		if ((((int32_t)L_161) < ((int32_t)L_162)))
		{
			goto IL_0404;
		}
	}
	{
		// AddTo(1.0f, secondQuarterRezColor, quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_163 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_164 = V_3;
		BloomAndFlares_AddTo_m96E721A8767A6E55237EB23A193309006A13A376(__this, (1.0f), L_163, L_164, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_165 = V_4;
		NullCheck(L_165);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_165, /*hidden argument*/NULL);
		// }
		goto IL_05b8;
	}

IL_04c9:
	{
		// for (int ix = 0; ix < hollywoodFlareBlurIterations; ix++)
		V_11 = 0;
		goto IL_056f;
	}

IL_04d1:
	{
		// separableBlurMaterial.SetVector("offsets", new Vector4((hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_166 = __this->get_separableBlurMaterial_33();
		float L_167 = __this->get_hollyStretchWidth_20();
		float L_168 = V_6;
		float L_169 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_170;
		memset((&L_170), 0, sizeof(L_170));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_170), ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_167, (float)(2.0f)))/(float)L_168)), (float)L_169)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_166);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_166, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_170, /*hidden argument*/NULL);
		// Graphics.Blit(secondQuarterRezColor, thirdQuarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_171 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_172 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_173 = __this->get_separableBlurMaterial_33();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_171, L_172, L_173, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_174 = V_4;
		NullCheck(L_174);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_174, /*hidden argument*/NULL);
		// separableBlurMaterial.SetVector("offsets", new Vector4((hollyStretchWidth * 2.0f / widthOverHeight) * oneOverBaseSize, 0.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_175 = __this->get_separableBlurMaterial_33();
		float L_176 = __this->get_hollyStretchWidth_20();
		float L_177 = V_6;
		float L_178 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_179;
		memset((&L_179), 0, sizeof(L_179));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_179), ((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_176, (float)(2.0f)))/(float)L_177)), (float)L_178)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_175);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_175, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_179, /*hidden argument*/NULL);
		// Graphics.Blit(thirdQuarterRezColor, secondQuarterRezColor, separableBlurMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_180 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_181 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_182 = __this->get_separableBlurMaterial_33();
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_180, L_181, L_182, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_183 = V_5;
		NullCheck(L_183);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_183, /*hidden argument*/NULL);
		// for (int ix = 0; ix < hollywoodFlareBlurIterations; ix++)
		int32_t L_184 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)1));
	}

IL_056f:
	{
		// for (int ix = 0; ix < hollywoodFlareBlurIterations; ix++)
		int32_t L_185 = V_11;
		int32_t L_186 = __this->get_hollywoodFlareBlurIterations_18();
		if ((((int32_t)L_185) < ((int32_t)L_186)))
		{
			goto IL_04d1;
		}
	}
	{
		// Vignette(1.0f, secondQuarterRezColor, thirdQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_187 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_188 = V_5;
		BloomAndFlares_Vignette_m671C8CAE9ED6BD64797AEF8CF982EE8414AA353E(__this, (1.0f), L_187, L_188, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_189 = V_4;
		NullCheck(L_189);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_189, /*hidden argument*/NULL);
		// BlendFlares(thirdQuarterRezColor, secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_190 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_191 = V_4;
		BloomAndFlares_BlendFlares_m9EFFC2222A16EC1BE33B83E870F8670D480FAE0A(__this, L_190, L_191, /*hidden argument*/NULL);
		// thirdQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_192 = V_5;
		NullCheck(L_192);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_192, /*hidden argument*/NULL);
		// AddTo(1.0f, secondQuarterRezColor, quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_193 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_194 = V_3;
		BloomAndFlares_AddTo_m96E721A8767A6E55237EB23A193309006A13A376(__this, (1.0f), L_193, L_194, /*hidden argument*/NULL);
		// secondQuarterRezColor.DiscardContents();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_195 = V_4;
		NullCheck(L_195);
		RenderTexture_DiscardContents_m63D5C98EFC223AFF0B878FB5CA23730B471874C7(L_195, /*hidden argument*/NULL);
	}

IL_05b8:
	{
		// screenBlend.SetFloat("_Intensity", bloomIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_196 = __this->get_screenBlend_37();
		float L_197 = __this->get_bloomIntensity_14();
		NullCheck(L_196);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_196, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_197, /*hidden argument*/NULL);
		// screenBlend.SetTexture("_ColorBuffer", source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_198 = __this->get_screenBlend_37();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_199 = ___source0;
		NullCheck(L_198);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_198, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_199, /*hidden argument*/NULL);
		// Graphics.Blit(quarterRezColor, destination, screenBlend, (int)realBlendMode);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_200 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_201 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_202 = __this->get_screenBlend_37();
		int32_t L_203 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_200, L_201, L_202, L_203, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(quarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_204 = V_3;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_204, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(secondQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_205 = V_4;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_205, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(thirdQuarterRezColor);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_206 = V_5;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_206, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_AddTo_m96E721A8767A6E55237EB23A193309006A13A376 (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___intensity_0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// addBrightStuffBlendOneOneMaterial.SetFloat("_Intensity", intensity_);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_addBrightStuffBlendOneOneMaterial_35();
		float L_1 = ___intensity_0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_1, /*hidden argument*/NULL);
		// Graphics.Blit(from, to, addBrightStuffBlendOneOneMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_addBrightStuffBlendOneOneMaterial_35();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_BlendFlares_m9EFFC2222A16EC1BE33B83E870F8670D480FAE0A (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B57EAD824AA2C842A67739712342646C4A59776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lensFlareMaterial.SetVector("colorA", new Vector4(flareColorA.r, flareColorA.g, flareColorA.b, flareColorA.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_lensFlareMaterial_29();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_1 = __this->get_address_of_flareColorA_23();
		float L_2 = L_1->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_3 = __this->get_address_of_flareColorA_23();
		float L_4 = L_3->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_5 = __this->get_address_of_flareColorA_23();
		float L_6 = L_5->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = __this->get_address_of_flareColorA_23();
		float L_8 = L_7->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_lensflareIntensity_21();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11;
		L_11 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_0, _stringLiteral6552DCC8D30F1ECCEA20B4508D1284E91C25CCD2, L_11, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector("colorB", new Vector4(flareColorB.r, flareColorB.g, flareColorB.b, flareColorB.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_lensFlareMaterial_29();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_13 = __this->get_address_of_flareColorB_24();
		float L_14 = L_13->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_15 = __this->get_address_of_flareColorB_24();
		float L_16 = L_15->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_17 = __this->get_address_of_flareColorB_24();
		float L_18 = L_17->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_19 = __this->get_address_of_flareColorB_24();
		float L_20 = L_19->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_21), L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_lensflareIntensity_21();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_12, _stringLiteral2B57EAD824AA2C842A67739712342646C4A59776, L_23, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector("colorC", new Vector4(flareColorC.r, flareColorC.g, flareColorC.b, flareColorC.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = __this->get_lensFlareMaterial_29();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_25 = __this->get_address_of_flareColorC_25();
		float L_26 = L_25->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_27 = __this->get_address_of_flareColorC_25();
		float L_28 = L_27->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_29 = __this->get_address_of_flareColorC_25();
		float L_30 = L_29->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_31 = __this->get_address_of_flareColorC_25();
		float L_32 = L_31->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_33), L_26, L_28, L_30, L_32, /*hidden argument*/NULL);
		float L_34 = __this->get_lensflareIntensity_21();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_35;
		L_35 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_24, _stringLiteral6DB920A501BE49CE06F951B435199EACD23D8C87, L_35, /*hidden argument*/NULL);
		// lensFlareMaterial.SetVector("colorD", new Vector4(flareColorD.r, flareColorD.g, flareColorD.b, flareColorD.a) * lensflareIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_lensFlareMaterial_29();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_37 = __this->get_address_of_flareColorD_26();
		float L_38 = L_37->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_39 = __this->get_address_of_flareColorD_26();
		float L_40 = L_39->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_41 = __this->get_address_of_flareColorD_26();
		float L_42 = L_41->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_43 = __this->get_address_of_flareColorD_26();
		float L_44 = L_43->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_45), L_38, L_40, L_42, L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_lensflareIntensity_21();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_47;
		L_47 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_36);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_36, _stringLiteral2B2F87855E2F1F2D73948E75AA00D22AEB5963D6, L_47, /*hidden argument*/NULL);
		// Graphics.Blit(from, to, lensFlareMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_48 = ___from0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_49 = ___to1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_lensFlareMaterial_29();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_48, L_49, L_50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_BrightFilter_mA7575BBFC217875E02F0454025CE76D6CF05FDAE (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___thresh0, float ___useAlphaAsMask1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from2, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B419C953EE33E1EE16B0ACABD5471F6CE61ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECA1CA80A2219025F323A4D79354F0CC4EC3D8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (doHdr)
		bool L_0 = __this->get_doHdr_11();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// brightPassFilterMaterial.SetVector("threshold", new Vector4(thresh, 1.0f, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_brightPassFilterMaterial_41();
		float L_2 = ___thresh0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_3), L_2, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_1, _stringLiteralBECA1CA80A2219025F323A4D79354F0CC4EC3D8B, L_3, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_002f:
	{
		// brightPassFilterMaterial.SetVector("threshold", new Vector4(thresh, 1.0f / (1.0f - thresh), 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_brightPassFilterMaterial_41();
		float L_5 = ___thresh0;
		float L_6 = ___thresh0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_7), L_5, ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_6)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_4, _stringLiteralBECA1CA80A2219025F323A4D79354F0CC4EC3D8B, L_7, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// brightPassFilterMaterial.SetFloat("useSrcAlphaAsMask", useAlphaAsMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_brightPassFilterMaterial_41();
		float L_9 = ___useAlphaAsMask1;
		NullCheck(L_8);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_8, _stringLiteral67B419C953EE33E1EE16B0ACABD5471F6CE61ECF, L_9, /*hidden argument*/NULL);
		// Graphics.Blit(from, to, brightPassFilterMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = ___from2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___to3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_brightPassFilterMaterial_41();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares_Vignette_m671C8CAE9ED6BD64797AEF8CF982EE8414AA353E (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, float ___amount0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___from1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___to2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD016911F3BB41B42B288D457051120F9DD11897);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lensFlareVignetteMask)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_lensFlareVignetteMask_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// screenBlend.SetTexture("_ColorBuffer", lensFlareVignetteMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_screenBlend_37();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_lensFlareVignetteMask_27();
		NullCheck(L_2);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_2, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_3, /*hidden argument*/NULL);
		// Graphics.Blit(from, to, screenBlend, 3);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_screenBlend_37();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_4, L_5, L_6, 3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0032:
	{
		// vignetteMaterial.SetFloat("vignetteIntensity", amount);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_vignetteMaterial_31();
		float L_8 = ___amount0;
		NullCheck(L_7);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_7, _stringLiteralAD016911F3BB41B42B288D457051120F9DD11897, L_8, /*hidden argument*/NULL);
		// Graphics.Blit(from, to, vignetteMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = ___from1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = ___to2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_vignetteMaterial_31();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomAndFlares__ctor_mF5F51BCA83ACC994B808494A7D673B0EE2B6B3C3 (BloomAndFlares_t0C2C80F03AC84F35AA9B9205B25EEBAC772B419F * __this, const RuntimeMethod* method)
{
	{
		// public BloomScreenBlendMode screenBlendMode = BloomScreenBlendMode.Add;
		__this->set_screenBlendMode_9(1);
		// public float sepBlurSpread = 1.5f;
		__this->set_sepBlurSpread_12((1.5f));
		// public float useSrcAlphaAsMask = 0.5f;
		__this->set_useSrcAlphaAsMask_13((0.5f));
		// public float bloomIntensity = 1.0f;
		__this->set_bloomIntensity_14((1.0f));
		// public float bloomThreshold = 0.5f;
		__this->set_bloomThreshold_15((0.5f));
		// public int bloomBlurIterations = 2;
		__this->set_bloomBlurIterations_16(2);
		// public int hollywoodFlareBlurIterations = 2;
		__this->set_hollywoodFlareBlurIterations_18(2);
		// public LensflareStyle34 lensflareMode = (LensflareStyle34)1;
		__this->set_lensflareMode_19(1);
		// public float hollyStretchWidth = 3.5f;
		__this->set_hollyStretchWidth_20((3.5f));
		// public float lensflareIntensity = 1.0f;
		__this->set_lensflareIntensity_21((1.0f));
		// public float lensflareThreshold = 0.3f;
		__this->set_lensflareThreshold_22((0.300000012f));
		// public Color flareColorA = new Color(0.4f, 0.4f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (0.400000006f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorA_23(L_0);
		// public Color flareColorB = new Color(0.4f, 0.8f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.400000006f), (0.800000012f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorB_24(L_1);
		// public Color flareColorC = new Color(0.8f, 0.4f, 0.8f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.800000012f), (0.400000006f), (0.800000012f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorC_25(L_2);
		// public Color flareColorD = new Color(0.8f, 0.4f, 0.0f, 0.75f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.800000012f), (0.400000006f), (0.0f), (0.75f), /*hidden argument*/NULL);
		__this->set_flareColorD_26(L_3);
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.BloomOptimized::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BloomOptimized_CheckResources_m4FFE780FF754CB37C782696BD8D692DF29B2940A (BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		// fastBloomMaterial = CheckShaderAndCreateMaterial (fastBloomShader, fastBloomMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_fastBloomShader_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_fastBloomMaterial_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->set_fastBloomMaterial_15(L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized_OnDisable_m4039BC1075AEAB38751103C799EFBF7894CDAC35 (BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (fastBloomMaterial)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_fastBloomMaterial_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate (fastBloomMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_fastBloomMaterial_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized_OnRenderImage_m58EC1CE2EA1E8727F06C57ED08ECB799594A5D16 (BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_7 = NULL;
	int32_t G_B5_0 = 0;
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int divider = resolution == Resolution.Low ? 4 : 2;
		int32_t L_3 = __this->get_resolution_11();
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B5_0 = 4;
	}

IL_001c:
	{
		V_0 = G_B5_0;
		// float widthMod = resolution == Resolution.Low ? 0.5f : 1.0f;
		int32_t L_4 = __this->get_resolution_11();
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0031;
	}

IL_002c:
	{
		G_B8_0 = (0.5f);
	}

IL_0031:
	{
		V_1 = G_B8_0;
		// fastBloomMaterial.SetVector ("_Parameter", new Vector4 (blurSize * widthMod, 0.0f, threshold, intensity));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_fastBloomMaterial_15();
		float L_6 = __this->get_blurSize_10();
		float L_7 = V_1;
		float L_8 = __this->get_threshold_8();
		float L_9 = __this->get_intensity_9();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_10), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (0.0f), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_5, _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3, L_10, /*hidden argument*/NULL);
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___source0;
		NullCheck(L_11);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_11, 1, /*hidden argument*/NULL);
		// var rtW= source.width/divider;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = V_0;
		V_2 = ((int32_t)((int32_t)L_13/(int32_t)L_14));
		// var rtH= source.height/divider;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = ___source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		int32_t L_17 = V_0;
		V_3 = ((int32_t)((int32_t)L_16/(int32_t)L_17));
		// RenderTexture rt = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_20, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22;
		L_22 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_18, L_19, 0, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// rt.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_4;
		NullCheck(L_23);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_23, 1, /*hidden argument*/NULL);
		// Graphics.Blit (source, rt, fastBloomMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_25 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_fastBloomMaterial_15();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_24, L_25, L_26, 1, /*hidden argument*/NULL);
		// var passOffs= blurType == BlurType.Standard ? 0 : 2;
		int32_t L_27 = __this->get_blurType_13();
		if (!L_27)
		{
			goto IL_00ab;
		}
	}
	{
		G_B11_0 = 2;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B11_0 = 0;
	}

IL_00ac:
	{
		V_5 = G_B11_0;
		// for(int i = 0; i < blurIterations; i++)
		V_6 = 0;
		goto IL_0160;
	}

IL_00b6:
	{
		// fastBloomMaterial.SetVector ("_Parameter", new Vector4 (blurSize * widthMod + (i*1.0f), 0.0f, threshold, intensity));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_fastBloomMaterial_15();
		float L_29 = __this->get_blurSize_10();
		float L_30 = V_1;
		int32_t L_31 = V_6;
		float L_32 = __this->get_threshold_8();
		float L_33 = __this->get_intensity_9();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_34), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_31)), (float)(1.0f))))), (0.0f), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_28, _stringLiteral67FCD903D968843FB838A58A0441312B2F7350F3, L_34, /*hidden argument*/NULL);
		// RenderTexture rt2 = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_37 = ___source0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_37, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_39;
		L_39 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_35, L_36, 0, L_38, /*hidden argument*/NULL);
		V_7 = L_39;
		// rt2.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_40 = V_7;
		NullCheck(L_40);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_40, 1, /*hidden argument*/NULL);
		// Graphics.Blit (rt, rt2, fastBloomMaterial, 2 + passOffs);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_41 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42 = V_7;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = __this->get_fastBloomMaterial_15();
		int32_t L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_41, L_42, L_43, ((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)L_44)), /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = V_4;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_45, /*hidden argument*/NULL);
		// rt = rt2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = V_7;
		V_4 = L_46;
		// rt2 = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_49 = ___source0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_49, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_51;
		L_51 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_47, L_48, 0, L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		// rt2.filterMode = FilterMode.Bilinear;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_52 = V_7;
		NullCheck(L_52);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_52, 1, /*hidden argument*/NULL);
		// Graphics.Blit (rt, rt2, fastBloomMaterial, 3 + passOffs);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_53 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = V_7;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_55 = __this->get_fastBloomMaterial_15();
		int32_t L_56 = V_5;
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_53, L_54, L_55, ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_56)), /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_57 = V_4;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_57, /*hidden argument*/NULL);
		// rt = rt2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_58 = V_7;
		V_4 = L_58;
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_59 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0160:
	{
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_60 = V_6;
		int32_t L_61 = __this->get_blurIterations_12();
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00b6;
		}
	}
	{
		// fastBloomMaterial.SetTexture ("_Bloom", rt);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = __this->get_fastBloomMaterial_15();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_63 = V_4;
		NullCheck(L_62);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_62, _stringLiteralF3727B51476229A6673C6AE3F1248A22C8869020, L_63, /*hidden argument*/NULL);
		// Graphics.Blit (source, destination, fastBloomMaterial, 0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_64 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_65 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_66 = __this->get_fastBloomMaterial_15();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_64, L_65, L_66, 0, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_67 = V_4;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_67, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.BloomOptimized::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomOptimized__ctor_m0E77B85184205FA45BE54D6F2215ACF6608179ED (BloomOptimized_t099FF8FBFED1FFAFB0A943B0A19FA1FD2048F2E8 * __this, const RuntimeMethod* method)
{
	{
		// public float threshold = 0.25f;
		__this->set_threshold_8((0.25f));
		// public float intensity = 0.75f;
		__this->set_intensity_9((0.75f));
		// public float blurSize = 1.0f;
		__this->set_blurSize_10((1.0f));
		// public int blurIterations = 1;
		__this->set_blurIterations_12(1);
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.Utility.FPSCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Start_m6FD80CF9018A6D0D78201E830965399E32F694C5 (FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FpsNextPeriod = Time.realtimeSinceStartup + fpsMeasurePeriod;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_m_FpsNextPeriod_6(((float)il2cpp_codegen_add((float)L_0, (float)(0.5f))));
		// m_Text = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_m_Text_9(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter_Update_m384CE1DC871CDE082E892B0FD1DEED2FBA73310A (FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FpsAccumulator++;
		int32_t L_0 = __this->get_m_FpsAccumulator_5();
		__this->set_m_FpsAccumulator_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (Time.realtimeSinceStartup > m_FpsNextPeriod)
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_2 = __this->get_m_FpsNextPeriod_6();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0068;
		}
	}
	{
		// m_CurrentFps = (int) (m_FpsAccumulator/fpsMeasurePeriod);
		int32_t L_3 = __this->get_m_FpsAccumulator_5();
		__this->set_m_CurrentFps_7(il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)((float)L_3))/(float)(0.5f)))));
		// m_FpsAccumulator = 0;
		__this->set_m_FpsAccumulator_5(0);
		// m_FpsNextPeriod += fpsMeasurePeriod;
		float L_4 = __this->get_m_FpsNextPeriod_6();
		__this->set_m_FpsNextPeriod_6(((float)il2cpp_codegen_add((float)L_4, (float)(0.5f))));
		// m_Text.text = string.Format(display, m_CurrentFps);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_m_Text_9();
		int32_t L_6 = __this->get_m_CurrentFps_7();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB062586C8903B7ACECD5511FF254C2FC443B4352, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Utility.FPSCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSCounter__ctor_mA31248749E691ED7B04A6818FF2177EB00EBA9A5 (FPSCounter_tF2268A22CBACEC039559677EB549E1C0CA9CB094 * __this, const RuntimeMethod* method)
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
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.FXAA::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * FXAA_get_shader_mE4706B1CC10998BE0214345255C4E60B52B01B1B (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral850C3DF4DDB756461A3C0B1E52E31A4A004B6CFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_m_Shader_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_Shader = Shader.Find("Hidden/Fast Approximate Anti-aliasing");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral850C3DF4DDB756461A3C0B1E52E31A4A004B6CFD, /*hidden argument*/NULL);
		__this->set_m_Shader_0(L_2);
	}

IL_001e:
	{
		// return m_Shader;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = __this->get_m_Shader_0();
		return L_3;
	}
}
// UnityEngine.Material UnityStandardAssets.CinematicEffects.FXAA::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * FXAA_get_material_m73CD41ABDFDD957FA69D7BE673C86200BBD84EDF (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Material = ImageEffectHelper.CheckShaderAndCreateMaterial(shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = FXAA_get_shader_mE4706B1CC10998BE0214345255C4E60B52B01B1B(__this, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = ImageEffectHelper_CheckShaderAndCreateMaterial_mA23E47F06288E7A1E1B32C5C3295999D5AEBD4CB(L_2, /*hidden argument*/NULL);
		__this->set_m_Material_1(L_3);
	}

IL_001f:
	{
		// return m_Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_Material_1();
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CinematicEffects.FXAA::get_validSourceFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FXAA_get_validSourceFormat_m692A5F37949CE86EEB5EB781103705F399F375AA (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	{
		// public bool validSourceFormat { get; private set; }
		bool L_0 = __this->get_U3CvalidSourceFormatU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::set_validSourceFormat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_set_validSourceFormat_mE8CDDF97CB06B332D5B07700CF426C0CDD1DD7B4 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool validSourceFormat { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CvalidSourceFormatU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_Awake_m41646E5EE5897A42CB0219873C28365FFE67E3AE (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_QualitySettings = Shader.PropertyToID("_QualitySettings");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE, /*hidden argument*/NULL);
		__this->set_m_QualitySettings_5(L_0);
		// m_ConsoleSettings = Shader.PropertyToID("_ConsoleSettings");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F, /*hidden argument*/NULL);
		__this->set_m_ConsoleSettings_6(L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnEnable_m6E6D10E392E8F38855EE1A049B282F0CACB4519E (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * ___owner0, const RuntimeMethod* method)
{
	{
		// if (!ImageEffectHelper.IsSupported(shader, true, false, owner))
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = FXAA_get_shader_mE4706B1CC10998BE0214345255C4E60B52B01B1B(__this, /*hidden argument*/NULL);
		AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * L_1 = ___owner0;
		bool L_2;
		L_2 = ImageEffectHelper_IsSupported_m01A6E37E5C09AA67594A2246D2C999DA17AE1E43(L_0, (bool)1, (bool)0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// owner.enabled = false;
		AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * L_3 = ___owner0;
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnDisable_m2187D1D8EF9C753EEBD21F53A382589B4A30AF90 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Object.DestroyImmediate(m_Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_m_Material_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnPreCull(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnPreCull_mB6D338A2CADB4DA6AC3EC858418A8BD3AF168061 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnPostRender(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnPostRender_m4061D094E18D49202CAF28016C902612635894DC (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::OnRenderImage(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA_OnRenderImage_mC433AC4C388C3EE3183972351A6E0EAA3482E4AF (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetVector(m_QualitySettings, new Vector3(preset.qualitySettings.subpixelAliasingRemovalAmount,
		//         preset.qualitySettings.edgeDetectionThreshold, preset.qualitySettings.minimumRequiredLuminance));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0;
		L_0 = FXAA_get_material_m73CD41ABDFDD957FA69D7BE673C86200BBD84EDF(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_QualitySettings_5();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_2 = __this->get_address_of_preset_2();
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 * L_3 = L_2->get_address_of_qualitySettings_0();
		float L_4 = L_3->get_subpixelAliasingRemovalAmount_0();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_5 = __this->get_address_of_preset_2();
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 * L_6 = L_5->get_address_of_qualitySettings_0();
		float L_7 = L_6->get_edgeDetectionThreshold_1();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_8 = __this->get_address_of_preset_2();
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 * L_9 = L_8->get_address_of_qualitySettings_0();
		float L_10 = L_9->get_minimumRequiredLuminance_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		L_12 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_11, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_0, L_1, L_12, /*hidden argument*/NULL);
		// material.SetVector(m_ConsoleSettings, new Vector4(preset.consoleSettings.subpixelSpreadAmount,
		//         preset.consoleSettings.edgeSharpnessAmount, preset.consoleSettings.edgeDetectionThreshold,
		//         preset.consoleSettings.minimumRequiredLuminance));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = FXAA_get_material_m73CD41ABDFDD957FA69D7BE673C86200BBD84EDF(__this, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_m_ConsoleSettings_6();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_15 = __this->get_address_of_preset_2();
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 * L_16 = L_15->get_address_of_consoleSettings_1();
		float L_17 = L_16->get_subpixelSpreadAmount_0();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_18 = __this->get_address_of_preset_2();
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 * L_19 = L_18->get_address_of_consoleSettings_1();
		float L_20 = L_19->get_edgeSharpnessAmount_1();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_21 = __this->get_address_of_preset_2();
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 * L_22 = L_21->get_address_of_consoleSettings_1();
		float L_23 = L_22->get_edgeDetectionThreshold_2();
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 * L_24 = __this->get_address_of_preset_2();
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 * L_25 = L_24->get_address_of_consoleSettings_1();
		float L_26 = L_25->get_minimumRequiredLuminance_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_27), L_17, L_20, L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_13, L_14, L_27, /*hidden argument*/NULL);
		// Graphics.Blit(source, destination, material, 0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_28 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_29 = ___destination2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30;
		L_30 = FXAA_get_material_m73CD41ABDFDD957FA69D7BE673C86200BBD84EDF(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_28, L_29, L_30, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA__ctor_m3028A7070454D03ED7B4B98D58B74EDA6474DC12 (FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Preset preset = Preset.defaultPreset;
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0;
		L_0 = Preset_get_defaultPreset_mD01A6F06B2BA7679A068AEDB8532175D4ABCE70B_inline(/*hidden argument*/NULL);
		__this->set_preset_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FXAA__cctor_mABAE2C2B65CCD84E3FAB75ABCFF108E93FA16904 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Preset[] availablePresets =
		// {
		//     Preset.extremePerformancePreset,
		//     Preset.performancePreset,
		//     Preset.defaultPreset,
		//     Preset.qualityPreset,
		//     Preset.extremeQualityPreset
		// };
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_0 = (PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2*)(PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2*)SZArrayNew(PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2_il2cpp_TypeInfo_var, (uint32_t)5);
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_2;
		L_2 = Preset_get_extremePerformancePreset_m2018CA7D4240D6CF21CB2C25D487CEBF7485DE62_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 )L_2);
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_3 = L_1;
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_4;
		L_4 = Preset_get_performancePreset_mBB188710C56BCAC6ECB6B33302EEBC56457D47A7_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 )L_4);
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_5 = L_3;
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_6;
		L_6 = Preset_get_defaultPreset_mD01A6F06B2BA7679A068AEDB8532175D4ABCE70B_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 )L_6);
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_7 = L_5;
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_8;
		L_8 = Preset_get_qualityPreset_m24960A987050A205A2B7CF377CE7CFD577759B79_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 )L_8);
		PresetU5BU5D_tC43851349503F388095B18FD946C3489A09BA0E2* L_9 = L_7;
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_10;
		L_10 = Preset_get_extremeQualityPreset_mB0E7F93A5C296AE2450514FFFF3801BBEF76E382_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 )L_10);
		((FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_StaticFields*)il2cpp_codegen_static_fields_for(FXAA_t4FBEDC605C9DC2323FC17E73374883C96044B075_il2cpp_TypeInfo_var))->set_availablePresets_3(L_9);
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
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_Start_mCB74F1AB8BDB35BE0C8567AAABB24F59A10416C9 (ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects)
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shader || !shader.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_shader_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = __this->get_shader_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ImageEffectBase_get_material_mCBA3A9537019FAFB5146CB9F3A0EC2F7C1A53C4E (ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_Material = new Material(shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_shader_4();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_Material_5(L_3);
		// m_Material.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_Material_5();
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return m_Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_m_Material_5();
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_OnDisable_mCFD2365FAD014C1DE029AAAF6EB1AC35EFE91232 (ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(m_Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_m_Material_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_mC2A208B662D5A6F5E9F24A615737C6FE1432DC06 (ImageEffectBase_t3C1AFB047AFC5E794AD599822BC8E5642D396E82 * __this, const RuntimeMethod* method)
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
// System.Boolean UnityStandardAssets.CinematicEffects.ImageEffectHelper::IsSupported(UnityEngine.Shader,System.Boolean,System.Boolean,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageEffectHelper_IsSupported_m01A6E37E5C09AA67594A2246D2C999DA17AE1E43 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, bool ___needDepth1, bool ___needHdr2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___effect3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F7A023A239BB215681B85276C28784B4D63B2FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65475A1B3DFC490EDDD33B0E6DF006100D019631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9DBBB36008D3A805B36290AF3FF2FBEE996716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA086A6D9AD836D4605CB5C98A8BA47013EAF9260);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s == null || !s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = ___s0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}

IL_0011:
	{
		// Debug.LogWarningFormat("Missing shader for image effect {0}", effect);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_6 = ___effect3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteral0F7A023A239BB215681B85276C28784B4D63B2FA, L_5, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// if (!SystemInfo.supportsImageEffects)
		bool L_7;
		L_7 = SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224(/*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.LogWarningFormat("Image effects aren't supported on this device ({0})", effect);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_10 = ___effect3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteral65475A1B3DFC490EDDD33B0E6DF006100D019631, L_9, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.Depth))
		bool L_11 = ___needDepth1;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		bool L_12;
		L_12 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(1, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.LogWarningFormat("Depth textures aren't supported on this device ({0})", effect);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_15 = ___effect3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteral6D9DBBB36008D3A805B36290AF3FF2FBEE996716, L_14, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0065:
	{
		// if (needHdr && !SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf))
		bool L_16 = ___needHdr2;
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		bool L_17;
		L_17 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(2, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0086;
		}
	}
	{
		// Debug.LogWarningFormat("Floating point textures aren't supported on this device ({0})", effect);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_20 = ___effect3;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteralA086A6D9AD836D4605CB5C98A8BA47013EAF9260, L_19, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0086:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Material UnityStandardAssets.CinematicEffects.ImageEffectHelper::CheckShaderAndCreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ImageEffectHelper_CheckShaderAndCreateMaterial_mA23E47F06288E7A1E1B32C5C3295999D5AEBD4CB (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s == null || !s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = ___s0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0013:
	{
		// var material = new Material(s);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ___s0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_5, L_4, /*hidden argument*/NULL);
		// material.hideFlags = HideFlags.DontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = L_5;
		NullCheck(L_6);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_6, ((int32_t)52), /*hidden argument*/NULL);
		// return material;
		return L_6;
	}
}
// System.Boolean UnityStandardAssets.CinematicEffects.ImageEffectHelper::get_supportsDX11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageEffectHelper_get_supportsDX11_mAAAD4B3F711518216C367055ED9BDE660519C6F1 (const RuntimeMethod* method)
{
	{
		// get { return SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders; }
		int32_t L_0;
		L_0 = SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)50))))
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_get_supportsComputeShaders_mBEBA178F780915D8BC2FF9ED04D75FBB361987C6(/*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
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
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_m03C3F0F20E8A046F982E69B10AF813A0B3076A11 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination2, float ___angle3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center4, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool invertY = source.texelSize.y < 0.0f;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___source1;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		// if (invertY)
		if (!((((float)L_2) < ((float)(0.0f)))? 1 : 0))
		{
			goto IL_002c;
		}
	}
	{
		// center.y = 1.0f - center.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___center4;
		float L_4 = L_3.get_y_1();
		(&___center4)->set_y_1(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)));
		// angle = -angle;
		float L_5 = ___angle3;
		___angle3 = ((-L_5));
	}

IL_002c:
	{
		// Matrix4x4 rotationMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0, 0, angle), Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_7 = ___angle3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_6, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// material.SetMatrix("_RotationMatrix", rotationMatrix);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = ___material0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12 = V_0;
		NullCheck(L_11);
		Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD(L_11, _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2, L_12, /*hidden argument*/NULL);
		// material.SetVector("_CenterRadius", new Vector4(center.x, center.y, radius.x, radius.y));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = ___material0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___center4;
		float L_15 = L_14.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___center4;
		float L_17 = L_16.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___radius5;
		float L_19 = L_18.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___radius5;
		float L_21 = L_20.get_y_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_22), L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_13, _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F, L_22, /*hidden argument*/NULL);
		// material.SetFloat("_Angle", angle*Mathf.Deg2Rad);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = ___material0;
		float L_24 = ___angle3;
		NullCheck(L_23);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_23, _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286, ((float)il2cpp_codegen_multiply((float)L_24, (float)(0.0174532924f))), /*hidden argument*/NULL);
		// Graphics.Blit(source, destination, material);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_25 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_26 = ___destination2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = ___material0;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_25, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_Blit_m8DF0ACAD0C4FC759E3D36B3DD563B1BBCACD3C98 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_BlitWithMaterial_mAC6EE561D0CF9841CC0090F94922925585EC171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest, material);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___dest2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = ___material0;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects__ctor_mBBA6CA1A07C99F9297736099B9B17EA8F6675449 (ImageEffects_t0A1851861B12ED2F11706C17B262EE934D02C0D1 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CinematicEffects.MinAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinAttribute__ctor_mBFCE1B9C25CBB7771E0028E6756CE58DAE65C964 (MinAttribute_t1D10E00D0468AD487C3FAAB4CB92F6B6F369CDD7 * __this, float ___min0, const RuntimeMethod* method)
{
	{
		// public MinAttribute(float min)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.min = min;
		float L_0 = ___min0;
		__this->set_min_0(L_0);
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ___s0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = ___m2Create1;
		NullCheck(L_8);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_9;
		L_9 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_8, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m2Create1;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18 = ___s0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_25 = ___s0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_26, L_25, /*hidden argument*/NULL);
		___m2Create1 = L_26;
		// createdMaterials.Add (m2Create);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_27 = __this->get_createdMaterials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = ___m2Create1;
		NullCheck(L_27);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_27, L_28, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = ___m2Create1;
		NullCheck(L_29);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_29, ((int32_t)52), /*hidden argument*/NULL);
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = ___m2Create1;
		return L_30;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CreateMaterial_m58573EB3A5D193A92003C5DF82DAACB9ED8E8078 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___m2Create1;
		NullCheck(L_6);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_6, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_8 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m2Create1;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_15 = ___s0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_16, L_15, /*hidden argument*/NULL);
		___m2Create1 = L_16;
		// createdMaterials.Add (m2Create);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_17 = __this->get_createdMaterials_7();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = ___m2Create1;
		NullCheck(L_17);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_17, L_18, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = ___m2Create1;
		NullCheck(L_19);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_19, ((int32_t)52), /*hidden argument*/NULL);
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = ___m2Create1;
		return L_20;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_m0794D55F439C915D930543BD5BC3DD98D0900B27 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// isSupported = true;
		__this->set_isSupported_6((bool)1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnDestroy_mEEE46510527E42EC0A2734C309D4613A9435A175 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// RemoveCreatedMaterials ();
		PostEffectsBase_RemoveCreatedMaterials_m26103527EFE3EAB5C80AD7C6042416BB87C8093C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::RemoveCreatedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_RemoveCreatedMaterials_m26103527EFE3EAB5C80AD7C6042416BB87C8093C (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD0EDE9FF6890119758A4B37DC3487C2E48473F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001f;
	}

IL_0002:
	{
		// Material mat = createdMaterials[0];
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = __this->get_createdMaterials_7();
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		// createdMaterials.RemoveAt (0);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = __this->get_createdMaterials_7();
		NullCheck(L_2);
		List_1_RemoveAt_mD0EDE9FF6890119758A4B37DC3487C2E48473F5F(L_2, 0, /*hidden argument*/List_1_RemoveAt_mD0EDE9FF6890119758A4B37DC3487C2E48473F5F_RuntimeMethod_var);
		// Destroy(mat);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// while (createdMaterials.Count > 0)
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_3 = __this->get_createdMaterials_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline(L_3, /*hidden argument*/List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mEC1CB870A1763E3545F7829BAC85CE42275DF4B6 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m304B5191F98669642E68716BD21E97DC4651836B (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		// return isSupported;
		bool L_2 = __this->get_isSupported_6();
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_mB6D8676C7127E664315ADFAAD40A44071D778121 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B2_0 = NULL;
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->set_isSupported_6((bool)1);
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(2, /*hidden argument*/NULL);
		__this->set_supportHDRTextures_4(L_0);
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95(/*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_mBEBA178F780915D8BC2FF9ED04D75FBB361987C6(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_supportDX11_5((bool)G_B3_0);
		// if (!SystemInfo.supportsImageEffects)
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0039:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_4 = ___needDepth0;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5;
		L_5 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(1, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// if (needDepth)
		bool L_6 = ___needDepth0;
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_8, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_8, ((int32_t)((int32_t)L_9|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0062:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m8016EB7CDCA60B4E5334AA1CEFE2EB2AA0A717ED (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method)
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___needDepth0;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___needHdr1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_supportHDRTextures_4();
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_mD0D2A3A932771541E700EE9420F37038759DBC27 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// return supportDX11;
		bool L_0 = __this->get_supportDX11_5();
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_mC043E14AD142392993ECD52EC5882B6C5E0501BD (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = ___s0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// isSupported = false;
		__this->set_isSupported_6((bool)0);
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m0FA412FECC786A5623F734DBD9D1F7EE016BE7E2 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_1, L_2, /*hidden argument*/NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		// }
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_9, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_10, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_11, L_12, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_13, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_14, L_15, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_16, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_17, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_20, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)(1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_22, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_23, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_24, L_25, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_26, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_27, L_28, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_29, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_30, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_32)), (float)(1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_33, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_35, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_36, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_37, L_38, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_39, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_40, L_41, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_42, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_43, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45)), (float)(1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_46, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_48, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_49, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_50, L_51, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_52, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_53, L_54, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_55, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_56, (0.100000001f), /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected bool  supportHDRTextures = true;
		__this->set_supportHDRTextures_4((bool)1);
		// protected bool  isSupported = true;
		__this->set_isSupported_6((bool)1);
		// private List<Material> createdMaterials = new List<Material> ();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_0, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		__this->set_createdMaterials_7(L_0);
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
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_OnRenderImage_m3249CDADE845507F040B3BA27CDB6718DD0CFBF6 (PostEffectsHelper_t0C30C1DB73A1A9090F39849415D76390F9F5BDA0 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRenderImage in Helper called ...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5EE6B65EB03371A3C0F000406E30369D6F81C2FF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m8B5222689A79EAD6CC172A892EDE45EF8EA75EEF (float ___dist0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material3, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cameraForProjectionMatrix4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// material.SetTexture("_MainTex", source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___source1;
		NullCheck(L_1);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, /*hidden argument*/NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadIdentity();
		GL_LoadIdentity_m96F26C752C5EED5A747414BC7435F1B58626E052(/*hidden argument*/NULL);
		// GL.LoadProjectionMatrix(cameraForProjectionMatrix.projectionMatrix);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___cameraForProjectionMatrix4;
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_3, /*hidden argument*/NULL);
		GL_LoadProjectionMatrix_mD7E3AD9BF6D314163FD0CFB7C75BE545DDB400BA(L_4, /*hidden argument*/NULL);
		// float fovYHalfRad = cameraForProjectionMatrix.fieldOfView * 0.5f * Mathf.Deg2Rad;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___cameraForProjectionMatrix4;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_5, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f))), (float)(0.0174532924f)));
		// float cotangent = Mathf.Cos(fovYHalfRad) / Mathf.Sin(fovYHalfRad);
		float L_7 = V_1;
		float L_8;
		L_8 = cosf(L_7);
		float L_9 = V_1;
		float L_10;
		L_10 = sinf(L_9);
		V_2 = ((float)((float)L_8/(float)L_10));
		// float asp = cameraForProjectionMatrix.aspect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = ___cameraForProjectionMatrix4;
		NullCheck(L_11);
		float L_12;
		L_12 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_11, /*hidden argument*/NULL);
		// float x1 = asp/-cotangent;
		float L_13 = L_12;
		float L_14 = V_2;
		V_3 = ((float)((float)L_13/(float)((-L_14))));
		// float x2 = asp/cotangent;
		float L_15 = V_2;
		V_4 = ((float)((float)L_13/(float)L_15));
		// float y1 = 1.0f/-cotangent;
		float L_16 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)((-L_16))));
		// float y2 = 1.0f/cotangent;
		float L_17 = V_2;
		V_6 = ((float)((float)(1.0f)/(float)L_17));
		// float sc = 1.0f; // magic constant (for now)
		V_7 = (1.0f);
		// x1 *= dist * sc;
		float L_18 = V_3;
		float L_19 = ___dist0;
		float L_20 = V_7;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_18, (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))));
		// x2 *= dist * sc;
		float L_21 = V_4;
		float L_22 = ___dist0;
		float L_23 = V_7;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_21, (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		// y1 *= dist * sc;
		float L_24 = V_5;
		float L_25 = ___dist0;
		float L_26 = V_7;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_24, (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26))));
		// y2 *= dist * sc;
		float L_27 = V_6;
		float L_28 = ___dist0;
		float L_29 = V_7;
		V_6 = ((float)il2cpp_codegen_multiply((float)L_27, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29))));
		// float z1 = -dist;
		float L_30 = ___dist0;
		V_8 = ((-L_30));
		// for (int i = 0; i < material.passCount; i++)
		V_9 = 0;
		goto IL_0139;
	}

IL_00a4:
	{
		// material.SetPass(i);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31 = ___material3;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		bool L_33;
		L_33 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_31, L_32, /*hidden argument*/NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// if (invertY)
		bool L_34 = V_0;
		if (!L_34)
		{
			goto IL_00c6;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_10 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_11 = (0.0f);
		// }
		goto IL_00d4;
	}

IL_00c6:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_10 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_11 = (1.0f);
	}

IL_00d4:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_35 = V_10;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_35, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, z1);
		float L_36 = V_3;
		float L_37 = V_5;
		float L_38 = V_8;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_36, L_37, L_38, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_39 = V_10;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_39, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, z1);
		float L_40 = V_4;
		float L_41 = V_5;
		float L_42 = V_8;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_40, L_41, L_42, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_43 = V_11;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_43, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, z1);
		float L_44 = V_4;
		float L_45 = V_6;
		float L_46 = V_8;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_44, L_45, L_46, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_47 = V_11;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_47, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, z1);
		float L_48 = V_3;
		float L_49 = V_6;
		float L_50 = V_8;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_48, L_49, L_50, /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_52 = V_9;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = ___material3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_00a4;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawBorder_mF93C2573512E51B1C1F1FC27823B02CB9239E153 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_1, L_2, /*hidden argument*/NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		// }
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_9, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_10, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_11, L_12, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_13, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_14, L_15, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_16, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_17, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_20, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)(1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_22, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_23, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_24, L_25, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_26, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_27, L_28, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_29, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_30, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_32)), (float)(1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_33, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_35, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_36, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_37, L_38, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_39, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_40, L_41, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_42, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_43, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45)), (float)(1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_46, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_48, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_49, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_50, L_51, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_52, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_53, L_54, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_55, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_56, (0.100000001f), /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper_DrawLowLevelQuad_mBD073127C1A29721D7EEFC2112B2AB4F63C6E95F (float ___x10, float ___x21, float ___y12, float ___y23, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source4, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest5, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest5;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// material.SetTexture("_MainTex", source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material6;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___source4;
		NullCheck(L_1);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, /*hidden argument*/NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0f;
		V_0 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_1 = 0;
		goto IL_00b9;
	}

IL_0028:
	{
		// material.SetPass(i);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material6;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_3, L_4, /*hidden argument*/NULL);
		// GL.Begin(GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// if (invertY)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_2 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_3 = (0.0f);
		// }
		goto IL_0054;
	}

IL_0048:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_2 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_3 = (1.0f);
	}

IL_0054:
	{
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_2;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = ___x10;
		float L_9 = ___y12;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_9, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_2;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_10, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = ___x21;
		float L_12 = ___y12;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_11, L_12, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_3;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_13, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = ___x21;
		float L_15 = ___y23;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_14, L_15, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_3;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_16, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = ___x10;
		float L_18 = ___y23;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_17, L_18, (0.100000001f), /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_00b9:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_20 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = ___material6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0028;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsHelper__ctor_mA8DA1D61B8FEED9DA832C63BC79D4ECD9C628E85 (PostEffectsHelper_t0C30C1DB73A1A9090F39849415D76390F9F5BDA0 * __this, const RuntimeMethod* method)
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
// System.Boolean UnityStandardAssets.ImageEffects.Quads::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quads_HasMeshes_m4BC0E7A503FDD62C1B6AFD11BF42C48C44D4ABF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* V_0 = NULL;
	int32_t V_1 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_2 = NULL;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_0 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// foreach (Mesh m in meshes)
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_1 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_0013:
	{
		// foreach (Mesh m in meshes)
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (null == m)
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_6, /*hidden argument*/NULL);
		if (!L_7)
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
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0026:
	{
		// foreach (Mesh m in meshes)
		int32_t L_9 = V_1;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads_Cleanup_mD8D12694A940EB6155B22BE54FDF1A5048E97FBE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_0 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_1 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate (meshes[i]);
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_6 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_9, /*hidden argument*/NULL);
		// meshes[i] = null;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_10 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_14 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->set_meshes_0((MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Quads::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Quads_GetMeshes_mE0C1253983124C6022E99BF9C690AB87E12834B2 (int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes () && (currentQuads == (totalWidth * totalHeight))) {
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Quads_HasMeshes_m4BC0E7A503FDD62C1B6AFD11BF42C48C44D4ABF3(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_currentQuads_1();
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_4 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_4;
	}

IL_0017:
	{
		// int maxQuads = 65000 / 6;
		V_0 = ((int32_t)10833);
		// int totalQuads = totalWidth * totalHeight;
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		// currentQuads = totalQuads;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->set_currentQuads_1(L_7);
		// int meshCount = Mathf.CeilToInt ((1.0f * totalQuads) / (1.0f * maxQuads));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_8))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_9)))))), /*hidden argument*/NULL);
		// meshes = new Mesh [meshCount];
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_11 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)SZArrayNew(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->set_meshes_0(L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalQuads; i += maxQuads)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int quads = Mathf.FloorToInt (Mathf.Clamp ((totalQuads-i), 0, maxQuads));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), 0, L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_15)), /*hidden argument*/NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh (quads, i, totalWidth, totalHeight);
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_17 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___totalWidth0;
		int32_t L_22 = ___totalHeight1;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_23;
		L_23 = Quads_GetMesh_m389C16D7D2D2163D185AFF636C94B799C16DFC19(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalQuads; i += maxQuads)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_29 = ((Quads_t685086360831ABD1284FD0E7B088C95075647825_StaticFields*)il2cpp_codegen_static_fields_for(Quads_t685086360831ABD1284FD0E7B088C95075647825_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Quads::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * Quads_GetMesh_m389C16D7D2D2163D185AFF636C94B799C16DFC19 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_2 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// var mesh = new Mesh ();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_1, ((int32_t)52), /*hidden argument*/NULL);
		// var verts = new Vector3[triCount * 4];
		int32_t L_2 = ___triCount0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)4)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 4];
		int32_t L_4 = ___triCount0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)4)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 4];
		int32_t L_6 = ___triCount0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)4)));
		V_3 = L_7;
		// var tris = new int[triCount * 6];
		int32_t L_8 = ___triCount0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)6)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_01ac;
	}

IL_003b:
	{
		// int i4 = i * 4;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4));
		// int i6 = i * 6;
		int32_t L_11 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)6));
		// int vertexWithOffset = triOffset + i;
		int32_t L_12 = ___triOffset1;
		int32_t L_13 = V_5;
		// float x = Mathf.Floor (vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		int32_t L_15 = ___totalWidth2;
		float L_16;
		L_16 = floorf(((float)((float)((int32_t)((int32_t)L_14%(int32_t)L_15)))));
		int32_t L_17 = ___totalWidth2;
		V_8 = ((float)((float)L_16/(float)((float)((float)L_17))));
		// float y = Mathf.Floor (vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_18 = ___totalWidth2;
		float L_19;
		L_19 = floorf(((float)((float)((int32_t)((int32_t)L_14/(int32_t)L_18)))));
		int32_t L_20 = ___totalHeight3;
		V_9 = ((float)((float)L_19/(float)((float)((float)L_20))));
		// Vector3 position = new Vector3 (x * 2 - 1, y * 2 - 1, 1.0f);
		float L_21 = V_8;
		float L_22 = V_9;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_10), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_22, (float)(2.0f))), (float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		// verts[i4 + 0] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = V_1;
		int32_t L_24 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_10;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_25);
		// verts[i4 + 1] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = V_1;
		int32_t L_27 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_10;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_28);
		// verts[i4 + 2] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_29 = V_1;
		int32_t L_30 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_10;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_31);
		// verts[i4 + 3] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_32 = V_1;
		int32_t L_33 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_10;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_34);
		// uvs[i4 + 0] = new Vector2 (0.0f, 0.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = V_2;
		int32_t L_36 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_37), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_37);
		// uvs[i4 + 1] = new Vector2 (1.0f, 0.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_38 = V_2;
		int32_t L_39 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_40);
		// uvs[i4 + 2] = new Vector2 (0.0f, 1.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_41 = V_2;
		int32_t L_42 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_43);
		// uvs[i4 + 3] = new Vector2 (1.0f, 1.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_44 = V_2;
		int32_t L_45 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_46), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_46);
		// uvs2[i4 + 0] = new Vector2 (x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_47 = V_3;
		int32_t L_48 = V_6;
		float L_49 = V_8;
		float L_50 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_51);
		// uvs2[i4 + 1] = new Vector2 (x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_52 = V_3;
		int32_t L_53 = V_6;
		float L_54 = V_8;
		float L_55 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_56), L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_56);
		// uvs2[i4 + 2] = new Vector2 (x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_57 = V_3;
		int32_t L_58 = V_6;
		float L_59 = V_8;
		float L_60 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_61), L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_61);
		// uvs2[i4 + 3] = new Vector2 (x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_62 = V_3;
		int32_t L_63 = V_6;
		float L_64 = V_8;
		float L_65 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_66), L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_66);
		// tris[i6 + 0] = i4 + 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = V_4;
		int32_t L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		// tris[i6 + 1] = i4 + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = V_4;
		int32_t L_71 = V_7;
		int32_t L_72 = V_6;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)));
		// tris[i6 + 2] = i4 + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = V_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2)));
		// tris[i6 + 3] = i4 + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_76 = V_4;
		int32_t L_77 = V_7;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1)));
		// tris[i6 + 4] = i4 + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = V_4;
		int32_t L_80 = V_7;
		int32_t L_81 = V_6;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2)));
		// tris[i6 + 5] = i4 + 3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = V_4;
		int32_t L_83 = V_7;
		int32_t L_84 = V_6;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)5))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)3)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01ac:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_86 = V_5;
		int32_t L_87 = ___triCount0;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_88 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_89 = V_1;
		NullCheck(L_88);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_88, L_89, /*hidden argument*/NULL);
		// mesh.triangles = tris;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_90 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = V_4;
		NullCheck(L_90);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_90, L_91, /*hidden argument*/NULL);
		// mesh.uv = uvs;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_92 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_93 = V_2;
		NullCheck(L_92);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_92, L_93, /*hidden argument*/NULL);
		// mesh.uv2 = uvs2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_94 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_95 = V_3;
		NullCheck(L_94);
		Mesh_set_uv2_mE60F42676D5CD294524617262BABEB81B9FB8F22(L_94, L_95, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_96 = V_0;
		return L_96;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads__ctor_m0F21717E48723759E99AA626D14C571F65C14880 (Quads_t685086360831ABD1284FD0E7B088C95075647825 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Quads::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quads__cctor_m63271B518EF4D21A7DA56D8AC00BF587E24C33BC (const RuntimeMethod* method)
{
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
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.RenderTextureUtility::GetTemporaryRenderTexture(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTextureUtility_GetTemporaryRenderTexture_mFD4DF4F8288CF68336D220C8370294C4DA7DFE37 (RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___filterMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57FB9DFACBFE48E27FF41AD3736D224560181347);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	{
		// var rt = RenderTexture.GetTemporary(width, height, depthBuffer, format);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depthBuffer2;
		int32_t L_3 = ___format3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// rt.filterMode = filterMode;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = V_0;
		int32_t L_6 = ___filterMode4;
		NullCheck(L_5);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_5, L_6, /*hidden argument*/NULL);
		// rt.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_0;
		NullCheck(L_7);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_7, 1, /*hidden argument*/NULL);
		// rt.name = "RenderTextureUtilityTempTexture";
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_0;
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, _stringLiteral57FB9DFACBFE48E27FF41AD3736D224560181347, /*hidden argument*/NULL);
		// m_TemporaryRTs.Add(rt);
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_9 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205(L_9, L_10, /*hidden argument*/List_1_Add_mCB66852EF108F7810C149B035C969D0956FC0205_RuntimeMethod_var);
		// return rt;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = V_0;
		return L_11;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::ReleaseTemporaryRenderTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureUtility_ReleaseTemporaryRenderTexture_m4A000BE1AEC833B7C69CD0ABA0BCAAB70B7BB30A (RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m349187567A32003F40D80782846000CDB8CFF973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0017DE35AB699323E96337D8657F6A64C416529B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0335E64BB6A6DFBCE2222FDE6A1062A2DEDF7CA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rt == null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___rt0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
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
		// if (!m_TemporaryRTs.Contains(rt))
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_2 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___rt0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m349187567A32003F40D80782846000CDB8CFF973(L_2, L_3, /*hidden argument*/List_1_Contains_m349187567A32003F40D80782846000CDB8CFF973_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogErrorFormat("Attempting to remove texture that was not allocated: {0}", rt);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ___rt0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral0335E64BB6A6DFBCE2222FDE6A1062A2DEDF7CA8, L_6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002d:
	{
		// m_TemporaryRTs.Remove(rt);
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_8 = __this->get_m_TemporaryRTs_0();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = ___rt0;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m0017DE35AB699323E96337D8657F6A64C416529B(L_8, L_9, /*hidden argument*/List_1_Remove_m0017DE35AB699323E96337D8657F6A64C416529B_RuntimeMethod_var);
		// RenderTexture.ReleaseTemporary(rt);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___rt0;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::ReleaseAllTemporaryRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureUtility_ReleaseAllTemporaryRenderTextures_m940620A6E8A17E8620DEAD3E1ACEF5FCD4C79859 (RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_TemporaryRTs.Count; ++i)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// RenderTexture.ReleaseTemporary(m_TemporaryRTs[i]);
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = __this->get_m_TemporaryRTs_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2;
		L_2 = List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m2048DC2B083950A76C19CB8FCB54BC7BD13A8B6C_RuntimeMethod_var);
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < m_TemporaryRTs.Count; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < m_TemporaryRTs.Count; ++i)
		int32_t L_4 = V_0;
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_5 = __this->get_m_TemporaryRTs_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_inline(L_5, /*hidden argument*/List_1_get_Count_m1137DAC9D2025FFC7D853298B59113ACAB858B24_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// m_TemporaryRTs.Clear();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_7 = __this->get_m_TemporaryRTs_0();
		NullCheck(L_7);
		List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5(L_7, /*hidden argument*/List_1_Clear_m4B8C3E5C469683DF4A94C4054743B220F13BB4F5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureUtility__ctor_mB504EC38AC93EE9714DA36BFE6652FC2A08E35FC (RenderTextureUtility_t1EBFE26F9DE2BFC432539A9C11E62326E88DA9F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<RenderTexture> m_TemporaryRTs = new List<RenderTexture>();
		List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE * L_0 = (List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE *)il2cpp_codegen_object_new(List_1_tC7F560EEDF9E463DB19E4D38CF60A2A0E824F1BE_il2cpp_TypeInfo_var);
		List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714(L_0, /*hidden argument*/List_1__ctor_mB38E72AF05051F5403306E56E602C5284D335714_RuntimeMethod_var);
		__this->set_m_TemporaryRTs_0(L_0);
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
// System.Void Revolution::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Revolution_Start_mBD7C83F63803C88C8108579880D9811DFA6EAA72 (Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Revolution::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Revolution_Update_m20DD7DF1EF8D01A61C0A822CE7247A75B6B30521 (Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6 * __this, const RuntimeMethod* method)
{
	{
		// Revolve();
		Revolution_Revolve_m5DB4CE5C7F8D014F05E5717BE438E36266E5F6B6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Revolution::Revolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Revolution_Revolve_m5DB4CE5C7F8D014F05E5717BE438E36266E5F6B6 (Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6 * __this, const RuntimeMethod* method)
{
	{
		// transform.RotateAround(Planet.transform.position, Vector3.down, 365 / Revolution_period  * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Planet_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_5 = __this->get_Revolution_period_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_0, L_3, L_4, ((float)il2cpp_codegen_multiply((float)((float)((float)(365.0f)/(float)L_5)), (float)L_6)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Revolution::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Revolution__ctor_m8DEA3C270C3DCF3B2499736C681CE13E57EF7C7E (Revolution_t15D4A1063EB690751CBC685DFC1900437041C0F6 * __this, const RuntimeMethod* method)
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
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.SMAA::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * SMAA_get_shader_mD3B92058908B060B284BC9B93B9A727548A978F9 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76FCB83A2CFD60F542AA68620686429A9A37751B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Shader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_m_Shader_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_Shader = Shader.Find("Hidden/Subpixel Morphological Anti-aliasing");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral76FCB83A2CFD60F542AA68620686429A9A37751B, /*hidden argument*/NULL);
		__this->set_m_Shader_8(L_2);
	}

IL_001e:
	{
		// return m_Shader;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = __this->get_m_Shader_8();
		return L_3;
	}
}
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_areaTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SMAA_get_areaTexture_m6559E98F714D0E0C61C75656E08E139A4D309ECC (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral440680263E51B27E42CA9B716635C2C46E80EE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AreaTexture == null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_m_AreaTexture_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_AreaTexture = Resources.Load<Texture2D>("AreaTex");
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539(_stringLiteral440680263E51B27E42CA9B716635C2C46E80EE4F, /*hidden argument*/Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		__this->set_m_AreaTexture_9(L_2);
	}

IL_001e:
	{
		// return m_AreaTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_m_AreaTexture_9();
		return L_3;
	}
}
// UnityEngine.Texture2D UnityStandardAssets.CinematicEffects.SMAA::get_searchTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SMAA_get_searchTexture_mF0B8D821CF0530E8CF20624DE7E874941B9C2649 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695D229A3B2BF92681D3EA830026704D8437B6A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SearchTexture == null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_m_SearchTexture_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_SearchTexture = Resources.Load<Texture2D>("SearchTex");
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2;
		L_2 = Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539(_stringLiteral695D229A3B2BF92681D3EA830026704D8437B6A5, /*hidden argument*/Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		__this->set_m_SearchTexture_10(L_2);
	}

IL_001e:
	{
		// return m_SearchTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_m_SearchTexture_10();
		return L_3;
	}
}
// UnityEngine.Material UnityStandardAssets.CinematicEffects.SMAA::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Material = ImageEffectHelper.CheckShaderAndCreateMaterial(shader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = SMAA_get_shader_mD3B92058908B060B284BC9B93B9A727548A978F9(__this, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = ImageEffectHelper_CheckShaderAndCreateMaterial_mA23E47F06288E7A1E1B32C5C3295999D5AEBD4CB(L_2, /*hidden argument*/NULL);
		__this->set_m_Material_11(L_3);
	}

IL_001f:
	{
		// return m_Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_Material_11();
		return L_4;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_Awake_m637D4020B99247C483919A3D9A65487E0929C373 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B11F860FF8C381A1FF227DE40533A0B9CA1D46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16162466A59B1F704A79BF605DBE4A4C42A88BE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577B724681B6E49F462DA98700A79269E1C87123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595BC3F009999C4BA69531829D26C2BE9553704C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral690C12CED9E5E166F02EC56E4CD00E7A873F3E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9568B4C9204E9BAEF2B8D4B56DF9E542885D7052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF276D189E03BD9BC981E82BBCF3EB423DF85ED8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AreaTex = Shader.PropertyToID("_AreaTex");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD8C7A356B73AA14E51E3C23F430521F42A4E8831, /*hidden argument*/NULL);
		__this->set_m_AreaTex_12(L_0);
		// m_SearchTex = Shader.PropertyToID("_SearchTex");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5C7EBE7FA922EC3E10AA3F6954A60AE63E3D97FD, /*hidden argument*/NULL);
		__this->set_m_SearchTex_13(L_1);
		// m_Metrics = Shader.PropertyToID("_Metrics");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral577B724681B6E49F462DA98700A79269E1C87123, /*hidden argument*/NULL);
		__this->set_m_Metrics_14(L_2);
		// m_Params1 = Shader.PropertyToID("_Params1");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9568B4C9204E9BAEF2B8D4B56DF9E542885D7052, /*hidden argument*/NULL);
		__this->set_m_Params1_15(L_3);
		// m_Params2 = Shader.PropertyToID("_Params2");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral690C12CED9E5E166F02EC56E4CD00E7A873F3E2F, /*hidden argument*/NULL);
		__this->set_m_Params2_16(L_4);
		// m_Params3 = Shader.PropertyToID("_Params3");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF276D189E03BD9BC981E82BBCF3EB423DF85ED8D, /*hidden argument*/NULL);
		__this->set_m_Params3_17(L_5);
		// m_ReprojectionMatrix = Shader.PropertyToID("_ReprojectionMatrix");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral595BC3F009999C4BA69531829D26C2BE9553704C, /*hidden argument*/NULL);
		__this->set_m_ReprojectionMatrix_18(L_6);
		// m_SubsampleIndices = Shader.PropertyToID("_SubsampleIndices");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral00B11F860FF8C381A1FF227DE40533A0B9CA1D46, /*hidden argument*/NULL);
		__this->set_m_SubsampleIndices_19(L_7);
		// m_BlendTex = Shader.PropertyToID("_BlendTex");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralAB0D9F5B9917E33FFA8D3428D1CEC5DA1F0F0C62, /*hidden argument*/NULL);
		__this->set_m_BlendTex_20(L_8);
		// m_AccumulationTex = Shader.PropertyToID("_AccumulationTex");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral16162466A59B1F704A79BF605DBE4A4C42A88BE7, /*hidden argument*/NULL);
		__this->set_m_AccumulationTex_21(L_9);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnEnable(UnityStandardAssets.CinematicEffects.AntiAliasing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnEnable_mA2B32CBE7115D53052880A80883B494BCA166A99 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * ___owner0, const RuntimeMethod* method)
{
	{
		// if (!ImageEffectHelper.IsSupported(shader, true, false, owner))
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = SMAA_get_shader_mD3B92058908B060B284BC9B93B9A727548A978F9(__this, /*hidden argument*/NULL);
		AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * L_1 = ___owner0;
		bool L_2;
		L_2 = ImageEffectHelper_IsSupported_m01A6E37E5C09AA67594A2246D2C999DA17AE1E43(L_0, (bool)1, (bool)0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// owner.enabled = false;
		AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * L_3 = ___owner0;
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnDisable_m0094A6597F745929315B57CE87E797E695693BA7 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_Material_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Object.DestroyImmediate(m_Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_m_Material_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (m_Accumulation != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_m_Accumulation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Object.DestroyImmediate(m_Accumulation);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_m_Accumulation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// m_Material = null;
		__this->set_m_Material_11((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// m_Accumulation = null;
		__this->set_m_Accumulation_7((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnPreCull(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnPreCull_m6AC89100025524B45E28180A1A727FE1167920C3 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (temporal.UseTemporal())
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_0 = __this->get_address_of_temporal_3();
		bool L_1;
		L_1 = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline((TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// m_ProjectionMatrix = camera.projectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_2);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_2, /*hidden argument*/NULL);
		__this->set_m_ProjectionMatrix_4(L_3);
		// m_FlipFlop -= (2.0f * m_FlipFlop);
		float L_4 = __this->get_m_FlipFlop_6();
		float L_5 = __this->get_m_FlipFlop_6();
		__this->set_m_FlipFlop_6(((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_5)))));
		// Matrix4x4 fuzz = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_6;
		// fuzz.m03 = (0.25f * m_FlipFlop) * temporal.fuzzSize / camera.pixelWidth;
		float L_7 = __this->get_m_FlipFlop_6();
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_8 = __this->get_address_of_temporal_3();
		float L_9 = L_8->get_fuzzSize_1();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ___camera0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_10, /*hidden argument*/NULL);
		(&V_0)->set_m03_12(((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.25f), (float)L_7)), (float)L_9))/(float)((float)((float)L_11)))));
		// fuzz.m13 = (-0.25f * m_FlipFlop) * temporal.fuzzSize / camera.pixelHeight;
		float L_12 = __this->get_m_FlipFlop_6();
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_13 = __this->get_address_of_temporal_3();
		float L_14 = L_13->get_fuzzSize_1();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = ___camera0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_15, /*hidden argument*/NULL);
		(&V_0)->set_m13_13(((float)((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-0.25f), (float)L_12)), (float)L_14))/(float)((float)((float)L_16)))));
		// camera.projectionMatrix = fuzz * camera.projectionMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = ___camera0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = ___camera0;
		NullCheck(L_19);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20;
		L_20 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_19, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21;
		L_21 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_17, L_21, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnPostRender(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnPostRender_mFC6F2B9629B6967B8C2CAA49F3A1BBEE394F772A (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	{
		// if (temporal.UseTemporal())
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_0 = __this->get_address_of_temporal_3();
		bool L_1;
		L_1 = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline((TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// camera.ResetProjectionMatrix();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_2);
		Camera_ResetProjectionMatrix_m3010D24D6ACC1880F046CAB995A1EF69B4D3C2BE(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::OnRenderImage(UnityEngine.Camera,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA_OnRenderImage_m295ADF38195E15C45CBB2FE864DD52C5010EA021 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A4CC46F93EB5208EA1486E5A23F371E49B2063C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8B45D2CC154CD46A5DEC0BEF8CF1A1A22F6A58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE40C9FA86BB24BA9A7D5971851B402EB7E9345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1CB49B59798F342981AE2AFA3000EDF7F7EF738);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_10 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_11 = NULL;
	float G_B5_0 = 0.0f;
	{
		// int width = camera.pixelWidth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// int height = camera.pixelHeight;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// bool isFirstFrame = false;
		V_2 = (bool)0;
		// QualitySettings preset = quality;
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_4 = __this->get_quality_1();
		V_3 = L_4;
		// if (settings.quality != QualityPreset.Custom)
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_5 = __this->get_address_of_settings_0();
		int32_t L_6 = L_5->get_quality_1();
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_003b;
		}
	}
	{
		// preset = QualitySettings.presetQualitySettings[(int)settings.quality];
		IL2CPP_RUNTIME_CLASS_INIT(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_7 = ((QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var))->get_presetQualitySettings_8();
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_8 = __this->get_address_of_settings_0();
		int32_t L_9 = L_8->get_quality_1();
		NullCheck(L_7);
		int32_t L_10 = L_9;
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
	}

IL_003b:
	{
		// int passEdgeDetection = (int)settings.edgeDetectionMethod;
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_12 = __this->get_address_of_settings_0();
		int32_t L_13 = L_12->get_edgeDetectionMethod_2();
		V_4 = L_13;
		// int passBlendWeights = 4;
		V_5 = 4;
		// int passNeighborhoodBlending = 5;
		V_6 = 5;
		// int passResolve = 6;
		V_7 = 6;
		// var viewProjectionMatrix = GL.GetGPUProjectionMatrix(m_ProjectionMatrix, true) * camera.worldToCameraMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = __this->get_m_ProjectionMatrix_4();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = GL_GetGPUProjectionMatrix_m8DAC433EACD75ECD86B3148EA7658F6604378457(L_14, (bool)1, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = ___camera0;
		NullCheck(L_16);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17;
		L_17 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_16, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18;
		L_18 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_15, L_17, /*hidden argument*/NULL);
		V_8 = L_18;
		// material.SetTexture(m_AreaTex, areaTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_m_AreaTex_12();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21;
		L_21 = SMAA_get_areaTexture_m6559E98F714D0E0C61C75656E08E139A4D309ECC(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_19, L_20, L_21, /*hidden argument*/NULL);
		// material.SetTexture(m_SearchTex, searchTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22;
		L_22 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_m_SearchTex_13();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24;
		L_24 = SMAA_get_searchTexture_mF0B8D821CF0530E8CF20624DE7E874941B9C2649(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_22, L_23, L_24, /*hidden argument*/NULL);
		// material.SetVector(m_Metrics, new Vector4(1f / width, 1f / height, width, height));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25;
		L_25 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_m_Metrics_14();
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_31), ((float)((float)(1.0f)/(float)((float)((float)L_27)))), ((float)((float)(1.0f)/(float)((float)((float)L_28)))), ((float)((float)L_29)), ((float)((float)L_30)), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_25, L_26, L_31, /*hidden argument*/NULL);
		// material.SetVector(m_Params1, new Vector4(preset.threshold, preset.depthThreshold, preset.maxSearchSteps, preset.maxDiagonalSearchSteps));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32;
		L_32 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_33 = __this->get_m_Params1_15();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_34 = V_3;
		float L_35 = L_34.get_threshold_2();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_36 = V_3;
		float L_37 = L_36.get_depthThreshold_3();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_38 = V_3;
		int32_t L_39 = L_38.get_maxSearchSteps_4();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_40 = V_3;
		int32_t L_41 = L_40.get_maxDiagonalSearchSteps_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_42), L_35, L_37, ((float)((float)L_39)), ((float)((float)L_41)), /*hidden argument*/NULL);
		NullCheck(L_32);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_32, L_33, L_42, /*hidden argument*/NULL);
		// material.SetVector(m_Params2, new Vector2(preset.cornerRounding, preset.localContrastAdaptationFactor));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43;
		L_43 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_44 = __this->get_m_Params2_16();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_45 = V_3;
		int32_t L_46 = L_45.get_cornerRounding_6();
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_47 = V_3;
		float L_48 = L_47.get_localContrastAdaptationFactor_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), ((float)((float)L_46)), L_48, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_50;
		L_50 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_49, /*hidden argument*/NULL);
		NullCheck(L_43);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_43, L_44, L_50, /*hidden argument*/NULL);
		// material.SetMatrix(m_ReprojectionMatrix, m_PreviousViewProjectionMatrix * Matrix4x4.Inverse(viewProjectionMatrix));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51;
		L_51 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_52 = __this->get_m_ReprojectionMatrix_18();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_53 = __this->get_m_PreviousViewProjectionMatrix_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_54 = V_8;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_55;
		L_55 = Matrix4x4_Inverse_m2A60D822437B96567202296F39BFBD617D49E72F(L_54, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_56;
		L_56 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_53, L_55, /*hidden argument*/NULL);
		NullCheck(L_51);
		Material_SetMatrix_m7266FA4400474D08A30181EE08E01760CCAEBA0A(L_51, L_52, L_56, /*hidden argument*/NULL);
		// float subsampleIndex = (m_FlipFlop < 0.0f) ? 2.0f : 1.0f;
		float L_57 = __this->get_m_FlipFlop_6();
		if ((((float)L_57) < ((float)(0.0f))))
		{
			goto IL_0151;
		}
	}
	{
		G_B5_0 = (1.0f);
		goto IL_0156;
	}

IL_0151:
	{
		G_B5_0 = (2.0f);
	}

IL_0156:
	{
		V_9 = G_B5_0;
		// material.SetVector(m_SubsampleIndices, new Vector4(subsampleIndex, subsampleIndex, subsampleIndex, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58;
		L_58 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_59 = __this->get_m_SubsampleIndices_19();
		float L_60 = V_9;
		float L_61 = V_9;
		float L_62 = V_9;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_63), L_60, L_61, L_62, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_58, L_59, L_63, /*hidden argument*/NULL);
		// Shader.DisableKeyword("USE_PREDICATION");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteral4EE40C9FA86BB24BA9A7D5971851B402EB7E9345, /*hidden argument*/NULL);
		// if (settings.edgeDetectionMethod == EdgeDetectionMethod.Depth)
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_64 = __this->get_address_of_settings_0();
		int32_t L_65 = L_64->get_edgeDetectionMethod_2();
		if ((!(((uint32_t)L_65) == ((uint32_t)3))))
		{
			goto IL_01a1;
		}
	}
	{
		// camera.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_66 = ___camera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_67 = L_66;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_67, /*hidden argument*/NULL);
		NullCheck(L_67);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_67, ((int32_t)((int32_t)L_68|(int32_t)1)), /*hidden argument*/NULL);
		// }
		goto IL_0202;
	}

IL_01a1:
	{
		// else if (predication.enabled)
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D * L_69 = __this->get_address_of_predication_2();
		bool L_70 = L_69->get_enabled_0();
		if (!L_70)
		{
			goto IL_0202;
		}
	}
	{
		// camera.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_71 = ___camera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_72, /*hidden argument*/NULL);
		NullCheck(L_72);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_72, ((int32_t)((int32_t)L_73|(int32_t)1)), /*hidden argument*/NULL);
		// Shader.EnableKeyword("USE_PREDICATION");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteral4EE40C9FA86BB24BA9A7D5971851B402EB7E9345, /*hidden argument*/NULL);
		// material.SetVector(m_Params3, new Vector3(predication.threshold, predication.scale, predication.strength));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74;
		L_74 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_75 = __this->get_m_Params3_17();
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D * L_76 = __this->get_address_of_predication_2();
		float L_77 = L_76->get_threshold_1();
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D * L_78 = __this->get_address_of_predication_2();
		float L_79 = L_78->get_scale_2();
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D * L_80 = __this->get_address_of_predication_2();
		float L_81 = L_80->get_strength_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), L_77, L_79, L_81, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_83;
		L_83 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_82, /*hidden argument*/NULL);
		NullCheck(L_74);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_74, L_75, L_83, /*hidden argument*/NULL);
	}

IL_0202:
	{
		// Shader.DisableKeyword("USE_DIAG_SEARCH");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteral3B8B45D2CC154CD46A5DEC0BEF8CF1A1A22F6A58, /*hidden argument*/NULL);
		// Shader.DisableKeyword("USE_CORNER_DETECTION");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteral0A4CC46F93EB5208EA1486E5A23F371E49B2063C, /*hidden argument*/NULL);
		// if (preset.diagonalDetection)
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_84 = V_3;
		bool L_85 = L_84.get_diagonalDetection_0();
		if (!L_85)
		{
			goto IL_0228;
		}
	}
	{
		// Shader.EnableKeyword("USE_DIAG_SEARCH");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteral3B8B45D2CC154CD46A5DEC0BEF8CF1A1A22F6A58, /*hidden argument*/NULL);
	}

IL_0228:
	{
		// if (preset.cornerDetection)
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_86 = V_3;
		bool L_87 = L_86.get_cornerDetection_1();
		if (!L_87)
		{
			goto IL_023a;
		}
	}
	{
		// Shader.EnableKeyword("USE_CORNER_DETECTION");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteral0A4CC46F93EB5208EA1486E5A23F371E49B2063C, /*hidden argument*/NULL);
	}

IL_023a:
	{
		// Shader.DisableKeyword("USE_UV_BASED_REPROJECTION");
		Shader_DisableKeyword_mA6360809F3D85D7D0CAE3EE3C9A85987EC60DBCF(_stringLiteralA1CB49B59798F342981AE2AFA3000EDF7F7EF738, /*hidden argument*/NULL);
		// if (temporal.UseTemporal())
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_88 = __this->get_address_of_temporal_3();
		bool L_89;
		L_89 = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline((TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *)L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_025b;
		}
	}
	{
		// Shader.EnableKeyword("USE_UV_BASED_REPROJECTION");
		Shader_EnableKeyword_m9AC58243D7FBD69DD73D13B73085E0B24E4ECFCE(_stringLiteralA1CB49B59798F342981AE2AFA3000EDF7F7EF738, /*hidden argument*/NULL);
	}

IL_025b:
	{
		// if (m_Accumulation == null || (m_Accumulation.width != width || m_Accumulation.height != height))
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_90 = __this->get_m_Accumulation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_90, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_0285;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_92 = __this->get_m_Accumulation_7();
		NullCheck(L_92);
		int32_t L_93;
		L_93 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_92);
		int32_t L_94 = V_0;
		if ((!(((uint32_t)L_93) == ((uint32_t)L_94))))
		{
			goto IL_0285;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_95 = __this->get_m_Accumulation_7();
		NullCheck(L_95);
		int32_t L_96;
		L_96 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_95);
		int32_t L_97 = V_1;
		if ((((int32_t)L_96) == ((int32_t)L_97)))
		{
			goto IL_02c1;
		}
	}

IL_0285:
	{
		// if (m_Accumulation)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_98 = __this->get_m_Accumulation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_029d;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(m_Accumulation);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_100 = __this->get_m_Accumulation_7();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_100, /*hidden argument*/NULL);
	}

IL_029d:
	{
		// m_Accumulation = RenderTexture.GetTemporary(width, height, 0, source.format, RenderTextureReadWrite.Linear);
		int32_t L_101 = V_0;
		int32_t L_102 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_103 = ___source1;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_103, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_105;
		L_105 = RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1(L_101, L_102, 0, L_104, 1, /*hidden argument*/NULL);
		__this->set_m_Accumulation_7(L_105);
		// m_Accumulation.hideFlags = HideFlags.HideAndDontSave;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_106 = __this->get_m_Accumulation_7();
		NullCheck(L_106);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_106, ((int32_t)61), /*hidden argument*/NULL);
		// isFirstFrame = true;
		V_2 = (bool)1;
	}

IL_02c1:
	{
		// RenderTexture rt1 = TempRT(width, height, source.format);
		int32_t L_107 = V_0;
		int32_t L_108 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_109 = ___source1;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_109, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_111;
		L_111 = SMAA_TempRT_mAD94E1E3DE7B19BA17494BC26E6BA089F3B23E32(__this, L_107, L_108, L_110, /*hidden argument*/NULL);
		V_10 = L_111;
		// Graphics.Blit(null, rt1, material, 0); // Clear
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_112 = V_10;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_113;
		L_113 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, L_112, L_113, 0, /*hidden argument*/NULL);
		// Graphics.Blit(source, rt1, material, passEdgeDetection);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_114 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_115 = V_10;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_116;
		L_116 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_117 = V_4;
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_114, L_115, L_116, L_117, /*hidden argument*/NULL);
		// if (settings.debugPass == DebugPass.Edges)
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_118 = __this->get_address_of_settings_0();
		int32_t L_119 = L_118->get_debugPass_0();
		if ((!(((uint32_t)L_119) == ((uint32_t)1))))
		{
			goto IL_030b;
		}
	}
	{
		// Graphics.Blit(rt1, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_120 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_121 = ___destination2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_120, L_121, /*hidden argument*/NULL);
		// }
		goto IL_0400;
	}

IL_030b:
	{
		// RenderTexture rt2 = TempRT(width, height, source.format);
		int32_t L_122 = V_0;
		int32_t L_123 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_124 = ___source1;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = RenderTexture_get_format_mB9BBCACA0A809206FA73109ACF2A6976E19DB822(L_124, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_126;
		L_126 = SMAA_TempRT_mAD94E1E3DE7B19BA17494BC26E6BA089F3B23E32(__this, L_122, L_123, L_125, /*hidden argument*/NULL);
		V_11 = L_126;
		// Graphics.Blit(null, rt2, material, 0); // Clear
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = V_11;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_128;
		L_128 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, L_127, L_128, 0, /*hidden argument*/NULL);
		// Graphics.Blit(rt1, rt2, material, passBlendWeights);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_129 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_130 = V_11;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_131;
		L_131 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_132 = V_5;
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_129, L_130, L_131, L_132, /*hidden argument*/NULL);
		// if (settings.debugPass == DebugPass.Weights)
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_133 = __this->get_address_of_settings_0();
		int32_t L_134 = L_133->get_debugPass_0();
		if ((!(((uint32_t)L_134) == ((uint32_t)2))))
		{
			goto IL_0356;
		}
	}
	{
		// Graphics.Blit(rt2, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_135 = V_11;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_136 = ___destination2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_135, L_136, /*hidden argument*/NULL);
		// }
		goto IL_03f9;
	}

IL_0356:
	{
		// material.SetTexture(m_BlendTex, rt2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_137;
		L_137 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_138 = __this->get_m_BlendTex_20();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_139 = V_11;
		NullCheck(L_137);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_137, L_138, L_139, /*hidden argument*/NULL);
		// if (temporal.UseTemporal())
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * L_140 = __this->get_address_of_temporal_3();
		bool L_141;
		L_141 = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline((TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *)L_140, /*hidden argument*/NULL);
		if (!L_141)
		{
			goto IL_03ea;
		}
	}
	{
		// Graphics.Blit(source, rt1, material, passNeighborhoodBlending);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_142 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_143 = V_10;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_144;
		L_144 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_145 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_142, L_143, L_144, L_145, /*hidden argument*/NULL);
		// if (settings.debugPass == DebugPass.Accumulation)
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE * L_146 = __this->get_address_of_settings_0();
		int32_t L_147 = L_146->get_debugPass_0();
		if ((!(((uint32_t)L_147) == ((uint32_t)3))))
		{
			goto IL_03a2;
		}
	}
	{
		// Graphics.Blit(m_Accumulation, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_148 = __this->get_m_Accumulation_7();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_149 = ___destination2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_148, L_149, /*hidden argument*/NULL);
		// }
		goto IL_03d6;
	}

IL_03a2:
	{
		// else if (!isFirstFrame)
		bool L_150 = V_2;
		if (L_150)
		{
			goto IL_03ce;
		}
	}
	{
		// material.SetTexture(m_AccumulationTex, m_Accumulation);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_151;
		L_151 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_152 = __this->get_m_AccumulationTex_21();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_153 = __this->get_m_Accumulation_7();
		NullCheck(L_151);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_151, L_152, L_153, /*hidden argument*/NULL);
		// Graphics.Blit(rt1, destination, material, passResolve);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_154 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_155 = ___destination2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_156;
		L_156 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_157 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_154, L_155, L_156, L_157, /*hidden argument*/NULL);
		// }
		goto IL_03d6;
	}

IL_03ce:
	{
		// Graphics.Blit(rt1, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_158 = V_10;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_159 = ___destination2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_158, L_159, /*hidden argument*/NULL);
	}

IL_03d6:
	{
		// Graphics.Blit(destination, m_Accumulation);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_160 = ___destination2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_161 = __this->get_m_Accumulation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_160, L_161, /*hidden argument*/NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// }
		goto IL_03f9;
	}

IL_03ea:
	{
		// Graphics.Blit(source, destination, material, passNeighborhoodBlending);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_162 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_163 = ___destination2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_164;
		L_164 = SMAA_get_material_mA3954568CA1DB8F26E05C840D3F365863930B207(__this, /*hidden argument*/NULL);
		int32_t L_165 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_162, L_163, L_164, L_165, /*hidden argument*/NULL);
	}

IL_03f9:
	{
		// RenderTexture.ReleaseTemporary(rt2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_166 = V_11;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_166, /*hidden argument*/NULL);
	}

IL_0400:
	{
		// RenderTexture.ReleaseTemporary(rt1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_167 = V_10;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_167, /*hidden argument*/NULL);
		// m_PreviousViewProjectionMatrix = viewProjectionMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_168 = V_8;
		__this->set_m_PreviousViewProjectionMatrix_5(L_168);
		// }
		return;
	}
}
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.SMAA::TempRT(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * SMAA_TempRT_mAD94E1E3DE7B19BA17494BC26E6BA089F3B23E32 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int depthStencilBits = 0;
		V_0 = 0;
		// return RenderTexture.GetTemporary(width, height, depthStencilBits, format, RenderTextureReadWrite.Linear);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___format2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1(L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMAA__ctor_m3AF4A1FB73C7302DE8AA7641C4A76B2045E17782 (SMAA_tD994B56D2EA82968B8D02CA75A57FDE1E81C3B70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GlobalSettings settings = GlobalSettings.defaultSettings;
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  L_0;
		L_0 = GlobalSettings_get_defaultSettings_m85E900E383D040C4AE3CACDF13F1234B920E1719(/*hidden argument*/NULL);
		__this->set_settings_0(L_0);
		// public QualitySettings quality = QualitySettings.presetQualitySettings[2];
		IL2CPP_RUNTIME_CLASS_INIT(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_1 = ((QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var))->get_presetQualitySettings_8();
		NullCheck(L_1);
		int32_t L_2 = 2;
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_quality_1(L_3);
		// public PredicationSettings predication = PredicationSettings.defaultSettings;
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  L_4;
		L_4 = PredicationSettings_get_defaultSettings_m4B5D6EC28014F4DB9BE982F667C6C61E25CB1151(/*hidden argument*/NULL);
		__this->set_predication_2(L_4);
		// public TemporalSettings temporal = TemporalSettings.defaultSettings;
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  L_5;
		L_5 = TemporalSettings_get_defaultSettings_m1054DAE951E9EC6DEA217F7F8F46460FF073CE47(/*hidden argument*/NULL);
		__this->set_temporal_3(L_5);
		// private float m_FlipFlop = 1.0f;
		__this->set_m_FlipFlop_6((1.0f));
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
// System.Boolean UnityStandardAssets.ImageEffects.ScreenOverlay::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScreenOverlay_CheckResources_mDC30CB8BAB81DA4EB1176628FDFEB5F650DE351C (ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		// overlayMaterial = CheckShaderAndCreateMaterial (overlayShader, overlayMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_overlayShader_11();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_overlayMaterial_12();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->set_overlayMaterial_12(L_3);
		// if    (!isSupported)
		bool L_4 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenOverlay_OnRenderImage_m5A4BA1B7FB006E1AA855C1CF5589E7379B4A55E6 (ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36C08270F0656B15564B93B095160EB52C35960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// Vector4 UV_Transform = new  Vector4(1, 0, 0, 1);
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		// overlayMaterial.SetVector("_UV_Transform", UV_Transform);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_overlayMaterial_12();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = V_0;
		NullCheck(L_3);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_3, _stringLiteralE2F7A8CE1FA46E6E74F4D250C9E035A039D8FAEA, L_4, /*hidden argument*/NULL);
		// overlayMaterial.SetFloat ("_Intensity", intensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_overlayMaterial_12();
		float L_6 = __this->get_intensity_9();
		NullCheck(L_5);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_5, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_6, /*hidden argument*/NULL);
		// overlayMaterial.SetTexture ("_Overlay", texture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_overlayMaterial_12();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_texture_10();
		NullCheck(L_7);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_7, _stringLiteralC36C08270F0656B15564B93B095160EB52C35960, L_8, /*hidden argument*/NULL);
		// Graphics.Blit (source, destination, overlayMaterial, (int) blendMode);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_overlayMaterial_12();
		int32_t L_12 = __this->get_blendMode_8();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ScreenOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenOverlay__ctor_mD098EF34DFC76C199E76E8052230EB389A0CC13C (ScreenOverlay_tE09210708DAA2E658E833230F314F26E830CD236 * __this, const RuntimeMethod* method)
{
	{
		// public OverlayBlendMode blendMode = OverlayBlendMode.Overlay;
		__this->set_blendMode_8(3);
		// public float intensity = 1.0f;
		__this->set_intensity_9((1.0f));
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SunShafts_CheckResources_mB28807554E1C72E8EF1788C47C0C35FFD8542C92 (SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (useDepthTexture);
		bool L_0 = __this->get_useDepthTexture_17();
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, L_0, /*hidden argument*/NULL);
		// sunShaftsMaterial = CheckShaderAndCreateMaterial (sunShaftsShader, sunShaftsMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_sunShaftsShader_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_sunShaftsMaterial_19();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_2, L_3, /*hidden argument*/NULL);
		__this->set_sunShaftsMaterial_19(L_4);
		// simpleClearMaterial = CheckShaderAndCreateMaterial (simpleClearShader, simpleClearMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = __this->get_simpleClearShader_20();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_simpleClearMaterial_21();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_5, L_6, /*hidden argument*/NULL);
		__this->set_simpleClearMaterial_21(L_7);
		// if (!isSupported)
		bool L_8 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// return isSupported;
		bool L_9 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts_OnRenderImage_mC38080C46A73ECC5566648935E08F1BDE5387FBB (SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_4 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t G_B15_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B25_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B25_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B25_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B24_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B24_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B26_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B26_2 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B26_3 = NULL;
	{
		// if (CheckResources()==false) {
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_1, L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (useDepthTexture)
		bool L_3 = __this->get_useDepthTexture_17();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_5, ((int32_t)((int32_t)L_6|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// int divider = 4;
		V_0 = 4;
		// if (resolution == SunShaftsResolution.Normal)
		int32_t L_7 = __this->get_resolution_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// divider = 2;
		V_0 = 2;
		goto IL_0045;
	}

IL_003a:
	{
		// else if (resolution == SunShaftsResolution.High)
		int32_t L_8 = __this->get_resolution_8();
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// divider = 1;
		V_0 = 1;
	}

IL_0045:
	{
		// Vector3 v = Vector3.one * 0.5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (0.5f), /*hidden argument*/NULL);
		V_1 = L_10;
		// if (sunTransform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_sunTransform_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// v = GetComponent<Camera>().WorldToViewportPoint (sunTransform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_sunTransform_10();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_13, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0091;
	}

IL_007b:
	{
		// v = new Vector3(0.5f, 0.5f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
	}

IL_0091:
	{
		// int rtW = source.width / divider;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = ___source0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		int32_t L_19 = V_0;
		V_2 = ((int32_t)((int32_t)L_18/(int32_t)L_19));
		// int rtH = source.height / divider;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		int32_t L_22 = V_0;
		V_3 = ((int32_t)((int32_t)L_21/(int32_t)L_22));
		// RenderTexture lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_25;
		L_25 = RenderTexture_GetTemporary_m8E43C234388D8688B70498F6663F05925EFBD4C9(L_23, L_24, 0, /*hidden argument*/NULL);
		V_5 = L_25;
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (1.0f, 1.0f, 0.0f, 0.0f) * sunShaftBlurRadius );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_sunShaftsMaterial_19();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_27), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_28 = __this->get_sunShaftBlurRadius_14();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_29;
		L_29 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_26, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_29, /*hidden argument*/NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = __this->get_sunShaftsMaterial_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_1;
		float L_32 = L_31.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_1;
		float L_34 = L_33.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_1;
		float L_36 = L_35.get_z_4();
		float L_37 = __this->get_maxRadius_16();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_38), L_32, L_34, L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_30, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_38, /*hidden argument*/NULL);
		// sunShaftsMaterial.SetVector ("_SunThreshold", sunThreshold);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = __this->get_sunShaftsMaterial_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40 = __this->get_sunThreshold_13();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_41;
		L_41 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_39, _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA, L_41, /*hidden argument*/NULL);
		// if (!useDepthTexture) {
		bool L_42 = __this->get_useDepthTexture_17();
		if (L_42)
		{
			goto IL_0198;
		}
	}
	{
		// var format = GetComponent<Camera>().allowHDR ? RenderTextureFormat.DefaultHDR : RenderTextureFormat.Default;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_43;
		L_43 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		NullCheck(L_43);
		bool L_44;
		L_44 = Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0141;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0143;
	}

IL_0141:
	{
		G_B15_0 = ((int32_t)9);
	}

IL_0143:
	{
		V_7 = G_B15_0;
		// RenderTexture tmpBuffer = RenderTexture.GetTemporary (source.width, source.height, 0, format);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_45 = ___source0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_47 = ___source0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_7;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_50;
		L_50 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_46, L_48, 0, L_49, /*hidden argument*/NULL);
		V_8 = L_50;
		// RenderTexture.active = tmpBuffer;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_51 = V_8;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_51, /*hidden argument*/NULL);
		// GL.ClearWithSkybox (false, GetComponent<Camera>());
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_52;
		L_52 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		GL_ClearWithSkybox_m13E436C5D2509D68BB488AF21313BE238E756EB2((bool)0, L_52, /*hidden argument*/NULL);
		// sunShaftsMaterial.SetTexture ("_Skybox", tmpBuffer);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = __this->get_sunShaftsMaterial_19();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = V_8;
		NullCheck(L_53);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_53, _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE, L_54, /*hidden argument*/NULL);
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 3);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_55 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_56 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = __this->get_sunShaftsMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_55, L_56, L_57, 3, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (tmpBuffer);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_58 = V_8;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_58, /*hidden argument*/NULL);
		// }
		goto IL_01a7;
	}

IL_0198:
	{
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_59 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_60 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_61 = __this->get_sunShaftsMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_59, L_60, L_61, 2, /*hidden argument*/NULL);
	}

IL_01a7:
	{
		// DrawBorder (lrDepthBuffer, simpleClearMaterial);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_62 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63 = __this->get_simpleClearMaterial_21();
		PostEffectsBase_DrawBorder_m0FA412FECC786A5623F734DBD9D1F7EE016BE7E2(__this, L_62, L_63, /*hidden argument*/NULL);
		// radialBlurIterations = Mathf.Clamp (radialBlurIterations, 1, 4);
		int32_t L_64 = __this->get_radialBlurIterations_11();
		int32_t L_65;
		L_65 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_64, 1, 4, /*hidden argument*/NULL);
		__this->set_radialBlurIterations_11(L_65);
		// float ofs = sunShaftBlurRadius * (1.0f / 768.0f);
		float L_66 = __this->get_sunShaftBlurRadius_14();
		V_6 = ((float)il2cpp_codegen_multiply((float)L_66, (float)(0.00130208337f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67 = __this->get_sunShaftsMaterial_19();
		float L_68 = V_6;
		float L_69 = V_6;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_70), L_68, L_69, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_67, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_70, /*hidden argument*/NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_71 = __this->get_sunShaftsMaterial_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = V_1;
		float L_73 = L_72.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_1;
		float L_75 = L_74.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_1;
		float L_77 = L_76.get_z_4();
		float L_78 = __this->get_maxRadius_16();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_79), L_73, L_75, L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_71);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_71, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_79, /*hidden argument*/NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		V_9 = 0;
		goto IL_0304;
	}

IL_022e:
	{
		// lrColorB = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_80 = V_2;
		int32_t L_81 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_82;
		L_82 = RenderTexture_GetTemporary_m8E43C234388D8688B70498F6663F05925EFBD4C9(L_80, L_81, 0, /*hidden argument*/NULL);
		V_4 = L_82;
		// Graphics.Blit (lrDepthBuffer, lrColorB, sunShaftsMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_83 = V_5;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_84 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_85 = __this->get_sunShaftsMaterial_19();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_83, L_84, L_85, 1, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_86 = V_5;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_86, /*hidden argument*/NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 1.0f) * 6.0f)) / 768.0f;
		float L_87 = __this->get_sunShaftBlurRadius_14();
		int32_t L_88 = V_9;
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_87, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_88)), (float)(2.0f))), (float)(1.0f))), (float)(6.0f)))))/(float)(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89 = __this->get_sunShaftsMaterial_19();
		float L_90 = V_6;
		float L_91 = V_6;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_92), L_90, L_91, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_89);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_89, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_92, /*hidden argument*/NULL);
		// lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_93 = V_2;
		int32_t L_94 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_95;
		L_95 = RenderTexture_GetTemporary_m8E43C234388D8688B70498F6663F05925EFBD4C9(L_93, L_94, 0, /*hidden argument*/NULL);
		V_5 = L_95;
		// Graphics.Blit (lrColorB, lrDepthBuffer, sunShaftsMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_96 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_97 = V_5;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_98 = __this->get_sunShaftsMaterial_19();
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_96, L_97, L_98, 1, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (lrColorB);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_99 = V_4;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_99, /*hidden argument*/NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 2.0f) * 6.0f)) / 768.0f;
		float L_100 = __this->get_sunShaftBlurRadius_14();
		int32_t L_101 = V_9;
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_100, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_101)), (float)(2.0f))), (float)(2.0f))), (float)(6.0f)))))/(float)(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_102 = __this->get_sunShaftsMaterial_19();
		float L_103 = V_6;
		float L_104 = V_6;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_105), L_103, L_104, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_102);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_102, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_105, /*hidden argument*/NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_106 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_0304:
	{
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_107 = V_9;
		int32_t L_108 = __this->get_radialBlurIterations_11();
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_022e;
		}
	}
	{
		// if (v.z >= 0.0f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = V_1;
		float L_110 = L_109.get_z_4();
		if ((!(((float)L_110) >= ((float)(0.0f)))))
		{
			goto IL_036c;
		}
	}
	{
		// sunShaftsMaterial.SetVector ("_SunColor", new Vector4 (sunColor.r, sunColor.g, sunColor.b, sunColor.a) * sunShaftIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_111 = __this->get_sunShaftsMaterial_19();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_112 = __this->get_address_of_sunColor_12();
		float L_113 = L_112->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_114 = __this->get_address_of_sunColor_12();
		float L_115 = L_114->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_116 = __this->get_address_of_sunColor_12();
		float L_117 = L_116->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_118 = __this->get_address_of_sunColor_12();
		float L_119 = L_118->get_a_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_120), L_113, L_115, L_117, L_119, /*hidden argument*/NULL);
		float L_121 = __this->get_sunShaftIntensity_15();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_122;
		L_122 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline(L_120, L_121, /*hidden argument*/NULL);
		NullCheck(L_111);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_111, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_122, /*hidden argument*/NULL);
		goto IL_0381;
	}

IL_036c:
	{
		// sunShaftsMaterial.SetVector ("_SunColor", Vector4.zero); // no backprojection !
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_123 = __this->get_sunShaftsMaterial_19();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_124;
		L_124 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		NullCheck(L_123);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_123, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_124, /*hidden argument*/NULL);
	}

IL_0381:
	{
		// sunShaftsMaterial.SetTexture ("_ColorBuffer", lrDepthBuffer);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125 = __this->get_sunShaftsMaterial_19();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_126 = V_5;
		NullCheck(L_125);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_125, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_126, /*hidden argument*/NULL);
		// Graphics.Blit (source, destination, sunShaftsMaterial, (screenBlendMode == ShaftsScreenBlendMode.Screen) ? 0 : 4);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_127 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_128 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_129 = __this->get_sunShaftsMaterial_19();
		int32_t L_130 = __this->get_screenBlendMode_9();
		G_B24_0 = L_129;
		G_B24_1 = L_128;
		G_B24_2 = L_127;
		if (!L_130)
		{
			G_B25_0 = L_129;
			G_B25_1 = L_128;
			G_B25_2 = L_127;
			goto IL_03a6;
		}
	}
	{
		G_B26_0 = 4;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_03a7;
	}

IL_03a6:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_03a7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(G_B26_3, G_B26_2, G_B26_1, G_B26_0, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_131 = V_5;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_131, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts__ctor_mB7B9475D995407A720DFAD133A94BA799C5B2AE3 (SunShafts_t55826A6B2570077F58FF1CC50BC89A26FCBC4F71 * __this, const RuntimeMethod* method)
{
	{
		// public SunShaftsResolution resolution = SunShaftsResolution.Normal;
		__this->set_resolution_8(1);
		// public int radialBlurIterations = 2;
		__this->set_radialBlurIterations_11(2);
		// public Color sunColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_sunColor_12(L_0);
		// public Color sunThreshold = new Color(0.87f,0.74f,0.65f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (0.870000005f), (0.74000001f), (0.649999976f), /*hidden argument*/NULL);
		__this->set_sunThreshold_13(L_1);
		// public float sunShaftBlurRadius = 2.5f;
		__this->set_sunShaftBlurRadius_14((2.5f));
		// public float sunShaftIntensity = 1.15f;
		__this->set_sunShaftIntensity_15((1.14999998f));
		// public float maxRadius = 0.75f;
		__this->set_maxRadius_16((0.75f));
		// public bool  useDepthTexture = true;
		__this->set_useDepthTexture_17((bool)1);
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m3FBACEA56E7B0437BE854A153B647480531C2F7A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_0 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// if (null == meshes[i])
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_1 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_8 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles_Cleanup_m08DA8845F1CF35B11916649B0C6ED78406D1ED97 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_0 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_1 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate(meshes[i]);
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_6 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_9, /*hidden argument*/NULL);
		// meshes[i] = null;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_10 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_14 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->set_meshes_0((MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Triangles_GetMeshes_m3DB03D7EDEE1CBDB6D28072770AE20AA44003234 (int32_t ___totalWidth0, int32_t ___totalHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes() && (currentTris == (totalWidth * totalHeight)))
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Triangles_HasMeshes_m3FBACEA56E7B0437BE854A153B647480531C2F7A(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_currentTris_1();
		int32_t L_2 = ___totalWidth0;
		int32_t L_3 = ___totalHeight1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_4 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_4;
	}

IL_0017:
	{
		// int maxTris = 65000 / 3;
		V_0 = ((int32_t)21666);
		// int totalTris = totalWidth * totalHeight;
		int32_t L_5 = ___totalWidth0;
		int32_t L_6 = ___totalHeight1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		// currentTris = totalTris;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->set_currentTris_1(L_7);
		// int meshCount = Mathf.CeilToInt((1.0f * totalTris) / (1.0f * maxTris));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_8))))/(float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)L_9)))))), /*hidden argument*/NULL);
		// meshes = new Mesh[meshCount];
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_11 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)SZArrayNew(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->set_meshes_0(L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalTris; i += maxTris)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int tris = Mathf.FloorToInt(Mathf.Clamp((totalTris - i), 0, maxTris));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), 0, L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_15)), /*hidden argument*/NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh(tris, i, totalWidth, totalHeight);
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_17 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___totalWidth0;
		int32_t L_22 = ___totalHeight1;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_23;
		L_23 = Triangles_GetMesh_m28C77B830B07AECCBA2E163BFA8B37768E738602(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		IL2CPP_RUNTIME_CLASS_INIT(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_29 = ((Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD_il2cpp_TypeInfo_var))->get_meshes_0();
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * Triangles_GetMesh_m28C77B830B07AECCBA2E163BFA8B37768E738602 (int32_t ___triCount0, int32_t ___triOffset1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_2 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_1, ((int32_t)52), /*hidden argument*/NULL);
		// var verts = new Vector3[triCount * 3];
		int32_t L_2 = ___triCount0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 3];
		int32_t L_4 = ___triCount0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 3];
		int32_t L_6 = ___triCount0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3)));
		V_3 = L_7;
		// var tris = new int[triCount * 3];
		int32_t L_8 = ___triCount0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)3)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_014d;
	}

IL_003b:
	{
		// int i3 = i * 3;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)3));
		// int vertexWithOffset = triOffset + i;
		int32_t L_11 = ___triOffset1;
		int32_t L_12 = V_5;
		// float x = Mathf.Floor(vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		int32_t L_14 = ___totalWidth2;
		float L_15;
		L_15 = floorf(((float)((float)((int32_t)((int32_t)L_13%(int32_t)L_14)))));
		int32_t L_16 = ___totalWidth2;
		V_7 = ((float)((float)L_15/(float)((float)((float)L_16))));
		// float y = Mathf.Floor(vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_17 = ___totalWidth2;
		float L_18;
		L_18 = floorf(((float)((float)((int32_t)((int32_t)L_13/(int32_t)L_17)))));
		int32_t L_19 = ___totalHeight3;
		V_8 = ((float)((float)L_18/(float)((float)((float)L_19))));
		// Vector3 position = new Vector3(x * 2 - 1, y * 2 - 1, 1.0f);
		float L_20 = V_7;
		float L_21 = V_8;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(2.0f))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(2.0f))), (float)(1.0f))), (1.0f), /*hidden argument*/NULL);
		// verts[i3 + 0] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = V_1;
		int32_t L_23 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_9;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_24);
		// verts[i3 + 1] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = V_1;
		int32_t L_26 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_9;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_27);
		// verts[i3 + 2] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = V_1;
		int32_t L_29 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_9;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_30);
		// uvs[i3 + 0] = new Vector2(0.0f, 0.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_31 = V_2;
		int32_t L_32 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_33), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_33);
		// uvs[i3 + 1] = new Vector2(1.0f, 0.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_34 = V_2;
		int32_t L_35 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_36), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_36);
		// uvs[i3 + 2] = new Vector2(0.0f, 1.0f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_37 = V_2;
		int32_t L_38 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_39);
		// uvs2[i3 + 0] = new Vector2(x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_40 = V_3;
		int32_t L_41 = V_6;
		float L_42 = V_7;
		float L_43 = V_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_44), L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_44);
		// uvs2[i3 + 1] = new Vector2(x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_45 = V_3;
		int32_t L_46 = V_6;
		float L_47 = V_7;
		float L_48 = V_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_49);
		// uvs2[i3 + 2] = new Vector2(x, y);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_50 = V_3;
		int32_t L_51 = V_6;
		float L_52 = V_7;
		float L_53 = V_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_54), L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_54);
		// tris[i3 + 0] = i3 + 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = V_4;
		int32_t L_56 = V_6;
		int32_t L_57 = V_6;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (int32_t)L_57);
		// tris[i3 + 1] = i3 + 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = V_4;
		int32_t L_59 = V_6;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1)));
		// tris[i3 + 2] = i3 + 2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = V_4;
		int32_t L_62 = V_6;
		int32_t L_63 = V_6;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)2)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_014d:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_65 = V_5;
		int32_t L_66 = ___triCount0;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_67 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = V_1;
		NullCheck(L_67);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_67, L_68, /*hidden argument*/NULL);
		// mesh.triangles = tris;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_69 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = V_4;
		NullCheck(L_69);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_69, L_70, /*hidden argument*/NULL);
		// mesh.uv = uvs;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_71 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_72 = V_2;
		NullCheck(L_71);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_71, L_72, /*hidden argument*/NULL);
		// mesh.uv2 = uvs2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_73 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_74 = V_3;
		NullCheck(L_73);
		Mesh_set_uv2_mE60F42676D5CD294524617262BABEB81B9FB8F22(L_73, L_74, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_75 = V_0;
		return L_75;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles__ctor_mD0658EDAF0999D9BDA2C1FBFCBB83A551FCEBF18 (Triangles_t19917C5DCF77885F04CC3F083662644421AD56FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles__cctor_mB6CCFBA963D829EA0C65E5DE04B12BA437FA97B7 (const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_extremePerformancePreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremePerformancePreset_m2018CA7D4240D6CF21CB2C25D487CEBF7485DE62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ExtremePerformance; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_ExtremePerformance_2();
		return L_0;
	}
}
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_performancePreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_performancePreset_mBB188710C56BCAC6ECB6B33302EEBC56457D47A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Performance; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Performance_3();
		return L_0;
	}
}
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_defaultPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_defaultPreset_mD01A6F06B2BA7679A068AEDB8532175D4ABCE70B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Default; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Default_4();
		return L_0;
	}
}
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_qualityPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_qualityPreset_m24960A987050A205A2B7CF377CE7CFD577759B79 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Quality; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Quality_5();
		return L_0;
	}
}
// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA/Preset::get_extremeQualityPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremeQualityPreset_mB0E7F93A5C296AE2450514FFFF3801BBEF76E382 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ExtremeQuality; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_ExtremeQuality_6();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.FXAA/Preset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__cctor_m78EBC01544459CC45AE4F85E14DC94F1DCE7192A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  V_0;
	memset((&V_0), 0, sizeof(V_0));
	QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// private static readonly Preset s_ExtremePerformance = new Preset
		// {
		//     qualitySettings = new QualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0.0f,
		//         edgeDetectionThreshold = 0.333f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     consoleSettings = new ConsoleSettings
		//     {
		//         subpixelSpreadAmount = 0.33f,
		//         edgeSharpnessAmount = 8.0f,
		//         edgeDetectionThreshold = 0.25f,
		//         minimumRequiredLuminance = 0.06f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 ));
		il2cpp_codegen_initobj((&V_1), sizeof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 ));
		(&V_1)->set_subpixelAliasingRemovalAmount_0((0.0f));
		(&V_1)->set_edgeDetectionThreshold_1((0.333000004f));
		(&V_1)->set_minimumRequiredLuminance_2((0.0833000019f));
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  L_0 = V_1;
		(&V_0)->set_qualitySettings_0(L_0);
		il2cpp_codegen_initobj((&V_2), sizeof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 ));
		(&V_2)->set_subpixelSpreadAmount_0((0.330000013f));
		(&V_2)->set_edgeSharpnessAmount_1((8.0f));
		(&V_2)->set_edgeDetectionThreshold_2((0.25f));
		(&V_2)->set_minimumRequiredLuminance_3((0.0599999987f));
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  L_1 = V_2;
		(&V_0)->set_consoleSettings_1(L_1);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_2 = V_0;
		((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->set_s_ExtremePerformance_2(L_2);
		// private static readonly Preset s_Performance = new Preset
		// {
		//     qualitySettings = new QualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0.25f,
		//         edgeDetectionThreshold = 0.25f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     consoleSettings = new ConsoleSettings
		//     {
		//         subpixelSpreadAmount = 0.33f,
		//         edgeSharpnessAmount = 8.0f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.06f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 ));
		il2cpp_codegen_initobj((&V_1), sizeof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 ));
		(&V_1)->set_subpixelAliasingRemovalAmount_0((0.25f));
		(&V_1)->set_edgeDetectionThreshold_1((0.25f));
		(&V_1)->set_minimumRequiredLuminance_2((0.0833000019f));
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  L_3 = V_1;
		(&V_0)->set_qualitySettings_0(L_3);
		il2cpp_codegen_initobj((&V_2), sizeof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 ));
		(&V_2)->set_subpixelSpreadAmount_0((0.330000013f));
		(&V_2)->set_edgeSharpnessAmount_1((8.0f));
		(&V_2)->set_edgeDetectionThreshold_2((0.125f));
		(&V_2)->set_minimumRequiredLuminance_3((0.0599999987f));
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  L_4 = V_2;
		(&V_0)->set_consoleSettings_1(L_4);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_5 = V_0;
		((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->set_s_Performance_3(L_5);
		// private static readonly Preset s_Default = new Preset
		// {
		//     qualitySettings = new QualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0.75f,
		//         edgeDetectionThreshold = 0.166f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     consoleSettings = new ConsoleSettings
		//     {
		//         subpixelSpreadAmount = 0.5f,
		//         edgeSharpnessAmount = 8.0f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.05f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 ));
		il2cpp_codegen_initobj((&V_1), sizeof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 ));
		(&V_1)->set_subpixelAliasingRemovalAmount_0((0.75f));
		(&V_1)->set_edgeDetectionThreshold_1((0.165999994f));
		(&V_1)->set_minimumRequiredLuminance_2((0.0833000019f));
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  L_6 = V_1;
		(&V_0)->set_qualitySettings_0(L_6);
		il2cpp_codegen_initobj((&V_2), sizeof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 ));
		(&V_2)->set_subpixelSpreadAmount_0((0.5f));
		(&V_2)->set_edgeSharpnessAmount_1((8.0f));
		(&V_2)->set_edgeDetectionThreshold_2((0.125f));
		(&V_2)->set_minimumRequiredLuminance_3((0.0500000007f));
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  L_7 = V_2;
		(&V_0)->set_consoleSettings_1(L_7);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_8 = V_0;
		((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->set_s_Default_4(L_8);
		// private static readonly Preset s_Quality = new Preset
		// {
		//     qualitySettings = new QualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 1.0f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.0625f
		//     },
		// 
		//     consoleSettings = new ConsoleSettings
		//     {
		//         subpixelSpreadAmount = 0.5f,
		//         edgeSharpnessAmount = 4.0f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.04f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 ));
		il2cpp_codegen_initobj((&V_1), sizeof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 ));
		(&V_1)->set_subpixelAliasingRemovalAmount_0((1.0f));
		(&V_1)->set_edgeDetectionThreshold_1((0.125f));
		(&V_1)->set_minimumRequiredLuminance_2((0.0625f));
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  L_9 = V_1;
		(&V_0)->set_qualitySettings_0(L_9);
		il2cpp_codegen_initobj((&V_2), sizeof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 ));
		(&V_2)->set_subpixelSpreadAmount_0((0.5f));
		(&V_2)->set_edgeSharpnessAmount_1((4.0f));
		(&V_2)->set_edgeDetectionThreshold_2((0.125f));
		(&V_2)->set_minimumRequiredLuminance_3((0.0399999991f));
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  L_10 = V_2;
		(&V_0)->set_consoleSettings_1(L_10);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_11 = V_0;
		((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->set_s_Quality_5(L_11);
		// private static readonly Preset s_ExtremeQuality = new Preset
		// {
		//     qualitySettings = new QualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 1.0f,
		//         edgeDetectionThreshold = 0.063f,
		//         minimumRequiredLuminance = 0.0312f
		//     },
		// 
		//     consoleSettings = new ConsoleSettings
		//     {
		//         subpixelSpreadAmount = 0.5f,
		//         edgeSharpnessAmount = 2.0f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.04f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87 ));
		il2cpp_codegen_initobj((&V_1), sizeof(QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643 ));
		(&V_1)->set_subpixelAliasingRemovalAmount_0((1.0f));
		(&V_1)->set_edgeDetectionThreshold_1((0.063000001f));
		(&V_1)->set_minimumRequiredLuminance_2((0.0311999992f));
		QualitySettings_tD8ECD5FC73E1D1120CA1DCF1DC95DDE273D37643  L_12 = V_1;
		(&V_0)->set_qualitySettings_0(L_12);
		il2cpp_codegen_initobj((&V_2), sizeof(ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80 ));
		(&V_2)->set_subpixelSpreadAmount_0((0.5f));
		(&V_2)->set_edgeSharpnessAmount_1((2.0f));
		(&V_2)->set_edgeDetectionThreshold_2((0.125f));
		(&V_2)->set_minimumRequiredLuminance_3((0.0399999991f));
		ConsoleSettings_t69BB2E1FFDEFACE5DD5934DE7AED8BEE3C2B2B80  L_13 = V_2;
		(&V_0)->set_consoleSettings_1(L_13);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_14 = V_0;
		((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->set_s_ExtremeQuality_6(L_14);
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExperimentalGroup__ctor_m606A712DF821140580120F5669EAE97A15DDDEFE (ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  GlobalSettings_get_defaultSettings_m85E900E383D040C4AE3CACDF13F1234B920E1719 (const RuntimeMethod* method)
{
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new GlobalSettings
		// {
		//     debugPass = DebugPass.Off,
		//     quality = QualityPreset.High,
		//     edgeDetectionMethod = EdgeDetectionMethod.Color
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE ));
		(&V_0)->set_debugPass_0(0);
		(&V_0)->set_quality_1(2);
		(&V_0)->set_edgeDetectionMethod_2(2);
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  L_0 = V_0;
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___scale_2 = unmarshaled.get_scale_2();
	marshaled.___strength_3 = unmarshaled.get_strength_3();
}
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke_back(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_scale_temp_2 = 0.0f;
	unmarshaled_scale_temp_2 = marshaled.___scale_2;
	unmarshaled.set_scale_2(unmarshaled_scale_temp_2);
	float unmarshaled_strength_temp_3 = 0.0f;
	unmarshaled_strength_temp_3 = marshaled.___strength_3;
	unmarshaled.set_strength_3(unmarshaled_strength_temp_3);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke_cleanup(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___scale_2 = unmarshaled.get_scale_2();
	marshaled.___strength_3 = unmarshaled.get_strength_3();
}
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com_back(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_scale_temp_2 = 0.0f;
	unmarshaled_scale_temp_2 = marshaled.___scale_2;
	unmarshaled.set_scale_2(unmarshaled_scale_temp_2);
	float unmarshaled_strength_temp_3 = 0.0f;
	unmarshaled_strength_temp_3 = marshaled.___strength_3;
	unmarshaled.set_strength_3(unmarshaled_strength_temp_3);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com_cleanup(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled)
{
}
// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  PredicationSettings_get_defaultSettings_m4B5D6EC28014F4DB9BE982F667C6C61E25CB1151 (const RuntimeMethod* method)
{
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PredicationSettings
		// {
		//     enabled = false,
		//     threshold = 0.01f,
		//     scale = 2f,
		//     strength = 0.4f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_threshold_1((0.00999999978f));
		(&V_0)->set_scale_2((2.0f));
		(&V_0)->set_strength_3((0.400000006f));
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled)
{
	marshaled.___diagonalDetection_0 = static_cast<int32_t>(unmarshaled.get_diagonalDetection_0());
	marshaled.___cornerDetection_1 = static_cast<int32_t>(unmarshaled.get_cornerDetection_1());
	marshaled.___threshold_2 = unmarshaled.get_threshold_2();
	marshaled.___depthThreshold_3 = unmarshaled.get_depthThreshold_3();
	marshaled.___maxSearchSteps_4 = unmarshaled.get_maxSearchSteps_4();
	marshaled.___maxDiagonalSearchSteps_5 = unmarshaled.get_maxDiagonalSearchSteps_5();
	marshaled.___cornerRounding_6 = unmarshaled.get_cornerRounding_6();
	marshaled.___localContrastAdaptationFactor_7 = unmarshaled.get_localContrastAdaptationFactor_7();
}
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke_back(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled)
{
	bool unmarshaled_diagonalDetection_temp_0 = false;
	unmarshaled_diagonalDetection_temp_0 = static_cast<bool>(marshaled.___diagonalDetection_0);
	unmarshaled.set_diagonalDetection_0(unmarshaled_diagonalDetection_temp_0);
	bool unmarshaled_cornerDetection_temp_1 = false;
	unmarshaled_cornerDetection_temp_1 = static_cast<bool>(marshaled.___cornerDetection_1);
	unmarshaled.set_cornerDetection_1(unmarshaled_cornerDetection_temp_1);
	float unmarshaled_threshold_temp_2 = 0.0f;
	unmarshaled_threshold_temp_2 = marshaled.___threshold_2;
	unmarshaled.set_threshold_2(unmarshaled_threshold_temp_2);
	float unmarshaled_depthThreshold_temp_3 = 0.0f;
	unmarshaled_depthThreshold_temp_3 = marshaled.___depthThreshold_3;
	unmarshaled.set_depthThreshold_3(unmarshaled_depthThreshold_temp_3);
	int32_t unmarshaled_maxSearchSteps_temp_4 = 0;
	unmarshaled_maxSearchSteps_temp_4 = marshaled.___maxSearchSteps_4;
	unmarshaled.set_maxSearchSteps_4(unmarshaled_maxSearchSteps_temp_4);
	int32_t unmarshaled_maxDiagonalSearchSteps_temp_5 = 0;
	unmarshaled_maxDiagonalSearchSteps_temp_5 = marshaled.___maxDiagonalSearchSteps_5;
	unmarshaled.set_maxDiagonalSearchSteps_5(unmarshaled_maxDiagonalSearchSteps_temp_5);
	int32_t unmarshaled_cornerRounding_temp_6 = 0;
	unmarshaled_cornerRounding_temp_6 = marshaled.___cornerRounding_6;
	unmarshaled.set_cornerRounding_6(unmarshaled_cornerRounding_temp_6);
	float unmarshaled_localContrastAdaptationFactor_temp_7 = 0.0f;
	unmarshaled_localContrastAdaptationFactor_temp_7 = marshaled.___localContrastAdaptationFactor_7;
	unmarshaled.set_localContrastAdaptationFactor_7(unmarshaled_localContrastAdaptationFactor_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke_cleanup(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled)
{
	marshaled.___diagonalDetection_0 = static_cast<int32_t>(unmarshaled.get_diagonalDetection_0());
	marshaled.___cornerDetection_1 = static_cast<int32_t>(unmarshaled.get_cornerDetection_1());
	marshaled.___threshold_2 = unmarshaled.get_threshold_2();
	marshaled.___depthThreshold_3 = unmarshaled.get_depthThreshold_3();
	marshaled.___maxSearchSteps_4 = unmarshaled.get_maxSearchSteps_4();
	marshaled.___maxDiagonalSearchSteps_5 = unmarshaled.get_maxDiagonalSearchSteps_5();
	marshaled.___cornerRounding_6 = unmarshaled.get_cornerRounding_6();
	marshaled.___localContrastAdaptationFactor_7 = unmarshaled.get_localContrastAdaptationFactor_7();
}
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com_back(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled)
{
	bool unmarshaled_diagonalDetection_temp_0 = false;
	unmarshaled_diagonalDetection_temp_0 = static_cast<bool>(marshaled.___diagonalDetection_0);
	unmarshaled.set_diagonalDetection_0(unmarshaled_diagonalDetection_temp_0);
	bool unmarshaled_cornerDetection_temp_1 = false;
	unmarshaled_cornerDetection_temp_1 = static_cast<bool>(marshaled.___cornerDetection_1);
	unmarshaled.set_cornerDetection_1(unmarshaled_cornerDetection_temp_1);
	float unmarshaled_threshold_temp_2 = 0.0f;
	unmarshaled_threshold_temp_2 = marshaled.___threshold_2;
	unmarshaled.set_threshold_2(unmarshaled_threshold_temp_2);
	float unmarshaled_depthThreshold_temp_3 = 0.0f;
	unmarshaled_depthThreshold_temp_3 = marshaled.___depthThreshold_3;
	unmarshaled.set_depthThreshold_3(unmarshaled_depthThreshold_temp_3);
	int32_t unmarshaled_maxSearchSteps_temp_4 = 0;
	unmarshaled_maxSearchSteps_temp_4 = marshaled.___maxSearchSteps_4;
	unmarshaled.set_maxSearchSteps_4(unmarshaled_maxSearchSteps_temp_4);
	int32_t unmarshaled_maxDiagonalSearchSteps_temp_5 = 0;
	unmarshaled_maxDiagonalSearchSteps_temp_5 = marshaled.___maxDiagonalSearchSteps_5;
	unmarshaled.set_maxDiagonalSearchSteps_5(unmarshaled_maxDiagonalSearchSteps_temp_5);
	int32_t unmarshaled_cornerRounding_temp_6 = 0;
	unmarshaled_cornerRounding_temp_6 = marshaled.___cornerRounding_6;
	unmarshaled.set_cornerRounding_6(unmarshaled_cornerRounding_temp_6);
	float unmarshaled_localContrastAdaptationFactor_temp_7 = 0.0f;
	unmarshaled_localContrastAdaptationFactor_temp_7 = marshaled.___localContrastAdaptationFactor_7;
	unmarshaled.set_localContrastAdaptationFactor_7(unmarshaled_localContrastAdaptationFactor_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com_cleanup(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled)
{
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings__cctor_m1FDCF94880EE1860F0779F4E4DF96E631DC2A234 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static QualitySettings[] presetQualitySettings =
		// {
		//     // Low
		//     new QualitySettings
		//     {
		//         diagonalDetection = false,
		//         cornerDetection = false,
		//         threshold = 0.15f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 4,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // Medium
		//     new QualitySettings
		//     {
		//         diagonalDetection = false,
		//         cornerDetection = false,
		//         threshold = 0.1f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 8,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // High
		//     new QualitySettings
		//     {
		//         diagonalDetection = true,
		//         cornerDetection = true,
		//         threshold = 0.1f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 16,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // Ultra
		//     new QualitySettings
		//     {
		//         diagonalDetection = true,
		//         cornerDetection = true,
		//         threshold = 0.05f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 32,
		//         maxDiagonalSearchSteps = 16,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// };
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_0 = (QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296*)(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296*)SZArrayNew(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var, (uint32_t)4);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)0);
		(&V_0)->set_cornerDetection_1((bool)0);
		(&V_0)->set_threshold_2((0.150000006f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(4);
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_2);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)0);
		(&V_0)->set_cornerDetection_1((bool)0);
		(&V_0)->set_threshold_2((0.100000001f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(8);
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_4);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_5 = L_3;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)1);
		(&V_0)->set_cornerDetection_1((bool)1);
		(&V_0)->set_threshold_2((0.100000001f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(((int32_t)16));
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_6);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_7 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)1);
		(&V_0)->set_cornerDetection_1((bool)1);
		(&V_0)->set_threshold_2((0.0500000007f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(((int32_t)32));
		(&V_0)->set_maxDiagonalSearchSteps_5(((int32_t)16));
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_8);
		((QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var))->set_presetQualitySettings_8(L_7);
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsGroup__ctor_mEC67CA8F14F04A7A5E93E10DF2C316C5EC61726B (SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___fuzzSize_1 = unmarshaled.get_fuzzSize_1();
}
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke_back(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_fuzzSize_temp_1 = 0.0f;
	unmarshaled_fuzzSize_temp_1 = marshaled.___fuzzSize_1;
	unmarshaled.set_fuzzSize_1(unmarshaled_fuzzSize_temp_1);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke_cleanup(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___fuzzSize_1 = unmarshaled.get_fuzzSize_1();
}
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com_back(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_fuzzSize_temp_1 = 0.0f;
	unmarshaled_fuzzSize_temp_1 = marshaled.___fuzzSize_1;
	unmarshaled.set_fuzzSize_1(unmarshaled_fuzzSize_temp_1);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com_cleanup(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled)
{
}
// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::UseTemporal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method)
{
	{
		// return enabled;
		bool L_0 = __this->get_enabled_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * _thisAdjusted = reinterpret_cast<TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  TemporalSettings_get_defaultSettings_m1054DAE951E9EC6DEA217F7F8F46460FF073CE47 (const RuntimeMethod* method)
{
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TemporalSettings
		// {
		//     enabled = false,
		//     fuzzSize = 2f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_fuzzSize_1((2.0f));
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  L_0 = V_0;
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopLevelSettings__ctor_mCE66EF28864BEDC1A3BC695975DA31C6BA23E0D9 (TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutAttribute__ctor_mB464921B7C99769C43A4A29524D66D164713640B (LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AntiAliasing_get_method_mBB89949A0B301D891C5BF2ACADDF5671116041F2_inline (AntiAliasing_t7F7BE23801D3FE4E99CD108CBF0B0944537B4236 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Method; }
		int32_t L_0 = __this->get_m_Method_6();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_defaultPreset_mD01A6F06B2BA7679A068AEDB8532175D4ABCE70B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Default; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Default_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremePerformancePreset_m2018CA7D4240D6CF21CB2C25D487CEBF7485DE62_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ExtremePerformance; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_ExtremePerformance_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_performancePreset_mBB188710C56BCAC6ECB6B33302EEBC56457D47A7_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Performance; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Performance_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_qualityPreset_m24960A987050A205A2B7CF377CE7CFD577759B79_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_Quality; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_Quality_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  Preset_get_extremeQualityPreset_mB0E7F93A5C296AE2450514FFFF3801BBEF76E382_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ExtremeQuality; }
		IL2CPP_RUNTIME_CLASS_INIT(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var);
		Preset_tECB5902405DBE23411CBEC104ACFE95584534B87  L_0 = ((Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_StaticFields*)il2cpp_codegen_static_fields_for(Preset_tECB5902405DBE23411CBEC104ACFE95584534B87_il2cpp_TypeInfo_var))->get_s_ExtremeQuality_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method)
{
	{
		// return enabled;
		bool L_0 = __this->get_enabled_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
