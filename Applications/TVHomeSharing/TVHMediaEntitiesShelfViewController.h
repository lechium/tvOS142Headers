//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHShelfViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSString, TVHCollectionViewDiffableDataSource, TVHMediaEntitiesDataSource, TVHMediaEntitiesShelfViewLayout, UILabel;
@protocol TVHMediaEntitiesShelfViewControllerDelegate;

@interface TVHMediaEntitiesShelfViewController : TVHShelfViewController <UIScrollViewDelegate>
{
    struct {
        unsigned int respondsToTitle:1;
        unsigned int respondsToConfigureLockup:1;
        unsigned int respondsToDidFocusMediaEntity:1;
        unsigned int respondsToDidSelectMediaEntity:1;
        unsigned int respondsToDidLongPressMediaEntity:1;
        unsigned int respondsToDidPlayMediaEntity:1;
    } _delegateFlags;	// 8 = 0x8
    _Bool _showsVibrantHeaderTitle;	// 12 = 0xc
    TVHMediaEntitiesDataSource *_dataSource;	// 16 = 0x10
    id <TVHMediaEntitiesShelfViewControllerDelegate> _delegate;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    Class _lockupClass;	// 40 = 0x28
    NSIndexPath *_indexPathForPreferredFocusedMediaEntity;	// 48 = 0x30
    TVHCollectionViewDiffableDataSource *_diffableDataSource;	// 56 = 0x38
}

+ (id)new;	// IMP=0x000000010008a6c4
- (void).cxx_destruct;	// IMP=0x000000010008bbcc
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) NSIndexPath *indexPathForPreferredFocusedMediaEntity; // @synthesize indexPathForPreferredFocusedMediaEntity=_indexPathForPreferredFocusedMediaEntity;
@property(retain, nonatomic) Class lockupClass; // @synthesize lockupClass=_lockupClass;
@property(nonatomic) _Bool showsVibrantHeaderTitle; // @synthesize showsVibrantHeaderTitle=_showsVibrantHeaderTitle;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TVHMediaEntitiesShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVHMediaEntitiesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)_lockupLayoutForMediaEntity:(id)arg1;	// IMP=0x000000010008ba10
- (id)_title;	// IMP=0x000000010008b984
- (void)_updateTitleLabel;	// IMP=0x000000010008b918
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010008b770
- (void)_delegateDidPlayMediaEntity:(id)arg1;	// IMP=0x000000010008b6e0
- (void)_delegateDidLongPressMediaEntity:(id)arg1;	// IMP=0x000000010008b650
- (void)_delegateDidSelectMediaEntity:(id)arg1;	// IMP=0x000000010008b5c0
- (void)_delegateDidFocusMediaEntity:(id)arg1;	// IMP=0x000000010008b530
- (void)_delegateConfigureLockup:(id)arg1 forMediaEntity:(id)arg2;	// IMP=0x000000010008b494
- (id)_delegateTitle;	// IMP=0x000000010008b420
- (void)collectionView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x000000010008b388
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x000000010008b374
- (void)collectionView:(id)arg1 didPlayItemAtIndexPath:(id)arg2;	// IMP=0x000000010008b2dc
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010008b1d0
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010008b0ec
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010008b0e4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010008b04c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010008af38
- (void)viewDidLoad;	// IMP=0x000000010008aba8
@property(readonly, nonatomic) TVHMediaEntitiesShelfViewLayout *mediaEntitiesShelfViewLayout;
- (id)initWithDataSource:(id)arg1 layout:(id)arg2;	// IMP=0x000000010008a898
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008a810
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010008a788
- (id)init;	// IMP=0x000000010008a700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

