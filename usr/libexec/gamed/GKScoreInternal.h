//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;	// 8 = 0x8
    NSString *_leaderboardIdentifier;	// 16 = 0x10
    NSString *_groupLeaderboardIdentifier;	// 24 = 0x18
    NSString *_formattedValue;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
    long long _value;	// 48 = 0x30
    unsigned long long _context;	// 56 = 0x38
    unsigned int _rank;	// 64 = 0x40
    _Bool _valueSet;	// 68 = 0x44
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100137184
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100136c60
@property(nonatomic) _Bool valueSet; // @synthesize valueSet=_valueSet;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(retain, nonatomic) NSString *groupLeaderboardIdentifier; // @synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x0000000100137638
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100137450
- (id)serverRepresentation;	// IMP=0x0000000100137328
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100137058
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100136c88
- (void)dealloc;	// IMP=0x0000000100136bd0
@property(retain, nonatomic) NSString *groupCategory;
@property(retain, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *playerID;

@end

