/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView, UIImageView, UIImage, UISearchBar, NSString;

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement> {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	UIImageView* _defaultLeftView;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	struct {
		unsigned searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1;
		unsigned alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory : 1;
	}  _searchBarTextFieldFlags;
	UIImage* _magnifyingGlassImage;
	BOOL __preventSelectionViewActivation;
	UISearchBar* _searchBar;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;                                                                            //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
@property (assign,setter=_setIgnoresDynamicType:,nonatomic) BOOL _ignoresDynamicType; 
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;                                                                                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:,nonatomic) BOOL _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)textInputTraits;
-(BOOL)resignFirstResponder;
-(void)insertTextSuggestion:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(UISearchBar *)_searchBar;
-(BOOL)canResignFirstResponder;
-(void)tintColorDidChange;
-(BOOL)canBecomeFocused;
-(id)_placeholderColor;
-(long long)_blurEffectStyle;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL*)arg3 ;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(BOOL)_supportsDynamicType;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(void)_defaultInsertTextSuggestion:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)_updateLeftViewForMagnifyingGlassImage;
-(BOOL)_alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
-(BOOL)_isEditingOrHasContent;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(double)_maximumAlphaForLeadingView;
-(BOOL)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1 ;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(double)_clearButtonMarginX;
-(CGSize)_clearButtonSize;
-(BOOL)_becomeFirstResponderWhenPossible;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(CGRect)_suffixFrame;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(void)_highlightedDidChangeAnimated:(BOOL)arg1 ;
-(void)__highlightedDidChangeAnimated:(BOOL)arg1 ;
-(void)_applyHighlightedAnimated:(BOOL)arg1 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(void)_removeEffectsBackgroundViews;
-(BOOL)_preventSelectionViewActivation;
-(void)_activateSelectionView;
-(void)_updateAlphaForMagnifyingGlass;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_becomeFirstResponder;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 ;
-(BOOL)_delegateShouldBeginEditing;
-(BOOL)_delegateShouldEndEditing;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(BOOL)_delegateShouldClear;
-(void)_didSetFont:(id)arg1 ;
-(void)_updateDefaultLeftViewForFont:(id)arg1 ;
-(BOOL)_ignoresDynamicType;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)_setSearchBar:(id)arg1 ;
-(void)_setMagnifyingGlassImage:(id)arg1 ;
-(void)_setIgnoresDynamicType:(BOOL)arg1 ;
-(BOOL)_hasCustomClearButtonImage;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(BOOL)_displaysHelpMessageLabel;
-(void)_updateHelpMessageOverrideWithMessage:(id)arg1 ;
-(long long)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(BOOL)_textShouldFillFieldEditorHeight;
-(BOOL)_shouldOverrideEditingFont;
-(void)_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:(BOOL)arg1 ;
@end

