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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_tB253D703968D9554ECCC628B036EFFD44F9E3663;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t862850E7A796A22A359C413FF4367484A404CAD2;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IO.MemoryStream
struct MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0;
// System.IO.Stream
struct Stream_tCFD27E43C18381861212C0288CACF467FB602009;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_tA1E54BEB1FEBE2C4791994492E5F7E1C4E6C795C;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tDB1E42B64E27C20D7E6AB04E1C4E279E5678D4AB;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0;
// System.Single[]
struct SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.DecoderFallback
struct DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5;
// System.Text.EncoderFallback
struct EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.iOS.ARFaceAnchor
struct ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6;
// UnityEngine.XR.iOS.ARFaceAnchor/DictionaryVisitorHandler
struct DictionaryVisitorHandler_tB4DF9F067684F7ED46A78673D50451E3AD07FB79;
// UnityEngine.XR.iOS.ARFaceGeometry
struct ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9;
// UnityEngine.XR.iOS.UnityRemoteVideo
struct UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222;
// UnityPointCloudExample
struct UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3;
// Utils.SerializableVector4
struct SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F;
// Utils.serializableARKitInit
struct serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4;
// Utils.serializableFaceGeometry
struct serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC;
// Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51;
// Utils.serializablePointCloud
struct serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0;
// Utils.serializableSHC
struct serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6;
// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513;
// Utils.serializableUnityARFaceAnchor
struct serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436;

extern RuntimeClass* ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC_il2cpp_TypeInfo_var;
extern RuntimeClass* serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var;
extern String_t* _stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
extern const RuntimeMethod* ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_m7EFBDAF12BF001262C756EEB01043324B1087BCA_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3_RuntimeMethod_var;
extern const RuntimeMethod* UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8_RuntimeMethod_var;
extern const uint32_t ObjectSerializationExtension_SerializeToByteArray_m829E276697C385C7C45A7133D73D8A34EB6AA86F_MetadataUsageId;
extern const uint32_t SerializableVector4_ToString_m5EFAC2D62D933124064775FA7B1DACD3B12B5E87_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId;
extern const uint32_t UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_InitializeTextures_mC98ACA3CB9E9953F2FF530BD76BD1DBDA9C78D81_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnDestroy_mE31B86D9CB360F43B3D5FC3441CB89084E48B8F8_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_OnPreRender_mDA0AD40FBF58E10756430788078090258101F603_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_Start_m6CB84514519756A10F5D7ADAD1D3967B4EBDEC4B_MetadataUsageId;
extern const uint32_t UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8_MetadataUsageId;
extern const uint32_t serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_TexCoords_m46E41AA44D5C214F76FC071C7F46A5118D112280_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_TriangleIndices_m098FE0788EDCE3184AE82157929E37B8C386169A_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_get_Vertices_mD544C19FA709C18BEB6028B882539FB1247C6ADB_MetadataUsageId;
extern const uint32_t serializableFaceGeometry_op_Implicit_m3968FCAD3AF69D571F5B670B298426EBB88BE82A_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId;
extern const uint32_t serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m14258F0E479C89B86D8EBAA63AB1D29EEBB83A1B_MetadataUsageId;
extern const uint32_t serializableSHC_op_Implicit_m722ADA283319653AFFB93993E26DBDF84F1C009F_MetadataUsageId;
extern const uint32_t serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId;
extern const uint32_t serializableUnityARFaceAnchor_op_Implicit_m9AA5A950EDB420DF52CA2FB76C2F0E701430955B_MetadataUsageId;
extern const uint32_t serializableUnityARLightData__ctor_m0C5860CB2DD3FEA464A66ECA5E1BBBCD67E16EA8_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId;
extern const uint32_t serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_mCD5B7A5D27D88F178DE2397380DCC5B636988815_MetadataUsageId;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;

struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_TB4533B30A89CE06018D5A9606348971C05837DEF_H
#define DICTIONARY_2_TB4533B30A89CE06018D5A9606348971C05837DEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___keySlots_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___valueSlots_7)); }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* get_valueSlots_7() const { return ___valueSlots_7; }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2_Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__amU24cacheB
	Transform_1_tB253D703968D9554ECCC628B036EFFD44F9E3663 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_tB253D703968D9554ECCC628B036EFFD44F9E3663 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_tB253D703968D9554ECCC628B036EFFD44F9E3663 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_tB253D703968D9554ECCC628B036EFFD44F9E3663 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TB4533B30A89CE06018D5A9606348971C05837DEF_H
#ifndef LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#define LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____items_1)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifndef STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#define STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tCFD27E43C18381861212C0288CACF467FB602009  : public RuntimeObject
{
public:

public:
};

