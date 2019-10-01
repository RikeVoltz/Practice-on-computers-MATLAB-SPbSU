#include "__cf_quadrocopter_simulink.h"
#ifndef RTW_HEADER_quadrocopter_simulink_h_
#define RTW_HEADER_quadrocopter_simulink_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef quadrocopter_simulink_COMMON_INCLUDES_
#define quadrocopter_simulink_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "quadrocopter_simulink_types.h"
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME quadrocopter_simulink
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (8) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (2)   
#elif NCSTATES != 2
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T pewdyk1ert ; real_T nhomnmdyee ; real_T ibprotsugb ;
real_T hbu3n2vzcw ; real_T fz0spduzr0 ; real_T j25u2p5djf ; real_T p4o5w5djhd
; real_T apopxmunqs ; } B ; typedef struct { struct { void * LoggedData ; }
o5xzlirwsq ; int_T cwtjd1dq5c ; boolean_T pqjvbekxa1 ; } DW ; typedef struct
{ real_T hh05zwns2n [ 2 ] ; } X ; typedef struct { real_T hh05zwns2n [ 2 ] ;
} XDot ; typedef struct { boolean_T hh05zwns2n [ 2 ] ; } XDis ; typedef
struct { real_T hh05zwns2n [ 2 ] ; } CStateAbsTol ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T Kd ; real_T
Kp ; real_T T0 ; real_T g ; real_T m ; real_T IntegratorSecondOrder_ICX ;
real_T IntegratorSecondOrder_ICDXDT ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
quadrocopter_simulink_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
