//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol NESMPowerManagerDelegate
- (void)handleWakeup;
- (_Bool)handleSleep;
- (_Bool)canSleep;

@optional
- (void)handleSleepTime:(double)arg1;
@end

