#ifndef EMRawChannels_h
#define EMRawChannels_h

#include <Foundation/Foundation.h>

@interface EMRawChannels : NSObject
    @property (nonatomic) double leftBipolar;
    @property (nonatomic) double rightBipolar;

-(id) initWithLeftBipolar:(double) left andRightBipolar:(double) right;
@end

#endif /* EMRawChannels_h */
