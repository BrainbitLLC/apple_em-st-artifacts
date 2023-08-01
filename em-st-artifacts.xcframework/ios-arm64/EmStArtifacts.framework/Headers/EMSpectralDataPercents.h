#ifndef EMSpectralDataPercents_h
#define EMSpectralDataPercents_h
#include <Foundation/Foundation.h>

@interface EMSpectralDataPercents : NSObject

@property (nonatomic) double Delta;
@property (nonatomic) double Theta;
@property (nonatomic) double Alpha;
@property (nonatomic) double Beta;
@property (nonatomic) double Gamma;

-(id) initWithDelta:(double) delta andTheta:(double) theta andAlpha:(double) alpha andBeta:(double) beta andGamma:(double) gamma;

@end
#endif /* EMSpectralDataPercents_h */
