//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIContentUnavailableView.h>

@class MISSING_TYPE;

@interface _TtC6Arcade22ContentUnavailableView : _UIContentUnavailableView
{
    MISSING_TYPE *backgroundEffectView;	// 8 = 0x8
    MISSING_TYPE *appliesBackgroundEffect;	// 16 = 0x10
    MISSING_TYPE *_canBecomeFocused;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x00000001000e390c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e3974
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(_Bool)arg4;	// IMP=0x00000001000e3948
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001000e391c
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000001000e38d0
- (id)_flatTextColor;	// IMP=0x00000001000e382c
- (double)_buttonVerticalSpacing;	// IMP=0x00000001000e3820
- (double)_labelVerticalSpacing;	// IMP=0x00000001000e3814
- (struct CGSize)_buttonSize;	// IMP=0x00000001000e3800
- (double)_buttonAlpha;	// IMP=0x00000001000e37f8
- (double)_labelAlpha;	// IMP=0x00000001000e37f0
- (id)_buttonFont;	// IMP=0x00000001000e3cac
- (id)_titleFont;	// IMP=0x00000001000e37b4
@property(nonatomic) _Bool canBecomeFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e362c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e3604

@end
