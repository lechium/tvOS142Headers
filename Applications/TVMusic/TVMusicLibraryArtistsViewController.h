//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "UICollectionViewDataSourcePrefetching-Protocol.h"

@class NSString;

@interface TVMusicLibraryArtistsViewController : TVMusicMPRequestViewController <UICollectionViewDataSourcePrefetching>
{
}

- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00000001000c9cdc
- (void)handlePlayPauseCommand;	// IMP=0x00000001000c9ad0
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000c991c
- (id)placeholderImage;	// IMP=0x00000001000c990c
- (id)_artistForItemAtIndexpath:(id)arg1;	// IMP=0x00000001000c9828
- (void)viewDidLoad;	// IMP=0x00000001000c9784
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000c9734
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000c972c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000c9680
- (struct CGPoint)cellSpacing;	// IMP=0x00000001000c9644
- (double)collectionViewTop;	// IMP=0x00000001000c9638
- (struct CGSize)cellSize;	// IMP=0x00000001000c9624
- (id)init;	// IMP=0x00000001000c9594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
