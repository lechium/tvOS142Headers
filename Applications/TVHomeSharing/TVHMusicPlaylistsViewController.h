//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesGridViewController;

@interface TVHMusicPlaylistsViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    TVHMediaEntitiesGridViewController *_gridViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100037d70
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100037c48
- (void)_playPlaylist:(id)arg1;	// IMP=0x0000000100037ae4
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x0000000100037a90
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100037950
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010003789c
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x000000010003788c
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100037584
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100037248
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000371c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
