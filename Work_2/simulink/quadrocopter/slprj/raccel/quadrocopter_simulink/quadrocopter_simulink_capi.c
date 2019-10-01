#include "__cf_quadrocopter_simulink.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "quadrocopter_simulink_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "quadrocopter_simulink.h"
#include "quadrocopter_simulink_capi.h"
#include "quadrocopter_simulink_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"quadrocopter_simulink/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 0 , TARGET_STRING ( "quadrocopter_simulink/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"quadrocopter_simulink/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 3 , 0 , TARGET_STRING ( "quadrocopter_simulink/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"quadrocopter_simulink/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 5 , 0 , TARGET_STRING ( "quadrocopter_simulink/Add2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"quadrocopter_simulink/Integrator, Second-Order" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"quadrocopter_simulink/Integrator, Second-Order" ) , TARGET_STRING ( "" ) , 1
, 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 8 ,
TARGET_STRING ( "quadrocopter_simulink/Integrator, Second-Order" ) ,
TARGET_STRING ( "ICX" ) , 0 , 0 , 0 } , { 9 , TARGET_STRING (
"quadrocopter_simulink/Integrator, Second-Order" ) , TARGET_STRING ( "ICDXDT"
) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 10 , TARGET_STRING ( "Kd"
) , 0 , 0 , 0 } , { 11 , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 12 ,
TARGET_STRING ( "T0" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING ( "g" ) , 0 , 0 ,
0 } , { 14 , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . hbu3n2vzcw , & rtB . p4o5w5djhd ,
& rtB . fz0spduzr0 , & rtB . ibprotsugb , & rtB . apopxmunqs , & rtB .
j25u2p5djf , & rtB . pewdyk1ert , & rtB . nhomnmdyee , & rtP .
IntegratorSecondOrder_ICX , & rtP . IntegratorSecondOrder_ICDXDT , & rtP . Kd
, & rtP . Kp , & rtP . T0 , & rtP . g , & rtP . m , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 8 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 2 , rtModelParameters , 5 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 3208600023U ,
2567004944U , 2903629668U , 3642459116U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * quadrocopter_simulink_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void quadrocopter_simulink_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void quadrocopter_simulink_host_InitializeDataMapInfo (
quadrocopter_simulink_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
