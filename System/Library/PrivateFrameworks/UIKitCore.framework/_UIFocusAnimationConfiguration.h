/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIFocusAnimationConfiguration : NSObject <NSCopying> {

	double _focusingBaseDuration;
	double _unfocusingBaseDuration;
	unsigned long long _animationOptions;
	double _focusingDurationScaleFactorLowerBound;
	double _focusingDurationScaleFactorUpperBound;
	double _unfocusingDurationScaleFactorLowerBound;
	double _unfocusingDurationScaleFactorUpperBound;
	double _minimumFocusDuration;
	double _unfocusingRepositionBaseDuration;
	double _unfocusingBackgroundFadeDurationPercentage;
	double _focusingDelay;

}

@property (assign,nonatomic) unsigned long long animationOptions;                            //@synthesize animationOptions=_animationOptions - In the implementation block
@property (assign,nonatomic) double focusingDurationScaleFactorLowerBound;                   //@synthesize focusingDurationScaleFactorLowerBound=_focusingDurationScaleFactorLowerBound - In the implementation block
@property (assign,nonatomic) double focusingDurationScaleFactorUpperBound;                   //@synthesize focusingDurationScaleFactorUpperBound=_focusingDurationScaleFactorUpperBound - In the implementation block
@property (assign,nonatomic) double unfocusingDurationScaleFactorLowerBound;                 //@synthesize unfocusingDurationScaleFactorLowerBound=_unfocusingDurationScaleFactorLowerBound - In the implementation block
@property (assign,nonatomic) double unfocusingDurationScaleFactorUpperBound;                 //@synthesize unfocusingDurationScaleFactorUpperBound=_unfocusingDurationScaleFactorUpperBound - In the implementation block
@property (assign,nonatomic) double minimumFocusDuration;                                    //@synthesize minimumFocusDuration=_minimumFocusDuration - In the implementation block
@property (assign,nonatomic) double unfocusingRepositionBaseDuration;                        //@synthesize unfocusingRepositionBaseDuration=_unfocusingRepositionBaseDuration - In the implementation block
@property (assign,nonatomic) double unfocusingBackgroundFadeDurationPercentage;              //@synthesize unfocusingBackgroundFadeDurationPercentage=_unfocusingBackgroundFadeDurationPercentage - In the implementation block
@property (assign,nonatomic) double focusingDelay;                                           //@synthesize focusingDelay=_focusingDelay - In the implementation block
@property (assign,nonatomic) double focusingBaseDuration;                                    //@synthesize focusingBaseDuration=_focusingBaseDuration - In the implementation block
@property (assign,nonatomic) double unfocusingBaseDuration;                                  //@synthesize unfocusingBaseDuration=_unfocusingBaseDuration - In the implementation block
+(id)configurationWithStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(double)focusingBaseDuration;
-(double)unfocusingBaseDuration;
-(double)unfocusingBackgroundFadeDurationPercentage;
-(void)setUnfocusingBaseDuration:(double)arg1 ;
-(void)setFocusingDelay:(double)arg1 ;
-(void)setFocusingBaseDuration:(double)arg1 ;
-(void)setFocusingDurationScaleFactorLowerBound:(double)arg1 ;
-(void)setFocusingDurationScaleFactorUpperBound:(double)arg1 ;
-(double)focusingDelay;
-(double)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1 ;
-(double)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1 ;
-(double)unfocusingRepositionBaseDuration;
-(double)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1 ;
-(void)setUnfocusingDurationScaleFactorLowerBound:(double)arg1 ;
-(void)setUnfocusingDurationScaleFactorUpperBound:(double)arg1 ;
-(void)setMinimumFocusDuration:(double)arg1 ;
-(void)setUnfocusingRepositionBaseDuration:(double)arg1 ;
-(void)setUnfocusingBackgroundFadeDurationPercentage:(double)arg1 ;
-(double)focusingDurationScaleFactorLowerBound;
-(double)focusingDurationScaleFactorUpperBound;
-(double)unfocusingDurationScaleFactorLowerBound;
-(double)unfocusingDurationScaleFactorUpperBound;
-(double)minimumFocusDuration;
-(double)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1 ;
@end

