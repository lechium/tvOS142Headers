/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAnimationPathPhysics.h>

@interface MRAnimationPathPhysics : MCAnimationPathPhysics {

	float mBaseValue;
	float mDeltaValue;
	float mVelocity;
	double mTime;

}

@property (assign,nonatomic) float baseValue; 
@property (assign,nonatomic) float velocity; 
-(float)velocity;
-(void)setVelocity:(float)arg1 ;
-(float)baseValue;
-(void)setBaseValue:(float)arg1 ;
-(id)initWithMCAnimationPath:(id)arg1 ;
-(float)computeValueForTime:(double)arg1 withContext:(id)arg2 ;
@end

