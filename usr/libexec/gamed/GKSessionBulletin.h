//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKMultiplayerBulletin.h"

@class GKCloudGameSession, GKCloudPlayer, GKGameDescriptor, NSData, NSDictionary, NSString;

@interface GKSessionBulletin : GKMultiplayerBulletin
{
    NSString *_cloudContainer;	// 16 = 0x10
    GKGameDescriptor *_game;	// 24 = 0x18
    long long _originatingDeviceType;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_senderID;	// 48 = 0x30
    NSData *_data;	// 56 = 0x38
    NSString *_localizedMessage;	// 64 = 0x40
    NSString *_assembledMessage;	// 72 = 0x48
    GKCloudGameSession *_session;	// 80 = 0x50
    GKCloudPlayer *_sender;	// 88 = 0x58
    NSString *_aggregateDictionaryKey;	// 96 = 0x60
}

+ (_Bool)displayNotification;	// IMP=0x00000001000e292c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000e2924
- (void).cxx_destruct;	// IMP=0x00000001000e4f38
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
@property(retain, nonatomic) GKCloudPlayer *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) GKCloudGameSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *assembledMessage; // @synthesize assembledMessage=_assembledMessage;
@property(retain, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) long long originatingDeviceType; // @synthesize originatingDeviceType=_originatingDeviceType;
@property(retain, nonatomic) GKGameDescriptor *game; // @synthesize game=_game;
@property(retain, nonatomic) NSString *cloudContainer; // @synthesize cloudContainer=_cloudContainer;
- (id)description;	// IMP=0x00000001000e4cc4
- (void)assembleBulletin;	// IMP=0x00000001000e46c8
- (void)localizeMessage;	// IMP=0x00000001000e45f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e42f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e3fd8
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000e3cc8
- (void)distributeData;	// IMP=0x00000001000e3cc4
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e37b0
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e2934

@end

