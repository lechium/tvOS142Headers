//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GKCloudPlayer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface GKGameSession : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSArray *_players;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    GKCloudPlayer *_lastModifiedPlayer;	// 48 = 0x30
    long long _maxNumberOfConnectedPlayers;	// 56 = 0x38
    NSString *_serverChangeTag;	// 64 = 0x40
    NSMutableDictionary *_playerStates;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ea7a8
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea7a4
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea7a0
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea79c
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ea798
+ (void)getSessionsForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ebfd4
+ (void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ebfd0
- (void).cxx_destruct;	// IMP=0x00000001000ebf58
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSString *serverChangeTag; // @synthesize serverChangeTag=_serverChangeTag;
@property(nonatomic) long long maxNumberOfConnectedPlayers; // @synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers;
@property(retain, nonatomic) GKCloudPlayer *lastModifiedPlayer; // @synthesize lastModifiedPlayer=_lastModifiedPlayer;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *badgedPlayers;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ebcb0
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000ebcac
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ebca8
- (id)playersWithConnectionState:(long long)arg1;	// IMP=0x00000001000ebaa8
- (void)setConnectionState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ebaa4
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ebaa0
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000eba9c
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000eba98
- (void)updateWithSession:(id)arg1;	// IMP=0x00000001000eb874
- (id)description;	// IMP=0x00000001000eb76c
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00000001000eae30
- (id)descriptionSubstitutionMap;	// IMP=0x00000001000eae24
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000eabac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ea7b0

@end

