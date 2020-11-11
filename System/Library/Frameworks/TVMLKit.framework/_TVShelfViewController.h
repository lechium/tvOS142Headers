/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMLCollectionViewController.h>
#import <TVMLKit/TVShelfViewLayoutDelegate.h>
#import <TVMLKit/TVBrowserProviding.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol __TVShelfViewControllerDelegate;
@class NSIndexPath, _TVSuperShelfFeature, _TVMLBrowserViewController, NSString;

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, TVBrowserProviding, UICollectionViewDelegateFlowLayout> {

	NSIndexPath* _pendingPreviewedIndexPath;
	NSIndexPath* _lastPreviewedIndexPath;
	double _lastPreviewDelay;
	unsigned long long _autohighlightScrollPosition;
	BOOL _configureForListTemplate;
	long long _listTemplateAlignment;
	struct {
		BOOL hasUpdateRelatedView;
		BOOL hasDidSelectItemAtIndexPath;
		BOOL hasDidPlayItemAtIndexPath;
		BOOL hasDidSettleOnItemAtIndexPath;
		BOOL hasFocusDependentMethods;
	}  _delegateFlags;
	BOOL _centered;
	_TVSuperShelfFeature* _superShelfFeature;
	id<__TVShelfViewControllerDelegate> _delegate;
	unsigned long long _speedBumpEdges;
	long long _prominentSectionIndex;
	_TVMLBrowserViewController* _presentedSuperShelfViewController;

}

@property (assign,nonatomic) long long prominentSectionIndex;                                             //@synthesize prominentSectionIndex=_prominentSectionIndex - In the implementation block
@property (nonatomic,readonly) _TVSuperShelfFeature * superShelfFeature;                                  //@synthesize superShelfFeature=_superShelfFeature - In the implementation block
@property (assign,nonatomic) _TVMLBrowserViewController * presentedSuperShelfViewController;              //@synthesize presentedSuperShelfViewController=_presentedSuperShelfViewController - In the implementation block
@property (assign,nonatomic,__weak) id<__TVShelfViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long speedBumpEdges;                                           //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                             //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) BOOL hideHeader; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_contentForCell:(id)arg1 shouldHide:(BOOL)arg2 ;
-(id<__TVShelfViewControllerDelegate>)delegate;
-(void)setDelegate:(id<__TVShelfViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isCentered;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(id)preferredFocusEnvironments;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2 ;
-(id)makeCollectionViewWithFrame:(CGRect)arg1 ;
-(BOOL)contentFlowsVertically;
-(void)updateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(void)updateWithViewElement:(id)arg1 ;
-(long long)prominentSectionIndex;
-(void)setProminentSectionIndex:(long long)arg1 ;
-(void)_delayedUpdatePreview;
-(_TVSuperShelfFeature *)superShelfFeature;
-(_TVMLBrowserViewController *)presentedSuperShelfViewController;
-(void)_didSettleOnItemAtIndexPath:(id)arg1 ;
-(id)_lockupImageElementForItemAtIndexPath:(id)arg1 ;
-(void)setPresentedSuperShelfViewController:(_TVMLBrowserViewController *)arg1 ;
-(void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_areCellsExported;
-(id)browserViewController:(id)arg1 transitionLayoutAttributesInWindow:(id)arg2 ;
-(void)willTransitionToBrowserViewController:(id)arg1 ;
-(void)didTransitionBackFromBrowserViewController:(id)arg1 ;
-(id)browserViewController:(id)arg1 lockupImageProxyForItemAtIndexPath:(id)arg2 ;
-(void)browserViewController:(id)arg1 didUpdatePreferredIndexPath:(id)arg2 ;
-(void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(unsigned long long)preferredScrollPosition;
-(void)setHideHeader:(BOOL)arg1 ;
-(BOOL)hideHeader;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
-(unsigned long long)speedBumpEdges;
@end

