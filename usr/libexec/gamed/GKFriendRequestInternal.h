//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFamiliarPlayerInternal.h"

@class NSDate, NSString;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal
{
    NSString *_message;	// 208 = 0xd0
    NSDate *_date;	// 216 = 0xd8
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100133ae8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100133a80
+ (int)familiarity;	// IMP=0x00000001001448d0
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (int)defaultFamiliarity;	// IMP=0x0000000100133c48
- (void)dealloc;	// IMP=0x0000000100133a88

@end

