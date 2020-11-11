//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding>
{
    unsigned long long _diffRaw;	// 8 = 0x8
    unsigned long long _diff;	// 16 = 0x10
    unsigned long long _mask;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
    NSString *_assessment;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002fdac
+ (id)allowEverythingDifferent;	// IMP=0x000000010002fd94
+ (id)requireSameAssetTypeAndAllAttributes;	// IMP=0x000000010002fd8c
+ (id)requireSameAssetTypeAndDownloadContent;	// IMP=0x000000010002fd74
+ (id)requireSameAssetTypeAndAssetId;	// IMP=0x000000010002fd5c
- (id)description;	// IMP=0x0000000100030244
- (id)summary;	// IMP=0x000000010003023c
- (unsigned long long)category;	// IMP=0x0000000100030234
- (_Bool)hasOnlyAllowedDifferences:(id)arg1;	// IMP=0x00000001000301ec
- (_Bool)isSameDownloadPolicy;	// IMP=0x00000001000301cc
- (_Bool)isSameDownloadUrl;	// IMP=0x00000001000301ac
- (_Bool)isSameDownloadContent;	// IMP=0x000000010003018c
- (_Bool)isSameForNonAssetIdAttributes;	// IMP=0x000000010003016c
- (_Bool)isSameAssetId;	// IMP=0x000000010003014c
- (_Bool)isSameForAllAttributes;	// IMP=0x000000010003012c
- (_Bool)isSameAssetType;	// IMP=0x000000010003010c
- (_Bool)isAnythingDifferent;	// IMP=0x00000001000300f0
- (id)initFromInverseOfCategories:(unsigned long long)arg1;	// IMP=0x00000001000300bc
- (id)initFromDiff:(unsigned long long)arg1;	// IMP=0x0000000100030058
- (id)initDifferentAssetType:(_Bool)arg1 assetId:(_Bool)arg2 attributes:(_Bool)arg3 assetIdAttributes:(_Bool)arg4 dynamicAssetId:(_Bool)arg5 nonIdAttributes:(_Bool)arg6 content:(_Bool)arg7 url:(_Bool)arg8 policy:(_Bool)arg9;	// IMP=0x000000010002ff14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002fe84
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002fdb4

@end

