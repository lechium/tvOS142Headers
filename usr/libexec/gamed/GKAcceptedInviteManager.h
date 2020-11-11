//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GKAcceptedInviteManager : NSObject
{
    NSMutableArray *_acceptedMultiplayerInvites;	// 8 = 0x8
    NSMutableArray *_acceptedTurnBased;	// 16 = 0x10
    NSMutableArray *_acceptedTournamentInvites;	// 24 = 0x18
}

+ (id)syncQueue;	// IMP=0x00000001000c88d0
@property(retain) NSMutableArray *acceptedTournamentInvites; // @synthesize acceptedTournamentInvites=_acceptedTournamentInvites;
@property(retain) NSMutableArray *acceptedTurnBased; // @synthesize acceptedTurnBased=_acceptedTurnBased;
@property(retain) NSMutableArray *acceptedMultiplayerInvites; // @synthesize acceptedMultiplayerInvites=_acceptedMultiplayerInvites;
- (id)description;	// IMP=0x00000001000ca348
- (id)tournamentInviteForGame:(id)arg1;	// IMP=0x00000001000ca188
- (id)turnBasedInviteForGameDescriptor:(id)arg1;	// IMP=0x00000001000c9fe8
- (id)turnBasedInviteForGame:(id)arg1;	// IMP=0x00000001000c9e74
- (id)multiplayerInviteForGameDescriptor:(id)arg1;	// IMP=0x00000001000c9be8
- (id)multiplayerInviteForGame:(id)arg1;	// IMP=0x00000001000c9a74
- (id)removeAndReturnTurnBasedInviteWithMatchID:(id)arg1;	// IMP=0x00000001000c98b0
- (id)removeAndReturnInviteWithSessionToken:(id)arg1;	// IMP=0x00000001000c96ec
- (void)addTournamentInvite:(id)arg1;	// IMP=0x00000001000c9594
- (void)addTurnBasedEvent:(id)arg1;	// IMP=0x00000001000c943c
- (void)addMultiplayerInvite:(id)arg1;	// IMP=0x00000001000c92e4
- (id)_fetchAndRemoveBulletinFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c8fe8
- (void)_insertBulletin:(id)arg1 atFrontOfArray:(id)arg2;	// IMP=0x00000001000c8e48
- (void)_addBulletin:(id)arg1 toArray:(id)arg2;	// IMP=0x00000001000c8cac
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8a58
- (void)dealloc;	// IMP=0x00000001000c8878
- (id)init;	// IMP=0x00000001000c8808

@end

