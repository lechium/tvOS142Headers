//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC8AppStore26ProductMediaCollectionViewP33_0E179C36DF45FA959D0DE1D46AEBE85510DataSource : NSObject
{
    MISSING_TYPE *displayedMedia;	// 8 = 0x8
    MISSING_TYPE *pageTraits;	// 16 = 0x10
    MISSING_TYPE *objectGraph;	// 24 = 0x18
    MISSING_TYPE *gridType;	// 32 = 0x20
    MISSING_TYPE *artworkLoader;	// 40 = 0x28
    MISSING_TYPE *scrollViewDelegateCoordinator;	// 48 = 0x30
    MISSING_TYPE *artworkSelectionHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001add88
- (id)init;	// IMP=0x00000001001ade04
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001add08
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001001adc34
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001001adc28
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001001adc10
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001001adb0c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001001ad924
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001ad628
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001ad61c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001001ad220
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001001ad0cc

@end

