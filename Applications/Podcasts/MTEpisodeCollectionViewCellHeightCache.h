//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTEpisodeCollectionViewCellHeightCache : MTSingleton
{
    NSCache *_cachedHeights;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010009246c
- (id)_keyForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100092430
- (void)addCachedHeight:(double)arg1 forWidth:(double)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000100092390
- (double)cachedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100092308
- (void)sizeCategoryChanged:(id)arg1;	// IMP=0x00000001000922f0
- (void)dealloc;	// IMP=0x0000000100092268
- (id)init;	// IMP=0x00000001000921ac

@end

