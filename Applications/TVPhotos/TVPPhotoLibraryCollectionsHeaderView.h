//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TVPPhotoLibraryCollectionsHeaderView : UICollectionReusableView
{
    _Bool _titleCenterAligned;	// 8 = 0x8
    _Bool _animateTitleForFocus;	// 9 = 0x9
    NSString *_collectionTitle;	// 16 = 0x10
    UILabel *_collectionTitleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100080760
@property(retain, nonatomic) UILabel *collectionTitleLabel; // @synthesize collectionTitleLabel=_collectionTitleLabel;
@property(nonatomic) _Bool animateTitleForFocus; // @synthesize animateTitleForFocus=_animateTitleForFocus;
@property(nonatomic, getter=isTitleCenterAligned) _Bool titleCenterAligned; // @synthesize titleCenterAligned=_titleCenterAligned;
@property(copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
- (struct CGSize)_getAttributedStringSizeForText:(id)arg1 font:(id)arg2;	// IMP=0x000000010008064c
- (void)layoutSubviews;	// IMP=0x0000000100080484
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000801f8

@end

