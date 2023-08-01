#ifndef EMHelpers_h
#define EMHelpers_h

#include "common_api.h"
#include "EMMindData.h"
#include "EMSpectralDataPercents.h"
#include "EMRawSpectVals.h"

EMMindData* mindDataFromNative(MindData& data);
EMSpectralDataPercents* spectralPercentsFromNative(SpectralDataPercents& data);
EMRawSpectVals* rawSpectValsFromNative(RawSpectVals& data);
#endif /* EMHelpers_h */
