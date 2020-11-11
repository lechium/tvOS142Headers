//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTournamentBulletin.h"

@class NSString;

@interface GKTournamentInviteBulletin : GKTournamentBulletin
{
    NSString *_tournamentID;	// 16 = 0x10
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000de570
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000de408
+ (id)packFakeTournamentBulletinWithSharedInviteDictionary:(id)arg1;	// IMP=0x00000001000ddeb8
- (void).cxx_destruct;	// IMP=0x00000001000e0980
@property(retain) NSString *tournamentID; // @synthesize tournamentID=_tournamentID;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e019c
- (void)handleDeclineAction;	// IMP=0x00000001000e0040
- (void)handleAcceptAction;	// IMP=0x00000001000dfde0
- (void)handleAction:(id)arg1;	// IMP=0x00000001000dfb70
- (void)assembleBulletin;	// IMP=0x00000001000df2d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000de4cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000de410
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000de220

@end

