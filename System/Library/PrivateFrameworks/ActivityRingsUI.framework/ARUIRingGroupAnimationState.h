/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUIRingGroupAnimationDelegate.h>

@class CAMediaTimingFunction, NSMutableSet, NSString;

@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate> {

	double _duration;
	CAMediaTimingFunction* _timingFunction;
	/*^block*/id _completion;
	ARUIRingGroupAnimationState* _nextAnimationState;
	NSMutableSet* _trackedAnimations;

}

@property (nonatomic,retain) ARUIRingGroupAnimationState * nextAnimationState;              //@synthesize nextAnimationState=_nextAnimationState - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackedAnimations;                              //@synthesize trackedAnimations=_trackedAnimations - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                        //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pushAnimationState:(id)arg1 ;
+(void)popAnimationState;
+(id)currentAnimationState;
-(id)init;
-(id)completion;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setCompletion:(id)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)animationDidComplete:(id)arg1 ;
-(void)setNextAnimationState:(ARUIRingGroupAnimationState *)arg1 ;
-(NSMutableSet *)trackedAnimations;
-(ARUIRingGroupAnimationState *)nextAnimationState;
-(void)setTrackedAnimations:(NSMutableSet *)arg1 ;
@end

