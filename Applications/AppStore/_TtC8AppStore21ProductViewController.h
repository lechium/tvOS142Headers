//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

@class MISSING_TYPE;

@interface _TtC8AppStore21ProductViewController : _TtC8AppStore29StoreCollectionViewController
{
    MISSING_TYPE *objectGraph;	// 112 = 0x70
    MISSING_TYPE *shelfDataSource;	// 120 = 0x78
    MISSING_TYPE *presenter;	// 128 = 0x80
    MISSING_TYPE *artworkLoader;	// 136 = 0x88
    MISSING_TYPE *appStateController;	// 144 = 0x90
    MISSING_TYPE *scrollViewDelegateCoordinator;	// 152 = 0x98
    MISSING_TYPE *actionRunner;	// 160 = 0xa0
    MISSING_TYPE *lockupDistance;	// 168 = 0xa8
    MISSING_TYPE *footerDistance;	// 176 = 0xb0
    MISSING_TYPE *isUserInterfaceDark;	// 184 = 0xb8
    MISSING_TYPE *effectView;	// 192 = 0xc0
    MISSING_TYPE *footerBackgroundView;	// 200 = 0xc8
    MISSING_TYPE *iconImage;	// 208 = 0xd0
    MISSING_TYPE *iconImageSize;	// 216 = 0xd8
    MISSING_TYPE *iconStyle;	// 232 = 0xe8
    MISSING_TYPE *iconBackgroundColor;	// 240 = 0xf0
    MISSING_TYPE *iconRecipients;	// 248 = 0xf8
    MISSING_TYPE *impressionsCoordinator;	// 256 = 0x100
    MISSING_TYPE *isPurchasedOnProductLoad;	// 264 = 0x108
    MISSING_TYPE *footerFirstIndexPath;	// 0 = 0x0
    MISSING_TYPE *backgroundUberView;	// 2853766136 = 0xaa1903f8
    MISSING_TYPE *desiredContentOffset;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000010013b3b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100143614
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00000001001435e0
- (void)didFailFocusMovement:(id)arg1;	// IMP=0x000000010014351c
- (void)didAskToBuy:(id)arg1;	// IMP=0x0000000100142af8
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x0000000100142618
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100142588
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100140e78
- (double)collectionView:(id)arg1 layout:(id)arg2 multiColumnMarginAt:(long long)arg3;	// IMP=0x0000000100140c90
- (long long)collectionView:(id)arg1 layout:(id)arg2 multiColumnCountAtSection:(long long)arg3;	// IMP=0x0000000100140c0c
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldLayoutManageMultiColumnAt:(long long)arg3;	// IMP=0x0000000100140b78
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100140abc
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldProvideBackgroundAtSection:(long long)arg3;	// IMP=0x0000000100140ab0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001001409c8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001001408f8
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010014074c
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100140524
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100140188
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x000000010013fb44
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010013fb38
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010013f6ac
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x000000010013f604
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010013f5f8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010013f520
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010013efd8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010013ef6c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010013ef00
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010013ee68
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010013d1ec
- (void)viewWillLayoutSubviews;	// IMP=0x000000010013d0b0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010013cf54
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010013cc3c
- (void)viewDidLoad;	// IMP=0x000000010013cc10
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010013c768
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010013c604
- (void)dealloc;	// IMP=0x000000010013b314
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010013b170

@end

