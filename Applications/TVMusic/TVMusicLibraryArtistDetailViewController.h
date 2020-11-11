//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicLibraryAlbumsViewController.h"

@class MPModelLibraryResponse, UIControl, UIFocusGuide, UIView;

@interface TVMusicLibraryArtistDetailViewController : TVMusicLibraryAlbumsViewController
{
    UIControl *_artistButton;	// 8 = 0x8
    UIView *_footerView;	// 16 = 0x10
    MPModelLibraryResponse *_musicVideosResponse;	// 24 = 0x18
    UIFocusGuide *_bottomButtonFocusGuide;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00000001000ab70c
- (void).cxx_destruct;	// IMP=0x00000001000aeb5c
@property(retain, nonatomic) UIFocusGuide *bottomButtonFocusGuide; // @synthesize bottomButtonFocusGuide=_bottomButtonFocusGuide;
@property(retain, nonatomic) MPModelLibraryResponse *musicVideosResponse; // @synthesize musicVideosResponse=_musicVideosResponse;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIControl *artistButton; // @synthesize artistButton=_artistButton;
- (_Bool)_shouldShowHeadingTitles;	// IMP=0x00000001000ae9e4
- (void)_selectedArtist;	// IMP=0x00000001000ae8d0
- (void)_addArtistButton;	// IMP=0x00000001000ade00
- (id)_musicVideosLibraryRequest;	// IMP=0x00000001000adcd8
- (void)_playMusicVideo:(id)arg1;	// IMP=0x00000001000adc34
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000adbe0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000adb94
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000ad8d4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000ad88c
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000ad804
- (_Bool)updateWithModelResponse:(id)arg1;	// IMP=0x00000001000ad724
- (void)configureCell:(id)arg1 forObject:(id)arg2;	// IMP=0x00000001000ad1b4
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000ad088
- (void)playShuffled:(_Bool)arg1;	// IMP=0x00000001000acba0
- (_Bool)didPlayObject:(id)arg1;	// IMP=0x00000001000ac938
- (double)headerVerticalOffset;	// IMP=0x00000001000ac930
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000ac898
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000ac630
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000ac540
- (void)setMpResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ac054
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000abd08
- (void)_updateContentInset;	// IMP=0x00000001000abc18
- (_Bool)showGradientMask;	// IMP=0x00000001000abc10
- (double)cellsTopMargin;	// IMP=0x00000001000abbdc
- (struct CGSize)artworkSize;	// IMP=0x00000001000abbcc
- (struct CGSize)cellSize;	// IMP=0x00000001000abbb8
- (void)viewDidLoad;	// IMP=0x00000001000ab88c
- (id)initWithArtist:(id)arg1;	// IMP=0x00000001000ab740

@end

