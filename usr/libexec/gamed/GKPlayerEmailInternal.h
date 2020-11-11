//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation
{
    NSString *_address;	// 8 = 0x8
    NSString *_addressSHA1;	// 16 = 0x10
    NSString *_addressPrefix;	// 24 = 0x18
    _Bool _verified;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100133814
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010013379c
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSString *addressPrefix; // @synthesize addressPrefix=_addressPrefix;
@property(retain, nonatomic) NSString *addressSHA1; // @synthesize addressSHA1=_addressSHA1;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (unsigned long long)hash;	// IMP=0x00000001001339c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001338f8
- (void)dealloc;	// IMP=0x00000001001337a4

@end

