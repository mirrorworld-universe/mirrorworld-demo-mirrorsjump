#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,System.Object,UnityEngine.Quaternion,System.Object>
struct Action_4_t46555725CCAEEC44DC0F0A9AEDCEFE0867EE0B85;
// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>
struct Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
struct CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0;
// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC;
// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE;
// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B;
// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t2ABB006386A81D361C36B476044786442726743D;
// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tD0958576900019D44F20769282634622310A6335;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tEC2889D7CADE796A4FFB321716EC8FE47DEEBC46;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tA83E5335930C3B73B36584C0C49AEF4D60F994FA;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tC0A04FC69DFA3D09F95256B3260E19CDF93CFFAB;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5E307A3D92BFAC7CC6F0D5285761865A1041D7A8;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t18D864D495A67B8E3723FF168949A00B63EE2EC5;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tB39D8ABA66B038B793C44B42BF240EA543CB3427;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tAE460456A155A97552A76CF67AF3D3BE866F30C8;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tEB346CC740290347A0EAF5C4DBE0B8B55EC9B6D0;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t267FF01517518B123F4EB11811FAF5BEDB2CB83D;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t38D78B606D82F31C19D959AF12B5C4F1D4AF65C2;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t0E7A83E8D1C93359BF9EB9E6A9AF3AA18311CD24;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t7022E6DD68301100D1A7392EF5170CF153EDAD93;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRewind_t2ABB006386A81D361C36B476044786442726743D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14;
IL2CPP_EXTERN_C String_t* _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Physics_SetOrientationOnPath_mC2C4E6FA124458E00765F647C3E824CC31A4696D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// DG.Tweening.DOTweenCYInstruction
struct DOTweenCYInstruction_tCB7C6C1E61447CF998FF1A85EDB5949ED08C303B  : public RuntimeObject
{
};

// DG.Tweening.DOTweenModuleUnityVersion
struct DOTweenModuleUnityVersion_t028EE91988A2A48FC2EEACA97E9BA03468B748F6  : public RuntimeObject
{
};

