//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
}

- (void)_beginZoomAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010009cba8
- (void)animateTransition:(id)arg1;	// IMP=0x000000010009ca64
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010009ca5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

