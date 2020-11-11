//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntityCollectionsViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntityCollectionsViewController;

@interface TVHMusicGenresViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntityCollectionsViewControllerDelegate>
{
    TVHMediaEntityCollectionsViewController *_mediaCollectionsViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008a6b0
@property(retain, nonatomic) TVHMediaEntityCollectionsViewController *mediaCollectionsViewController; // @synthesize mediaCollectionsViewController=_mediaCollectionsViewController;
- (void)_playWithShuffle:(_Bool)arg1;	// IMP=0x000000010008a58c
- (void)_handleShuffleButtonAction;	// IMP=0x000000010008a57c
- (void)_handlePlayButtonAction;	// IMP=0x000000010008a56c
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x000000010008a43c
- (void)mediaEntityCollectionsViewController:(id)arg1 didPlayMediaEntity:(id)arg2 forMediaEntityCollection:(id)arg3 atListIndexPath:(id)arg4;	// IMP=0x000000010008a344
- (void)mediaEntityCollectionsViewController:(id)arg1 didSelectMediaEntity:(id)arg2 forMediaEntityCollection:(id)arg3 atListIndexPath:(id)arg4;	// IMP=0x000000010008a1bc
- (void)mediaEntityCollectionsViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010008a0cc
- (id)mediaEntityCollectionsViewController:(id)arg1 mediaEntitiesFetchRequestForMediaEntityCollection:(id)arg2;	// IMP=0x0000000100089ee4
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x0000000100089ed4
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100089b9c
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100089950
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000898c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