// DG.Tweening.DOTweenModuleUtils
struct DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9  : public RuntimeObject
{
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tD0958576900019D44F20769282634622310A6335  : public RuntimeObject
{
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::target
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tEC2889D7CADE796A4FFB321716EC8FE47DEEBC46  : public RuntimeObject
{
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::target
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tA83E5335930C3B73B36584C0C49AEF4D60F994FA  : public RuntimeObject
{
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::target
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tC0A04FC69DFA3D09F95256B3260E19CDF93CFFAB  : public RuntimeObject
{
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::target
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5E307A3D92BFAC7CC6F0D5285761865A1041D7A8  : public RuntimeObject
{
	// UnityEngine.UI.Slider DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::target
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t18D864D495A67B8E3723FF168949A00B63EE2EC5  : public RuntimeObject
{
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tB39D8ABA66B038B793C44B42BF240EA543CB3427  : public RuntimeObject
{
	// System.Int32 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::v
	int32_t ___v_0;
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target_1;
	// System.Boolean DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::addThousandsSeparator
	bool ___addThousandsSeparator_2;
	// System.Globalization.CultureInfo DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::cInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cInfo_3;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tAE460456A155A97552A76CF67AF3D3BE866F30C8  : public RuntimeObject
{
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tEB346CC740290347A0EAF5C4DBE0B8B55EC9B6D0  : public RuntimeObject
{
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target_0;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t7022E6DD68301100D1A7392EF5170CF153EDAD93  : public RuntimeObject
{
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::target
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target_0;
};

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081  : public RuntimeObject
{
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::propertyID
	int32_t ___propertyID_1;
};

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86  : public RuntimeObject
{
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::propertyID
	int32_t ___propertyID_1;
};

// DG.Tweening.DOTweenModuleUtils/Physics
struct Physics_t835AE7329FBFA61BA3A2271950FD3F7F6A18770A  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
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

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
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

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForCompletion::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
	// System.Int32 DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::elapsedLoops
	int32_t ___elapsedLoops_1;
};

// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForKill::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForPosition::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
	// System.Single DG.Tweening.DOTweenCYInstruction/WaitForPosition::position
	float ___position_1;
};

// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t2ABB006386A81D361C36B476044786442726743D  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForRewind::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForStart::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GradientColorKey
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A 
{
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody2D
	bool ___isRigidbody2D_13;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_14;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_17;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_18;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5  : public RuntimeObject
{
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::target
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target_0;
	// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::s
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s_4;
	// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_5;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t267FF01517518B123F4EB11811FAF5BEDB2CB83D  : public RuntimeObject
{
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::to
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___to_0;
	// UnityEngine.UI.Graphic DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::target
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target_1;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t38D78B606D82F31C19D959AF12B5C4F1D4AF65C2  : public RuntimeObject
{
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::to
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___to_0;
	// UnityEngine.UI.Image DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::target
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target_1;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t0E7A83E8D1C93359BF9EB9E6A9AF3AA18311CD24  : public RuntimeObject
{
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::to
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___to_0;
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::target
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target_1;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3  : public RuntimeObject
{
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___wpLengths_3;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___wps_4;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_5;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_6;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_7;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59* ___controlPoints_8;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_9;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timesTable_11;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthsTable_12;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_14;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_15;
	// DG.Tweening.Plugins.Options.PathOptions DG.Tweening.Plugins.Core.PathCore.Path::plugOptions
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions_16;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ____incrementalClone_17;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_18;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C* ____decoder_19;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_20;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___nonLinearDrawWps_21;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_22;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___lookAtPosition_23;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gizmoColor_24;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>
struct Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10
struct U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13
struct U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::elapsedLoops
	int32_t ___elapsedLoops_3;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_4;
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12
struct U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14
struct U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Single DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::position
	float ___position_3;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_4;
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11
struct U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15
struct U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B 
{
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// DG.Tweening.Tween DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// DG.Tweening.DOTweenCYInstruction

// DG.Tweening.DOTweenCYInstruction

// DG.Tweening.DOTweenModuleUnityVersion

// DG.Tweening.DOTweenModuleUnityVersion

// DG.Tweening.DOTweenModuleUtils
struct DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_StaticFields
{
	// System.Boolean DG.Tweening.DOTweenModuleUtils::_initialized
	bool ____initialized_0;
};

// DG.Tweening.DOTweenModuleUtils

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::_logPriority
	int32_t ____logPriority_0;
};

// DG.Tweening.Core.Debugger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0

// DG.Tweening.DOTweenModuleUtils/Physics

// DG.Tweening.DOTweenModuleUtils/Physics

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// DG.Tweening.Tween

// DG.Tweening.Tween

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

// System.Void

// System.Void

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable

// DG.Tweening.DOTweenCYInstruction/WaitForCompletion

// DG.Tweening.DOTweenCYInstruction/WaitForCompletion

// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops

// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops

// DG.Tweening.DOTweenCYInstruction/WaitForKill

// DG.Tweening.DOTweenCYInstruction/WaitForKill

// DG.Tweening.DOTweenCYInstruction/WaitForPosition

// DG.Tweening.DOTweenCYInstruction/WaitForPosition

// DG.Tweening.DOTweenCYInstruction/WaitForRewind

// DG.Tweening.DOTweenCYInstruction/WaitForRewind

// DG.Tweening.DOTweenCYInstruction/WaitForStart

// DG.Tweening.DOTweenCYInstruction/WaitForStart

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Gradient

// UnityEngine.Gradient

// UnityEngine.GradientColorKey

// UnityEngine.GradientColorKey

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// DG.Tweening.Plugins.Options.PathOptions

// DG.Tweening.Plugins.Options.PathOptions

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// DG.Tweening.Sequence

// DG.Tweening.Sequence

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0

// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3_StaticFields
{
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0* ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15* ____linearDecoder_1;
	// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder DG.Tweening.Plugins.Core.PathCore.Path::_cubicBezierDecoder
	CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D* ____cubicBezierDecoder_2;
};

// DG.Tweening.Plugins.Core.PathCore.Path

// System.Type
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

// System.Type

// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>

// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15

// DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

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

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A m_Items[1];

	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___0_t, int32_t ___1_ease, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared (RuntimeObject* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C_gshared (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A_gshared (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Action`4<DG.Tweening.Plugins.Options.PathOptions,System.Object,UnityEngine.Quaternion,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m266C04792B8C202EC0192F907A979FCFE314190E_gshared (Action_4_t46555725CCAEEC44DC0F0A9AEDCEFE0867EE0B85* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Single DG.Tweening.TweenExtensions::ElapsedDirectionalPercentage(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedDirectionalPercentage_m86020EAE1A0CA49FDE72191B7F45FEE990B9CFD5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DOVirtual_EasedValue_m40F83FCD3705E8DD33558C84B3F7067D91F3B9DF (float ___0_from, float ___1_to, float ___2_lifetimePercentage, int32_t ___3_easeType, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_horizontalNormalizedPosition_mC2C3A7F67E27AA7470A81042AD2B0AD0B5F1AF93 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89 (const RuntimeMethod* method) ;
// UnityEngine.GradientColorKey[] UnityEngine.Gradient::get_colorKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Single DG.Tweening.TweenExtensions::Duration(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Duration_mFF4115983798994675D0431ADD2D333958714222 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_includeLoops, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_m7770E3969D58563343B129139B857669312EFAA9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* (*) (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___0_s, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Sequence>(T,System.Object)
inline Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method)
{
	return ((  Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* (*) (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared)(___0_t, ___1_target, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mF41D0D0338A1C71122B56F08353CAFA9931B5183 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, String_t* ___2_property, float ___3_duration, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_mE85B7CC8B7FE6A2AE84DB8210249A61018118C4D (WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRewind__ctor_mD79A34DBDAC1B30FBEBD36A8D749EC81935520B2 (WaitForRewind_t2ABB006386A81D361C36B476044786442726743D* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForKill__ctor_m75C2D3D54DBBBB35DE297B947C08C982CABF1BAF (WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForElapsedLoops__ctor_mA0E7D5A115AB56AD618E24B320476B81B9CAEC7A (WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, int32_t ___1_elapsedLoops, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForPosition__ctor_mB6CCFCE59F142931CF19AC3BA4FE5CAFF1CBA4AD (WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, float ___1_position, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForStart__ctor_m3AEC2F6E37815ED0D94C2FA5F3B784456C6E49D1 (WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF5EC87634B90C628AE370887DCF280218F814B4C (U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogMissingMaterialProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogMissingMaterialProperty_m8847B17D16E01FB04A460D0984CAD3FEEF9AB854 (int32_t ___0_propertyId, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A_gshared)(__this, ___0_object, ___1_method, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTween_To_mAF71D4F17109689870406A4565636216CCFE7680 (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___0_getter, DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___1_setter, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_endValue, float ___3_duration, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,System.Object)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876 (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared)(___0_t, ___1_target, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m1E2466F9751381E5A3C76E5E2970972957741B9E (U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49_gshared)(__this, ___0_stateMachine, method);
}
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureOffset_m184386CB88C6333F160E869ACDC1738DB8269412 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureScale_m18C0A99FD39A562A8C776265419D381012FE1FB3 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureScale(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA (U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB (U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Boolean DG.Tweening.Tween::get_playedOnce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.TweenExtensions::CompletedLoops(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340 (U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3 (U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885 (U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B (U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2 (U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB (U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121 (U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111 (U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12 (U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41 (U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mE887FA5D76A46664CDCF21964B144098A77B4DD5 (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_4__ctor_m266C04792B8C202EC0192F907A979FCFE314190E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void DG.Tweening.Core.DOTweenExternalCommand::add_SetOrientationOnPath(System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenExternalCommand_add_SetOrientationOnPath_mBD8B37B1978CBE4534F9B8868C734F5C0A2B2804 (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* ___0_value, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics_DOPath_mF43CCB4AF2A13F42ED05CE2E666422CA4065F328 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOLocalPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics_DOLocalPath_mCB4C763749BBB71E0B4ECB3EA7C9C43B9EAA45FF (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOPath(UnityEngine.Rigidbody2D,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics2D_DOPath_mB1B83D2F6891C271CC77EB66926701FC799328F3 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOLocalPath(UnityEngine.Rigidbody2D,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics2D_DOLocalPath_m3C71F4FACAA8A8519EA16714625B9B3B693ECC58 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOPath_m3E70D921DDA265292CF467212AC676371F110691 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOLocalPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOLocalPath_m4F4C77B2C481DDCB0FDBCE8B3C4442D897F1B2DA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___1_path, float ___2_duration, int32_t ___3_pathMode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m4179B6F77D9F8B2D07F78D25FC745F542063F335 (U3CU3Ec__DisplayClass28_0_tD0958576900019D44F20769282634622310A6335* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_mE987488CB26087991EB5B2AF5E1BB03633A9C5E9 (U3CU3Ec__DisplayClass28_0_tD0958576900019D44F20769282634622310A6335* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, fadeOut, randomnessMode)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_m223F195EA08AAF2F03AE46C9DE4761B0BC7FB7EC (U3CU3Ec__DisplayClass28_0_tD0958576900019D44F20769282634622310A6335* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, const RuntimeMethod* method) 
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, fadeOut, randomnessMode)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_2, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mCA183B392317E1ABAF1B8CA84C02784D75678A78 (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_m82918F5D73CE67BC9AD9979A3F81C717AA95A5EF (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, const RuntimeMethod* method) 
{
	{
		// Tween yTween = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_mACBA5402D427457E33770E20ABBF153EE8EA73B2 (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// Tween yTween = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_x;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_m6BAF800D607189779E65F18B54EA2A29AC45D84B (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, const RuntimeMethod* method) 
{
	{
		// .OnStart(()=> startPosY = target.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		float L_2 = L_1.___y_1;
		__this->___startPosY_1 = L_2;
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_mA6D64EC026FB4AA6873394DBB91E728E6F6EFF3D (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, const RuntimeMethod* method) 
{
	{
		// s.Append(DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue.x, 0), duration)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__4(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_mD71EC1A09CD5404D79A2FA0B068A00F3D2E7D12F (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// s.Append(DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue.x, 0), duration)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_x;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m31B52507CE1503653EED1573137622C1202BA9D9 (U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass29_0_tAF3D1F414662AB44D54A1823AC81F9067EB039C5* G_B4_1 = NULL;
	{
		// if (!offsetYSet) {
		bool L_0 = __this->___offsetYSet_2;
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// offsetYSet = true;
		__this->___offsetYSet_2 = (bool)1;
		// offsetY = s.isRelative ? endValue.y : endValue.y - startPosY;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_1 = __this->___s_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline(L_1, NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___endValue_5);
		float L_4 = L_3->___y_1;
		float L_5 = __this->___startPosY_1;
		G_B4_0 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___endValue_5);
		float L_7 = L_6->___y_1;
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->___offsetY_3 = G_B4_0;
	}

IL_0041:
	{
		// Vector2 pos = target.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___target_0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_8, NULL);
		V_0 = L_9;
		// pos.y += DOVirtual.EasedValue(0, offsetY, s.ElapsedDirectionalPercentage(), Ease.OutQuad);
		float* L_10 = (&(&V_0)->___y_1);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = __this->___offsetY_3;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_14 = __this->___s_4;
		float L_15;
		L_15 = TweenExtensions_ElapsedDirectionalPercentage_m86020EAE1A0CA49FDE72191B7F45FEE990B9CFD5(L_14, NULL);
		float L_16;
		L_16 = DOVirtual_EasedValue_m40F83FCD3705E8DD33558C84B3F7067D91F3B9DF((0.0f), L_13, L_15, 6, NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, L_16));
		// target.anchoredPosition = pos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
		// });
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m5F4F51BC32159EE37265F7032DE223AC3AB6A1C0 (U3CU3Ec__DisplayClass30_0_tEC2889D7CADE796A4FFB321716EC8FE47DEEBC46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m80C5E010B8B0C14A9F1358140D6DB2AE6C5374A9 (U3CU3Ec__DisplayClass30_0_tEC2889D7CADE796A4FFB321716EC8FE47DEEBC46* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => new Vector2(target.horizontalNormalizedPosition, target.verticalNormalizedPosition),
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_horizontalNormalizedPosition_mC2C3A7F67E27AA7470A81042AD2B0AD0B5F1AF93(L_0, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->___target_0;
		NullCheck(L_2);
		float L_3;
		L_3 = ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_m8185551DA74F9CE20DAD3392E7DDE2490EB1D301 (U3CU3Ec__DisplayClass30_0_tEC2889D7CADE796A4FFB321716EC8FE47DEEBC46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// target.horizontalNormalizedPosition = x.x;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_x;
		float L_2 = L_1.___x_0;
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_0, L_2, NULL);
		// target.verticalNormalizedPosition = x.y;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		NullCheck(L_3);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_3, L_5, NULL);
		// }, endValue, duration)
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m417F41C2607E2F3A10C14B9556514FC2BBA1B035 (U3CU3Ec__DisplayClass31_0_tA83E5335930C3B73B36584C0C49AEF4D60F994FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_m77E495AE88490935170B5479753B0D251A5D3CA4 (U3CU3Ec__DisplayClass31_0_tA83E5335930C3B73B36584C0C49AEF4D60F994FA* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => target.horizontalNormalizedPosition, x => target.horizontalNormalizedPosition = x, endValue, duration)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_horizontalNormalizedPosition_mC2C3A7F67E27AA7470A81042AD2B0AD0B5F1AF93(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mF7393D7DDB277D5BFB5CE86BEB93E25B0558B7BD (U3CU3Ec__DisplayClass31_0_tA83E5335930C3B73B36584C0C49AEF4D60F994FA* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => target.horizontalNormalizedPosition, x => target.horizontalNormalizedPosition = x, endValue, duration)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		float L_1 = ___0_x;
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_0, L_1, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mA218955A26898E155307DDE47E12B7E53255AB3E (U3CU3Ec__DisplayClass32_0_tC0A04FC69DFA3D09F95256B3260E19CDF93CFFAB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m38805643288D85CEE1588577A69586E047726867 (U3CU3Ec__DisplayClass32_0_tC0A04FC69DFA3D09F95256B3260E19CDF93CFFAB* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => target.verticalNormalizedPosition, x => target.verticalNormalizedPosition = x, endValue, duration)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_verticalNormalizedPosition_m4FE766F04272C1805FDE2A4B72D80F6190841FA1(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mD395D9118A7944AE3F2ACF8AADCF71B0611F80BB (U3CU3Ec__DisplayClass32_0_tC0A04FC69DFA3D09F95256B3260E19CDF93CFFAB* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => target.verticalNormalizedPosition, x => target.verticalNormalizedPosition = x, endValue, duration)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___target_0;
		float L_1 = ___0_x;
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_0, L_1, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mFDBB24E2EB71DAB7C3811F51BCF45EE7733321D3 (U3CU3Ec__DisplayClass33_0_t5E307A3D92BFAC7CC6F0D5285761865A1041D7A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_m8E6B52F72A726C09781FAAE48C1097CE6C2D8188 (U3CU3Ec__DisplayClass33_0_t5E307A3D92BFAC7CC6F0D5285761865A1041D7A8* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.value, x => target.value = x, endValue, duration);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___target_0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_m02996BC134ED2E96E505224009462007F093F825 (U3CU3Ec__DisplayClass33_0_t5E307A3D92BFAC7CC6F0D5285761865A1041D7A8* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.value, x => target.value = x, endValue, duration);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___target_0;
		float L_1 = ___0_x;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m6903649B5BDBAA53F5C179B09D1C77AABC913561 (U3CU3Ec__DisplayClass34_0_t18D864D495A67B8E3723FF168949A00B63EE2EC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_mBA716E6626BB3051125B19AC02EC825AA305B9A6 (U3CU3Ec__DisplayClass34_0_t18D864D495A67B8E3723FF168949A00B63EE2EC5* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m534299537BAA83C8B80BDB7C0622F05B8501D4C6 (U3CU3Ec__DisplayClass34_0_t18D864D495A67B8E3723FF168949A00B63EE2EC5* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_x;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m6F52791A710AA19C73082E0EED5D298E31EDF1EF (U3CU3Ec__DisplayClass35_0_tB39D8ABA66B038B793C44B42BF240EA543CB3427* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOCounter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__0_mD4515C9E2BA21A91E51DCA562DB8BD859BB73D4B (U3CU3Ec__DisplayClass35_0_tB39D8ABA66B038B793C44B42BF240EA543CB3427* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<int, int, NoOptions> t = DOTween.To(() => v, x => {
		int32_t L_0 = __this->___v_0;
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOCounter>b__1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__1_m91616BD436B4FAB5C826763E445C8A59C11AF221 (U3CU3Ec__DisplayClass35_0_tB39D8ABA66B038B793C44B42BF240EA543CB3427* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// v = x;
		int32_t L_0 = ___0_x;
		__this->___v_0 = L_0;
		// target.text = addThousandsSeparator
		//     ? v.ToString("N0", cInfo)
		//     : v.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___target_1;
		bool L_2 = __this->___addThousandsSeparator_2;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0022;
		}
	}
	{
		int32_t* L_3 = (&__this->___v_0);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_0022:
	{
		int32_t* L_5 = (&__this->___v_0);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = __this->___cInfo_3;
		String_t* L_7;
		L_7 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8(L_5, _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }, endValue, duration);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m7C683C9CF75033301DA090C8B583860556AF7F29 (U3CU3Ec__DisplayClass36_0_tAE460456A155A97552A76CF67AF3D3BE866F30C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__0_m72BB7D6C818418B6497D3356DA77BA4A5B325E47 (U3CU3Ec__DisplayClass36_0_tAE460456A155A97552A76CF67AF3D3BE866F30C8* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__1_m4083DFAFABE118FAC072D3EE81663ACA96DD8F10 (U3CU3Ec__DisplayClass36_0_tAE460456A155A97552A76CF67AF3D3BE866F30C8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_x;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m30C619C273CA88E1630ADE30076D3BAB756E8037 (U3CU3Ec__DisplayClass37_0_tEB346CC740290347A0EAF5C4DBE0B8B55EC9B6D0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOText>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__0_m02FF7D2EC040673A6A8DAF254FA06CCB5E19150D (U3CU3Ec__DisplayClass37_0_tEB346CC740290347A0EAF5C4DBE0B8B55EC9B6D0* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<string, string, StringOptions> t = DOTween.To(() => target.text, x => target.text = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOText>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__1_m2838FBD1C16B38207C0B4528D6E805E6308E1E6B (U3CU3Ec__DisplayClass37_0_tEB346CC740290347A0EAF5C4DBE0B8B55EC9B6D0* __this, String_t* ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<string, string, StringOptions> t = DOTween.To(() => target.text, x => target.text = x, endValue, duration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___target_0;
		String_t* L_1 = ___0_x;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m82948A429B319CC7B45105656F6DD0ADBB2136CC (U3CU3Ec__DisplayClass38_0_t267FF01517518B123F4EB11811FAF5BEDB2CB83D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_mE68FE0C254E1D0E7E8D659FF3E4A3AA5F7738351 (U3CU3Ec__DisplayClass38_0_t267FF01517518B123F4EB11811FAF5BEDB2CB83D* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => to, x => {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___to_0;
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_mA5048FA5B74BD7E9906C80159B99ACB2AFED6634 (U3CU3Ec__DisplayClass38_0_t267FF01517518B123F4EB11811FAF5BEDB2CB83D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___to_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// to = x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_x;
		__this->___to_0 = L_3;
		// target.color += diff;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = __this->___target_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = L_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_mBAA4D644FB605A60D0C3BEB67229723BB3874E6D (U3CU3Ec__DisplayClass39_0_t38D78B606D82F31C19D959AF12B5C4F1D4AF65C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_m897EF1C1C8D7A638D7271A6E3BD8640F834CA567 (U3CU3Ec__DisplayClass39_0_t38D78B606D82F31C19D959AF12B5C4F1D4AF65C2* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => to, x => {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___to_0;
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m059D299137E18F4172FB89D42BBC0DBE0408311C (U3CU3Ec__DisplayClass39_0_t38D78B606D82F31C19D959AF12B5C4F1D4AF65C2* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___to_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// to = x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_x;
		__this->___to_0 = L_3;
		// target.color += diff;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___target_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m6C547429D9E437CED8C4BDCB96EE8BE2D7182763 (U3CU3Ec__DisplayClass40_0_t0E7A83E8D1C93359BF9EB9E6A9AF3AA18311CD24* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__0_m031A8418D686ADB8B4AD6572C18FCBAD1E42B0F6 (U3CU3Ec__DisplayClass40_0_t0E7A83E8D1C93359BF9EB9E6A9AF3AA18311CD24* __this, const RuntimeMethod* method) 
{
	{
		// return DOTween.To(() => to, x => {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___to_0;
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__1_m74D298854E55DD21E0191F65A0A67376028748EC (U3CU3Ec__DisplayClass40_0_t0E7A83E8D1C93359BF9EB9E6A9AF3AA18311CD24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___to_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// to = x;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_x;
		__this->___to_0 = L_3;
		// target.color += diff;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___target_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
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
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mE07F5C0560792F3960473CBCEC46C945FB514D35 (U3CU3Ec__DisplayClass41_0_t7022E6DD68301100D1A7392EF5170CF153EDAD93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::<DOShapeCircle>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__0_m3BF121FFD58F01B8268A055F42A85BF0546709BB (U3CU3Ec__DisplayClass41_0_t7022E6DD68301100D1A7392EF5170CF153EDAD93* __this, const RuntimeMethod* method) 
{
	{
		// CirclePlugin.Get(), () => target.anchoredPosition, x => target.anchoredPosition = x, center, duration
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::<DOShapeCircle>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__1_mA39DE4F3403BF27C206BFDFD704F57CBA06D74C2 (U3CU3Ec__DisplayClass41_0_t7022E6DD68301100D1A7392EF5170CF153EDAD93* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// CirclePlugin.Get(), () => target.anchoredPosition, x => target.anchoredPosition = x, center, duration
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___target_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_x;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
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
// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTweenModuleUnityVersion_DOGradientColor_m5989D5E5CCAA8B96FEC40CE899DDD9BC255F4126 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___1_gradient, float ___2_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* V_0 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// Sequence s = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0;
		L_0 = DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89(NULL);
		V_0 = L_0;
		// GradientColorKey[] colors = gradient.colorKeys;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = ___1_gradient;
		NullCheck(L_1);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2;
		L_2 = Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A(L_1, NULL);
		V_1 = L_2;
		// int len = colors.Length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = V_1;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// for (int i = 0; i < len; ++i) {
		V_3 = 0;
		goto IL_0098;
	}

IL_0018:
	{
		// GradientColorKey c = colors[i];
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (i == 0 && c.time <= 0) {
		int32_t L_8 = V_3;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_9 = V_4;
		float L_10 = L_9.___time_1;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// target.color = c.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_target;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_12 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12.___color_0;
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_13, NULL);
		// continue;
		goto IL_0094;
	}

IL_0041:
	{
		// float colorDuration = i == len - 1
		//     ? duration - s.Duration(false) // Verifies that total duration is correct
		//     : duration * (i == 0 ? c.time : c.time - colors[i - 1].time);
		int32_t L_14 = V_3;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1)))))
		{
			goto IL_006d;
		}
	}
	{
		float L_16 = ___2_duration;
		int32_t L_17 = V_3;
		G_B6_0 = L_16;
		if (!L_17)
		{
			G_B7_0 = L_16;
			goto IL_0063;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_18 = V_4;
		float L_19 = L_18.___time_1;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_20 = V_1;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_21, 1)))))->___time_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract(L_19, L_22));
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0063:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_23 = V_4;
		float L_24 = L_23.___time_1;
		G_B8_0 = L_24;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		G_B10_0 = ((float)il2cpp_codegen_multiply(G_B8_1, G_B8_0));
		goto IL_0076;
	}

IL_006d:
	{
		float L_25 = ___2_duration;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_26 = V_0;
		float L_27;
		L_27 = TweenExtensions_Duration_mFF4115983798994675D0431ADD2D333958714222(L_26, (bool)0, NULL);
		G_B10_0 = ((float)il2cpp_codegen_subtract(L_25, L_27));
	}

IL_0076:
	{
		V_5 = G_B10_0;
		// s.Append(target.DOColor(c.color, colorDuration).SetEase(Ease.Linear));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_28 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___0_target;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_30 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30.___color_0;
		float L_32 = V_5;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_33;
		L_33 = ShortcutExtensions_DOColor_m7770E3969D58563343B129139B857669312EFAA9(L_29, L_31, L_32, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_34;
		L_34 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_33, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_35;
		L_35 = TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F(L_28, L_34, NULL);
	}

IL_0094:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0098:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0018;
		}
	}
	{
		// s.SetTarget(target);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_39 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = ___0_target;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_41;
		L_41 = TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0(L_39, L_40, TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0_RuntimeMethod_var);
		// return s;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_42 = V_0;
		return L_42;
	}
}
// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTweenModuleUnityVersion_DOGradientColor_m16A5065B7DA6EA92AC15D1E186EE14617F64896B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___1_gradient, String_t* ___2_property, float ___3_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* V_0 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// Sequence s = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0;
		L_0 = DOTween_Sequence_mC3AE53A08EC5DFD7DB9AE18A2FD11226A6611F89(NULL);
		V_0 = L_0;
		// GradientColorKey[] colors = gradient.colorKeys;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = ___1_gradient;
		NullCheck(L_1);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2;
		L_2 = Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A(L_1, NULL);
		V_1 = L_2;
		// int len = colors.Length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = V_1;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// for (int i = 0; i < len; ++i) {
		V_3 = 0;
		goto IL_009a;
	}

IL_0018:
	{
		// GradientColorKey c = colors[i];
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (i == 0 && c.time <= 0) {
		int32_t L_8 = V_3;
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_9 = V_4;
		float L_10 = L_9.___time_1;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// target.SetColor(property, c.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___0_target;
		String_t* L_12 = ___2_property;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_13 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13.___color_0;
		NullCheck(L_11);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_11, L_12, L_14, NULL);
		// continue;
		goto IL_0096;
	}

IL_0042:
	{
		// float colorDuration = i == len - 1
		//     ? duration - s.Duration(false) // Verifies that total duration is correct
		//     : duration * (i == 0 ? c.time : c.time - colors[i - 1].time);
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_17 = ___3_duration;
		int32_t L_18 = V_3;
		G_B6_0 = L_17;
		if (!L_18)
		{
			G_B7_0 = L_17;
			goto IL_0064;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_19 = V_4;
		float L_20 = L_19.___time_1;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 1)))))->___time_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract(L_20, L_23));
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0064:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24 = V_4;
		float L_25 = L_24.___time_1;
		G_B8_0 = L_25;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		G_B10_0 = ((float)il2cpp_codegen_multiply(G_B8_1, G_B8_0));
		goto IL_0077;
	}

IL_006e:
	{
		float L_26 = ___3_duration;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_27 = V_0;
		float L_28;
		L_28 = TweenExtensions_Duration_mFF4115983798994675D0431ADD2D333958714222(L_27, (bool)0, NULL);
		G_B10_0 = ((float)il2cpp_codegen_subtract(L_26, L_28));
	}

IL_0077:
	{
		V_5 = G_B10_0;
		// s.Append(target.DOColor(c.color, property, colorDuration).SetEase(Ease.Linear));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_29 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___0_target;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_31 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = L_31.___color_0;
		String_t* L_33 = ___2_property;
		float L_34 = V_5;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_35;
		L_35 = ShortcutExtensions_DOColor_mF41D0D0338A1C71122B56F08353CAFA9931B5183(L_30, L_32, L_33, L_34, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_36;
		L_36 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B(L_35, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_m3605060ADD85D4E33C9F7D03BE6A676211A4A40B_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_37;
		L_37 = TweenSettingsExtensions_Append_mAFF074C9F7DE2BC8FF383C7729B13E732345F28F(L_29, L_36, NULL);
	}

IL_0096:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0018;
		}
	}
	{
		// s.SetTarget(target);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_41 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = ___0_target;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_43;
		L_43 = TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0(L_41, L_42, TweenSettingsExtensions_SetTarget_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_m87E21291C6C5BECA753976C5CA64050E8AFF93C0_RuntimeMethod_var);
		// return s;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_44 = V_0;
		return L_44;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForCompletion(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForCompletion_m080081BC7D031CAE8CB22FC166C6E19FAA91295C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForCompletion(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0* L_5 = (WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0*)il2cpp_codegen_object_new(WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForCompletion__ctor_mE85B7CC8B7FE6A2AE84DB8210249A61018118C4D(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForRewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForRewind_m7EB6AB643D5F309EE41F15305ADB1324E16853A7 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRewind_t2ABB006386A81D361C36B476044786442726743D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForRewind(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		WaitForRewind_t2ABB006386A81D361C36B476044786442726743D* L_5 = (WaitForRewind_t2ABB006386A81D361C36B476044786442726743D*)il2cpp_codegen_object_new(WaitForRewind_t2ABB006386A81D361C36B476044786442726743D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForRewind__ctor_mD79A34DBDAC1B30FBEBD36A8D749EC81935520B2(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForKill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForKill_m9592B2D81F0C76C9F8003645BDB0C4C3BA4E6A3B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForKill(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE* L_5 = (WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE*)il2cpp_codegen_object_new(WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForKill__ctor_m75C2D3D54DBBBB35DE297B947C08C982CABF1BAF(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForElapsedLoops_m08D7DB6E86076A4D3224DE7F651529C03B0C9B93 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_elapsedLoops, bool ___2_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForElapsedLoops(t, elapsedLoops);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		int32_t L_5 = ___1_elapsedLoops;
		WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC* L_6 = (WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC*)il2cpp_codegen_object_new(WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForElapsedLoops__ctor_mA0E7D5A115AB56AD618E24B320476B81B9CAEC7A(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForPosition(DG.Tweening.Tween,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForPosition_m918A05EB65877997F48B218DE2B9B95A4E198A0E (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, float ___1_position, bool ___2_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForPosition(t, position);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		float L_5 = ___1_position;
		WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B* L_6 = (WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B*)il2cpp_codegen_object_new(WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForPosition__ctor_mB6CCFCE59F142931CF19AC3BA4FE5CAFF1CBA4AD(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForStart(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForStart_m3E6DF08DBF844D468C3DD2A14AB96AAF3717BA53 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_returnCustomYieldInstruction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2;
		L_2 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___0_t;
		Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForStart(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___0_t;
		WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30* L_5 = (WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30*)il2cpp_codegen_object_new(WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForStart__ctor_m3AEC2F6E37815ED0D94C2FA5F3B784456C6E49D1(L_5, L_4, NULL);
		return L_5;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOOffset(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUnityVersion_DOOffset_mB985D0A38167056313BD49AA97A9A2F12B6C1CA2 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, int32_t ___2_propertyID, float ___3_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_0 = (U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mF5EC87634B90C628AE370887DCF280218F814B4C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_target;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_3 = V_0;
		int32_t L_4 = ___2_propertyID;
		NullCheck(L_3);
		L_3->___propertyID_1 = L_4;
		// if (!target.HasProperty(propertyID)) {
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___target_0;
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___propertyID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		int32_t L_10;
		L_10 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___propertyID_1;
		Debugger_LogMissingMaterialProperty_m8847B17D16E01FB04A460D0984CAD3FEEF9AB854(L_12, NULL);
	}

IL_003a:
	{
		// return null;
		return (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*)NULL;
	}

IL_003c:
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_13 = V_0;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_14 = (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*)il2cpp_codegen_object_new(DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_15 = V_0;
		DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* L_16 = (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*)il2cpp_codegen_object_new(DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A_RuntimeMethod_var), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___1_endValue;
		float L_18 = ___3_duration;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_19;
		L_19 = DOTween_To_mAF71D4F17109689870406A4565636216CCFE7680(L_14, L_16, L_17, L_18, NULL);
		// t.SetTarget(target);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_20 = L_19;
		U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* L_21 = V_0;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___target_0;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_23;
		L_23 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876(L_20, L_22, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876_RuntimeMethod_var);
		// return t;
		return L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOTiling(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUnityVersion_DOTiling_m354938745AA34ED1539D3CBF54C94A5E5753B903 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, int32_t ___2_propertyID, float ___3_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_0 = (U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m1E2466F9751381E5A3C76E5E2970972957741B9E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_target;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_3 = V_0;
		int32_t L_4 = ___2_propertyID;
		NullCheck(L_3);
		L_3->___propertyID_1 = L_4;
		// if (!target.HasProperty(propertyID)) {
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___target_0;
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___propertyID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		int32_t L_10;
		L_10 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___propertyID_1;
		Debugger_LogMissingMaterialProperty_m8847B17D16E01FB04A460D0984CAD3FEEF9AB854(L_12, NULL);
	}

IL_003a:
	{
		// return null;
		return (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*)NULL;
	}

IL_003c:
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_13 = V_0;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_14 = (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*)il2cpp_codegen_object_new(DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_15 = V_0;
		DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* L_16 = (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*)il2cpp_codegen_object_new(DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D_RuntimeMethod_var), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___1_endValue;
		float L_18 = ___3_duration;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_19;
		L_19 = DOTween_To_mAF71D4F17109689870406A4565636216CCFE7680(L_14, L_16, L_17, L_18, NULL);
		// t.SetTarget(target);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_20 = L_19;
		U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* L_21 = V_0;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___target_0;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_23;
		L_23 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876(L_20, L_22, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m7563CA4B8BD3EA41428B31557409B6456D19A876_RuntimeMethod_var);
		// return t;
		return L_20;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForCompletion(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForCompletion_m47D1F5AACF019F8C3233238D5B73EBD325685681 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_mD23D02BB45F43AC09A246E0BCE4B8152305BCF62_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForRewind(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForRewind_m4B4AD3964B5CBB9F56BB1050E8EF7C0AF414060E (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mEC86F7CF5280794496F5580BB2718C8243F1A852_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForKill(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForKill_m4CE6BA6CDF93365F4D14CE2909C7F7FF6B332928 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m2879626DEC3D3476F6247FFCE5BC1482F4C9B5BB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForElapsedLoops(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_m08434CDEC811346692A3795B1736C8499E391277 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_elapsedLoops, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		int32_t L_2 = ___1_elapsedLoops;
		(&V_0)->___elapsedLoops_3 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_mDA7CE4100B87E299F7014A593B70F37CF26CB404_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForPosition(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForPosition_mA1767089E7840940CEB85BEAF15FBC02CE56D487 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, float ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		float L_2 = ___1_position;
		(&V_0)->___position_3 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_m4DE9F7766196A07B829DB08586A593C5C7F0E986_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForStart(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DOTweenModuleUnityVersion_AsyncWaitForStart_m3BAC94C50C109B2795BAA10D582617B3F2F95126 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ___0_t;
		(&V_0)->___t_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mB470F5CD35D23E390C61868D3EE966B8129C4F49_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
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
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF5EC87634B90C628AE370887DCF280218F814B4C (U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7 (U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Material_GetTextureOffset_m184386CB88C6333F160E869ACDC1738DB8269412(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A (U3CU3Ec__DisplayClass8_0_t841A32590F7E9B5CE337F1E7576F44ACC997C081* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_x;
		NullCheck(L_0);
		Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747(L_0, L_1, L_2, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m1E2466F9751381E5A3C76E5E2970972957741B9E (U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8 (U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Material_GetTextureScale_m18C0A99FD39A562A8C776265419D381012FE1FB3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D (U3CU3Ec__DisplayClass9_0_t67C62AE5CAF58BCB265D7E092190857BFBCCEC86* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_x;
		NullCheck(L_0);
		Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D(L_0, L_1, L_2, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA (U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_0089_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00bc;
		}

IL_002f_1:
		{
			// while (t.active && !t.IsComplete()) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0082_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_3 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E_m03D3B38F4A3D7DC59454A6E9284CB0F37DE73EF9_RuntimeMethod_var);
			goto IL_00cf;
		}

IL_0066_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_3;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0082_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_0089_1:
		{
			// while (t.active && !t.IsComplete()) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (!L_16)
			{
				goto IL_00a3_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = __this->___t_2;
			bool L_18;
			L_18 = TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C(L_17, NULL);
			if (!L_18)
			{
				goto IL_002f_1;
			}
		}

IL_00a3_1:
		{
			goto IL_00bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a5;
		}
		throw e;
	}

CATCH_00a5:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cf;
	}// end catch (depth: 1)

IL_00bc:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_21, NULL);
	}

IL_00cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E*>(__this + _offset);
	U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB (U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForCompletionU3Ed__10_tC84049D47EAD23B14384BDEF646D532785ECBF0E*>(__this + _offset);
	U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340 (U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0069_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_008c_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00e3;
		}

IL_002f_1:
		{
			// while (t.active && (!t.playedOnce || t.position * (t.CompletedLoops() + 1) > 0)) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_3 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE_mA582F57CA23ED61E096A3286579DAF8170A99911_RuntimeMethod_var);
			goto IL_00f6;
		}

IL_0069_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_3;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0085_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_008c_1:
		{
			// while (t.active && (!t.playedOnce || t.position * (t.CompletedLoops() + 1) > 0)) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (!L_16)
			{
				goto IL_00ca_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = __this->___t_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_17, NULL);
			if (!L_18)
			{
				goto IL_002f_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_19 = __this->___t_2;
			NullCheck(L_19);
			float L_20;
			L_20 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_19, NULL);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_21 = __this->___t_2;
			int32_t L_22;
			L_22 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_21, NULL);
			if ((((float)((float)il2cpp_codegen_multiply(L_20, ((float)((int32_t)il2cpp_codegen_add(L_22, 1)))))) > ((float)(0.0f))))
			{
				goto IL_002f_1;
			}
		}

IL_00ca_1:
		{
			goto IL_00e3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_24 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f6;
	}// end catch (depth: 1)

IL_00e3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_25, NULL);
	}

IL_00f6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE*>(__this + _offset);
	U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3 (U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForRewindU3Ed__11_tC8D7C20224797881A037D09DA8079ECCC3E518FE*>(__this + _offset);
	U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885 (U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_0089_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00af;
		}

IL_002f_1:
		{
			// while (t.active) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0082_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_3 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E_m470151ACC9E263AA82DBB955352E0EDC15954B2A_RuntimeMethod_var);
			goto IL_00c2;
		}

IL_0066_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_3;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0082_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_0089_1:
		{
			// while (t.active) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (L_16)
			{
				goto IL_002f_1;
			}
		}
		{
			goto IL_00af;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	}// end catch (depth: 1)

IL_00af:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_19, NULL);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E*>(__this + _offset);
	U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B (U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForKillU3Ed__12_t6EA9E2438625431E39D01AB7EEBB4501D6B5E54E*>(__this + _offset);
	U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2 (U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_0089_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00c2;
		}

IL_002f_1:
		{
			// while (t.active && t.CompletedLoops() < elapsedLoops) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0082_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_4 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825_m99F268F457AAC9F2670B3E124987159B3C4A6507_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_0066_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_4;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0082_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_0089_1:
		{
			// while (t.active && t.CompletedLoops() < elapsedLoops) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (!L_16)
			{
				goto IL_00a9_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = __this->___t_2;
			int32_t L_18;
			L_18 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_17, NULL);
			int32_t L_19 = __this->___elapsedLoops_3;
			if ((((int32_t)L_18) < ((int32_t)L_19)))
			{
				goto IL_002f_1;
			}
		}

IL_00a9_1:
		{
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		throw e;
	}

CATCH_00ab:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00c2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_22, NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825*>(__this + _offset);
	U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB (U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForElapsedLoopsU3Ed__13_tC7B431C2393096ACD1A6BA0EAFEA84EE62DAF825*>(__this + _offset);
	U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121 (U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0069_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_008c_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00d7;
		}

IL_002f_1:
		{
			// while (t.active && t.position * (t.CompletedLoops() + 1) < position) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_4 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A_mDC5BB4876DFD04A0329940E6D96B02D34811DEF1_RuntimeMethod_var);
			goto IL_00ea;
		}

IL_0069_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_4;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0085_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_008c_1:
		{
			// while (t.active && t.position * (t.CompletedLoops() + 1) < position) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (!L_16)
			{
				goto IL_00be_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = __this->___t_2;
			NullCheck(L_17);
			float L_18;
			L_18 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_17, NULL);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_19 = __this->___t_2;
			int32_t L_20;
			L_20 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_19, NULL);
			float L_21 = __this->___position_3;
			if ((((float)((float)il2cpp_codegen_multiply(L_18, ((float)((int32_t)il2cpp_codegen_add(L_20, 1)))))) < ((float)L_21)))
			{
				goto IL_002f_1;
			}
		}

IL_00be_1:
		{
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c0;
		}
		throw e;
	}

CATCH_00c0:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ea;
	}// end catch (depth: 1)

IL_00d7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A*>(__this + _offset);
	U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111 (U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForPositionU3Ed__14_tA6006769EC53BBEBA0665ECA79096B606FDA8A4A*>(__this + _offset);
	U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12 (U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_1;
	memset((&V_1), 0, sizeof(V_1));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066_1;
			}
		}
		{
			// if (!t.active) {
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_2;
			NullCheck(L_2);
			bool L_3;
			L_3 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_2, NULL);
			if (L_3)
			{
				goto IL_0089_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			int32_t L_4;
			L_4 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_002a_1;
			}
		}
		{
			// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_5 = __this->___t_2;
			Debugger_LogInvalidTween_mEC44C60EC29E4EE401EFE473B01A209D79F3A83F(L_5, NULL);
		}

IL_002a_1:
		{
			// return;
			goto IL_00bc;
		}

IL_002f_1:
		{
			// while (t.active && !t.playedOnce) await System.Threading.Tasks.Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_6;
			L_6 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_2 = L_6;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_7;
			L_7 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_2), NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_1), NULL);
			if (L_8)
			{
				goto IL_0082_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_10 = V_1;
			__this->___U3CU3Eu__1_3 = L_10;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC(L_11, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B_mE543FA262490E3D68B942FCE75EA9F28465C42CC_RuntimeMethod_var);
			goto IL_00cf;
		}

IL_0066_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = __this->___U3CU3Eu__1_3;
			V_1 = L_12;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_13 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0082_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_1), NULL);
		}

IL_0089_1:
		{
			// while (t.active && !t.playedOnce) await System.Threading.Tasks.Task.Yield();
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = __this->___t_2;
			NullCheck(L_15);
			bool L_16;
			L_16 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_15, NULL);
			if (!L_16)
			{
				goto IL_00a3_1;
			}
		}
		{
			Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = __this->___t_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_17, NULL);
			if (!L_18)
			{
				goto IL_002f_1;
			}
		}

IL_00a3_1:
		{
			goto IL_00bc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a5;
		}
		throw e;
	}

CATCH_00a5:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cf;
	}// end catch (depth: 1)

IL_00bc:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_21, NULL);
	}

IL_00cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B*>(__this + _offset);
	U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12(_thisAdjusted, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41 (U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncWaitForStartU3Ed__15_tB4B1CE199FE822B67BCF87301159986D9D50961B*>(__this + _offset);
	U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41(_thisAdjusted, ___0_stateMachine, method);
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForCompletion::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForCompletion_get_keepWaiting_mD2C729ECA6B6F6BE57B718492953D588237F743D (WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && !t.IsComplete();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		bool L_3;
		L_3 = TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_mE85B7CC8B7FE6A2AE84DB8210249A61018118C4D (WaitForCompletion_tC84400E0FA4E28B95AA56DF28973D5FFDA16AFA0* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) 
{
	{
		// public WaitForCompletion(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForRewind::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRewind_get_keepWaiting_mF46CA00D1A5FDF140C0C027C4109C7373245A16C (WaitForRewind_t2ABB006386A81D361C36B476044786442726743D* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && (!t.playedOnce || t.position * (t.CompletedLoops() + 1) > 0);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = __this->___t_0;
		NullCheck(L_4);
		float L_5;
		L_5 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_4, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_6 = __this->___t_0;
		int32_t L_7;
		L_7 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_6, NULL);
		return (bool)((((float)((float)il2cpp_codegen_multiply(L_5, ((float)((int32_t)il2cpp_codegen_add(L_7, 1)))))) > ((float)(0.0f)))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRewind__ctor_mD79A34DBDAC1B30FBEBD36A8D749EC81935520B2 (WaitForRewind_t2ABB006386A81D361C36B476044786442726743D* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) 
{
	{
		// public WaitForRewind(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForKill::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForKill_get_keepWaiting_m4C085E03853426F4D4F5C312334101AE9BA75E3F (WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE* __this, const RuntimeMethod* method) 
{
	{
		// return t.active;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForKill__ctor_m75C2D3D54DBBBB35DE297B947C08C982CABF1BAF (WaitForKill_t532BDFE32D7C3892E01BF80054F95A9A5C1C24DE* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) 
{
	{
		// public WaitForKill(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForElapsedLoops_get_keepWaiting_mC2A906DBE9A06B7697041B76EC7C6AF58F928D6C (WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && t.CompletedLoops() < elapsedLoops;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		int32_t L_3;
		L_3 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_2, NULL);
		int32_t L_4 = __this->___elapsedLoops_1;
		return (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForElapsedLoops__ctor_mA0E7D5A115AB56AD618E24B320476B81B9CAEC7A (WaitForElapsedLoops_t24C0691B408798B4BE5CCC92DC8B4D40430717BC* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, int32_t ___1_elapsedLoops, const RuntimeMethod* method) 
{
	{
		// public WaitForElapsedLoops(Tween tween, int elapsedLoops)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// this.elapsedLoops = elapsedLoops;
		int32_t L_1 = ___1_elapsedLoops;
		__this->___elapsedLoops_1 = L_1;
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForPosition::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForPosition_get_keepWaiting_mA71AB7B7C269AB062BB6AF9CDF42E0F54EA6549F (WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && t.position * (t.CompletedLoops() + 1) < position;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		float L_3;
		L_3 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_2, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = __this->___t_0;
		int32_t L_5;
		L_5 = TweenExtensions_CompletedLoops_m5A7B5AEE691F491182E5FD7009C21E3BBC90CA8B(L_4, NULL);
		float L_6 = __this->___position_1;
		return (bool)((((float)((float)il2cpp_codegen_multiply(L_3, ((float)((int32_t)il2cpp_codegen_add(L_5, 1)))))) < ((float)L_6))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForPosition__ctor_mB6CCFCE59F142931CF19AC3BA4FE5CAFF1CBA4AD (WaitForPosition_t302B4F4C6FC89426E08DDC65543F45785B20B84B* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, float ___1_position, const RuntimeMethod* method) 
{
	{
		// public WaitForPosition(Tween tween, float position)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// this.position = position;
		float L_1 = ___1_position;
		__this->___position_1 = L_1;
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
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForStart::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForStart_get_keepWaiting_mA0B7858981A2CEDE516D5F2C5133629C6D537E0B (WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && !t.playedOnce;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForStart__ctor_m3AEC2F6E37815ED0D94C2FA5F3B784456C6E49D1 (WaitForStart_t4448F8E46F59EE599CA8DCEF52FC706221093F30* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_tween, const RuntimeMethod* method) 
{
	{
		// public WaitForStart(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_tween;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
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
// System.Void DG.Tweening.DOTweenModuleUtils::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenModuleUtils_Init_m8FD2F0DFE3D768ECE332A27B64ED208ED53568D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics_SetOrientationOnPath_mC2C4E6FA124458E00765F647C3E824CC31A4696D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initialized) return;
		bool L_0 = ((DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_il2cpp_TypeInfo_var))->____initialized_0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (_initialized) return;
		return;
	}

IL_0008:
	{
		// _initialized = true;
		((DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenModuleUtils_t5554865584F951A4A4E5DD282E6EBC60F5CEC6E9_il2cpp_TypeInfo_var))->____initialized_0 = (bool)1;
		// DOTweenExternalCommand.SetOrientationOnPath += Physics.SetOrientationOnPath;
		Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* L_1 = (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB*)il2cpp_codegen_object_new(Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_4__ctor_mE887FA5D76A46664CDCF21964B144098A77B4DD5(L_1, NULL, (intptr_t)((void*)Physics_SetOrientationOnPath_mC2C4E6FA124458E00765F647C3E824CC31A4696D_RuntimeMethod_var), NULL);
		DOTweenExternalCommand_add_SetOrientationOnPath_mBD8B37B1978CBE4534F9B8868C734F5C0A2B2804(L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUtils::Preserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenModuleUtils_Preserver_m6DD0C54BCF6FBA75AA80562BFBEDF89F7A224189 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assembly[] loadedAssemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		// MethodInfo mi = typeof(MonoBehaviour).GetMethod("Stub");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_3, _stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14, NULL);
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
// System.Void DG.Tweening.DOTweenModuleUtils/Physics::SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SetOrientationOnPath_mC2C4E6FA124458E00765F647C3E824CC31A4696D (PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___0_options, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_newRot, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_trans, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A L_0 = ___0_options;
		bool L_1 = L_0.___isRigidbody_12;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ___1_t;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___target_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___2_newRot;
		NullCheck(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_3, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)));
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_3, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_4, NULL);
		return;
	}

IL_001a:
	{
		// else trans.rotation = newRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___3_trans;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___2_newRot;
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody2D(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody2D_m80204646E4EEA6187F16FE74B1608D54DC0EFA00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody2D>() != null;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___0_target;
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(L_0, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody_m81595D61A93C148222BD16F87F82F465286457B8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody>() != null;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___0_target;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModuleUtils/Physics::CreateDOTweenPathTween(UnityEngine.MonoBehaviour,System.Boolean,System.Boolean,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* Physics_CreateDOTweenPathTween_m9AA6DE226F6876ACF693B7254E3DB5773E7651E0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_target, bool ___1_tweenRigidbody, bool ___2_isLocal, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___3_path, float ___4_duration, int32_t ___5_pathMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* V_0 = NULL;
	bool V_1 = false;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_2 = NULL;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_3 = NULL;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* G_B5_0 = NULL;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* G_B11_0 = NULL;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* G_B16_0 = NULL;
	{
		// TweenerCore<Vector3, Path, PathOptions> t = null;
		V_0 = (TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA*)NULL;
		// bool rBodyFoundAndTweened = false;
		V_1 = (bool)0;
		// if (tweenRigidbody) {
		bool L_0 = ___1_tweenRigidbody;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// Rigidbody rBody = target.GetComponent<Rigidbody>();
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ___0_target;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		V_2 = L_2;
		// if (rBody != null) {
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// rBodyFoundAndTweened = true;
		V_1 = (bool)1;
		// t = isLocal
		//     ? rBody.DOLocalPath(path, duration, pathMode)
		//     : rBody.DOPath(path, duration, pathMode);
		bool L_5 = ___2_isLocal;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = V_2;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_7 = ___3_path;
		float L_8 = ___4_duration;
		int32_t L_9 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_10;
		L_10 = DOTweenModulePhysics_DOPath_mF43CCB4AF2A13F42ED05CE2E666422CA4065F328(L_6, L_7, L_8, L_9, NULL);
		G_B5_0 = L_10;
		goto IL_0034;
	}

IL_0029:
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = V_2;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_12 = ___3_path;
		float L_13 = ___4_duration;
		int32_t L_14 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_15;
		L_15 = DOTweenModulePhysics_DOLocalPath_mCB4C763749BBB71E0B4ECB3EA7C9C43B9EAA45FF(L_11, L_12, L_13, L_14, NULL);
		G_B5_0 = L_15;
	}

IL_0034:
	{
		V_0 = G_B5_0;
	}

IL_0035:
	{
		// if (!rBodyFoundAndTweened && tweenRigidbody) {
		bool L_16 = V_1;
		bool L_17 = ___1_tweenRigidbody;
		if (!((int32_t)(((((int32_t)L_16) == ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_006b;
		}
	}
	{
		// Rigidbody2D rBody2D = target.GetComponent<Rigidbody2D>();
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_18 = ___0_target;
		NullCheck(L_18);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19;
		L_19 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(L_18, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		V_3 = L_19;
		// if (rBody2D != null) {
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		// rBodyFoundAndTweened = true;
		V_1 = (bool)1;
		// t = isLocal
		//     ? rBody2D.DOLocalPath(path, duration, pathMode)
		//     : rBody2D.DOPath(path, duration, pathMode);
		bool L_22 = ___2_isLocal;
		if (L_22)
		{
			goto IL_005f;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_23 = V_3;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_24 = ___3_path;
		float L_25 = ___4_duration;
		int32_t L_26 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_27;
		L_27 = DOTweenModulePhysics2D_DOPath_mB1B83D2F6891C271CC77EB66926701FC799328F3(L_23, L_24, L_25, L_26, NULL);
		G_B11_0 = L_27;
		goto IL_006a;
	}

IL_005f:
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_28 = V_3;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_29 = ___3_path;
		float L_30 = ___4_duration;
		int32_t L_31 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_32;
		L_32 = DOTweenModulePhysics2D_DOLocalPath_m3C71F4FACAA8A8519EA16714625B9B3B693ECC58(L_28, L_29, L_30, L_31, NULL);
		G_B11_0 = L_32;
	}

IL_006a:
	{
		V_0 = G_B11_0;
	}

IL_006b:
	{
		// if (!rBodyFoundAndTweened) {
		bool L_33 = V_1;
		if (L_33)
		{
			goto IL_0094;
		}
	}
	{
		// t = isLocal
		//     ? target.transform.DOLocalPath(path, duration, pathMode)
		//     : target.transform.DOPath(path, duration, pathMode);
		bool L_34 = ___2_isLocal;
		if (L_34)
		{
			goto IL_0083;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_35 = ___0_target;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_37 = ___3_path;
		float L_38 = ___4_duration;
		int32_t L_39 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_40;
		L_40 = ShortcutExtensions_DOPath_m3E70D921DDA265292CF467212AC676371F110691(L_36, L_37, L_38, L_39, NULL);
		G_B16_0 = L_40;
		goto IL_0093;
	}

IL_0083:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_41 = ___0_target;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_43 = ___3_path;
		float L_44 = ___4_duration;
		int32_t L_45 = ___5_pathMode;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_46;
		L_46 = ShortcutExtensions_DOLocalPath_m4F4C77B2C481DDCB0FDBCE8B3C4442D897F1B2DA(L_42, L_43, L_44, L_45, NULL);
		G_B16_0 = L_46;
	}

IL_0093:
	{
		V_0 = G_B16_0;
	}

IL_0094:
	{
		// return t;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_47 = V_0;
		return L_47;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisRelativeU3Ek__BackingField_30;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CactiveU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->____logPriority_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CplayedOnceU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CpositionU3Ek__BackingField_47;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
