//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SREditableTextViewDelegate-Protocol.h"

@class AFUserUtterance, NSLayoutConstraint, NSString, SREditableTextView;
@protocol SRCompactEditableUtteranceViewDelegate;

@interface SRCompactEditableUtteranceView : UIView <SREditableTextViewDelegate>
{
    NSLayoutConstraint *_textViewHeightAnchor;	// 8 = 0x8
    NSLayoutConstraint *_textViewTopAnchor;	// 16 = 0x10
    AFUserUtterance *_userUtterance;	// 24 = 0x18
    SREditableTextView *_textView;	// 32 = 0x20
    id <SRCompactEditableUtteranceViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000320bc
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <SRCompactEditableUtteranceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_textView, setter=_setTextView:) SREditableTextView *textView; // @synthesize textView=_textView;
- (void)editableTextViewTextWillBeginCorrecting:(id)arg1;	// IMP=0x0000000100031fe0
- (_Bool)editableTextViewTextShouldPreventCorrection:(id)arg1;	// IMP=0x0000000100031fd8
- (void)editableTextViewTextDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100031efc
- (void)editableTextViewTextDidReceiveReturnKey:(id)arg1;	// IMP=0x0000000100031ef8
- (void)editableTextViewTextDidFinishCorrecting:(id)arg1;	// IMP=0x0000000100031de0
- (void)editableTextViewTextDidChange:(id)arg1;	// IMP=0x0000000100031dd4
- (void)editableTextViewRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031cd8
- (void)_setupConstraints;	// IMP=0x0000000100031a0c
- (void)_setupTextView;	// IMP=0x000000010003181c
- (void)setAuxiliaryView:(id)arg1;	// IMP=0x0000000100031560
- (void)beginEditing;	// IMP=0x0000000100031548
- (void)safeAreaInsetsDidChange;	// IMP=0x00000001000314f8
- (void)layoutSubviews;	// IMP=0x0000000100031404
- (id)initWithFrame:(struct CGRect)arg1 userUtterance:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100031308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

