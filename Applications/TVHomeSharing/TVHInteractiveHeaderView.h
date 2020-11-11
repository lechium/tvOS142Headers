//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIFocusGuide, UILabel, UIStackView;

@interface TVHInteractiveHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    NSArray *_controls;	// 24 = 0x18
    UIStackView *_controlsStackView;	// 32 = 0x20
    UIFocusGuide *_focusGuide;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100023940
@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(copy, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100023764
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100022b14

@end

