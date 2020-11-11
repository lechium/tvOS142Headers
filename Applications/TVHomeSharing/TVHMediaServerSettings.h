//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, TVHKMediaServerIdentifier;

@interface TVHMediaServerSettings : NSObject <NSCopying>
{
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 8 = 0x8
    NSDate *_modifiedDate;	// 16 = 0x10
    unsigned long long _mediaCategoryType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003b820
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(copy, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003b790
- (id)description;	// IMP=0x000000010003b548
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003b300
- (unsigned long long)hash;	// IMP=0x000000010003b260
- (id)dictionaryRepresentation;	// IMP=0x000000010003b124
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000010003af5c
- (id)initWithMediaServerIdentifier:(id)arg1;	// IMP=0x000000010003ae9c
- (id)init;	// IMP=0x000000010003ae14

@end

