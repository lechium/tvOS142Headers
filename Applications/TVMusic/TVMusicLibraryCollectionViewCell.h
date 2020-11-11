//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MPArtworkCatalog, NSString, UIImage, UIImageView, UILabel;

@interface TVMusicLibraryCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    _Bool _isExplicit;	// 24 = 0x18
    _Bool _greyedOut;	// 25 = 0x19
    long long _imageShape;	// 32 = 0x20
    UIImage *_placeholderImage;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_subTitle;	// 56 = 0x38
    double _maximumImageHeight;	// 64 = 0x40
    MPArtworkCatalog *_artworkCatalog;	// 72 = 0x48
    UIImageView *_imageView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010006d534
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(nonatomic, getter=isGreyedOut) _Bool greyedOut; // @synthesize greyedOut=_greyedOut;
@property(nonatomic) double maximumImageHeight; // @synthesize maximumImageHeight=_maximumImageHeight;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long imageShape; // @synthesize imageShape=_imageShape;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;	// IMP=0x000000010006d378
- (void)_updateColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010006d36c
- (void)_setLabelTextColorsForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010006cfcc
- (void)_setLabelTextColors;	// IMP=0x000000010006cf74
- (void)_setSizeForLabel:(id)arg1;	// IMP=0x000000010006ced0
- (struct CGSize)_currentImageViewSize;	// IMP=0x000000010006ce2c
- (void)_setLabelPositionsChangeY:(_Bool)arg1;	// IMP=0x000000010006cccc
- (struct CGRect)_frameForImageView:(id)arg1;	// IMP=0x000000010006cb2c
- (void)_adjustFrameForImageView:(id)arg1;	// IMP=0x000000010006cab4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006c9b0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010006c818
- (id)_addSubheadLabelWithFont:(id)arg1 textColor:(id)arg2;	// IMP=0x000000010006c6ec
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010006c684
- (_Bool)canBecomeFocused;	// IMP=0x000000010006c67c
- (void)layoutSubviews;	// IMP=0x000000010006c628
- (void)prepareForReuse;	// IMP=0x000000010006c510
- (void)_updateLayeredImage;	// IMP=0x000000010006c31c
- (void)setArtworkCatalog:(id)arg1 withFittingSize:(struct CGSize)arg2;	// IMP=0x000000010006bb80
@property(readonly, nonatomic) struct CGRect visibleFrame;
- (id)_decoratedTitleString;	// IMP=0x000000010006ba00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006b68c

@end
