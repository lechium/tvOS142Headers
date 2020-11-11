//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicLibrarySortUtilities : NSObject
{
}

+ (void)showSortMenuForLibraryRequest:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a9528
+ (id)_alertActionForSortType:(long long)arg1 inCategory:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a9340
+ (id)_titleForSortType:(long long)arg1;	// IMP=0x00000001000a9258
+ (id)sortButton;	// IMP=0x00000001000a91a4
+ (id)_sortDescriptorsForSortType:(long long)arg1;	// IMP=0x00000001000a8a7c
+ (id)sortDescriptorsForRequest:(id)arg1;	// IMP=0x00000001000a89fc
+ (id)_categoryForRequest:(id)arg1;	// IMP=0x00000001000a8810
+ (void)_setScopedMusicVideosForScopedAlbumSortType:(long long)arg1;	// IMP=0x00000001000a87c4
+ (void)_setCurrentSortType:(long long)arg1 forCategory:(id)arg2;	// IMP=0x00000001000a8710
+ (long long)_currentSortTypeForCategory:(id)arg1;	// IMP=0x00000001000a85b8
+ (long long)_legacySortTypeForCategory:(id)arg1;	// IMP=0x00000001000a8518
+ (_Bool)_hasLegacySortTypeForCategory:(id)arg1;	// IMP=0x00000001000a8484
+ (long long)_defaultSortTypeForCategory:(id)arg1;	// IMP=0x00000001000a8358
+ (_Bool)canSortRequest:(id)arg1;	// IMP=0x00000001000a831c
+ (id)_supportedSortTypeDictionary;	// IMP=0x00000001000a81cc

@end

