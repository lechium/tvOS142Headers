//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    unsigned int _concernID;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010013445c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001343f4
@property(nonatomic) unsigned int concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x0000000100134600
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100134560
- (void)dealloc;	// IMP=0x00000001001343fc

@end

