//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPhotoLibraryCollectionViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "TVPCollectionViewCachingManagerDataSource-Protocol.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate-Protocol.h"

@class NSIndexPath, NSString, NSTimer, PHAssetCollection, PLCloudSharedAlbum, TVPCollectionViewCachingManager, TVPFetchManager, TVPModalPresenter, TVPSharedPSSubscriberListViewController;

@interface TVPPhotoLibraryAlbumViewController : TVPPhotoLibraryCollectionViewController <PHPhotoLibraryChangeObserver, TVPPhotoLibraryOneUpViewControllerDelegate, TVPCollectionViewCachingManagerDataSource>
{
    PHAssetCollection *_album;	// 8 = 0x8
    NSIndexPath *_preferredFocusIndexPath;	// 16 = 0x10
    TVPModalPresenter *_presenter;	// 24 = 0x18
    TVPFetchManager *_fetchManager;	// 32 = 0x20
    TVPCollectionViewCachingManager *_cachingManager;	// 40 = 0x28
    TVPSharedPSSubscriberListViewController *_subscribersListController;	// 48 = 0x30
    PLCloudSharedAlbum *_pl_sharedAlbum;	// 56 = 0x38
    NSTimer *_updateAssetsAndReloadTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008be48
@property(retain, nonatomic) NSTimer *updateAssetsAndReloadTimer; // @synthesize updateAssetsAndReloadTimer=_updateAssetsAndReloadTimer;
@property(retain, nonatomic) PLCloudSharedAlbum *pl_sharedAlbum; // @synthesize pl_sharedAlbum=_pl_sharedAlbum;
@property(retain, nonatomic) TVPSharedPSSubscriberListViewController *subscribersListController; // @synthesize subscribersListController=_subscribersListController;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) TVPModalPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(retain, nonatomic) PHAssetCollection *album; // @synthesize album=_album;
- (id)_indexPathsFromIndexes:(id)arg1;	// IMP=0x000000010008bc18
- (void)_onSelectSubscribersButton:(id)arg1;	// IMP=0x000000010008baa0
- (void)_onSelectDetailsButton:(id)arg1;	// IMP=0x000000010008b9e0
- (void)_sharedAlbumStreamDeletedOrUnsubscribedNotification:(id)arg1;	// IMP=0x000000010008b95c
- (void)_menuAction:(id)arg1;	// IMP=0x000000010008b924
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010008b878
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010008b744
- (id)_allPhotoAssets;	// IMP=0x000000010008b658
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x000000010008b550
- (void)_cancelExistingTimer;	// IMP=0x000000010008b504
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x000000010008b450
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x000000010008b290
- (Class)_collectionViewCellClass;	// IMP=0x000000010008b284
- (Class)_sectionHeaderViewClass;	// IMP=0x000000010008b278
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010008b0dc
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x000000010008af8c
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010008aee0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010008ae54
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010008aba0
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010008a3fc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010008a16c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010008a114
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010008a0d0
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010008a08c
- (void)dealloc;	// IMP=0x0000000100089ec8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100089e20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100089d68
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100089c44
- (void)viewDidLoad;	// IMP=0x0000000100089ba8
- (id)init;	// IMP=0x0000000100089af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