struct Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields, ___Null_0)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_Null_0() const { return ___Null_0; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#define ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___decoder_fallback_3)); }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoder_fallback_4)); }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef OBJECTSERIALIZATIONEXTENSION_TF9AA06D5AF96EB20B859B4592184A0042F3E17F3_H
#define OBJECTSERIALIZATIONEXTENSION_TF9AA06D5AF96EB20B859B4592184A0042F3E17F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_tF9AA06D5AF96EB20B859B4592184A0042F3E17F3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_TF9AA06D5AF96EB20B859B4592184A0042F3E17F3_H
#ifndef SERIALIZABLEVECTOR4_T9A7F22848995F36265F0E71E3819E6760EE4572F_H
#define SERIALIZABLEVECTOR4_T9A7F22848995F36265F0E71E3819E6760EE4572F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T9A7F22848995F36265F0E71E3819E6760EE4572F_H
#ifndef SERIALIZABLEFACEGEOMETRY_T21FAE25DC933C251020AB6A472356145065555DC_H
#define SERIALIZABLEFACEGEOMETRY_T21FAE25DC933C251020AB6A472356145065555DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFaceGeometry
struct  serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableFaceGeometry::vertices
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___vertices_0;
	// System.Byte[] Utils.serializableFaceGeometry::texCoords
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___texCoords_1;
	// System.Byte[] Utils.serializableFaceGeometry::triIndices
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___triIndices_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC, ___vertices_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC, ___texCoords_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC, ___triIndices_2)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFACEGEOMETRY_T21FAE25DC933C251020AB6A472356145065555DC_H
#ifndef SERIALIZABLEPOINTCLOUD_TE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_H
#define SERIALIZABLEPOINTCLOUD_TE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0, ___pointCloudData_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_TE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_H
#ifndef SERIALIZABLESHC_T4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_H
#define SERIALIZABLESHC_T4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableSHC
struct  serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6, ___shcData_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((&___shcData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLESHC_T4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_H
#ifndef SERIALIZABLEUNITYARFACEANCHOR_TD07FE0ACD692C69B2480D2C35BFBCBBDB000127A_H
#define SERIALIZABLEUNITYARFACEANCHOR_TD07FE0ACD692C69B2480D2C35BFBCBBDB000127A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARFaceAnchor
struct  serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARFaceAnchor::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.serializableFaceGeometry Utils.serializableUnityARFaceAnchor::faceGeometry
	serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * ___faceGeometry_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Utils.serializableUnityARFaceAnchor::arBlendShapes
	Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * ___arBlendShapes_2;
	// System.Byte[] Utils.serializableUnityARFaceAnchor::identifierStr
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___identifierStr_3;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_faceGeometry_1() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A, ___faceGeometry_1)); }
	inline serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * get_faceGeometry_1() const { return ___faceGeometry_1; }
	inline serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC ** get_address_of_faceGeometry_1() { return &___faceGeometry_1; }
	inline void set_faceGeometry_1(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * value)
	{
		___faceGeometry_1 = value;
		Il2CppCodeGenWriteBarrier((&___faceGeometry_1), value);
	}

	inline static int32_t get_offset_of_arBlendShapes_2() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A, ___arBlendShapes_2)); }
	inline Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * get_arBlendShapes_2() const { return ___arBlendShapes_2; }
	inline Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF ** get_address_of_arBlendShapes_2() { return &___arBlendShapes_2; }
	inline void set_arBlendShapes_2(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * value)
	{
		___arBlendShapes_2 = value;
		Il2CppCodeGenWriteBarrier((&___arBlendShapes_2), value);
	}

	inline static int32_t get_offset_of_identifierStr_3() { return static_cast<int32_t>(offsetof(serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A, ___identifierStr_3)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_identifierStr_3() const { return ___identifierStr_3; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_identifierStr_3() { return &___identifierStr_3; }
	inline void set_identifierStr_3(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___identifierStr_3 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARFACEANCHOR_TD07FE0ACD692C69B2480D2C35BFBCBBDB000127A_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_TB3845F8BE5B8F05C33D459603914CCF5F9E581C9_H
#define SERIALIZABLEUNITYARMATRIX4X4_TB3845F8BE5B8F05C33D459603914CCF5F9E581C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column0_0)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column1_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column2_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column3_3)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_TB3845F8BE5B8F05C33D459603914CCF5F9E581C9_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#define BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t7D49CE0AB6123507423CD8702694F3D6CFD54DA0 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#define MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___internalBuffer_5)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#define INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#define GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_TE002D24915851AD73ACC0F503601C384273C3060_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef RESOLUTION_T350D132B8526B5211E0BF8B22782F20D55994A90_H
#define RESOLUTION_T350D132B8526B5211E0BF8B22782F20D55994A90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T350D132B8526B5211E0BF8B22782F20D55994A90_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#define UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#define GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_tE222D96905809FC8D4A6377409E3A6EDEFDD9C76, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_TE222D96905809FC8D4A6377409E3A6EDEFDD9C76_H
#ifndef FORMATTERASSEMBLYSTYLE_TFD6FBB0FB7E14658CB7117560886D234FA1034BF_H
#define FORMATTERASSEMBLYSTYLE_TFD6FBB0FB7E14658CB7117560886D234FA1034BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_tFD6FBB0FB7E14658CB7117560886D234FA1034BF 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tFD6FBB0FB7E14658CB7117560886D234FA1034BF, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_TFD6FBB0FB7E14658CB7117560886D234FA1034BF_H
#ifndef FORMATTERTYPESTYLE_T67B2ACFBCCB311DE7505005B9F9EC9A0CAFD17BA_H
#define FORMATTERTYPESTYLE_T67B2ACFBCCB311DE7505005B9F9EC9A0CAFD17BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t67B2ACFBCCB311DE7505005B9F9EC9A0CAFD17BA 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t67B2ACFBCCB311DE7505005B9F9EC9A0CAFD17BA, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T67B2ACFBCCB311DE7505005B9F9EC9A0CAFD17BA_H
#ifndef TYPEFILTERLEVEL_TF3A4EC8EF5CFF75656105435A9E28F1E3FFA3293_H
#define TYPEFILTERLEVEL_TF3A4EC8EF5CFF75656105435A9E28F1E3FFA3293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_tF3A4EC8EF5CFF75656105435A9E28F1E3FFA3293 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_tF3A4EC8EF5CFF75656105435A9E28F1E3FFA3293, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_TF3A4EC8EF5CFF75656105435A9E28F1E3FFA3293_H
#ifndef STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#define STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF8A83A38064A2CFF4FDEC6CD633A5509C596E397, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_TF8A83A38064A2CFF4FDEC6CD633A5509C596E397_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#define ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#ifndef ARTEXTUREHANDLES_TA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2_H
#define ARTEXTUREHANDLES_TA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_TA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2_H
#ifndef ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#define ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#ifndef ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#define ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#ifndef LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#define LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___primaryDirAndIntensity_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#ifndef UNITYARALIGNMENT_TBF31DEB8CE1A352963601C233FC63CBAA562054F_H
#define UNITYARALIGNMENT_TBF31DEB8CE1A352963601C233FC63CBAA562054F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_TBF31DEB8CE1A352963601C233FC63CBAA562054F_H
#ifndef UNITYARDIRECTIONALLIGHTESTIMATE_TF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_H
#define UNITYARDIRECTIONALLIGHTESTIMATE_TF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightDirection_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphericalHarmonicsCoefficients_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARDIRECTIONALLIGHTESTIMATE_TF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_H
#ifndef UNITYARFACEGEOMETRY_T15F03281F3361400331718DF03DF7DA0DD5501E5_H
#define UNITYARFACEGEOMETRY_T15F03281F3361400331718DF03DF7DA0DD5501E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceGeometry
struct  UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARFaceGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceGeometry::triangleIndices
	intptr_t ___triangleIndices_5;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEGEOMETRY_T15F03281F3361400331718DF03DF7DA0DD5501E5_H
#ifndef UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#define UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#ifndef UNITYARPLANEDETECTION_T2B0A97EC1392ACCE7B07E691202B9CD10C972A22_H
#define UNITYARPLANEDETECTION_T2B0A97EC1392ACCE7B07E691202B9CD10C972A22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T2B0A97EC1392ACCE7B07E691202B9CD10C972A22_H
#ifndef UNITYARSESSIONRUNOPTION_T727FF292E082186FACC7FF0DB653ACCE553F3247_H
#define UNITYARSESSIONRUNOPTION_T727FF292E082186FACC7FF0DB653ACCE553F3247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T727FF292E082186FACC7FF0DB653ACCE553F3247_H
#ifndef UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#define UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T6279502A409A3B43F37B145CC5102425C96EBA51_H
#define SERIALIZABLEFROMEDITORMESSAGE_T6279502A409A3B43F37B145CC5102425C96EBA51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T6279502A409A3B43F37B145CC5102425C96EBA51_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#define STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T6B0A404807D43232E95DD1A784BF4BA30FADBCC1_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef ARFACEGEOMETRY_TBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2_H
#define ARFACEGEOMETRY_TBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceGeometry
struct  ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.ARFaceGeometry::uFaceGeometry
	UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  ___uFaceGeometry_0;

public:
	inline static int32_t get_offset_of_uFaceGeometry_0() { return static_cast<int32_t>(offsetof(ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2, ___uFaceGeometry_0)); }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  get_uFaceGeometry_0() const { return ___uFaceGeometry_0; }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5 * get_address_of_uFaceGeometry_0() { return &___uFaceGeometry_0; }
	inline void set_uFaceGeometry_0(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  value)
	{
		___uFaceGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEGEOMETRY_TBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2_H
#ifndef ARKITFACETRACKINGCONFIGURATION_T8035DE78DED2F8B4246159EE3E5882142A1D5603_H
#define ARKITFACETRACKINGCONFIGURATION_T8035DE78DED2F8B4246159EE3E5882142A1D5603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct  ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::enableLightEstimation
	bool ___enableLightEstimation_1;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_1() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603, ___enableLightEstimation_1)); }
	inline bool get_enableLightEstimation_1() const { return ___enableLightEstimation_1; }
	inline bool* get_address_of_enableLightEstimation_1() { return &___enableLightEstimation_1; }
	inline void set_enableLightEstimation_1(bool value)
	{
		___enableLightEstimation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
#endif // ARKITFACETRACKINGCONFIGURATION_T8035DE78DED2F8B4246159EE3E5882142A1D5603_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_H
#ifndef ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#define ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___transform_1)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___center_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_3() const { return ___center_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___extent_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_extent_4() const { return ___extent_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};
#endif // ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#ifndef UNITYARFACEANCHORDATA_T3A457F763D64A6BE658018C01B8B4DACA73E87C1_H
#define UNITYARFACEANCHORDATA_T3A457F763D64A6BE658018C01B8B4DACA73E87C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARFaceAnchorData
struct  UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARFaceAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// UnityEngine.XR.iOS.UnityARFaceGeometry UnityEngine.XR.iOS.UnityARFaceAnchorData::faceGeometry
	UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  ___faceGeometry_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARFaceAnchorData::blendShapes
	intptr_t ___blendShapes_3;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_faceGeometry_2() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___faceGeometry_2)); }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  get_faceGeometry_2() const { return ___faceGeometry_2; }
	inline UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5 * get_address_of_faceGeometry_2() { return &___faceGeometry_2; }
	inline void set_faceGeometry_2(UnityARFaceGeometry_t15F03281F3361400331718DF03DF7DA0DD5501E5  value)
	{
		___faceGeometry_2 = value;
	}

	inline static int32_t get_offset_of_blendShapes_3() { return static_cast<int32_t>(offsetof(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1, ___blendShapes_3)); }
	inline intptr_t get_blendShapes_3() const { return ___blendShapes_3; }
	inline intptr_t* get_address_of_blendShapes_3() { return &___blendShapes_3; }
	inline void set_blendShapes_3(intptr_t value)
	{
		___blendShapes_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARFACEANCHORDATA_T3A457F763D64A6BE658018C01B8B4DACA73E87C1_H
#ifndef UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#define UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#ifndef UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#define UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#ifndef SERIALIZABLEARKITINIT_T7F5F65C164CE76F74652C3186631AA1AF968BE42_H
#define SERIALIZABLEARKITINIT_T7F5F65C164CE76F74652C3186631AA1AF968BE42_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___config_0)); }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T7F5F65C164CE76F74652C3186631AA1AF968BE42_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_H
#ifndef SERIALIZABLEUNITYARCAMERA_T952DA4E71A676B312CA94BA7B7FCA4F0265A3513_H
#define SERIALIZABLEUNITYARCAMERA_T952DA4E71A676B312CA94BA7B7FCA4F0265A3513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// Utils.serializableUnityARLightData Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___lightData_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___lightData_5)); }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((&___lightData_5), value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___pointCloud_6)); }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T952DA4E71A676B312CA94BA7B7FCA4F0265A3513_H
#ifndef SERIALIZABLEUNITYARLIGHTDATA_T9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_H
#define SERIALIZABLEUNITYARLIGHTDATA_T9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___lightSHC_1)); }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((&___lightSHC_1), value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((&___primaryLightDirAndIntensity_2), value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARLIGHTDATA_T9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T25B12DF3E16073DBAC49B8672A09C69E4D7B7436_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T25B12DF3E16073DBAC49B8672A09C69E4D7B7436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___center_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___extent_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___identifierStr_4)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T25B12DF3E16073DBAC49B8672A09C69E4D7B7436_H
#ifndef BINARYFORMATTER_TF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_H
#define BINARYFORMATTER_TF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_tDB1E42B64E27C20D7E6AB04E1C4E279E5678D4AB * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___binder_1)); }
	inline SerializationBinder_tDB1E42B64E27C20D7E6AB04E1C4E279E5678D4AB * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_tDB1E42B64E27C20D7E6AB04E1C4E279E5678D4AB ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_tDB1E42B64E27C20D7E6AB04E1C4E279E5678D4AB * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___context_2)); }
	inline StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  get_context_2() const { return ___context_2; }
	inline StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t6B0A404807D43232E95DD1A784BF4BA30FADBCC1  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_TF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ARFACEANCHOR_TFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_H
#define ARFACEANCHOR_TFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFaceAnchor
struct  ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARFaceAnchorData UnityEngine.XR.iOS.ARFaceAnchor::faceAnchorData
	UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1  ___faceAnchorData_0;

public:
	inline static int32_t get_offset_of_faceAnchorData_0() { return static_cast<int32_t>(offsetof(ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6, ___faceAnchorData_0)); }
	inline UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1  get_faceAnchorData_0() const { return ___faceAnchorData_0; }
	inline UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1 * get_address_of_faceAnchorData_0() { return &___faceAnchorData_0; }
	inline void set_faceAnchorData_0(UnityARFaceAnchorData_t3A457F763D64A6BE658018C01B8B4DACA73E87C1  value)
	{
		___faceAnchorData_0 = value;
	}
};

