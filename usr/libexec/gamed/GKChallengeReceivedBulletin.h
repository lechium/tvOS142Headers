//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeBulletin.h"

@interface GKChallengeReceivedBulletin : GKChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fe88
- (void)handleDeclineAction;	// IMP=0x0000000100031240
- (void)handleAction:(id)arg1;	// IMP=0x0000000100030fa0
- (unsigned long long)launchEventType;	// IMP=0x0000000100030f98
- (void)assembleBulletin;	// IMP=0x0000000100030b10
- (void)notifyClient:(id)arg1;	// IMP=0x00000001000309ac
- (void)dealloc;	// IMP=0x000000010002fe54
- (id)init;	// IMP=0x000000010002fe20

@end

