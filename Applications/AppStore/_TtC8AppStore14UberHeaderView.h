//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore14UberHeaderView : UIView
{
    MISSING_TYPE *imageContainerView;	// 8 = 0x8
    MISSING_TYPE *imageView;	// 16 = 0x10
    MISSING_TYPE *legibilityGradientView;	// 24 = 0x18
    MISSING_TYPE *titleView;	// 32 = 0x20
    MISSING_TYPE *imageParallaxY;	// 40 = 0x28
    MISSING_TYPE *navigationItem;	// 48 = 0x30
    MISSING_TYPE *sizeChangeObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100177e14
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100178a0c
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010017895c
- (void)layoutSubviews;	// IMP=0x0000000100178930
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100178554
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100178198
- (void)dealloc;	// IMP=0x0000000100177df0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100177cf0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100177cd0

@end
