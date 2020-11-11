/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <TVSystemUI/TVSUITextAlertButtonDelegate.h>

@class NSArray, UIImage, NSString, TVSUITextAlertButton, UILayoutGuide, UILabel, UITextView, UICollectionView, UIStackView, NSMutableArray, UITapGestureRecognizer, NSLayoutConstraint, UIImageView;

@interface TVSUITextAlertController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVSUITextAlertButtonDelegate> {

	NSArray* _footers;
	BOOL _shouldDismissAutomatically;
	BOOL _shouldCenterAlignShortText;
	BOOL _menuGestureEnabled;
	BOOL _hasLongText;
	UIImage* _headerImage;
	NSString* _text;
	TVSUITextAlertButton* _preferredButton;
	UILayoutGuide* _contentGuide;
	UILabel* _titleLabel;
	UITextView* _textView;
	UICollectionView* _buttonCollectionView;
	UIStackView* _footerStackView;
	TVSUITextAlertButton* _initialFocusButton;
	NSMutableArray* _buttonSections;
	UITapGestureRecognizer* _menuRecognizer;
	double _maxButtonWidth;
	NSLayoutConstraint* _contentGuideTopGreaterThanConstraint;
	NSLayoutConstraint* _contentGuideTopEqualConstraint;
	NSLayoutConstraint* _contentGuideCenterYConstraint;
	NSLayoutConstraint* _contentGuideBottomConstraint;
	NSLayoutConstraint* _headerImageHeightConstraint;
	NSLayoutConstraint* _titleLabelToHeaderImageConstraint;
	NSLayoutConstraint* _textViewHeightConstraint;
	NSLayoutConstraint* _buttonCollectionViewTopConstraint;
	NSLayoutConstraint* _buttonCollectionViewWidthConstraint;
	NSLayoutConstraint* _buttonCollectionViewHeightConstraint;
	UIImageView* _headerImageView;

}

@property (nonatomic,readonly) UILayoutGuide * contentGuide;                                           //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UICollectionView * buttonCollectionView;                                //@synthesize buttonCollectionView=_buttonCollectionView - In the implementation block
@property (nonatomic,readonly) UIStackView * footerStackView;                                          //@synthesize footerStackView=_footerStackView - In the implementation block
@property (nonatomic,readonly) BOOL menuGestureEnabled;                                                //@synthesize menuGestureEnabled=_menuGestureEnabled - In the implementation block
@property (nonatomic,readonly) TVSUITextAlertButton * initialFocusButton;                              //@synthesize initialFocusButton=_initialFocusButton - In the implementation block
@property (nonatomic,readonly) NSMutableArray * buttonSections;                                        //@synthesize buttonSections=_buttonSections - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * menuRecognizer;                                //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,readonly) BOOL hasLongText;                                                       //@synthesize hasLongText=_hasLongText - In the implementation block
@property (nonatomic,readonly) double maxButtonWidth;                                                  //@synthesize maxButtonWidth=_maxButtonWidth - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentGuideTopGreaterThanConstraint;              //@synthesize contentGuideTopGreaterThanConstraint=_contentGuideTopGreaterThanConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentGuideTopEqualConstraint;                    //@synthesize contentGuideTopEqualConstraint=_contentGuideTopEqualConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentGuideCenterYConstraint;                     //@synthesize contentGuideCenterYConstraint=_contentGuideCenterYConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentGuideBottomConstraint;                      //@synthesize contentGuideBottomConstraint=_contentGuideBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * headerImageHeightConstraint;                       //@synthesize headerImageHeightConstraint=_headerImageHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * titleLabelToHeaderImageConstraint;                 //@synthesize titleLabelToHeaderImageConstraint=_titleLabelToHeaderImageConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * textViewHeightConstraint;                          //@synthesize textViewHeightConstraint=_textViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * buttonCollectionViewTopConstraint;                 //@synthesize buttonCollectionViewTopConstraint=_buttonCollectionViewTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * buttonCollectionViewWidthConstraint;               //@synthesize buttonCollectionViewWidthConstraint=_buttonCollectionViewWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * buttonCollectionViewHeightConstraint;              //@synthesize buttonCollectionViewHeightConstraint=_buttonCollectionViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * headerImageView;                                          //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                                                    //@synthesize headerImage=_headerImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * text;                                                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissAutomatically;                                          //@synthesize shouldDismissAutomatically=_shouldDismissAutomatically - In the implementation block
@property (nonatomic,retain) TVSUITextAlertButton * preferredButton;                                   //@synthesize preferredButton=_preferredButton - In the implementation block
@property (assign,nonatomic) BOOL shouldCenterAlignShortText;                                          //@synthesize shouldCenterAlignShortText=_shouldCenterAlignShortText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonBackgroundColor;
+(id)_destructiveFocusedButtonBackgroundColor;
+(id)_destructiveButtonBackgroundColor;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)viewDidLoad;
-(UITextView *)textView;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)_setupConstraints;
-(id)preferredFocusEnvironments;
-(UIImage *)headerImage;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImageView *)headerImageView;
-(void)removeAllButtons;
-(UILayoutGuide *)contentGuide;
-(id)initWithTitle:(id)arg1 text:(id)arg2 footers:(id)arg3 ;
-(void)setShouldCenterAlignShortText:(BOOL)arg1 ;
-(void)setShouldDismissAutomatically:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(void)_didSelectButton:(id)arg1 ;
-(void)_updateForLongText;
-(void)_handleMenuButton;
-(void)_configureTextViews;
-(double)_buttonAreaLongTextHeight;
-(void)addButtonWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)shouldDismissAutomatically;
-(TVSUITextAlertButton *)initialFocusButton;
-(BOOL)hasLongText;
-(NSMutableArray *)buttonSections;
-(BOOL)_hasButtons;
-(BOOL)_hasFooters;
-(long long)_textAlignmentForText:(id)arg1 ;
-(void)textAlertButtonDidChange:(id)arg1 ;
-(void)textAlertButtonDidSelect:(id)arg1 ;
-(void)addSectionWithTitle:(id)arg1 ;
-(TVSUITextAlertButton *)preferredButton;
-(void)setPreferredButton:(TVSUITextAlertButton *)arg1 ;
-(BOOL)shouldCenterAlignShortText;
-(UICollectionView *)buttonCollectionView;
-(UIStackView *)footerStackView;
-(BOOL)menuGestureEnabled;
-(double)maxButtonWidth;
-(NSLayoutConstraint *)contentGuideTopGreaterThanConstraint;
-(NSLayoutConstraint *)contentGuideTopEqualConstraint;
-(NSLayoutConstraint *)contentGuideCenterYConstraint;
-(NSLayoutConstraint *)contentGuideBottomConstraint;
-(NSLayoutConstraint *)headerImageHeightConstraint;
-(NSLayoutConstraint *)titleLabelToHeaderImageConstraint;
-(NSLayoutConstraint *)textViewHeightConstraint;
-(NSLayoutConstraint *)buttonCollectionViewTopConstraint;
-(NSLayoutConstraint *)buttonCollectionViewWidthConstraint;
-(NSLayoutConstraint *)buttonCollectionViewHeightConstraint;
@end

