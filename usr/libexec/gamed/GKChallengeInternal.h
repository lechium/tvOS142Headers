//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKGameInternal, GKPlayerInternal, NSDate, NSOrderedSet, NSString;

@interface GKChallengeInternal : GKInternalRepresentation
{
    NSString *_challengeID;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSDate *_issueDate;	// 24 = 0x18
    NSDate *_completionDate;	// 32 = 0x20
    NSOrderedSet *_compatibleBundleIDs;	// 40 = 0x28
    GKGameInternal *_game;	// 48 = 0x30
    GKPlayerInternal *_issuingPlayer;	// 56 = 0x38
    GKPlayerInternal *_receivingPlayer;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    NSString *_bundleID;	// 80 = 0x50
}

+ (id)internalRepresentation;	// IMP=0x00000001001394c4
+ (id)secureCodedPropertyKeys;	// IMP=0x000000010013906c
@property(retain, nonatomic) NSDate *issueDate; // @synthesize issueDate=_issueDate;
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @synthesize compatibleBundleIDs=_compatibleBundleIDs;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(retain, nonatomic) GKPlayerInternal *receivingPlayer; // @synthesize receivingPlayer=_receivingPlayer;
@property(retain, nonatomic) GKPlayerInternal *issuingPlayer; // @synthesize issuingPlayer=_issuingPlayer;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
- (id)descriptionSubstitutionMap;	// IMP=0x0000000100139908
@property(readonly, nonatomic) NSString *subtitleText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) unsigned long long type;
- (id)findLocalGameBundleID;	// IMP=0x00000001001395e4
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x00000001001394d8
- (id)serverRepresentation;	// IMP=0x00000001001394cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100139440
- (unsigned long long)hash;	// IMP=0x000000010013941c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100139344
- (void)dealloc;	// IMP=0x0000000100139274

@end

