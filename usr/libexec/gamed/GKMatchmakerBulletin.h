//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKBulletin.h"

@class NSString;

@interface GKMatchmakerBulletin : GKBulletin
{
    NSString *_matchID;	// 16 = 0x10
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2b58
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (void)executeBulletinWithBulletinController:(id)arg1;	// IMP=0x00000001000d2f80
- (void)dealloc;	// IMP=0x00000001000d2f30

@end

