//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore22BaseCollectionViewCell.h"

@class MISSING_TYPE, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore29SmallLockupCollectionViewCell : _TtC8AppStore22BaseCollectionViewCell
{
    MISSING_TYPE *ordinalLabel;	// 176 = 0xb0
    MISSING_TYPE *titleLabel;	// 184 = 0xb8
    MISSING_TYPE *subtitleLabel;	// 192 = 0xc0
    MISSING_TYPE *priceLabel;	// 200 = 0xc8
    MISSING_TYPE *metrics;	// 208 = 0xd0
    MISSING_TYPE *isShowingSeeAll;	// 704 = 0x2c0
    MISSING_TYPE *artworkView;	// 712 = 0x2c8
    MISSING_TYPE *artworkBorderLayer;	// 720 = 0x2d0
}

- (void).cxx_destruct;	// IMP=0x00000001000a60b0
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityPriceLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityOrdinalLabel;
- (void)prepareForReuse;	// IMP=0x00000001000a5f94
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a5d78
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000001000a5c94
- (void)layoutSubviews;	// IMP=0x00000001000a58e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a5464

@end

