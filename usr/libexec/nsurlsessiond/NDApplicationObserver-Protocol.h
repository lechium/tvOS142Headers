//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NDApplication;

@protocol NDApplicationObserver <NSObject>

@optional
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(NDApplication *)arg1;
- (void)applicationEndedExtendedNonDiscretionaryBackgroundGracePeriod:(NDApplication *)arg1;
- (void)applicationEndedNonDiscretionaryBackgroundGracePeriod:(NDApplication *)arg1;
- (void)applicationNoLongerInForeground:(NDApplication *)arg1;
- (void)applicationEnteredForeground:(NDApplication *)arg1;
- (void)applicationWasSuspended:(NDApplication *)arg1;
- (void)backgroundUpdatesEnabledForApplication:(NDApplication *)arg1;
- (void)backgroundUpdatesDisabledForApplication:(NDApplication *)arg1;
- (void)applicationWasQuitFromAppSwitcher:(NDApplication *)arg1;
@end

