/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider> {

	BOOL _implicitDuration;
	double _dampingRatio;
	double _mass;
	double _stiffness;
	double _damping;
	CGVector _initialVelocity;

}

@property (nonatomic,readonly) double dampingRatio;                                            //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) BOOL implicitDuration;                                            //@synthesize implicitDuration=_implicitDuration - In the implementation block
@property (assign,nonatomic) double mass;                                                      //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                                 //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                                   //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double settlingDuration; 
@property (nonatomic,readonly) CGVector initialVelocity;                                       //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
+(BOOL)supportsSecureCoding;
+(void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double*)arg4 response:(double*)arg5 ;
+(void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double*)arg3 stiffness:(double*)arg4 damping:(double*)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(CGVector)initialVelocity;
-(double)settlingDuration;
-(UICubicTimingParameters *)cubicTimingParameters;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(CGVector)arg4 ;
-(id)_mediaTimingFunction;
-(UISpringTimingParameters *)springTimingParameters;
-(id)initWithVelocity:(CGVector)arg1 ;
-(double)dampingRatio;
-(long long)timingCurveType;
-(id)effectiveTimingFunction;
-(void)setImplicitDuration:(BOOL)arg1 ;
-(BOOL)implicitDuration;
-(id)initWithDampingRatio:(double)arg1 initialVelocity:(CGVector)arg2 ;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(CGVector)arg3 ;
-(id)initWithDampingRatio:(double)arg1 ;
-(id)initWithDampingRatio:(double)arg1 response:(double)arg2 ;
@end
