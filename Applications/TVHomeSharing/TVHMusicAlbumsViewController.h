//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesGridViewController;
@protocol TVHMusicAlbumsViewControllerDataSource;

@interface TVHMusicAlbumsViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    id <TVHMusicAlbumsViewControllerDataSource> _dataSource;	// 8 = 0x8
    TVHMediaEntitiesGridViewController *_gridViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b19f0
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) id <TVHMusicAlbumsViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x00000001000b18a4
- (void)_playWithShuffle:(_Bool)arg1;	// IMP=0x00000001000b1784
- (void)_handleShuffleButtonAction;	// IMP=0x00000001000b1774
- (void)_handlePlayButtonAction;	// IMP=0x00000001000b1764
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x00000001000b1668
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x00000001000b14c4
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x00000001000b13d4
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x00000001000b13c4
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x00000001000b1128
- (id)_initWithMediaLibrary:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000001000b0f98
- (id)initWithMediaLibrary:(id)arg1 compilationsOnly:(_Bool)arg2;	// IMP=0x00000001000b0f18
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000001000b0f08
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000b0e80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

