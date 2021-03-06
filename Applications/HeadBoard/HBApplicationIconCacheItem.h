//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBIconCacheKey.h"

#import "HBApplicationIconCacheItem-Protocol.h"

@class NSString, PBSAppInfo;
@protocol HBIconCacheKey;

@interface HBApplicationIconCacheItem : HBIconCacheKey <HBApplicationIconCacheItem>
{
    PBSAppInfo *_applicationInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100040b28
@property(readonly, nonatomic) PBSAppInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) id <HBIconCacheKey> cacheKey;
- (id)initWithApplicationInfo:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100040a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

