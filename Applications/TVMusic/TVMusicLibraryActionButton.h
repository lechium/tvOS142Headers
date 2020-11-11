//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSString, UIGestureRecognizer, UIImage, UIImageView, UILabel, UIVisualEffectView, _UIFloatingContentView;

@interface TVMusicLibraryActionButton : UIButton <UIGestureRecognizerDelegate>
{
    _UIFloatingContentView *_floatingView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    CALayer *_maskImageLayer;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_textLabel;	// 40 = 0x28
    UIGestureRecognizer *_selectRecognizer;	// 48 = 0x30
    UIVisualEffectView *_backgroundEffectView;	// 56 = 0x38
    long long _buttonStyle;	// 64 = 0x40
    _Bool _circular;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    NSString *_text;	// 88 = 0x58
    UIImage *_image;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000a4004
@property(nonatomic) _Bool circular; // @synthesize circular=_circular;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_selectButtonAction:(id)arg1;	// IMP=0x00000001000a3b7c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000a3b74
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a3aa8
- (void)layoutSubviews;	// IMP=0x00000001000a33f4
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000a33d0
- (void)_setButtonShadows;	// IMP=0x00000001000a3348
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000a3168
- (_Bool)canBecomeFocused;	// IMP=0x00000001000a315c
- (struct CGSize)_buttonSize;	// IMP=0x00000001000a3114
@property(readonly, nonatomic) long long buttonStyle;
- (void)_buttonActionTriggered;	// IMP=0x00000001000a30f4
@property(readonly, nonatomic) struct CGSize textLabelSize;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000a305c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a2948
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000a28e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

