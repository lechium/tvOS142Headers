//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerActionBulletin.h"

@class NSData, NSNumber;

@interface GKRealTimeMultiplayerAcceptBulletin : GKRealTimeMultiplayerActionBulletin
{
    NSNumber *_blobType;	// 128 = 0x80
    NSNumber *_relayType;	// 136 = 0x88
    NSData *_relayConnectionID;	// 144 = 0x90
    NSData *_relayTranscationID;	// 152 = 0x98
    NSData *_selfRelayIP;	// 160 = 0xa0
    NSNumber *_selfRelayPort;	// 168 = 0xa8
    NSData *_peerRelayIP;	// 176 = 0xb0
    NSNumber *_peerRelayPort;	// 184 = 0xb8
    NSData *_relayToken;	// 192 = 0xc0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000417c0
@property(retain) NSData *relayToken; // @synthesize relayToken=_relayToken;
@property(retain) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(retain) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(retain) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(retain) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(retain) NSData *relayTranscationID; // @synthesize relayTranscationID=_relayTranscationID;
@property(retain) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(retain) NSNumber *blobType; // @synthesize blobType=_blobType;
- (void)handleAction:(id)arg1;	// IMP=0x000000010004251c
- (void)assembleBulletin;	// IMP=0x00000001000421e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100041f18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100041be4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000418cc
- (_Bool)isAccept;	// IMP=0x00000001000418c4
- (id)notificationName;	// IMP=0x00000001000418b4
- (id)debugLine;	// IMP=0x00000001000418a8
- (id)aggregateDictionaryKey;	// IMP=0x0000000100041898
- (void)dealloc;	// IMP=0x00000001000417c8

@end

