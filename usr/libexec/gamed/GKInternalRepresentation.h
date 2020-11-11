//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100083320
+ (id)codedPropertyKeys;	// IMP=0x00000001000832fc
+ (id)internalRepresentation;	// IMP=0x0000000100082e30
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100082e28
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x00000001001420d8
+ (id)propertiesToFetch;	// IMP=0x0000000100141ffc
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x0000000100141bcc
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x00000001000839f8
- (id)serverRepresentation;	// IMP=0x00000001000839ec
- (id)description;	// IMP=0x00000001000839dc
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0000000100083338
- (id)descriptionSubstitutionMap;	// IMP=0x000000010008332c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100083180
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100083038
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100082e44
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100142168
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000100142108
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100141d58
- (id)initWithCacheObject:(id)arg1;	// IMP=0x0000000100141bfc

@end

