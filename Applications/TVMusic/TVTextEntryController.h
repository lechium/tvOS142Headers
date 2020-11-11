//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISystemInputViewControllerDelegate-Protocol.h"

@class NSString, UILabel, UISystemInputViewController, UITextField, UIView, _TVTextEntryTextField;
@protocol TVTextEntryControllerDelegate;

@interface TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate>
{
    _TVTextEntryTextField *_textField;	// 8 = 0x8
    UIView *_topAccessoryView;	// 16 = 0x10
    UIView *_bottomAccessoryView;	// 24 = 0x18
    _Bool _isTouchEnabled;	// 32 = 0x20
    UIView *_preferredFocusedView;	// 40 = 0x28
    _Bool _hideAccessoryViews;	// 48 = 0x30
    id <TVTextEntryControllerDelegate> _delegate;	// 56 = 0x38
    UILabel *_textFieldHeaderLabel;	// 64 = 0x40
    UISystemInputViewController *_systemInputViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000aff34
@property(readonly, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(readonly, nonatomic) UILabel *textFieldHeaderLabel; // @synthesize textFieldHeaderLabel=_textFieldHeaderLabel;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TVTextEntryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool textFieldAllowsFocus;
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000001000afe1c
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;	// IMP=0x00000001000afe0c
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;	// IMP=0x00000001000afd74
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x00000001000afd6c
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000001000afd64
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000af7d8
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000001000af798
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000af69c
- (id)preferredFocusEnvironments;	// IMP=0x00000001000af5cc
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000af56c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000af510
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000af4b4
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000af45c
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000001000af274
- (void)viewDidLoad;	// IMP=0x00000001000af1b8
- (void)loadView;	// IMP=0x00000001000af0e0
- (void)dealloc;	// IMP=0x00000001000aee38
- (id)init;	// IMP=0x00000001000aee24
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000aebdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
