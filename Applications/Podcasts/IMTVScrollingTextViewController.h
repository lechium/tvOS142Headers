//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMTVBlurredModalViewController.h"

@class NSAttributedString, NSString, UIColor, UIFont, UILabel, UITextView, _UIRepeatingPressGestureRecognizer;

@interface IMTVScrollingTextViewController : IMTVBlurredModalViewController
{
    _Bool _waitingForScroll;	// 8 = 0x8
    UIColor *_subtitleTextColor;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
    UILabel *_titleView;	// 32 = 0x20
    UILabel *_subtitleView;	// 40 = 0x28
    UITextView *_descriptionView;	// 48 = 0x30
    _UIRepeatingPressGestureRecognizer *_upButtonRecognizer;	// 56 = 0x38
    _UIRepeatingPressGestureRecognizer *_downButtonRecognizer;	// 64 = 0x40
}

+ (id)defaultDescriptionFont;	// IMP=0x00000001000a9d78
+ (id)defaultSubtitleFont;	// IMP=0x00000001000a9d58
+ (id)defaultTiteFont;	// IMP=0x00000001000a9d38
+ (id)defaultTextColor;	// IMP=0x00000001000a9d24
- (void).cxx_destruct;	// IMP=0x00000001000aba2c
@property(nonatomic) _Bool waitingForScroll; // @synthesize waitingForScroll=_waitingForScroll;
@property(retain, nonatomic) _UIRepeatingPressGestureRecognizer *downButtonRecognizer; // @synthesize downButtonRecognizer=_downButtonRecognizer;
@property(retain, nonatomic) _UIRepeatingPressGestureRecognizer *upButtonRecognizer; // @synthesize upButtonRecognizer=_upButtonRecognizer;
@property(retain, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)_scrollInDirection:(long long)arg1;	// IMP=0x00000001000ab564
- (void)_scrollInDirection:(long long)arg1 buttonRecognizer:(id)arg2;	// IMP=0x00000001000ab460
- (void)_scrollDown:(id)arg1;	// IMP=0x00000001000ab44c
- (void)_scrollUp:(id)arg1;	// IMP=0x00000001000ab438
- (void)_setupGestureRecognizers;	// IMP=0x00000001000ab24c
@property(nonatomic) long long descriptionTextAlignment;
@property(retain, nonatomic) UIFont *descriptionFont;
@property(retain, nonatomic) UIFont *subtitleFont;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIColor *subtitleTextColor; // @synthesize subtitleTextColor=_subtitleTextColor;
@property(retain, nonatomic) NSAttributedString *descriptionAttributedText;
@property(retain, nonatomic) NSString *descriptionText;
@property(retain, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) NSString *titleText;
- (id)preferredFocusedView;	// IMP=0x00000001000aa684
- (double)descriptionOriginYForTitleFrame:(struct CGRect)arg1 subtitleFrame:(struct CGRect)arg2;	// IMP=0x00000001000aa544
- (double)subtitleOriginYForTitleFrame:(struct CGRect)arg1;	// IMP=0x00000001000aa4a0
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000a9f04
- (void)viewDidLoad;	// IMP=0x00000001000a9d98
- (id)init;	// IMP=0x00000001000a9bec

@end

