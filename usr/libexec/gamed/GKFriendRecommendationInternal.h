//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFamiliarPlayerInternal.h"

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal
{
    NSString *_reason;	// 208 = 0xd0
    NSString *_reason2;	// 216 = 0xd8
    unsigned int _rid;	// 224 = 0xe0
    int _source;	// 228 = 0xe4
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100133cf0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100133ce8
+ (int)familiarity;	// IMP=0x00000001001448c8
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *reason2; // @synthesize reason2=_reason2;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (int)defaultFamiliarity;	// IMP=0x0000000100133e84
- (void)dealloc;	// IMP=0x0000000100133c88

@end

