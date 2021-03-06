//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SATVChooseOptionViewDataSource-Protocol.h"
#import "SATVChooseOptionViewDelegate-Protocol.h"

@class ACAccount, NSString, SATVChooseOptionView, UIImageView;

@interface SATVPasswordSettingPromptViewController : UIViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    SATVChooseOptionView *_chooseOptionView;	// 24 = 0x18
    UIImageView *_glyphImageView;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000010004a9c4
- (void).cxx_destruct;	// IMP=0x000000010004b7d8
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) SATVChooseOptionView *chooseOptionView; // @synthesize chooseOptionView=_chooseOptionView;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_handlePasswordSetting:(unsigned long long)arg1;	// IMP=0x000000010004b710
- (void)didSelectThirdOptionForView:(id)arg1;	// IMP=0x000000010004b68c
- (void)didSelectSecondOptionForView:(id)arg1;	// IMP=0x000000010004b608
- (void)didSelectFirstOptionForView:(id)arg1;	// IMP=0x000000010004b584
- (id)thirdOptionButtonFooterTextForView:(id)arg1;	// IMP=0x000000010004b578
- (id)secondOptionButtonFooterTextForView:(id)arg1;	// IMP=0x000000010004b56c
- (id)firstOptionButtonFooterTextForView:(id)arg1;	// IMP=0x000000010004b560
- (id)thirdOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004b4e0
- (id)secondOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004b460
- (id)firstOptionButtonTextForView:(id)arg1;	// IMP=0x000000010004b3e0
- (id)subtitleTextForView:(id)arg1;	// IMP=0x000000010004b2a8
- (id)titleTextForView:(id)arg1;	// IMP=0x000000010004b228
- (id)passwordSettingFooterNote;	// IMP=0x000000010004b11c
- (void)setImageViewFrameFromChooseOptionViewFrame:(struct CGRect)arg1 withinBounds:(struct CGRect)arg2 layoutIsRightToLeft:(_Bool)arg3;	// IMP=0x000000010004b00c
- (struct CGRect)chooseOptionViewFrameForLayoutDirection:(_Bool)arg1 withinBounds:(struct CGRect)arg2;	// IMP=0x000000010004af20
- (void)viewDidLayoutSubviews;	// IMP=0x000000010004adc8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004ad54
- (void)viewDidLoad;	// IMP=0x000000010004ab18
- (id)initWithAccount:(id)arg1;	// IMP=0x000000010004aa90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004aa58
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004aa20
- (id)init;	// IMP=0x000000010004a9e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

