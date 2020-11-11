/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIForceLevelClassifier.h>

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier {

	double _smoothedForce;
	BOOL _anyForceObservations;
	double _smoothedImpulse;
	long long _impulseObservationState;
	double _lastForceForImpulse;
	double _lastTimestampForImpulse;
	double _revealThreshold;
	double _standardThreshold;
	double _strongThreshold;
	double _smoothingFactor;
	double _impulseSmoothingFactor;

}

@property (assign,nonatomic) double revealThreshold;                     //@synthesize revealThreshold=_revealThreshold - In the implementation block
@property (assign,nonatomic) double standardThreshold;                   //@synthesize standardThreshold=_standardThreshold - In the implementation block
@property (assign,nonatomic) double strongThreshold;                     //@synthesize strongThreshold=_strongThreshold - In the implementation block
@property (assign,nonatomic) double smoothingFactor;                     //@synthesize smoothingFactor=_smoothingFactor - In the implementation block
@property (nonatomic,readonly) double currentImpulse; 
@property (assign,nonatomic) double impulseSmoothingFactor;              //@synthesize impulseSmoothingFactor=_impulseSmoothingFactor - In the implementation block
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)touchForceMultiplierDidChange;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(double)_thresholdForForceLevel:(long long)arg1 ;
-(double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2 ;
-(long long)_forceLevelForTouchForceValue:(double)arg1 ;
-(double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3 ;
-(void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2 ;
-(double)currentImpulse;
-(double)revealThreshold;
-(void)setRevealThreshold:(double)arg1 ;
-(double)standardThreshold;
-(void)setStandardThreshold:(double)arg1 ;
-(double)strongThreshold;
-(void)setStrongThreshold:(double)arg1 ;
-(double)smoothingFactor;
-(void)setSmoothingFactor:(double)arg1 ;
-(double)impulseSmoothingFactor;
-(void)setImpulseSmoothingFactor:(double)arg1 ;
@end

