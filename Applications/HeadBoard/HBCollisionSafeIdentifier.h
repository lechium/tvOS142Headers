//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol NSCopying;

@interface HBCollisionSafeIdentifier : NSObject <NSCopying>
{
    NSObject<NSCopying> *_rootIdentifier;	// 8 = 0x8
    unsigned long long _collisionCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100078b74
@property(nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (id)description;	// IMP=0x0000000100078a64
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000788a8
- (unsigned long long)hash;	// IMP=0x00000001000787e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100078788
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;	// IMP=0x00000001000786f8

@end

