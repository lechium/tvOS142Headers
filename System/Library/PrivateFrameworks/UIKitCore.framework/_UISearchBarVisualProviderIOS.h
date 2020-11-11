/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarVisualProviding.h>

@protocol _UISearchBarVisualProvidingDelegate_UINavigationBarAugmentedTitleViewUITextInputTraits_Private, _UINavigationBarTitleViewDataSource;
@class NSArray, UISearchBarTextField, UITextField, UISearchBarBackground, _UIBackdropView, UIVisualEffectView, UIButton, UIBarButtonItem, UINavigationButton, UILabel, UIImageView, UISegmentedControl, UIView, _UISearchBarScopeBarBackground, NSString, UIColor, UIImage, _UINavigationBarTitleViewOverlayRects, UINavigationItem, UIDictationSearchButton, _UISearchBarSearchContainerView, _UISearchBarPromptContainerView, _UISearchBarScopeContainerView, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarTransitionerBase;

@interface _UISearchBarVisualProviderIOS : NSObject <_UISearchBarVisualProviding> {

	UIDictationSearchButton* _dictationButton;
	_UISearchBarSearchContainerView* _searchFieldContainerView;
	_UISearchBarPromptContainerView* _promptContainerView;
	_UISearchBarScopeContainerView* _scopeBarContainerView;
	UIEdgeInsets _effectiveContentInset;
	unsigned long long _overriddenContentInsetEdges;
	_UISearchBarAppearanceStorage* _appearanceStorage;
	UIBarButtonItem* _animatedAppearanceBarButtonItem;
	UINavigationItem* _searchNavigationItem;
	struct {
		unsigned barStyle : 3;
		unsigned searchBarStyle : 3;
		unsigned barTranslucence : 3;
		unsigned searchFieldLeftViewMode : 2;
		unsigned centerPlaceholder : 1;
		unsigned disabled : 1;
		unsigned reliesOnNavigationBarBackdrop : 1;
		unsigned hideBackground : 1;
		unsigned backgroundLayoutNeedsUpdate : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsCancelButton : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned cancelButtonWantsLetterpress : 1;
		unsigned showsDeleteButton : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned showsBookmarkButton : 1;
		unsigned isPlacedInNavigationBar : 1;
		unsigned isPlacedInToolbar : 1;
		unsigned isHostedByNavigationBar : 1;
		unsigned showsScopeBar : 1;
		unsigned showDictationButton : 1;
		unsigned allowedToShowDictationButton : 1;
		unsigned dictationButtonSetupComplete : 1;
	}  _searchBarVisualProviderFlags;
	UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private> _delegate;
	UISearchBarTextField* _searchField;
	UISearchBarBackground* _searchBarBackground;
	_UIBackdropView* _backdrop;
	UIVisualEffectView* _backdropVisualEffectView;
	UIView* _searchBarClippingView;
	UIButton* _cancelButton;
	UIBarButtonItem* _cancelBarButtonItem;
	NSString* _cancelButtonText;
	UINavigationButton* _leftButton;
	UILabel* _promptLabel;
	UIImageView* _separator;
	UISegmentedControl* _scopeBar;
	_UISearchBarScopeBarBackground* _scopeBarBackgroundView;
	NSArray* _scopeTitles;
	long long _selectedScope;
	unsigned long long _backdropStyle;
	UIColor* _barTintColor;
	long long _barPosition;
	unsigned long long _scopeBarPosition;
	double _tableViewIndexWidth;
	long long _navBarTitleViewLocation;
	_UINavigationBarTitleViewOverlayRects* _navBarTitleViewOverlayRects;
	id<_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;
	long long _previousLayoutState;
	long long _layoutState;
	double _backgroundExtension;
	_UISearchBarLayout* _currentLayout;
	_UISearchBarLayout* _prospectiveLayout;
	_UISearchBarTransitionerBase* _transitioner;
	UIEdgeInsets _contentInsetPrivateMinOrOverride;

}

