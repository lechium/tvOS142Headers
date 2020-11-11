//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class _UIFloatingContentView;
@protocol TVHListViewCellDelegate;

@interface TVHListViewCell : UICollectionViewCell
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _shouldAppearSelected;	// 9 = 0x9
    _UIFloatingContentView *_floatingContentView;	// 16 = 0x10
    id <TVHListViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x00000001000623bc
- (void).cxx_destruct;	// IMP=0x00000001000626a0
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <TVHListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (void)_updateFloatingContentViewControlState;	// IMP=0x000000010006259c
- (void)_setShouldAppearSelected:(_Bool)arg1 andUpdateFloatingContentViewControlState:(_Bool)arg2;	// IMP=0x0000000100062570
- (unsigned long long)_floatingContentViewControlState;	// IMP=0x00000001000624f0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x00000001000622ec
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100062254
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000621bc
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100062114
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100061ff8
- (void)prepareForReuse;	// IMP=0x0000000100061f44
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100061e8c
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100061e88
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000100061dc8
- (_Bool)canBecomeFocused;	// IMP=0x0000000100061da8
- (void)layoutSubviews;	// IMP=0x0000000100061d04
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100061b64

@end

