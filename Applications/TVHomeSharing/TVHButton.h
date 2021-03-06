//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, UIVisualEffectView, _UIFloatingContentView;

@interface TVHButton : UIControl
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
    UIVisualEffectView *_backgroundEffectView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_textLabel;	// 32 = 0x20
}

+ (id)setScreenSaverButton;	// IMP=0x000000010000ddd4
+ (id)playSlideshowButton;	// IMP=0x000000010000dcf0
+ (id)sortButton;	// IMP=0x000000010000dc50
+ (id)shuffleButton;	// IMP=0x000000010000db6c
+ (id)playMusicButton;	// IMP=0x000000010000da88
- (void).cxx_destruct;	// IMP=0x0000000100036f14
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(retain, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (id)_lazyTextLabel;	// IMP=0x0000000100036d28
- (struct CGSize)_textLabelSizeWithMaxSize:(struct CGSize)arg1;	// IMP=0x0000000100036cac
- (struct CGSize)_imageViewSizeWithMaxSize:(struct CGSize)arg1;	// IMP=0x0000000100036c30
- (struct CGRect)_contentFrame;	// IMP=0x0000000100036b84
- (void)_updateViewColors;	// IMP=0x0000000100036ab4
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100036a1c
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0000000100036988
- (unsigned long long)_currentControlState;	// IMP=0x0000000100036940
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003687c
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000367cc
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003671c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000365f8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010003652c
- (_Bool)canBecomeFocused;	// IMP=0x0000000100036520
- (void)layoutSubviews;	// IMP=0x000000010003620c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000360ec
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000360d4
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000360c4
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100035c4c

@end

