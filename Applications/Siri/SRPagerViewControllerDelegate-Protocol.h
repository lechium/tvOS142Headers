//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRPagerViewController, UIViewController;

@protocol SRPagerViewControllerDelegate <NSObject>
- (void)pagerViewControllerDidChangeTransitionState:(SRPagerViewController *)arg1;
- (void)pagerViewController:(SRPagerViewController *)arg1 didActivatePageViewController:(UIViewController *)arg2 oldActivePageViewController:(UIViewController *)arg3;
@end

