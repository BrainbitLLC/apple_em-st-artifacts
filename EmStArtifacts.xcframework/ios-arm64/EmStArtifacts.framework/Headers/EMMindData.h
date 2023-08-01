 
#ifndef Header_h
#define Header_h
#include <Foundation/Foundation.h>

@interface EMMindData : NSObject
@property (nonatomic) double relAttention;
@property (nonatomic) double relRelaxation;
@property (nonatomic) double instAttention;
@property (nonatomic) double instRelaxation;

-(id) initWithRelAttention:(double) relAttention andRelRelax:(double) relRelax andInstAttention: (double) instAttention andInstRelax:(double) instRelax;

@end
#endif /* Header_h */
