//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CastleRequest.h"

@class NSArray;

@interface QuotaAppDetailsRequest : CastleRequest
{
    NSArray *_bundleIds;	// 16 = 0x10
    NSArray *_bundleIDs;	// 24 = 0x18
}

+ (Class)responseClass;	// IMP=0x000000010008c4f4
- (void).cxx_destruct;	// IMP=0x000000010008c78c
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (id)urlRequest;	// IMP=0x000000010008c5c4
- (id)initWithAccount:(id)arg1 bundleIDs:(id)arg2 quotaInfo:(id)arg3;	// IMP=0x000000010008c500

@end

