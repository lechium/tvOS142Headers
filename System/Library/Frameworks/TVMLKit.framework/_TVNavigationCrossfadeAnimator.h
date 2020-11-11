/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface _TVNavigationCrossfadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _fadeOutFromView;

}

@property (assign,nonatomic) BOOL fadeOutFromView;                  //@synthesize fadeOutFromView=_fadeOutFromView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_beginCrossfadeAnimationFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 delay:(double)arg4 fadeOutFromView:(BOOL)arg5 removeFromView:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)_beginCrossfadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)fadeOutFromView;
-(void)setFadeOutFromView:(BOOL)arg1 ;
@end

