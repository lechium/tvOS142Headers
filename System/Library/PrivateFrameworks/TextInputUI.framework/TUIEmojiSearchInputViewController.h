/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIInputViewController.h>
#import <libobjc.A.dylib/TUIEmojiSearchTextFieldDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchSourceDelegate.h>
#import <libobjc.A.dylib/TUIEmojiSearchResultsCollectionViewControllerDelegate.h>
#import <UIKit/UIPredictiveViewController.h>

@protocol TUIEmojiSearchInputViewControllerDelegate, UIPredictiveViewController;
@class NSArray, TUIEmojiSearchSource, TUIEmojiSearchResultsCollectionViewController, TUIEmojiVariantSelectorView, UITapGestureRecognizer, TouchExclusionView, NSTimer, NSString, NSDate, NSLayoutConstraint, TUIEmojiSearchAnalyticsSession, TUIEmojiSearchView, UIViewController;

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController> {

	TUIEmojiSearchSource* _emojiSearchSource;
	TUIEmojiSearchResultsCollectionViewController* _resultsViewController;
	TUIEmojiVariantSelectorView* _variantSelectorView;
	UITapGestureRecognizer* _variantSelectorDismissGesture;
	TouchExclusionView* _variantSelectorDismissOverlayView;
	NSTimer* _resultsUpdateRateLimitTimer;
	NSArray* _rateLimitedResults;
	NSString* _rateLimitedSearchQuery;
	BOOL _canAutocorrectWithCurrentInputMode;
	NSTimer* _waitForAutocorrectionDelayTimer;
	NSString* _exactSearchQuery;
	NSString* _autocorrectedSearchQuery;
	NSDate* _lastActivationDate;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	TUIEmojiSearchAnalyticsSession* _analyticsSession;
	id<TUIEmojiSearchInputViewControllerDelegate> _delegate;
	TUIEmojiSearchView* _emojiSearchView;
	UIViewController*<UIPredictiveViewController> _childPredictionViewController;

}

@property (assign,nonatomic,__weak) id<TUIEmojiSearchInputViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUIEmojiSearchView * emojiSearchView;                                                   //@synthesize emojiSearchView=_emojiSearchView - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> childPredictionViewController;              //@synthesize childPredictionViewController=_childPredictionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(id<TUIEmojiSearchInputViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TUIEmojiSearchInputViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(void)emojiSearchResultsController:(id)arg1 didSelectEmoji:(id)arg2 ;
-(void)emojiSearchResultsController:(id)arg1 didRequestVariantSelectorForEmojiToken:(id)arg2 fromRect:(CGRect)arg3 ;
-(void)emojiSearchSource:(id)arg1 didProduceResults:(id)arg2 forExactQuery:(id)arg3 autocorrectedQuery:(id)arg4 ;
-(void)emojiSearchTextField:(id)arg1 didChangeSearchString:(id)arg2 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg1 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg1 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg1 ;
-(void)emojiSearchTextFieldWillClear:(id)arg1 ;
-(UIEdgeInsets)_keyboardInsets;
-(void)_keyboardInputModeDidChange:(id)arg1 ;
-(void)setChildPredictionViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(void)_displayResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3 ;
-(void)autocorrectionListDidBecomeAvailable:(id)arg1 ;
-(void)_selectedEmojiString:(id)arg1 ;
-(void)_dismissVariantSelector;
-(void)_didRecognizeVariantDismissGesture:(id)arg1 ;
-(void)_variantSelectorValueChanged:(id)arg1 ;
-(TUIEmojiSearchView *)emojiSearchView;
-(UIViewController*<UIPredictiveViewController>)childPredictionViewController;
@end

