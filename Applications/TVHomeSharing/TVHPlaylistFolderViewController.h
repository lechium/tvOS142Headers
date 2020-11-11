//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSArray, NSString, TVHKMediaEntitiesFetchRequest, TVHMediaEntitiesGridViewController;

@interface TVHPlaylistFolderViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    TVHKMediaEntitiesFetchRequest *_fetchRequest;	// 8 = 0x8
    TVHMediaEntitiesGridViewController *_gridViewController;	// 16 = 0x10
    NSArray *_playlistItemMediaCategoryTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100028d84
@property(copy, nonatomic) NSArray *playlistItemMediaCategoryTypes; // @synthesize playlistItemMediaCategoryTypes=_playlistItemMediaCategoryTypes;
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(retain, nonatomic) TVHKMediaEntitiesFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100028c1c
- (void)_playPlaylist:(id)arg1;	// IMP=0x0000000100028abc
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x0000000100028a68
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x00000001000288c0
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010002880c
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x00000001000287fc
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x00000001000284fc
- (id)initWithPlaylistFolder:(id)arg1 mediaLibrary:(id)arg2 playlistsFetchContext:(id)arg3 playlistItemMediaCategoryTypes:(id)arg4;	// IMP=0x0000000100028130
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000280a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

