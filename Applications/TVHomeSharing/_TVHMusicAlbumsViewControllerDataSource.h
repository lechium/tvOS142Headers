//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHMusicAlbumsViewControllerDataSource-Protocol.h"

@class NSArray, NSString, TVHKMediaEntitiesFetchRequest, TVHMediaEntitiesGridDataSource, TVHSortOption;

@interface _TVHMusicAlbumsViewControllerDataSource : NSObject <TVHMusicAlbumsViewControllerDataSource>
{
    NSString *_headerTitle;	// 8 = 0x8
    NSString *_noContentFoundErrorMessage;	// 16 = 0x10
    TVHSortOption *_initialSortOption;	// 24 = 0x18
    NSArray *_sortOptions;	// 32 = 0x20
    TVHKMediaEntitiesFetchRequest *_fetchRequest;	// 40 = 0x28
    TVHMediaEntitiesGridDataSource *_mediaEntitiesGridDataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010009c384
@property(readonly, nonatomic) TVHMediaEntitiesGridDataSource *mediaEntitiesGridDataSource; // @synthesize mediaEntitiesGridDataSource=_mediaEntitiesGridDataSource;
@property(readonly, nonatomic) TVHKMediaEntitiesFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, copy, nonatomic) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(readonly, nonatomic) TVHSortOption *initialSortOption; // @synthesize initialSortOption=_initialSortOption;
@property(readonly, copy, nonatomic) NSString *noContentFoundErrorMessage; // @synthesize noContentFoundErrorMessage=_noContentFoundErrorMessage;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) _Bool showsPlaybackControls;
- (id)initWithFetchRequest:(id)arg1 headerTitle:(id)arg2 noContentFoundErrorMessage:(id)arg3;	// IMP=0x000000010009c094

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