@property (nonatomic,retain) _UISearchBarLayout * currentLayout;                                                                                                  //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain) _UISearchBarLayout * prospectiveLayout;                                                                                              //@synthesize prospectiveLayout=_prospectiveLayout - In the implementation block
@property (nonatomic,retain) _UISearchBarTransitionerBase * transitioner;                                                                                         //@synthesize transitioner=_transitioner - In the implementation block
@property (nonatomic,readonly) long long previousLayoutState;                                                                                                     //@synthesize previousLayoutState=_previousLayoutState - In the implementation block
@property (nonatomic,readonly) long long layoutState;                                                                                                             //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,nonatomic) double backgroundExtension;                                                                                                          //@synthesize backgroundExtension=_backgroundExtension - In the implementation block
@property (assign,nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge; 
@property (nonatomic,copy,readonly) NSArray * runtimeOnlyViews; 
@property (assign,nonatomic) UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBarTextField * searchField;                                                                                                  //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) UITextField * searchFieldIfExists; 
@property (nonatomic,retain) UISearchBarBackground * searchBarBackground;                                                                                         //@synthesize searchBarBackground=_searchBarBackground - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdrop;                                                                                                          //@synthesize backdrop=_backdrop - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backdropVisualEffectView;                                                                                       //@synthesize backdropVisualEffectView=_backdropVisualEffectView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem;                                                                                             //@synthesize cancelBarButtonItem=_cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) UINavigationButton * leftButton;                                                                                                   //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                                                                                                               //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIImageView * separator;                                                                                                             //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UISegmentedControl * scopeBar;                                                                                                       //@synthesize scopeBar=_scopeBar - In the implementation block
@property (nonatomic,readonly) UIView * scopeBarContainerView;                                                                                                    //@synthesize scopeBarContainerView=_scopeBarContainerView - In the implementation block
@property (nonatomic,retain) _UISearchBarScopeBarBackground * scopeBarBackgroundView;                                                                             //@synthesize scopeBarBackgroundView=_scopeBarBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * searchBarClippingView;                                                                                                    //@synthesize searchBarClippingView=_searchBarClippingView - In the implementation block
@property (nonatomic,readonly) UIImageView * shadowView; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSArray * scopeTitles;                                                                                                                 //@synthesize scopeTitles=_scopeTitles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonText;                                                                                                           //@synthesize cancelButtonText=_cancelButtonText - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (assign,nonatomic) long long barTranslucence; 
@property (assign,nonatomic) unsigned long long backdropStyle;                                                                                                    //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                                                                                                              //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) long long barPosition;                                                                                                               //@synthesize barPosition=_barPosition - In the implementation block
@property (assign,nonatomic) unsigned long long scopeBarPosition;                                                                                                 //@synthesize scopeBarPosition=_scopeBarPosition - In the implementation block
@property (assign,nonatomic) long long searchFieldLeftViewMode; 
@property (assign,nonatomic) BOOL centerPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL reliesOnNavigationBarBackdrop; 
@property (assign,nonatomic) BOOL drawsBackground; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL autoDisableCancelButton; 
@property (assign,nonatomic) BOOL cancelButtonWantsLetterpress; 
@property (assign,nonatomic) BOOL showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) BOOL searchResultsButtonSelected; 
@property (assign,nonatomic) BOOL showsBookmarkButton; 
@property (assign,nonatomic) BOOL showsScopeBar; 
@property (nonatomic,readonly) BOOL scopeBarIsVisible; 
@property (assign,nonatomic) long long selectedScope;                                                                                                             //@synthesize selectedScope=_selectedScope - In the implementation block
@property (assign,getter=isPlacedInNavigationBar,nonatomic) BOOL placedInNavigationBar; 
@property (assign,getter=isPlacedInToolbar,nonatomic) BOOL placedInToolbar; 
@property (assign,getter=isInNavigationPalette,nonatomic) BOOL inNavigationPalette; 
@property (assign,getter=isHostedByNavigationBar,nonatomic) BOOL hostedByNavigationBar; 
@property (nonatomic,retain) UIImage * separatorImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (assign,nonatomic) UIEdgeInsets minimumContentInset;                                                                                                    //@synthesize contentInsetPrivateMinOrOverride=_contentInsetPrivateMinOrOverride - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets effectiveContentInset;                                                                                                //@synthesize effectiveContentInset=_effectiveContentInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets scopeBarInsets; 
@property (nonatomic,readonly) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset; 
@property (assign,nonatomic) double tableViewIndexWidth;                                                                                                          //@synthesize tableViewIndexWidth=_tableViewIndexWidth - In the implementation block
@property (nonatomic,readonly) double searchFieldHeight; 
@property (nonatomic,readonly) double scopeBarHeight; 
@property (nonatomic,readonly) CGSize intrinsicContentSize; 
@property (assign,nonatomic,__weak) id<_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource;                                                            //@synthesize navBarTitleViewDataSource=_navBarTitleViewDataSource - In the implementation block
@property (assign,nonatomic) long long navBarTitleViewLocation;                                                                                                   //@synthesize navBarTitleViewLocation=_navBarTitleViewLocation - In the implementation block
@property (nonatomic,retain) _UINavigationBarTitleViewOverlayRects * navBarTitleViewOverlayRects;                                                                 //@synthesize navBarTitleViewOverlayRects=_navBarTitleViewOverlayRects - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy; 
@property (assign,nonatomic) BOOL drawsBackgroundInPalette; 
@property (nonatomic,readonly) BOOL backgroundLayoutNeedsUpdate; 
@property (assign,nonatomic) BOOL allowsInlineScopeBar; 
@property (nonatomic,readonly) UIBarButtonItem * animatedAppearanceBarButtonItem;                                                                                 //@synthesize animatedAppearanceBarButtonItem=_animatedAppearanceBarButtonItem - In the implementation block
@property (nonatomic,readonly) UINavigationItem * searchNavigationItem; 
@property (assign,nonatomic,__weak) id searchDisplayController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private>)delegate;
-(void)setDelegate:(UIView*<_UISearchBarVisualProvidingDelegate>*<_UINavigationBarAugmentedTitleView>*<UITextInputTraits_Private>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 ;
-(_UISearchBarLayout *)currentLayout;
-(void)teardown;
-(void)prepare;
-(UIImageView *)separator;
-(void)setSeparator:(UIImageView *)arg1 ;
-(long long)layoutState;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)drawsBackground;
-(void)invalidateLayout;
-(CGSize)intrinsicContentSize;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)layoutSubviews;
-(BOOL)isLegacy;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(long long)barStyle;
-(UISearchBarTextField *)searchField;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(UILabel *)promptLabel;
-(void)setCurrentLayout:(_UISearchBarLayout *)arg1 ;
-(BOOL)isAtTop;
-(double)defaultHeightForOrientation:(long long)arg1 ;
-(UINavigationButton *)leftButton;
-(void)_setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(BOOL)showsScopeBar;
-(void)setUpScopeBar;
-(unsigned long long)backdropStyle;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(void)setShowsScopeBar:(BOOL)arg1 ;
-(UIImageView *)shadowView;
-(void)setBackdrop:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdrop;
-(BOOL)isTranslucent;
-(long long)barPosition;
-(void)_setBarStyle:(long long)arg1 ;
-(UIColor *)barTintColor;
-(double)backgroundExtension;
-(void)setBackgroundExtension:(double)arg1 ;
-(void)resetLayoutState;
-(void)setBarPosition:(long long)arg1 ;
-(void)setClippingViewActive:(BOOL)arg1 ;
-(void)setClippingViewBounds:(CGRect)arg1 ;
-(UIView *)searchBarClippingView;
-(void)setDelegateSearchFieldFrameManipulationBlock:(/*^block*/id)arg1 ;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(/*^block*/id)arg1 ;
-(void)setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1 ;
-(double)additionalPaddingForCancelButtonAtLeadingEdge;
-(void)_setBarTintColor:(id)arg1 ;
-(UISearchBarBackground *)searchBarBackground;
-(id)effectiveBarTintColor;
-(void)_setShowsScopeBar:(BOOL)arg1 ;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)_setShowsBookmarkButton:(BOOL)arg1 ;
-(void)_setShowsSearchResultsButton:(BOOL)arg1 ;
-(void)_setSearchResultsButtonSelected:(BOOL)arg1 ;
-(void)setAllowsInlineScopeBar:(BOOL)arg1 ;
-(void)_setBarTranslucence:(long long)arg1 ;
-(void)_setHideBackground:(BOOL)arg1 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)updateSearchBarOpacity;
-(BOOL)centerPlaceholder;
-(void)setUpPromptLabel;
-(void)setUpCancelButtonWithAppearance:(id)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(NSArray *)runtimeOnlyViews;
-(BOOL)showsBookmarkButton;
-(BOOL)showsSearchResultsButton;
-(BOOL)isSearchResultsButtonSelected;
-(BOOL)autoDisableCancelButton;
-(BOOL)allowsInlineScopeBar;
-(long long)barTranslucence;
-(BOOL)usesEmbeddedAppearance;
-(UIImage *)scopeBarBackgroundImage;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(unsigned long long)searchBarStyle;
-(void)setSearchDisplayController:(id)arg1 ;
-(id)searchDisplayController;
-(NSString *)cancelButtonText;
-(void)updateForDynamicType;
-(UISegmentedControl *)scopeBar;
-(BOOL)isHostedByNavigationBar;
-(void)setInNavigationPalette:(BOOL)arg1 ;
-(void)setPlacedInNavigationBar:(BOOL)arg1 ;
-(void)setPlacedInToolbar:(BOOL)arg1 ;
-(BOOL)isPlacedInNavigationBar;
-(BOOL)isPlacedInToolbar;
-(BOOL)isInNavigationPalette;
-(void)updateForDrawsBackgroundInPalette;
-(void)updateScopeBarBackground;
-(void)setBarTranslucence:(long long)arg1 ;
-(void)setHelperPlaceholderHidden:(BOOL)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg1 ;
-(void)setSearchResultsButtonSelected:(BOOL)arg1 ;
-(void)setShowsBookmarkButton:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDisableDictationButton:(BOOL)arg1 ;
-(BOOL)wantsDictationButton;
-(void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg1 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg1 ;
-(BOOL)drawsBackgroundInPalette;
-(void)setReliesOnNavigationBarBackdrop:(BOOL)arg1 ;
-(BOOL)reliesOnNavigationBarBackdrop;
-(void)setHostedByNavigationBar:(BOOL)arg1 ;
-(BOOL)shouldCombineLandscapeBarsForOrientation:(long long)arg1 ;
-(BOOL)wouldCombineLandscapeBarsForSize:(CGSize)arg1 ;
-(void)updatePlaceholderColor;
-(void)updateRightView;
-(void)updateMagnifyingGlassView;
-(void)setNavBarTitleViewDataSource:(id<_UINavigationBarTitleViewDataSource>)arg1 ;
-(void)setNavBarTitleViewLocation:(long long)arg1 ;
-(double)navigationBarContentHeight;
-(void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)driveTransitionToSearchLayoutState:(long long)arg1 ;
-(void)prepareForTransitionToSearchLayoutState:(long long)arg1 ;
-(void)animateTransitionToSearchLayoutState:(long long)arg1 ;
-(void)completeTransitionToSearchLayoutState:(long long)arg1 ;
-(void)cancelTransitionToSearchLayoutState:(long long)arg1 ;
-(void)navigationBarSlideTransitionWillBegin;
-(void)navigationBarSlideTransitionDidEnd;
-(double)barHeightForBarMetrics:(long long)arg1 ;
-(double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2 ;
-(double)scopeBarHeight;
-(id)makeShadowView;
-(void)setShadowVisibleIfNecessary:(BOOL)arg1 ;
-(void)getOverrideContentInsets:(UIEdgeInsets*)arg1 overriddenEdges:(unsigned long long*)arg2 ;
-(void)setMinimumContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumContentInset;
-(void)setOverrideContentInsets:(UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2 ;
-(BOOL)alwaysUsesLayoutMarginsForHorizontalContentInset;
-(void)updateEffectiveContentInset;
-(UIEdgeInsets)effectiveContentInset;
-(BOOL)scopeBarIsVisible;
-(UIEdgeInsets)scopeBarInsets;
-(void)setScopeTitles:(NSArray *)arg1 ;
-(NSArray *)scopeTitles;
-(long long)selectedScope;
-(void)setSelectedScope:(long long)arg1 ;
-(void)updateScopeBarForSelectedScope;
-(UIView *)scopeBarContainerView;
-(void)setScopeBarPosition:(unsigned long long)arg1 ;
-(unsigned long long)scopeBarPosition;
-(void)setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2 ;
-(BOOL)backgroundLayoutNeedsUpdate;
-(void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3 ;
-(void)setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(UIImage *)separatorImage;
-(void)setSeparatorImage:(UIImage *)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(UINavigationItem *)searchNavigationItem;
-(UIBarButtonItem *)animatedAppearanceBarButtonItem;
-(void)updateIfNecessaryForOldSize:(CGSize)arg1 ;
-(void)setBackgroundLayoutNeedsUpdate;
-(void)setBackdropStyle:(unsigned long long)arg1 ;
-(void)updateForSemanticContext;
-(void)updateDictationButton;
-(void)applySearchBarStyle;
-(void)setCenterPlaceholder:(BOOL)arg1 ;
-(id)colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2 ;
-(void)allowCursorToAppear:(BOOL)arg1 ;
-(void)setTableViewIndexWidth:(double)arg1 ;
-(long long)searchFieldLeftViewMode;
-(void)setSearchFieldLeftViewMode:(long long)arg1 ;
-(long long)barMetricsForOrientation:(long long)arg1 ;
-(void)setCancelButtonWantsLetterpress:(BOOL)arg1 ;
-(BOOL)isInBarButNotHosted;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)setCancelButtonText:(NSString *)arg1 ;
-(void)setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)destroyCancelButton;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateBackgroundToBackdropStyle:(long long)arg1 ;
-(void)setHelperPlaceholder:(id)arg1 ;
-(void)setHelperPlaceholderOverride:(id)arg1 ;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(void)setScopeBar:(UISegmentedControl *)arg1 ;
-(void)setSearchBarBackground:(UISearchBarBackground *)arg1 ;
-(void)updateSearchFieldArt;
-(id)currentSeparatorImage;
-(void)setUpCancelButton;
-(void)displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateNeedForBackdrop;
-(void)setUpSearchField;
-(void)setUpLeftButton;
-(void)dictationAvailabilityDidChange:(id)arg1 ;
-(id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(BOOL*)arg3 ;
-(void)effectiveBarTintColorDidChange:(BOOL)arg1 ;
-(BOOL)supportsDynamicType;
-(void)updateSearchFieldForDynamicType;
-(void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg1 ;
-(void)updateSearchFieldControlSize;
-(void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1 ;
-(void)updateForAllowedToShowDictationChange;
-(BOOL)usesBackdrop;
-(void)removeBackdropVisualEffectView;
-(void)removeLegacyBackdropView;
-(id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(BOOL)canShowDictationButton;
-(void)setUpDictationMicWithSearchField:(id)arg1 ;
-(void)setShowDictationButton:(BOOL)arg1 shouldUpdateView:(BOOL)arg2 ;
-(void)cleanUpDictationMicsWithSearchField:(id)arg1 ;
-(void)updateDictationButtonActiveState;
-(void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)dictationControllerDidFinish:(id)arg1 ;
-(void)setUpSearchBarSearchContainerIfNecessary;
-(void)configureLayout:(id)arg1 forState:(long long)arg2 ;
-(void)configureLayout:(id)arg1 ;
-(void)layoutSubviewsInBounds:(CGRect)arg1 ;
-(void)getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5 ;
-(UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1 ;
-(BOOL)_getNavigationTitleLeadingInset:(double*)arg1 trailingInset:(double*)arg2 isRTL:(BOOL)arg3 ;
-(void)getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 ;
-(double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(UIEdgeInsets)arg2 ;
-(UIBarButtonItem *)cancelBarButtonItem;
-(double)availableBoundsWidthForSize:(CGSize)arg1 ;
-(double)effectiveBackgroundExtension;
-(CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(CGRect)arg1 ;
-(void)setUpSearchNavigationItem;
-(double)searchFieldHeight;
-(UITextField *)searchFieldIfExists;
-(UIVisualEffectView *)backdropVisualEffectView;
-(void)setBackdropVisualEffectView:(UIVisualEffectView *)arg1 ;
-(_UISearchBarScopeBarBackground *)scopeBarBackgroundView;
-(void)setScopeBarBackgroundView:(_UISearchBarScopeBarBackground *)arg1 ;
-(BOOL)cancelButtonWantsLetterpress;
-(double)tableViewIndexWidth;
-(id<_UINavigationBarTitleViewDataSource>)navBarTitleViewDataSource;
-(long long)navBarTitleViewLocation;
-(_UINavigationBarTitleViewOverlayRects *)navBarTitleViewOverlayRects;
-(void)setNavBarTitleViewOverlayRects:(_UINavigationBarTitleViewOverlayRects *)arg1 ;
-(id)leftButtonIfExists;
-(id)cancelBarButtonItemIfExists;
-(void)revertViewHierarchyIfNecessary;
-(void)destroyPromptLabel;
-(BOOL)hasDarkUIAppearance;
-(BOOL)containsScopeBar;
-(double)availableBoundsWidth;
-(long long)previousLayoutState;
-(_UISearchBarLayout *)prospectiveLayout;
-(void)setProspectiveLayout:(_UISearchBarLayout *)arg1 ;
-(_UISearchBarTransitionerBase *)transitioner;
-(void)setTransitioner:(_UISearchBarTransitionerBase *)arg1 ;
@end

