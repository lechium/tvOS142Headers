//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HBUILaunchAnimationContext, NSArray;

@protocol HBUILaunchAnimationEnvironment <NSObject>

@optional
- (NSArray *)launchAnimationsWithContext:(HBUILaunchAnimationContext *)arg1;
- (void)didFinishLaunchAnimationWithContext:(HBUILaunchAnimationContext *)arg1;
- (void)willBeginLaunchAnimationWithContext:(HBUILaunchAnimationContext *)arg1;
- (NSArray *)nextLaunchAnimationEnvironments;
@end

