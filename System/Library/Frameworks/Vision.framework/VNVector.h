/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VNPoint;

@interface VNVector : NSObject <NSCopying, NSSecureCoding> {

	VNPoint* _vectorProjections;

}

@property (readonly) double x; 
@property (readonly) double y; 
@property (readonly) double r; 
@property (readonly) double theta; 
@property (readonly) double length; 
@property (readonly) double squaredLength; 
+(BOOL)supportsSecureCoding;
+(id)zeroVector;
+(id)unitVectorForVector:(id)arg1 ;
+(id)vectorByMultiplyingVector:(id)arg1 byScalar:(double)arg2 ;
+(id)vectorByAddingVector:(id)arg1 toVector:(id)arg2 ;
+(id)vectorBySubtractingVector:(id)arg1 fromVector:(id)arg2 ;
+(double)dotProductOfVector:(id)arg1 vector:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(double)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)x;
-(double)y;
-(id)initWithXComponent:(double)arg1 yComponent:(double)arg2 ;
-(id)initWithR:(double)arg1 theta:(double)arg2 ;
-(id)initWithVectorHead:(id)arg1 tail:(id)arg2 ;
-(double)r;
-(double)theta;
-(double)squaredLength;
@end

