#include "rack.hpp"
#include "CLog.h"

using namespace rack;

extern Plugin *plugin;

#define CV_MAX (15.0f)
#define AUDIO_MAX (6.0f)
#define VOCT_MAX (6.0f)

#define TOJSON true
#define FROMJSON false

void JsonDataInt( bool bTo, std::string strName, json_t *root, int *pdata, int len );
void JsonDataBool( bool bTo, std::string strName, json_t *root, bool *pdata, int len );

////////////////////
// module widgets
////////////////////

extern Model *modelOsc_3Ch;
extern Model *modelARP700;
extern Model *modelCompressor;
extern Model *modelMasterClockx4;
extern Model *modelPingPong;
extern Model *modelSynthDrums;
extern Model *modelXFade;

extern Model *modelMix_1x4_Stereo;
extern Model *modelMix_2x4_Stereo;
extern Model *modelMix_4x4_Stereo;
extern Model *modelMix_4x4_Stereo_old;

extern Model *modelSeq_Triad;
extern Model *modelSeq_Triad2;
extern Model *modelSeq_3x16x16;
extern Model *modelSEQ_6x32x16;