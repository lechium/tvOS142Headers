//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeBulletin.h"

@interface GKChallengeCompletedBulletin : GKChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e304
- (void)handleAction:(id)arg1;	// IMP=0x000000010002fbac
- (unsigned long long)launchEventType;	// IMP=0x000000010002fba4
- (void)assembleBulletin;	// IMP=0x000000010002f804
- (void)notifyClient:(id)arg1;	// IMP=0x000000010002f6a0
- (void)dealloc;	// IMP=0x000000010002e2d0
- (id)init;	// IMP=0x000000010002e29c

@end

