//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIFocusGuide, UILabel, UITextField;
@protocol UIFocusEnvironment;

@interface SATVLoginView : UIView
{
    _Bool _touchInputEnabled;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    UIButton *_continueButton;	// 40 = 0x28
    UIButton *_skipButton;	// 48 = 0x30
    UIButton *_useSeparateIDsButton;	// 56 = 0x38
    UIView *_systemInputView;	// 64 = 0x40
    id <UIFocusEnvironment> _preferredFocusedEnvironmentForGridLayoutGuide;	// 72 = 0x48
    NSArray *_keyboardConstraints;	// 80 = 0x50
    UIFocusGuide *_gridFocusGuide;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100076ca4
@property(retain, nonatomic) UIFocusGuide *gridFocusGuide; // @synthesize gridFocusGuide=_gridFocusGuide;
@property(nonatomic) _Bool touchInputEnabled; // @synthesize touchInputEnabled=_touchInputEnabled;
@property(retain, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property(retain, nonatomic) id <UIFocusEnvironment> preferredFocusedEnvironmentForGridLayoutGuide; // @synthesize preferredFocusedEnvironmentForGridLayoutGuide=_preferredFocusedEnvironmentForGridLayoutGuide;
@property(readonly, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(readonly, nonatomic) UIButton *useSeparateIDsButton; // @synthesize useSeparateIDsButton=_useSeparateIDsButton;
@property(readonly, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_setSystemInputView:(id)arg1;	// IMP=0x0000000100076ae4
- (void)_gridAlignFrame:(struct CGRect *)arg1;	// IMP=0x0000000100076aa4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100076950
- (void)layoutSubviews;	// IMP=0x0000000100075f0c
- (void)updateConstraints;	// IMP=0x0000000100075b84
- (id)preferredFocusedViewForGridLayoutGuide;	// IMP=0x0000000100075aec
- (void)setSystemInputView:(id)arg1 touchInputEnabled:(_Bool)arg2;	// IMP=0x00000001000758cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000753dc

@end

