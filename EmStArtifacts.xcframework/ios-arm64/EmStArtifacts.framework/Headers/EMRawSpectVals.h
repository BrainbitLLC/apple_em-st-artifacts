#ifndef EMRawSpectVals_h
#define EMRawSpectVals_h
#include <Foundation/Foundation.h>

@interface EMRawSpectVals: NSObject

@property (nonatomic) double alpha;
@property (nonatomic) double beta;

-(id) initWithAlpha:(double) alpha andBeta:(double) beta;

@end
#endif /* EMRawSpectVals_h */
