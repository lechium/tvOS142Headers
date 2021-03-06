//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_rawToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100153d6c
- (void).cxx_destruct;	// IMP=0x0000000100154260
@property(retain) NSData *rawToken; // @synthesize rawToken=_rawToken;
- (id)descriptionInternal;	// IMP=0x00000001001540e4
- (id)description;	// IMP=0x0000000100154018
- (unsigned long long)hash;	// IMP=0x0000000100154008
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100153f10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100153de4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100153db4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100153d74
- (id)initWithBytes:(id)arg1;	// IMP=0x0000000100153c50

@end

