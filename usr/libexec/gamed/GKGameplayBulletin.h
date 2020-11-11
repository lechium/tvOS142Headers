//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKBulletin.h"

@class GKPlayerInternal, NSArray, NSString, NSURL;

@interface GKGameplayBulletin : GKBulletin
{
    unsigned char _gameLocation;	// 16 = 0x10
    NSString *_receiverPlayerID;	// 24 = 0x18
    NSString *_originatorPlayerID;	// 32 = 0x20
    GKPlayerInternal *_receiverPlayer;	// 40 = 0x28
    GKPlayerInternal *_originatorPlayer;	// 48 = 0x30
    NSString *_receiverGuestPlayerID;	// 56 = 0x38
    NSString *_originatorGuestPlayerID;	// 64 = 0x40
    GKPlayerInternal *_receiverGuestPlayer;	// 72 = 0x48
    GKPlayerInternal *_originatorGuestPlayer;	// 80 = 0x50
    NSURL *_storeURL;	// 88 = 0x58
    NSArray *_compatibleVersions;	// 96 = 0x60
    NSArray *_compatibleShortVersions;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100103a58
@property unsigned char gameLocation; // @synthesize gameLocation=_gameLocation;
@property(retain) NSArray *compatibleShortVersions; // @synthesize compatibleShortVersions=_compatibleShortVersions;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorGuestPlayer; // @synthesize originatorGuestPlayer=_originatorGuestPlayer;
@property(retain) GKPlayerInternal *receiverGuestPlayer; // @synthesize receiverGuestPlayer=_receiverGuestPlayer;
@property(retain) NSString *originatorGuestPlayerID; // @synthesize originatorGuestPlayerID=_originatorGuestPlayerID;
@property(retain) NSString *receiverGuestPlayerID; // @synthesize receiverGuestPlayerID=_receiverGuestPlayerID;
@property(retain) GKPlayerInternal *originatorPlayer; // @synthesize originatorPlayer=_originatorPlayer;
@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010740c
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001067cc
- (void)gamePlatformForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010649c
- (void)gamePlatformWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100106328
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100105a74
- (void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100104f14
- (void)determineGameLocationOnDeviceOnly;	// IMP=0x0000000100104b30
- (_Bool)isCompatibleWithGameDescriptor:(id)arg1;	// IMP=0x0000000100104868
- (_Bool)isPushFromLocalPlayers;	// IMP=0x0000000100104710
- (_Bool)isPushForLocalPlayers;	// IMP=0x00000001001045b8
- (_Bool)playerIsLocal:(id)arg1;	// IMP=0x0000000100104338
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100103fc8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100103b50
- (void)dealloc;	// IMP=0x0000000100103a60

@end
