#ifndef EMEmotionalMath_h
#define EMEmotionalMath_h

#include <Foundation/Foundation.h>
#include <Foundation/NSArray.h>
#include "common_api.h"
#include "EMRawChannels.h"
#include "EMMindData.h"
#include "EMSpectralDataPercents.h"
#include "EMRawSpectVals.h"

typedef NS_ENUM(UInt8, EMSideType) {
    Left,
    Right,
    None
};

@interface EMEmotionalMath : NSObject{
    MathLib* mathPtr;
}

-(id) initWithLibSettings: (MathLibSetting) settings andArtifactDetetectSettings: (ArtifactDetectSetting) artifactSettings andShortArtifactDetectSettigns:(ShortArtifactDetectSetting) shortArtifactSettings andMentalAndSpectralSettings: (MentalAndSpectralSetting) mentalAndSpectral;
-(void) setMentalEstimationMode:(bool) independent;
-(void) setHanningWinSpect;
-(void) setHammingWinSpect;
-(void) setCallibrationLength:(int) len;
-(void) setSkipWinsAfterArtifact:(int) nwins;


-(void) pushData:(NSArray<EMRawChannels*>*) samples;
-(void) pushDataArr:(NSArray<NSArray<NSNumber*>*>*) samples;

-(void) processWindow;
-(void) processDataWithSideType:(EMSideType) side;
-(void) processDataArr;


-(void) setPrioritySide: (EMSideType) side;
-(void) startCalibration;
-(bool) calibrationFinished;
 

-(bool) isArtifactedWinOnSide:(EMSideType) side andIsPrintInfo:(bool) print_info;
-(bool) isArtifactedSequence;
-(bool) isBothSidesArtifacted;

-(int) readMentalDataArrSize;
-(NSArray<EMMindData*>*) readMentalDataArr;

-(EMMindData*) readAverageMentalData:(int) n_lastwins_toaverage;


-(int) readSpectralDataPercentsArrSize;

-(NSArray<EMSpectralDataPercents*>*) MathLibReadSpectralDataPercentsArr;

-(EMRawSpectVals*) readRawSpectralVals;

-(void) setZeroSpectWavesWithActive:(bool) active andDelta:(int) delta andTheta:(int) theta andAlpha:(int) alpha andBeta:(int) beta andGamma:(int) gamma;

-(void) setWeightsForSpectraWithDelta:(double) delta_c andTheta:(double) theta_c andAlpha:(double) alpha_c andBeta:(double) beta_c andGamma:(double) gamma_c;
-(void) setSpectNormalizationByBandsWidth:(bool) fl;
-(void) setSpectNormalizationByCoeffs:(bool) fl;

-(int) getCallibrationPercents;

/*
#ifdef _DEBUG

void MathLibCheckArtifactsOnLeftChannel(MathLib* mathLibPtr, int* type, double* location, bool* start, OpStatus* opResult);
void MathLibCheckArtifactsOnRightChannel(MathLib* mathLibPtr, int* type, double* location, bool* start, OpStatus* opResult);

double MathLibReadLeftChannel(MathLib* mathLibPtr, OpStatus* opResult);
double MathLibReadRightChannel(MathLib* mathLibPtr, OpStatus* opResult);

#endif
*/
 @end

#endif /* EMEmotionalMath_h */
