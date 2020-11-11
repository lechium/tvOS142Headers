/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVKit/_TVTextEntryTextFieldDelegate.h>
#import <UIKit/UISystemInputViewControllerDelegate.h>

@protocol TVTextEntryControllerDelegate;
@class _TVTextEntryTextField, UIView, UILabel, UISystemInputViewController, UITextField, NSDictionary, NSString;

@interface TVTextEntryController : UIViewController <_TVTextEntryTextFieldDelegate, UISystemInputViewControllerDelegate> {

	_TVTextEntryTextField* _textField;
	UIView* _topAccessoryView;
	UIView* _bottomAccessoryView;
	BOOL _isTouchEnabled;
	UIView* _preferredFocusedView;
	BOOL _hideAccessoryViews;
	id<TVTextEntryControllerDelegate> _delegate;
	UILabel* _textFieldHeaderLabel;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TVTextEntryControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UILabel * textFieldHeaderLabel;                                       //@synthesize textFieldHeaderLabel=_textFieldHeaderLabel - In the implementation block
@property (nonatomic,retain) UIView * topAccessoryView;                                              //@synthesize topAccessoryView=_topAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * bottomAccessoryView;                                           //@synthesize bottomAccessoryView=_bottomAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL textFieldAllowsFocus; 
@property (nonatomic,retain) NSDictionary * autofillContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<TVTextEntryControllerDelegate>)delegate;
-(void)setDelegate:(id<TVTextEntryControllerDelegate>)arg1 ;
-(NSDictionary *)autofillContext;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITextField *)textField;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setTopAccessoryView:(UIView *)arg1 ;
-(void)setBottomAccessoryView:(UIView *)arg1 ;
-(UIView *)bottomAccessoryView;
-(UIView *)topAccessoryView;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(BOOL)arg2 ;
-(void)systemInputViewControllerDidAcceptRecentInput:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(BOOL)textFieldAllowsFocus;
-(void)setTextFieldAllowsFocus:(BOOL)arg1 ;
-(UILabel *)textFieldHeaderLabel;
-(UISystemInputViewController *)systemInputViewController;
-(void)_insertTextSuggestion:(id)arg1 ;
@end

