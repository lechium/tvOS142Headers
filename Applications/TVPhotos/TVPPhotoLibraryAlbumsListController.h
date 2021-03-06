//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PXPhotoLibraryUIChangeObserver-Protocol.h"
#import "TVPCollectionViewCachingManagerDataSource-Protocol.h"
#import "TVPCollectionViewDelegate-Protocol.h"
#import "TVPCollectionViewDelegateFlowLayout-Protocol.h"
#import "TVPPhotoLibraryTabbedViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, PHCollectionList, TVPCollectionView, TVPCollectionViewCachingManager, TVPFetchManager, UIView;

@interface TVPPhotoLibraryAlbumsListController : UIViewController <UICollectionViewDataSource, TVPCollectionViewDelegate, PXPhotoLibraryUIChangeObserver, TVPCollectionViewCachingManagerDataSource, TVPCollectionViewDelegateFlowLayout, TVPPhotoLibraryTabbedViewController>
{
    _Bool _needsReload;	// 8 = 0x8
    TVPCollectionView *_albumsListView;	// 16 = 0x10
    UIView *_loadingView;	// 24 = 0x18
    TVPFetchManager *_fetchManager;	// 32 = 0x20
    TVPCollectionViewCachingManager *_cachingManager;	// 40 = 0x28
    NSArray *_albumAssetCollections;	// 48 = 0x30
    PHCollectionList *_defaultCollectionList;	// 56 = 0x38
    NSMutableDictionary *__subCollectionKeyAssetsFetchResults;	// 64 = 0x40
    NSMutableDictionary *__folderCountFetchResults;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010006fdf0
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(readonly, nonatomic) NSMutableDictionary *_folderCountFetchResults; // @synthesize _folderCountFetchResults=__folderCountFetchResults;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionKeyAssetsFetchResults; // @synthesize _subCollectionKeyAssetsFetchResults=__subCollectionKeyAssetsFetchResults;
@property(retain, nonatomic) PHCollectionList *defaultCollectionList; // @synthesize defaultCollectionList=_defaultCollectionList;
@property(copy, nonatomic) NSArray *albumAssetCollections; // @synthesize albumAssetCollections=_albumAssetCollections;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVPCollectionView *albumsListView; // @synthesize albumsListView=_albumsListView;
- (id)ppt_albumListCollectionView;	// IMP=0x000000010006fcd4
@property(readonly, nonatomic) long long tabMode;
- (id)_albumAtIndexPath:(id)arg1;	// IMP=0x000000010006fc14
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x000000010006fa90
- (void)_dismissLoadingView;	// IMP=0x000000010006f9fc
- (void)_displayLoadingView;	// IMP=0x000000010006f900
- (long long)_assetCountForCollection:(id)arg1;	// IMP=0x000000010006f86c
- (void)_fetchAlbumCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006f314
- (id)_overlayImageForAlbum:(id)arg1;	// IMP=0x000000010006f248
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x000000010006f088
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010006edd4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010006ed04
- (void)_loadFolderCell:(id)arg1 withFolder:(id)arg2;	// IMP=0x000000010006e5c8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e028
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010006e010
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010006dfcc
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010006df88
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x000000010006d264
- (unsigned long long)_indexOfFavouriteMemoryAlbumInArray:(id)arg1;	// IMP=0x000000010006d114
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006d058
- (id)preferredFocusEnvironments;	// IMP=0x000000010006cfd0
- (void)dealloc;	// IMP=0x000000010006cf58
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006cea8
- (void)viewDidLoad;	// IMP=0x000000010006c79c
- (id)init;	// IMP=0x000000010006c78c
- (id)initWithCollectionList:(id)arg1;	// IMP=0x000000010006c630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

