//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCollection;

@interface TVPSharedAlbumsActivityFeedCache : NSObject
{
    PHAssetCollection *_activityFeedCollection;	// 8 = 0x8
    NSArray *_activityPhotoBatches;	// 16 = 0x10
    NSArray *_sortedMostRecentlyModifiedAssets;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000d620
- (void).cxx_destruct;	// IMP=0x000000010000e000
@property(copy, nonatomic) NSArray *sortedMostRecentlyModifiedAssets; // @synthesize sortedMostRecentlyModifiedAssets=_sortedMostRecentlyModifiedAssets;
@property(copy, nonatomic) NSArray *activityPhotoBatches; // @synthesize activityPhotoBatches=_activityPhotoBatches;
@property(retain, nonatomic) PHAssetCollection *activityFeedCollection; // @synthesize activityFeedCollection=_activityFeedCollection;
- (_Bool)loadCache;	// IMP=0x000000010000d8c8
- (void)loadCacheIfNeeded;	// IMP=0x000000010000d884
- (_Bool)hasFeedInfo;	// IMP=0x000000010000d68c

@end