struct ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::blendshapesDictionary
	Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * ___blendshapesDictionary_1;
	// UnityEngine.XR.iOS.ARFaceAnchor_DictionaryVisitorHandler UnityEngine.XR.iOS.ARFaceAnchor::<>f__mgU24cache0
	DictionaryVisitorHandler_tB4DF9F067684F7ED46A78673D50451E3AD07FB79 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_blendshapesDictionary_1() { return static_cast<int32_t>(offsetof(ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_StaticFields, ___blendshapesDictionary_1)); }
	inline Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * get_blendshapesDictionary_1() const { return ___blendshapesDictionary_1; }
	inline Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF ** get_address_of_blendshapesDictionary_1() { return &___blendshapesDictionary_1; }
	inline void set_blendshapesDictionary_1(Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * value)
	{
		___blendshapesDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___blendshapesDictionary_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline DictionaryVisitorHandler_tB4DF9F067684F7ED46A78673D50451E3AD07FB79 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline DictionaryVisitorHandler_tB4DF9F067684F7ED46A78673D50451E3AD07FB79 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(DictionaryVisitorHandler_tB4DF9F067684F7ED46A78673D50451E3AD07FB79 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFACEANCHOR_TFD943197F892D93FB7E2C8F7B8BDAABE62714AC6_H
#ifndef UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#define UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___lightData_5)); }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___pointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_pinvoke
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_com
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#ifndef INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#define INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getLightEstimation
	uint32_t ___getLightEstimation_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___lightData_5)); }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}

	inline static int32_t get_offset_of_getLightEstimation_8() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getLightEstimation_8)); }
	inline uint32_t get_getLightEstimation_8() const { return ___getLightEstimation_8; }
	inline uint32_t* get_address_of_getLightEstimation_8() { return &___getLightEstimation_8; }
	inline void set_getLightEstimation_8(uint32_t value)
	{
		___getLightEstimation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#define UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_14;

public:
	inline static int32_t get_offset_of_m_NativeARSession_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760, ___m_NativeARSession_14)); }
	inline intptr_t get_m_NativeARSession_14() const { return ___m_NativeARSession_14; }
	inline intptr_t* get_address_of_m_NativeARSession_14() { return &___m_NativeARSession_14; }
	inline void set_m_NativeARSession_14(intptr_t value)
	{
		___m_NativeARSession_14 = value;
	}
};

struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___ARSessionFailedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessionInterruptedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessioninterruptionEndedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * ___ARSessionTrackingChangedEvent_13;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___s_Camera_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___s_UnityARSessionNativeInterface_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache0
	internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * ___U3CU3Ef__mgU24cache0_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache1
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___U3CU3Ef__mgU24cache1_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache2
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___U3CU3Ef__mgU24cache2_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache3
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___U3CU3Ef__mgU24cache3_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache4
	internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * ___U3CU3Ef__mgU24cache4_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache5
	internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * ___U3CU3Ef__mgU24cache5_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache6
	internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * ___U3CU3Ef__mgU24cache6_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache7
	internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * ___U3CU3Ef__mgU24cache7_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache8
	internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * ___U3CU3Ef__mgU24cache8_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache9
	internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * ___U3CU3Ef__mgU24cache9_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheA
	internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * ___U3CU3Ef__mgU24cacheA_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheB
	internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * ___U3CU3Ef__mgU24cacheB_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheC
	internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * ___U3CU3Ef__mgU24cacheC_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheD
	internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * ___U3CU3Ef__mgU24cacheD_30;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionFailedEvent_10)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_ARSessionFailedEvent_10() const { return ___ARSessionFailedEvent_10; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_ARSessionFailedEvent_10() { return &___ARSessionFailedEvent_10; }
	inline void set_ARSessionFailedEvent_10(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___ARSessionFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionInterruptedEvent_11)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessionInterruptedEvent_11() const { return ___ARSessionInterruptedEvent_11; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessionInterruptedEvent_11() { return &___ARSessionInterruptedEvent_11; }
	inline void set_ARSessionInterruptedEvent_11(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessionInterruptedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessioninterruptionEndedEvent_12)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessioninterruptionEndedEvent_12() const { return ___ARSessioninterruptionEndedEvent_12; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessioninterruptionEndedEvent_12() { return &___ARSessioninterruptionEndedEvent_12; }
	inline void set_ARSessioninterruptionEndedEvent_12(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessioninterruptionEndedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionTrackingChangedEvent_13)); }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * get_ARSessionTrackingChangedEvent_13() const { return ___ARSessionTrackingChangedEvent_13; }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 ** get_address_of_ARSessionTrackingChangedEvent_13() { return &___ARSessionTrackingChangedEvent_13; }
	inline void set_ARSessionTrackingChangedEvent_13(ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * value)
	{
		___ARSessionTrackingChangedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_13), value);
	}

	inline static int32_t get_offset_of_s_Camera_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_Camera_15)); }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  get_s_Camera_15() const { return ___s_Camera_15; }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * get_address_of_s_Camera_15() { return &___s_Camera_15; }
	inline void set_s_Camera_15(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  value)
	{
		___s_Camera_15 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_UnityARSessionNativeInterface_16)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_s_UnityARSessionNativeInterface_16() const { return ___s_UnityARSessionNativeInterface_16; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_s_UnityARSessionNativeInterface_16() { return &___s_UnityARSessionNativeInterface_16; }
	inline void set_s_UnityARSessionNativeInterface_16(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___s_UnityARSessionNativeInterface_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache0_17)); }
	inline internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * get_U3CU3Ef__mgU24cache0_17() const { return ___U3CU3Ef__mgU24cache0_17; }
	inline internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 ** get_address_of_U3CU3Ef__mgU24cache0_17() { return &___U3CU3Ef__mgU24cache0_17; }
	inline void set_U3CU3Ef__mgU24cache0_17(internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * value)
	{
		___U3CU3Ef__mgU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache1_18)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_U3CU3Ef__mgU24cache1_18() const { return ___U3CU3Ef__mgU24cache1_18; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_U3CU3Ef__mgU24cache1_18() { return &___U3CU3Ef__mgU24cache1_18; }
	inline void set_U3CU3Ef__mgU24cache1_18(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___U3CU3Ef__mgU24cache1_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache2_19)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_U3CU3Ef__mgU24cache2_19() const { return ___U3CU3Ef__mgU24cache2_19; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_U3CU3Ef__mgU24cache2_19() { return &___U3CU3Ef__mgU24cache2_19; }
	inline void set_U3CU3Ef__mgU24cache2_19(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___U3CU3Ef__mgU24cache2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache3_20)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_U3CU3Ef__mgU24cache3_20() const { return ___U3CU3Ef__mgU24cache3_20; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_U3CU3Ef__mgU24cache3_20() { return &___U3CU3Ef__mgU24cache3_20; }
	inline void set_U3CU3Ef__mgU24cache3_20(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___U3CU3Ef__mgU24cache3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache4_21)); }
	inline internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * get_U3CU3Ef__mgU24cache4_21() const { return ___U3CU3Ef__mgU24cache4_21; }
	inline internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 ** get_address_of_U3CU3Ef__mgU24cache4_21() { return &___U3CU3Ef__mgU24cache4_21; }
	inline void set_U3CU3Ef__mgU24cache4_21(internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * value)
	{
		___U3CU3Ef__mgU24cache4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache5_22)); }
	inline internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * get_U3CU3Ef__mgU24cache5_22() const { return ___U3CU3Ef__mgU24cache5_22; }
	inline internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 ** get_address_of_U3CU3Ef__mgU24cache5_22() { return &___U3CU3Ef__mgU24cache5_22; }
	inline void set_U3CU3Ef__mgU24cache5_22(internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * value)
	{
		___U3CU3Ef__mgU24cache5_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache6_23)); }
	inline internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * get_U3CU3Ef__mgU24cache6_23() const { return ___U3CU3Ef__mgU24cache6_23; }
	inline internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 ** get_address_of_U3CU3Ef__mgU24cache6_23() { return &___U3CU3Ef__mgU24cache6_23; }
	inline void set_U3CU3Ef__mgU24cache6_23(internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * value)
	{
		___U3CU3Ef__mgU24cache6_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache7_24)); }
	inline internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * get_U3CU3Ef__mgU24cache7_24() const { return ___U3CU3Ef__mgU24cache7_24; }
	inline internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 ** get_address_of_U3CU3Ef__mgU24cache7_24() { return &___U3CU3Ef__mgU24cache7_24; }
	inline void set_U3CU3Ef__mgU24cache7_24(internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * value)
	{
		___U3CU3Ef__mgU24cache7_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache8_25)); }
	inline internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * get_U3CU3Ef__mgU24cache8_25() const { return ___U3CU3Ef__mgU24cache8_25; }
	inline internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 ** get_address_of_U3CU3Ef__mgU24cache8_25() { return &___U3CU3Ef__mgU24cache8_25; }
	inline void set_U3CU3Ef__mgU24cache8_25(internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * value)
	{
		___U3CU3Ef__mgU24cache8_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache9_26)); }
	inline internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * get_U3CU3Ef__mgU24cache9_26() const { return ___U3CU3Ef__mgU24cache9_26; }
	inline internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 ** get_address_of_U3CU3Ef__mgU24cache9_26() { return &___U3CU3Ef__mgU24cache9_26; }
	inline void set_U3CU3Ef__mgU24cache9_26(internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * value)
	{
		___U3CU3Ef__mgU24cache9_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheA_27)); }
	inline internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * get_U3CU3Ef__mgU24cacheA_27() const { return ___U3CU3Ef__mgU24cacheA_27; }
	inline internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 ** get_address_of_U3CU3Ef__mgU24cacheA_27() { return &___U3CU3Ef__mgU24cacheA_27; }
	inline void set_U3CU3Ef__mgU24cacheA_27(internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * value)
	{
		___U3CU3Ef__mgU24cacheA_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheB_28)); }
	inline internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * get_U3CU3Ef__mgU24cacheB_28() const { return ___U3CU3Ef__mgU24cacheB_28; }
	inline internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 ** get_address_of_U3CU3Ef__mgU24cacheB_28() { return &___U3CU3Ef__mgU24cacheB_28; }
	inline void set_U3CU3Ef__mgU24cacheB_28(internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * value)
	{
		___U3CU3Ef__mgU24cacheB_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheC_29)); }
	inline internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * get_U3CU3Ef__mgU24cacheC_29() const { return ___U3CU3Ef__mgU24cacheC_29; }
	inline internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A ** get_address_of_U3CU3Ef__mgU24cacheC_29() { return &___U3CU3Ef__mgU24cacheC_29; }
	inline void set_U3CU3Ef__mgU24cacheC_29(internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * value)
	{
		___U3CU3Ef__mgU24cacheC_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheD_30)); }
	inline internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * get_U3CU3Ef__mgU24cacheD_30() const { return ___U3CU3Ef__mgU24cacheD_30; }
	inline internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 ** get_address_of_U3CU3Ef__mgU24cacheD_30() { return &___U3CU3Ef__mgU24cacheD_30; }
	inline void set_U3CU3Ef__mgU24cacheD_30(internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * value)
	{
		___U3CU3Ef__mgU24cacheD_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#ifndef ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#define ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate
struct  ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#ifndef CONNECTTOEDITOR_T8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3_H
#define CONNECTTOEDITOR_T8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * ___playerConnection_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___m_session_5;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___frameBufferTex_7;

public:
	inline static int32_t get_offset_of_playerConnection_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___playerConnection_4)); }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * get_playerConnection_4() const { return ___playerConnection_4; }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA ** get_address_of_playerConnection_4() { return &___playerConnection_4; }
	inline void set_playerConnection_4(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * value)
	{
		___playerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_4), value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_5), value);
	}

	inline static int32_t get_offset_of_editorID_6() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___editorID_6)); }
	inline int32_t get_editorID_6() const { return ___editorID_6; }
	inline int32_t* get_address_of_editorID_6() { return &___editorID_6; }
	inline void set_editorID_6(int32_t value)
	{
		___editorID_6 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_7() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___frameBufferTex_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_frameBufferTex_7() const { return ___frameBufferTex_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_frameBufferTex_7() { return &___frameBufferTex_7; }
	inline void set_frameBufferTex_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___frameBufferTex_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3_H
#ifndef UNITYREMOTEVIDEO_TE1B5CC24F1490A2E00A8213CF27EE54DD7488222_H
#define UNITYREMOTEVIDEO_TE1B5CC24F1490A2E00A8213CF27EE54DD7488222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * ___connectToEditor_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___m_Session_5;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_6;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_textureYBytes_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_textureUVBytes_9;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_textureYBytes2_10;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___m_textureUVBytes2_11;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  ___m_pinnedYArray_12;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  ___m_pinnedUVArray_13;

public:
	inline static int32_t get_offset_of_connectToEditor_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___connectToEditor_4)); }
	inline ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * get_connectToEditor_4() const { return ___connectToEditor_4; }
	inline ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 ** get_address_of_connectToEditor_4() { return &___connectToEditor_4; }
	inline void set_connectToEditor_4(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * value)
	{
		___connectToEditor_4 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_4), value);
	}

	inline static int32_t get_offset_of_m_Session_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_Session_5)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_m_Session_5() const { return ___m_Session_5; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_m_Session_5() { return &___m_Session_5; }
	inline void set_m_Session_5(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___m_Session_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_5), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___bTexturesInitialized_6)); }
	inline bool get_bTexturesInitialized_6() const { return ___bTexturesInitialized_6; }
	inline bool* get_address_of_bTexturesInitialized_6() { return &___bTexturesInitialized_6; }
	inline void set_bTexturesInitialized_6(bool value)
	{
		___bTexturesInitialized_6 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___currentFrameIndex_7)); }
	inline int32_t get_currentFrameIndex_7() const { return ___currentFrameIndex_7; }
	inline int32_t* get_address_of_currentFrameIndex_7() { return &___currentFrameIndex_7; }
	inline void set_currentFrameIndex_7(int32_t value)
	{
		___currentFrameIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureYBytes_8)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_textureYBytes_8() const { return ___m_textureYBytes_8; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_textureYBytes_8() { return &___m_textureYBytes_8; }
	inline void set_m_textureYBytes_8(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_textureYBytes_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureUVBytes_9)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_textureUVBytes_9() const { return ___m_textureUVBytes_9; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_textureUVBytes_9() { return &___m_textureUVBytes_9; }
	inline void set_m_textureUVBytes_9(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_textureUVBytes_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_9), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureYBytes2_10)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_textureYBytes2_10() const { return ___m_textureYBytes2_10; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_textureYBytes2_10() { return &___m_textureYBytes2_10; }
	inline void set_m_textureYBytes2_10(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_textureYBytes2_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_10), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureUVBytes2_11)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_m_textureUVBytes2_11() const { return ___m_textureUVBytes2_11; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_m_textureUVBytes2_11() { return &___m_textureUVBytes2_11; }
	inline void set_m_textureUVBytes2_11(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___m_textureUVBytes2_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_11), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_12() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_pinnedYArray_12)); }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  get_m_pinnedYArray_12() const { return ___m_pinnedYArray_12; }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * get_address_of_m_pinnedYArray_12() { return &___m_pinnedYArray_12; }
	inline void set_m_pinnedYArray_12(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  value)
	{
		___m_pinnedYArray_12 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_13() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_pinnedUVArray_13)); }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  get_m_pinnedUVArray_13() const { return ___m_pinnedUVArray_13; }
	inline GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * get_address_of_m_pinnedUVArray_13() { return &___m_pinnedUVArray_13; }
	inline void set_m_pinnedUVArray_13(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  value)
	{
		___m_pinnedUVArray_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_TE1B5CC24F1490A2E00A8213CF27EE54DD7488222_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
#define UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___PointCloudPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_5), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___pointCloudObjects_6)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_6), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
// System.Single[]
struct SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, int32_t p0, const RuntimeMethod* method);
// T Utils.ObjectSerializationExtension::Deserialize<System.Object>(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectSerializationExtension_Deserialize_TisRuntimeObject_m19C7400CEB667B2778859A87F8361E4A7B0D850E_gshared (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___byteArray0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_mD354328EEA9C61EDB34A742A6078C7ECEE0C1C33 (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Single[] UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::get_SphericalHarmonicCoefficients()
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m32EE248E32FA379A1131C0ED08A5F17E26C82861 (MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARDirectionalLightEstimate__ctor_mFCD47DCA0C7B5F421DCD3046DC374631F5295813 (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * __this, SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___SHC0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, float ___intensity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightData__ctor_m5F712D4E8310DA5AF998BB965207735A637D0F47 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___udle2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_mFCCCC928C7B32D12F7D822435CE7D261B89190B6 (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_mC98ACA3CB9E9953F2FF530BD76BD1DBDA9C78D81 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m71173833468A0492B84D21A42B8D6DF1C9A62E54 (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" IL2CPP_METHOD_ATTR GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  GCHandle_Alloc_m842B08AF5FD8C7FFFA720326D0B46B1A0DC3A753 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" IL2CPP_METHOD_ATTR GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C (RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m3BD85998CD2C0F65BA55C8FC541875058AE0B3A6 (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_ByteArrayForFrame_m6EEFF92326E26AC758F25EC99E6C3EC72F6551F3 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array01, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCapturePixelData(System.Boolean,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_SetCapturePixelData_m289ED1A5161F2B69B15466E08BD88438A46891D5 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, bool ___enable0, intptr_t ___pYByteArray1, intptr_t ___pUVByteArray2, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARVideoTextureHandles()
extern "C" IL2CPP_METHOD_ATTR ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  UnityARSessionNativeInterface_GetARVideoTextureHandles_m709A401A9D8AD29E6DF4FF5B46B9A3A9081CA886 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C" IL2CPP_METHOD_ATTR Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A (const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_YByteArrayForFrame_m7DAA2290A5AFE18327EE9ECF3932F727B2B0C627 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_mD4DC9A9A515CE0390974A3897D95AADDDAF10D83 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * ___handle0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_UVByteArrayForFrame_m10B176DF695524EA96710E52219BFF4227625382 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureYMsgId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureYMsgId_mE2D923CE89A7B77B07762C07598F398348C41EA2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ConnectToEditor::SendToEditor(System.Guid,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void ConnectToEditor_SendToEditor_m2868F387BE9B900948512144C77A64BD1ADE9571 (ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * __this, Guid_t  ___msgId0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___data1, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureUVMsgId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureUVMsgId_mDFCBC55EA7AAFAECEA074071D4418E10FADE7606 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared)(__this, p0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, int32_t, const RuntimeMethod*))List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared)(__this, p0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m134D5BCDDFA54295919D4FE9A31F9B89DE36B85B (int64_t p0, int64_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m74E137E0F87AF532928251446717274BE8A61D6B (BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8A42A02BD85F3928E415E022073FC3FB24167001 (MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m9F2A3D91212004854077819CDCEF3B3912E04393 (BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m5B45EF5C70673C3B5D702E402B815134CC22AB84 (String_t* p0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m995D6D6375157F4E939FE06B36BE499D9A1FFDDD (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration__ctor_m4D724E1A479B490371067DAAD57F89CFE28BE9B9 (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARKitFaceTrackingConfiguration__ctor_mDBF9EF66ABEDC42F90A1D96F2B49FDC7FA80085C (ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603 * __this, int32_t ___alignment0, bool ___enableLightEstimation1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_vertexCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_vertexCount_mEE5F5E89ADF8E345E937313913DE1C415626C121 (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_textureCoordinateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_textureCoordinateCount_m68E689DF9A7C37086D4044DBE6F70183B89AD962 (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.iOS.ARFaceGeometry::get_triangleCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ARFaceGeometry_get_triangleCount_m9D4546C057314917E5E72E595065D2FEE813A28C (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.iOS.ARFaceGeometry::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ARFaceGeometry_get_vertices_mA5ED26D47CC31B383B77CE71C902F856CC148558 (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.XR.iOS.ARFaceGeometry::get_textureCoordinates()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ARFaceGeometry_get_textureCoordinates_m143CC96B690A6489E5BCD32F4E074F0748459DD6 (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.iOS.ARFaceGeometry::get_triangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ARFaceGeometry_get_triangleIndices_mE866639A14F6220C353C1DF7D004EF21384C3EF3 (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * __this, const RuntimeMethod* method);
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ObjectSerializationExtension_SerializeToByteArray_m829E276697C385C7C45A7133D73D8A34EB6AA86F (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Utils.serializableFaceGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableFaceGeometry__ctor_mE00EBC47420B7A2008FBF01A671A95468530DDFA (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputVertices0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputTexCoords1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputTriIndices2, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* p0, int32_t p1, const RuntimeMethod* method);
// T Utils.ObjectSerializationExtension::Deserialize<System.Int32[]>(System.Byte[])
inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_m7EFBDAF12BF001262C756EEB01043324B1087BCA (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___byteArray0, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* (*) (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, const RuntimeMethod*))ObjectSerializationExtension_Deserialize_TisRuntimeObject_m19C7400CEB667B2778859A87F8361E4A7B0D850E_gshared)(___byteArray0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* BitConverter_GetBytes_mD20182552D410A9EFA395045611A50549DC04863 (float p0, const RuntimeMethod* method);
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m2B3431388A06855A85E04A9CF9DC579FCC80E8FE (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputPoints0, const RuntimeMethod* method);
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_mFFE896900E7E2EB4D738FFBAA0AAC79FA79199A4 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputSHCData0, const RuntimeMethod* method);
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method);
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m4E59044391F74A00ECDF84C543C10735444EB4E7 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void UnityARCamera__ctor_m624253695E1946C37F97817EE6B49976AA461564 (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * __this, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___wt0, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___dt6, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloud7, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARFaceAnchor::get_transform()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ARFaceAnchor_get_transform_m37E2D3863CDC2BCD73A2EAAE41135FDD2DC3D673 (ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * __this, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARFaceGeometry UnityEngine.XR.iOS.ARFaceAnchor::get_faceGeometry()
extern "C" IL2CPP_METHOD_ATTR ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * ARFaceAnchor_get_faceGeometry_mDE23035CB4DEB708FC9E4802CD47009C9662E015 (ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * __this, const RuntimeMethod* method);
// Utils.serializableFaceGeometry Utils.serializableFaceGeometry::op_Implicit(UnityEngine.XR.iOS.ARFaceGeometry)
extern "C" IL2CPP_METHOD_ATTR serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * serializableFaceGeometry_op_Implicit_m3968FCAD3AF69D571F5B670B298426EBB88BE82A (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * ___faceGeom0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845 (const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.ARFaceAnchor::get_identifierStr()
extern "C" IL2CPP_METHOD_ATTR String_t* ARFaceAnchor_get_identifierStr_mAAE376C431F42605DC701B342AAA1671FB4777A8 (ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Single> UnityEngine.XR.iOS.ARFaceAnchor::get_blendShapes()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * ARFaceAnchor_get_blendShapes_m1C2C2BA8D23A3505DE607EE1225468B014E13007 (ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * __this, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARFaceAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARFaceAnchor__ctor_m5512AE0DD57687375C91CE814C3FCF55256FF0E3 (serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * ___fg1, Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * ___bs2, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr3, const RuntimeMethod* method);
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m722ADA283319653AFFB93993E26DBDF84F1C009F (SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___floatsSHC0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0C5860CB2DD3FEA464A66ECA5E1BBBCD67E16EA8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UnityARLightEstimate__ctor_mF9AEC83B3E8DFF9E91CC915CE066B2945E970B20 (UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method);
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* serializableSHC_op_Implicit_m14258F0E479C89B86D8EBAA63AB1D29EEBB83A1B (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method);
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2EEDAC90EF11D1328797D21A009ACD25A6B893E8 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method);
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void UnityARMatrix4x4__ctor_m0542C274C09160610E229845B33889A4E637C29B (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c00, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c11, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c22, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c33, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p2, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  p3, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m4812196D75CC9519097ECFE639C6FC35F128B554 (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr4, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
extern "C" IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_mD354328EEA9C61EDB34A742A6078C7ECEE0C1C33 (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___ldt0;
		__this->set_arLightingType_0(L_0);
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_1 = ___ule1;
		__this->set_arLightEstimate_1(L_1);
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  L_2 = ___mdle2;
		__this->set_arDirectonalLightEstimate_2(L_2);
		return;
	}
}
extern "C"  void UnityMarshalLightData__ctor_mD354328EEA9C61EDB34A742A6078C7ECEE0C1C33_AdjustorThunk (RuntimeObject * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method)
{
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * _thisAdjusted = reinterpret_cast<UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C *>(__this + 1);
	UnityMarshalLightData__ctor_mD354328EEA9C61EDB34A742A6078C7ECEE0C1C33(_thisAdjusted, ___ldt0, ___ule1, ___mdle2, method);
}
// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityMarshalLightData::op_Implicit(UnityEngine.XR.iOS.UnityMarshalLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * V_0 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* V_3 = NULL;
	{
		V_0 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)NULL;
		int32_t L_0 = (&___rValue0)->get_arLightingType_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * L_1 = (&___rValue0)->get_address_of_arDirectonalLightEstimate_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = L_1->get_primaryDirAndIntensity_0();
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		float L_4 = (&V_1)->get_y_2();
		float L_5 = (&V_1)->get_z_3();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_3, L_4, L_5, /*hidden argument*/NULL);
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * L_6 = (&___rValue0)->get_address_of_arDirectonalLightEstimate_2();
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_7 = MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m32EE248E32FA379A1131C0ED08A5F17E26C82861((MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 *)L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_8 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = (&V_1)->get_w_4();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_11 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_mFCD47DCA0C7B5F421DCD3046DC374631F5295813(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0054:
	{
		int32_t L_12 = (&___rValue0)->get_arLightingType_0();
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_13 = (&___rValue0)->get_arLightEstimate_1();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_14 = V_0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_15;
		memset(&L_15, 0, sizeof(L_15));
		UnityARLightData__ctor_m5F712D4E8310DA5AF998BB965207735A637D0F47((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo__ctor_mA0F7E17051460323F93F5EF8FEB686708C468CDF (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_Start_m6CB84514519756A10F5D7ADAD1D3967B4EBDEC4B (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_Start_m6CB84514519756A10F5D7ADAD1D3967B4EBDEC4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		__this->set_m_Session_5(L_0);
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_1 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F(L_1, __this, (intptr_t)((intptr_t)UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_mFCCCC928C7B32D12F7D822435CE7D261B89190B6(L_1, /*hidden argument*/NULL);
		__this->set_currentFrameIndex_7(0);
		__this->set_bTexturesInitialized_6((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::UpdateCamera(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_bTexturesInitialized_6();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_1 = ___camera0;
		UnityRemoteVideo_InitializeTextures_mC98ACA3CB9E9953F2FF530BD76BD1DBDA9C78D81(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_2 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F(L_2, __this, (intptr_t)((intptr_t)UnityRemoteVideo_UpdateCamera_mBC89D5610581929FFDFF5560DE2F3B15B6AD88E8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_m71173833468A0492B84D21A42B8D6DF1C9A62E54(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_mC98ACA3CB9E9953F2FF530BD76BD1DBDA9C78D81 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_InitializeTextures_mC98ACA3CB9E9953F2FF530BD76BD1DBDA9C78D81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * L_0 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_1 = L_0->get_yWidth_0();
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * L_2 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_3 = L_2->get_yHeight_1();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3));
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * L_4 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_5 = L_4->get_yWidth_0();
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * L_6 = (&___camera0)->get_address_of_videoParams_4();
		int32_t L_7 = L_6->get_yHeight_1();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7))/(int32_t)2));
		int32_t L_8 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_m_textureYBytes_8(L_9);
		int32_t L_10 = V_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_11 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_m_textureUVBytes_9(L_11);
		int32_t L_12 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_13 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_m_textureYBytes2_10(L_13);
		int32_t L_14 = V_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_15 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_m_textureUVBytes2_11(L_15);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_16 = __this->get_m_textureYBytes_8();
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_17 = GCHandle_Alloc_m842B08AF5FD8C7FFFA720326D0B46B1A0DC3A753((RuntimeObject *)(RuntimeObject *)L_16, /*hidden argument*/NULL);
		__this->set_m_pinnedYArray_12(L_17);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_18 = __this->get_m_textureUVBytes_9();
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_19 = GCHandle_Alloc_m842B08AF5FD8C7FFFA720326D0B46B1A0DC3A753((RuntimeObject *)(RuntimeObject *)L_18, /*hidden argument*/NULL);
		__this->set_m_pinnedUVArray_13(L_19);
		__this->set_bTexturesInitialized_6((bool)1);
		return;
	}
}
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandleU26,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_mD4DC9A9A515CE0390974A3897D95AADDDAF10D83 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * ___handle0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array1, const RuntimeMethod* method)
{
	{
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_0 = ___handle0;
		GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_0, /*hidden argument*/NULL);
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_1 = ___handle0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___array1;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060  L_3 = GCHandle_Alloc_m068D1EE7DC287ED4258E2FB26BC67299CEA8A10C((RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		*(GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_1 = L_3;
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_4 = ___handle0;
		intptr_t L_5 = GCHandle_AddrOfPinnedObject_m3BD85998CD2C0F65BA55C8FC541875058AE0B3A6((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_4, /*hidden argument*/NULL);
		return (intptr_t)L_5;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_ByteArrayForFrame_m6EEFF92326E26AC758F25EC99E6C3EC72F6551F3 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array01, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array12, const RuntimeMethod* method)
{
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* G_B3_0 = NULL;
	{
		int32_t L_0 = ___frame0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = ___array12;
		G_B3_0 = L_1;
		goto IL_000e;
	}

IL_000d:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___array01;
		G_B3_0 = L_2;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_YByteArrayForFrame_m7DAA2290A5AFE18327EE9ECF3932F727B2B0C627 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_m_textureYBytes_8();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = __this->get_m_textureYBytes2_10();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = UnityRemoteVideo_ByteArrayForFrame_m6EEFF92326E26AC758F25EC99E6C3EC72F6551F3(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* UnityRemoteVideo_UVByteArrayForFrame_m10B176DF695524EA96710E52219BFF4227625382 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___frame0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_m_textureUVBytes_9();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = __this->get_m_textureUVBytes2_11();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = UnityRemoteVideo_ByteArrayForFrame_m6EEFF92326E26AC758F25EC99E6C3EC72F6551F3(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnDestroy_mE31B86D9CB360F43B3D5FC3441CB89084E48B8F8 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnDestroy_mE31B86D9CB360F43B3D5FC3441CB89084E48B8F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		UnityARSessionNativeInterface_SetCapturePixelData_m289ED1A5161F2B69B15466E08BD88438A46891D5(L_0, (bool)0, (intptr_t)(0), (intptr_t)(0), /*hidden argument*/NULL);
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_1 = __this->get_address_of_m_pinnedYArray_12();
		GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_1, /*hidden argument*/NULL);
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_2 = __this->get_address_of_m_pinnedUVArray_13();
		GCHandle_Free_mE2DC9BE787C9CFD3AAAB1803738BD2ADCF0219B2((GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnPreRender()
extern "C" IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnPreRender_mDA0AD40FBF58E10756430788078090258101F603 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnPreRender_mDA0AD40FBF58E10756430788078090258101F603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m709A401A9D8AD29E6DF4FF5B46B9A3A9081CA886(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = (&V_0)->get_textureY_0();
		bool L_3 = IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		intptr_t L_4 = (&V_0)->get_textureCbCr_1();
		bool L_5 = IntPtr_op_Equality_mDC2509E75E1E11ECB129D89F90E7E89925D205DE((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0038:
	{
		return;
	}

IL_0039:
	{
		bool L_6 = __this->get_bTexturesInitialized_6();
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		int32_t L_7 = __this->get_currentFrameIndex_7();
		__this->set_currentFrameIndex_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))%(int32_t)2)));
		Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  L_8 = Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A(/*hidden argument*/NULL);
		V_1 = L_8;
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_9 = __this->get_m_Session_5();
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_10 = __this->get_address_of_m_pinnedYArray_12();
		int32_t L_11 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_12 = UnityRemoteVideo_YByteArrayForFrame_m7DAA2290A5AFE18327EE9ECF3932F727B2B0C627(__this, L_11, /*hidden argument*/NULL);
		intptr_t L_13 = UnityRemoteVideo_PinByteArray_mD4DC9A9A515CE0390974A3897D95AADDDAF10D83(__this, (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_10, L_12, /*hidden argument*/NULL);
		GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 * L_14 = __this->get_address_of_m_pinnedUVArray_13();
		int32_t L_15 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_16 = UnityRemoteVideo_UVByteArrayForFrame_m10B176DF695524EA96710E52219BFF4227625382(__this, L_15, /*hidden argument*/NULL);
		intptr_t L_17 = UnityRemoteVideo_PinByteArray_mD4DC9A9A515CE0390974A3897D95AADDDAF10D83(__this, (GCHandle_tE002D24915851AD73ACC0F503601C384273C3060 *)L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityARSessionNativeInterface_SetCapturePixelData_m289ED1A5161F2B69B15466E08BD88438A46891D5(L_9, (bool)1, (intptr_t)L_13, (intptr_t)L_17, /*hidden argument*/NULL);
		ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * L_18 = __this->get_connectToEditor_4();
		Guid_t  L_19 = ConnectionMessageIds_get_screenCaptureYMsgId_mE2D923CE89A7B77B07762C07598F398348C41EA2(/*hidden argument*/NULL);
		int32_t L_20 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_21 = UnityRemoteVideo_YByteArrayForFrame_m7DAA2290A5AFE18327EE9ECF3932F727B2B0C627(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		ConnectToEditor_SendToEditor_m2868F387BE9B900948512144C77A64BD1ADE9571(L_18, L_19, L_21, /*hidden argument*/NULL);
		ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * L_22 = __this->get_connectToEditor_4();
		Guid_t  L_23 = ConnectionMessageIds_get_screenCaptureUVMsgId_mDFCBC55EA7AAFAECEA074071D4418E10FADE7606(/*hidden argument*/NULL);
		int32_t L_24 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_25 = UnityRemoteVideo_UVByteArrayForFrame_m10B176DF695524EA96710E52219BFF4227625382(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_22);
		ConnectToEditor_SendToEditor_m2868F387BE9B900948512144C77A64BD1ADE9571(L_22, L_23, L_25, /*hidden argument*/NULL);
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
// System.Void UnityPointCloudExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_mCA2A61A12500DDB08846F35276062A66359AE2DF (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_4(((int32_t)100));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F(L_0, __this, (intptr_t)((intptr_t)UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_mFCCCC928C7B32D12F7D822435CE7D261B89190B6(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_3 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_3, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_3);
		V_0 = 0;
		goto IL_004e;
	}

IL_0034:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = __this->get_pointCloudObjects_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_4, L_6, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_8 = V_0;
		uint32_t L_9 = __this->get_numPointsToShow_4();
		if ((((int64_t)(((int64_t)((int64_t)L_8)))) < ((int64_t)(((int64_t)((uint64_t)L_9))))))
		{
			goto IL_0034;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_7(L_0);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = __this->get_m_PointCloudData_7();
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_m_PointCloudData_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = __this->get_pointCloudObjects_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_7, L_8, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_2;
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		float L_12 = (&V_1)->get_x_1();
		float L_13 = (&V_1)->get_y_2();
		float L_14 = (&V_1)->get_z_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_11, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_17 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = __this->get_m_PointCloudData_7();
		NullCheck(L_18);
		uint32_t L_19 = __this->get_numPointsToShow_4();
		int64_t L_20 = Math_Min_m134D5BCDDFA54295919D4FE9A31F9B89DE36B85B((((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))))), (((int64_t)((uint64_t)L_19))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_17)))) < ((int64_t)L_20)))
		{
			goto IL_0023;
		}
	}

IL_008c:
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
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ObjectSerializationExtension_SerializeToByteArray_m829E276697C385C7C45A7133D73D8A34EB6AA86F (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_m829E276697C385C7C45A7133D73D8A34EB6AA86F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F * V_0 = NULL;
	MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * V_1 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL;
	}

IL_0008:
	{
		BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F * L_1 = (BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F *)il2cpp_codegen_object_new(BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m74E137E0F87AF532928251446717274BE8A61D6B(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_2 = (MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 *)il2cpp_codegen_object_new(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8A42A02BD85F3928E415E022073FC3FB24167001(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_tF35E93D17C1978BB4914FCF1E799A41FA81AFF6F * L_3 = V_0;
		MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_4 = V_1;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_3);
		BinaryFormatter_Serialize_m9F2A3D91212004854077819CDCEF3B3912E04393(L_3, L_4, L_5, /*hidden argument*/NULL);
		MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = VirtFuncInvoker0< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(26 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		V_2 = L_7;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_9);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = V_2;
		return L_10;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SerializableVector4_ToString_m5EFAC2D62D933124064775FA7B1DACD3B12B5E87 (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m5EFAC2D62D933124064775FA7B1DACD3B12B5E87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_0 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m5B45EF5C70673C3B5D702E402B815134CC22AB84(_stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void Utils.serializableARKitInit::.ctor(Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C" IL2CPP_METHOD_ATTR void serializableARKitInit__ctor_mE04127A4B9018871F513F92DE1ED719225177965 (serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * __this, serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
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
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m995D6D6375157F4E939FE06B36BE499D9A1FFDDD (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		return;
	}
}
// Utils.serializableARSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (&___awtsc0)->get_alignment_0();
		int32_t L_1 = (&___awtsc0)->get_planeDetection_1();
		bool L_2 = (&___awtsc0)->get_getPointCloudData_2();
		bool L_3 = (&___awtsc0)->get_enableLightEstimation_3();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_4 = (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m995D6D6375157F4E939FE06B36BE499D9A1FFDDD(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  serializableARSessionConfiguration_op_Implicit_mC658A108785924A17215A9E3ABDF3916C69B39E5 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___sasc0, const RuntimeMethod* method)
{
	{
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_8;
		memset(&L_8, 0, sizeof(L_8));
		ARKitWorldTrackingSessionConfiguration__ctor_m4D724E1A479B490371067DAAD57F89CFE28BE9B9((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
extern "C" IL2CPP_METHOD_ATTR ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603  serializableARSessionConfiguration_op_Implicit_m32F3693D6A331040A4B296721A37AB4214234BDD (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___sasc0, const RuntimeMethod* method)
{
	{
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_2 = ___sasc0;
		NullCheck(L_2);
		bool L_3 = L_2->get_enableLightEstimation_3();
		ARKitFaceTrackingConfiguration_t8035DE78DED2F8B4246159EE3E5882142A1D5603  L_4;
		memset(&L_4, 0, sizeof(L_4));
		ARKitFaceTrackingConfiguration__ctor_mDBF9EF66ABEDC42F90A1D96F2B49FDC7FA80085C((&L_4), L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Utils.serializableFaceGeometry::.ctor(System.Byte[],System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableFaceGeometry__ctor_mE00EBC47420B7A2008FBF01A671A95468530DDFA (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputVertices0, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputTexCoords1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputTriIndices2, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___inputVertices0;
		__this->set_vertices_0(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = ___inputTexCoords1;
		__this->set_texCoords_1(L_1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___inputTriIndices2;
		__this->set_triIndices_2(L_2);
		return;
	}
}
// Utils.serializableFaceGeometry Utils.serializableFaceGeometry::op_Implicit(UnityEngine.XR.iOS.ARFaceGeometry)
extern "C" IL2CPP_METHOD_ATTR serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * serializableFaceGeometry_op_Implicit_m3968FCAD3AF69D571F5B670B298426EBB88BE82A (ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * ___faceGeom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_op_Implicit_m3968FCAD3AF69D571F5B670B298426EBB88BE82A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_1 = NULL;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_3 = NULL;
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* V_4 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_5 = NULL;
	{
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_0 = ___faceGeom0;
		NullCheck(L_0);
		int32_t L_1 = ARFaceGeometry_get_vertexCount_mEE5F5E89ADF8E345E937313913DE1C415626C121(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_2 = ___faceGeom0;
		NullCheck(L_2);
		int32_t L_3 = ARFaceGeometry_get_textureCoordinateCount_m68E689DF9A7C37086D4044DBE6F70183B89AD962(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_4 = ___faceGeom0;
		NullCheck(L_4);
		int32_t L_5 = ARFaceGeometry_get_triangleCount_m9D4546C057314917E5E72E595065D2FEE813A28C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0090;
		}
	}
	{
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_6 = ___faceGeom0;
		NullCheck(L_6);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = ARFaceGeometry_get_vertices_mA5ED26D47CC31B383B77CE71C902F856CC148558(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_8 = ___faceGeom0;
		NullCheck(L_8);
		int32_t L_9 = ARFaceGeometry_get_vertexCount_mEE5F5E89ADF8E345E937313913DE1C415626C121(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), (int32_t)3)));
		V_1 = L_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_0;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_12 = V_1;
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_13 = ___faceGeom0;
		NullCheck(L_13);
		int32_t L_14 = ARFaceGeometry_get_vertexCount_mEE5F5E89ADF8E345E937313913DE1C415626C121(L_13, /*hidden argument*/NULL);
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)4)), (int32_t)3)), /*hidden argument*/NULL);
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_15 = ___faceGeom0;
		NullCheck(L_15);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_16 = ARFaceGeometry_get_textureCoordinates_m143CC96B690A6489E5BCD32F4E074F0748459DD6(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_17 = ___faceGeom0;
		NullCheck(L_17);
		int32_t L_18 = ARFaceGeometry_get_textureCoordinateCount_m68E689DF9A7C37086D4044DBE6F70183B89AD962(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_19 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)4)), (int32_t)2)));
		V_3 = L_19;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_20 = V_2;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_21 = V_3;
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_22 = ___faceGeom0;
		NullCheck(L_22);
		int32_t L_23 = ARFaceGeometry_get_textureCoordinateCount_m68E689DF9A7C37086D4044DBE6F70183B89AD962(L_22, /*hidden argument*/NULL);
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_20, 0, (RuntimeArray *)(RuntimeArray *)L_21, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)4)), (int32_t)2)), /*hidden argument*/NULL);
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_24 = ___faceGeom0;
		NullCheck(L_24);
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_25 = ARFaceGeometry_get_triangleIndices_mE866639A14F6220C353C1DF7D004EF21384C3EF3(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_26 = V_4;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_27 = ObjectSerializationExtension_SerializeToByteArray_m829E276697C385C7C45A7133D73D8A34EB6AA86F((RuntimeObject *)(RuntimeObject *)L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_28 = V_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_29 = V_3;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_30 = V_5;
		serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * L_31 = (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC *)il2cpp_codegen_object_new(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC_il2cpp_TypeInfo_var);
		serializableFaceGeometry__ctor_mE00EBC47420B7A2008FBF01A671A95468530DDFA(L_31, L_28, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_0090:
	{
		serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * L_32 = (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC *)il2cpp_codegen_object_new(serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC_il2cpp_TypeInfo_var);
		serializableFaceGeometry__ctor_mE00EBC47420B7A2008FBF01A671A95468530DDFA(L_32, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, /*hidden argument*/NULL);
		return L_32;
	}
}
// UnityEngine.Vector3[] Utils.serializableFaceGeometry::get_Vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializableFaceGeometry_get_Vertices_mD544C19FA709C18BEB6028B882539FB1247C6ADB (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_Vertices_mD544C19FA709C18BEB6028B882539FB1247C6ADB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_vertices_0();
		if (!L_0)
		{
			goto IL_0088;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_vertices_0();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_2 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = __this->get_vertices_0();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_2(L_9);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_12 = __this->get_vertices_0();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_3(L_14);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_17 = __this->get_vertices_0();
		int32_t L_18 = V_3;
		float L_19 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_z_4(L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = V_1;
		return L_23;
	}

IL_0088:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}
}
// UnityEngine.Vector2[] Utils.serializableFaceGeometry::get_TexCoords()
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* serializableFaceGeometry_get_TexCoords_m46E41AA44D5C214F76FC071C7F46A5118D112280 (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_TexCoords_m46E41AA44D5C214F76FC071C7F46A5118D112280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_texCoords_1();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_texCoords_1();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))/(int32_t)8));
		int32_t L_2 = V_0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0062;
	}

IL_0024:
	{
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = __this->get_texCoords_1();
		int32_t L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		float L_9 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_7, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)4)), /*hidden argument*/NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_x_0(L_9);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_12 = __this->get_texCoords_1();
		int32_t L_13 = V_3;
		float L_14 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_12, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_y_1(L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0024;
		}
	}
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_18 = V_1;
		return L_18;
	}

IL_006b:
	{
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)NULL;
	}
}
// System.Int32[] Utils.serializableFaceGeometry::get_TriangleIndices()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* serializableFaceGeometry_get_TriangleIndices_m098FE0788EDCE3184AE82157929E37B8C386169A (serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableFaceGeometry_get_TriangleIndices_m098FE0788EDCE3184AE82157929E37B8C386169A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* V_0 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = __this->get_triIndices_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = __this->get_triIndices_2();
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_2 = ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_m7EFBDAF12BF001262C756EEB01043324B1087BCA(L_1, /*hidden argument*/ObjectSerializationExtension_Deserialize_TisInt32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_m7EFBDAF12BF001262C756EEB01043324B1087BCA_RuntimeMethod_var);
		V_0 = L_2;
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		return (Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074*)NULL;
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
// System.Void Utils.serializableFromEditorMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void serializableFromEditorMessage__ctor_mC41E042B3CDC1E60ACA691454AA4B7A95A374BA7 (serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
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
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m2B3431388A06855A85E04A9CF9DC579FCC80E8FE (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputPoints0, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		return;
	}
}
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___vecPointCloud0;
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = ___vecPointCloud0;
		NullCheck(L_1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)), (int32_t)3)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_007a;
	}

IL_001a:
	{
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ___vecPointCloud0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = BitConverter_GetBytes_mD20182552D410A9EFA395045611A50549DC04863(L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_8 = V_0;
		int32_t L_9 = V_2;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = ___vecPointCloud0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_y_3();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_13 = BitConverter_GetBytes_mD20182552D410A9EFA395045611A50549DC04863(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_14 = V_0;
		int32_t L_15 = V_2;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = ___vecPointCloud0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_z_4();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_19 = BitConverter_GetBytes_mD20182552D410A9EFA395045611A50549DC04863(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_20 = V_0;
		int32_t L_21 = V_2;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_19, 0, (RuntimeArray *)(RuntimeArray *)L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_23 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_24 = ___vecPointCloud0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_25 = V_0;
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_26 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m2B3431388A06855A85E04A9CF9DC579FCC80E8FE(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_008a:
	{
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_27 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m2B3431388A06855A85E04A9CF9DC579FCC80E8FE(L_27, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, /*hidden argument*/NULL);
		return L_27;
	}
}
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = L_0->get_pointCloudData_0();
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = L_2->get_pointCloudData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)((int32_t)12)));
		int32_t L_4 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_9 = ___spc0;
		NullCheck(L_9);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = L_9->get_pointCloudData_0();
		int32_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		float L_12 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)), /*hidden argument*/NULL);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_x_2(L_12);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_15 = ___spc0;
		NullCheck(L_15);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_16 = L_15->get_pointCloudData_0();
		int32_t L_17 = V_3;
		float L_18 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_y_3(L_18);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_21 = ___spc0;
		NullCheck(L_21);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_22 = L_21->get_pointCloudData_0();
		int32_t L_23 = V_3;
		float L_24 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_22, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_4(L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0025;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = V_1;
		return L_28;
	}

IL_0088:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
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
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableSHC__ctor_mFFE896900E7E2EB4D738FFBAA0AAC79FA79199A4 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___inputSHCData0, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___inputSHCData0;
		__this->set_shcData_0(L_0);
		return;
	}
}
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
extern "C" IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m722ADA283319653AFFB93993E26DBDF84F1C009F (SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___floatsSHC0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m722ADA283319653AFFB93993E26DBDF84F1C009F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_0 = ___floatsSHC0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_1 = ___floatsSHC0;
		NullCheck(L_1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)4)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_3 = ___floatsSHC0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = BitConverter_GetBytes_mD20182552D410A9EFA395045611A50549DC04863(L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_8 = V_0;
		int32_t L_9 = V_1;
		Buffer_BlockCopy_m9A63C717564520B770716072C1B44FDCF3C1AA9A((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)4)), 4, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_12 = ___floatsSHC0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_13 = V_0;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_14 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_mFFE896900E7E2EB4D738FFBAA0AAC79FA79199A4(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_003f:
	{
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_15 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_mFFE896900E7E2EB4D738FFBAA0AAC79FA79199A4(L_15, (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* serializableSHC_op_Implicit_m14258F0E479C89B86D8EBAA63AB1D29EEBB83A1B (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m14258F0E479C89B86D8EBAA63AB1D29EEBB83A1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = L_0->get_shcData_0();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_2 = ___spc0;
		NullCheck(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = L_2->get_shcData_0();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))/(int32_t)4));
		int32_t L_4 = V_0;
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_5 = (SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5*)SZArrayNew(SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0039;
	}

IL_0024:
	{
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_6 = V_1;
		int32_t L_7 = V_2;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_8 = ___spc0;
		NullCheck(L_8);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = L_8->get_shcData_0();
		int32_t L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tB84E59BB69F0D09AF8FF5E4718F4841963CF4197_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m5F110AC8B0B59D25074D0A08E8DCB1DD0C53DD33(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0024;
		}
	}
	{
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_15 = V_1;
		return L_15;
	}

IL_0042:
	{
		return (SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5*)NULL;
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
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m4E59044391F74A00ECDF84C543C10735444EB4E7 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_5 = ___lightDat5;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_6 = serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46(L_5, /*hidden argument*/NULL);
		__this->set_lightData_5(L_6);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_7 = ___dt6;
		__this->set_displayTransform_7(L_7);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_8 = ___spc7;
		__this->set_pointCloud_6(L_8);
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053 (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_0 = (&___rValue0)->get_worldTransform_0();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_0, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_2 = (&___rValue0)->get_projectionMatrix_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_2, /*hidden argument*/NULL);
		int32_t L_4 = (&___rValue0)->get_trackingState_2();
		int32_t L_5 = (&___rValue0)->get_trackingReason_3();
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_6 = (&___rValue0)->get_videoParams_4();
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_7 = (&___rValue0)->get_lightData_5();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_8 = (&___rValue0)->get_displayTransform_6();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_8, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (&___rValue0)->get_pointCloudData_7();
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_11 = serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A(L_10, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_12 = (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 *)il2cpp_codegen_object_new(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m4E59044391F74A00ECDF84C543C10735444EB4E7(L_12, L_1, L_3, L_4, L_5, L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
extern "C" IL2CPP_METHOD_ATTR UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  serializableUnityARCamera_op_Implicit_m71E57DE6423BB31A561F8301FEA6363B5B32AB13 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_2 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_5 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_12 = ___rValue0;
		NullCheck(L_12);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_13 = L_12->get_lightData_5();
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_14 = serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8(L_13, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_16 = L_15->get_displayTransform_7();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_17 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_16, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_18 = ___rValue0;
		NullCheck(L_18);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_19 = L_18->get_pointCloud_6();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4(L_19, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_21;
		memset(&L_21, 0, sizeof(L_21));
		UnityARCamera__ctor_m624253695E1946C37F97817EE6B49976AA461564((&L_21), L_2, L_5, L_7, L_9, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
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
// System.Void Utils.serializableUnityARFaceAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableFaceGeometry,System.Collections.Generic.Dictionary`2<System.String,System.Single>,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARFaceAnchor__ctor_m5512AE0DD57687375C91CE814C3FCF55256FF0E3 (serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * ___fg1, Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * ___bs2, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * L_1 = ___fg1;
		__this->set_faceGeometry_1(L_1);
		Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * L_2 = ___bs2;
		__this->set_arBlendShapes_2(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = ___idstr3;
		__this->set_identifierStr_3(L_3);
		return;
	}
}
// Utils.serializableUnityARFaceAnchor Utils.serializableUnityARFaceAnchor::op_Implicit(UnityEngine.XR.iOS.ARFaceAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A * serializableUnityARFaceAnchor_op_Implicit_m9AA5A950EDB420DF52CA2FB76C2F0E701430955B (ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARFaceAnchor_op_Implicit_m9AA5A950EDB420DF52CA2FB76C2F0E701430955B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * V_0 = NULL;
	serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * V_1 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_2 = NULL;
	{
		ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = ARFaceAnchor_get_transform_m37E2D3863CDC2BCD73A2EAAE41135FDD2DC3D673(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * L_3 = ___rValue0;
		NullCheck(L_3);
		ARFaceGeometry_tBCE2A1A16F8D61FBD6765DF68E14356F748B0AE2 * L_4 = ARFaceAnchor_get_faceGeometry_mDE23035CB4DEB708FC9E4802CD47009C9662E015(L_3, /*hidden argument*/NULL);
		serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * L_5 = serializableFaceGeometry_op_Implicit_m3968FCAD3AF69D571F5B670B298426EBB88BE82A(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_6 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * L_7 = ___rValue0;
		NullCheck(L_7);
		String_t* L_8 = ARFaceAnchor_get_identifierStr_mAAE376C431F42605DC701B342AAA1671FB4777A8(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_8);
		V_2 = L_9;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_10 = V_0;
		serializableFaceGeometry_t21FAE25DC933C251020AB6A472356145065555DC * L_11 = V_1;
		ARFaceAnchor_tFD943197F892D93FB7E2C8F7B8BDAABE62714AC6 * L_12 = ___rValue0;
		NullCheck(L_12);
		Dictionary_2_tB4533B30A89CE06018D5A9606348971C05837DEF * L_13 = ARFaceAnchor_get_blendShapes_m1C2C2BA8D23A3505DE607EE1225468B014E13007(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_14 = V_2;
		serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A * L_15 = (serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A *)il2cpp_codegen_object_new(serializableUnityARFaceAnchor_tD07FE0ACD692C69B2480D2C35BFBCBBDB000127A_il2cpp_TypeInfo_var);
		serializableUnityARFaceAnchor__ctor_m5512AE0DD57687375C91CE814C3FCF55256FF0E3(L_15, L_10, L_11, L_13, L_14, /*hidden argument*/NULL);
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
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0C5860CB2DD3FEA464A66ECA5E1BBBCD67E16EA8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m0C5860CB2DD3FEA464A66ECA5E1BBBCD67E16EA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		int32_t L_0 = (&___lightData0)->get_arLightingType_0();
		__this->set_whichLight_0(L_0);
		int32_t L_1 = __this->get_whichLight_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_2 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_2);
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_3 = L_2->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_4 = serializableSHC_op_Implicit_m722ADA283319653AFFB93993E26DBDF84F1C009F(L_3, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_4);
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_5 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = L_5->get_primaryLightDirection_0();
		V_0 = L_6;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_7 = (&___lightData0)->get_arDirectonalLightEstimate_2();
		NullCheck(L_7);
		float L_8 = L_7->get_primaryLightIntensity_1();
		V_1 = L_8;
		float L_9 = (&V_0)->get_x_2();
		float L_10 = (&V_0)->get_y_3();
		float L_11 = (&V_0)->get_z_4();
		float L_12 = V_1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_13 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_13);
		goto IL_009a;
	}

IL_0076:
	{
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * L_14 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_15 = L_14->get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_15);
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * L_16 = (&___lightData0)->get_address_of_arLightEstimate_1();
		float L_17 = L_16->get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_17);
	}

IL_009a:
	{
		return;
	}
}
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_0 = ___rValue0;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_1 = (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 *)il2cpp_codegen_object_new(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m0C5860CB2DD3FEA464A66ECA5E1BBBCD67E16EA8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
extern "C" IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * V_0 = NULL;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)NULL;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_mF9AEC83B3E8DFF9E91CC915CE066B2945E970B20((UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_primaryLightDirAndIntensity_2();
		NullCheck(L_7);
		float L_8 = L_7->get_x_0();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_primaryLightDirAndIntensity_2();
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_12 = ___rValue0;
		NullCheck(L_12);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_13 = L_12->get_primaryLightDirAndIntensity_2();
		NullCheck(L_13);
		float L_14 = L_13->get_z_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_8, L_11, L_14, /*hidden argument*/NULL);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_16 = L_15->get_lightSHC_1();
		SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* L_17 = serializableSHC_op_Implicit_m14258F0E479C89B86D8EBAA63AB1D29EEBB83A1B(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_2;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_19 = ___rValue0;
		NullCheck(L_19);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_20 = L_19->get_primaryLightDirAndIntensity_2();
		NullCheck(L_20);
		float L_21 = L_20->get_w_3();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_22 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_mFCD47DCA0C7B5F421DCD3046DC374631F5295813(L_22, L_17, L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0066:
	{
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_23 = ___rValue0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_whichLight_0();
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_25 = V_1;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_26 = V_0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_27;
		memset(&L_27, 0, sizeof(L_27));
		UnityARLightData__ctor_m5F712D4E8310DA5AF998BB965207735A637D0F47((&L_27), L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2EEDAC90EF11D1328797D21A009ACD25A6B893E8 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_8 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2EEDAC90EF11D1328797D21A009ACD25A6B893E8(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m0542C274C09160610E229845B33889A4E637C29B((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_8 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2EEDAC90EF11D1328797D21A009ACD25A6B893E8(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m4812196D75CC9519097ECFE639C6FC35F128B554 (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr4, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * V_0 = NULL;
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_1 = NULL;
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_2 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_3 = NULL;
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_15 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m3082756A69D4B31B017D07338C0971FC8D1226BE(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_16 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_18 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_19 = V_0;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_20 = V_1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_23 = V_3;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_24 = (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m4812196D75CC9519097ECFE639C6FC35F128B554(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  serializableUnityARPlaneAnchor_op_Implicit_mCD5B7A5D27D88F178DE2397380DCC5B636988815 (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_mCD5B7A5D27D88F178DE2397380DCC5B636988815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_0 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_28 = serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A(L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_29 = V_0;
		return L_29;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
