//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore29StoreCollectionViewController.h"

@class MISSING_TYPE;

@interface _TtC8AppStore30UberedCollectionViewController : _TtC8AppStore29StoreCollectionViewController
{
    MISSING_TYPE *artworkLoader;	// 112 = 0x70
    MISSING_TYPE *uber;	// 120 = 0x78
    MISSING_TYPE *statusBarStyle;	// 128 = 0x80
    MISSING_TYPE *contentInsetsInvalid;	// 136 = 0x88
    MISSING_TYPE *uberHeaderView;	// 144 = 0x90
    MISSING_TYPE *uberScrollCoordinator;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000010019a50c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010019a45c
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x000000010019a428
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010019a3a4
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000010019a2fc
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000010019a090
- (void)viewDidLayoutSubviews;	// IMP=0x000000010019a064
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100199e2c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100199c5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100199c4c
- (void)viewDidLoad;	// IMP=0x0000000100199b8c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100199b34

@end

