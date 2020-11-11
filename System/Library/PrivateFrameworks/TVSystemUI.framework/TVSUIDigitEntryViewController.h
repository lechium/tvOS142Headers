/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TVSUIDigitEntryViewControllerDelegate;
@class NSIndexSet, UITextField, UIView, UISystemInputViewController, NSArray, UILabel, TVSUIDigitGroupView, NSString;

@interface TVSUIDigitEntryViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {

	unsigned long long _numberOfDigits;
	NSIndexSet* _separatorIndexes;
	UITextField* _textField;
	UIView* _systemInputView;
	UISystemInputViewController* _systemInputViewController;
	NSArray* _volatileConstraints;
	BOOL _editable;
	UILabel* _titleLabel;
	UILabel* _promptLabel;
	TVSUIDigitGroupView* _digitGroupView;
	UIView* _accessoryView;
	id<TVSUIDigitEntryViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) TVSUIDigitGroupView * digitGroupView;                                 //@synthesize digitGroupView=_digitGroupView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;                                                //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                        //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic,__weak) id<TVSUIDigitEntryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<TVSUIDigitEntryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVSUIDigitEntryViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEditable;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)setEditable:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_textField;
-(UIView *)accessoryView;
-(void)updateViewConstraints;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setupConstraints;
-(id)preferredFocusEnvironments;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2 ;
-(UILabel *)promptLabel;
-(TVSUIDigitGroupView *)digitGroupView;
-(void)_textDidChange;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(void)_updatedTextLabels;
-(void)_addSystemInputController;
-(void)_removeSystemInputController;
@end
