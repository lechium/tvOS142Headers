//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore17LoadingShieldView : UIView
{
    MISSING_TYPE *showsImmediately;	// 8 = 0x8
    MISSING_TYPE *appliesBackgroundEffect;	// 9 = 0x9
    MISSING_TYPE *isAnimating;	// 10 = 0xa
    MISSING_TYPE *activityIndicator;	// 16 = 0x10
    MISSING_TYPE *longLoadIndicator;	// 24 = 0x18
    MISSING_TYPE *backgroundEffectView;	// 32 = 0x20
    MISSING_TYPE *delayedAnimate;	// 40 = 0x28
    MISSING_TYPE *delayedShowLongLoadIndicator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100068c68
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000100068bdc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100068a1c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100068a04
- (void)layoutSubviews;	// IMP=0x00000001000689d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100068148
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100068128

@end
