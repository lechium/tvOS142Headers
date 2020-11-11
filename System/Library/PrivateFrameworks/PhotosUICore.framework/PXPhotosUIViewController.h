/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXPhotosContentControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosDragControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotosViewUIKeyCommandDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXSplitViewControllerChangeObserver.h>
#import <libobjc.A.dylib/PXSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXUserInterfaceFeatureViewController.h>
#import <libobjc.A.dylib/_PXPhotosGridContainerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PXGridPresentationBarsUpdateDelegate;
@class PXPhotosContentController, UIView, UIViewController, PXPhotosBarsController, PXPhotosDragController, PXSwipeSelectionManager, PXAssetSelectionUserActivityController, PXProgrammaticNavigationRequest, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, PXAssetReference, PXPhotosViewConfiguration, PXPhotosViewModel, NSString;

@interface PXPhotosUIViewController : UIViewController <PXAssetCollectionActionPerformerDelegate, PXChangeObserver, PXOneUpPresentationDelegate, PXPhotosContentControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosViewUIKeyCommandDelegate, PXScrollViewControllerObserver, PXSplitViewControllerChangeObserver, PXSwipeSelectionManagerDelegate, PXUserInterfaceFeatureViewController, _PXPhotosGridContainerDelegate, UIGestureRecognizerDelegate> {

	BOOL _hasScrolledToInitialPosition;
	BOOL _showingInitialLoadPlaceholder;
	PXPhotosContentController* _contentController;
	UIView* _emptyPlaceholderView;
	id<PXGridPresentationBarsUpdateDelegate> _gridPresentationBarsUpdateDelegate;
	UIViewController* _containerViewController;
	PXPhotosBarsController* _barsController;
	PXPhotosDragController* _dragController;
	PXPhotosDragController* _emptyPlaceholderDragController;
	PXSwipeSelectionManager* _swipeSelectionManager;
	PXAssetSelectionUserActivityController* _userActivityController;
	PXProgrammaticNavigationRequest* _pendingInitialNavigationRequest;
	UITapGestureRecognizer* _tapGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	PXAssetReference* _navigatedAssetReference;
	PXPhotosViewConfiguration* _configuration;
	UIView* _alternateContentView;

}

@property (nonatomic,readonly) id<PXPhotosViewEventTracker> eventTracker; 
@property (nonatomic,readonly) PXPhotosBarsController * barsController;                                                       //@synthesize barsController=_barsController - In the implementation block
@property (nonatomic,readonly) PXPhotosDragController * dragController;                                                       //@synthesize dragController=_dragController - In the implementation block
@property (nonatomic,readonly) PXPhotosDragController * emptyPlaceholderDragController;                                       //@synthesize emptyPlaceholderDragController=_emptyPlaceholderDragController - In the implementation block
@property (nonatomic,readonly) PXSwipeSelectionManager * swipeSelectionManager;                                               //@synthesize swipeSelectionManager=_swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetSelectionUserActivityController * userActivityController;                               //@synthesize userActivityController=_userActivityController - In the implementation block
@property (nonatomic,retain) PXProgrammaticNavigationRequest * pendingInitialNavigationRequest;                               //@synthesize pendingInitialNavigationRequest=_pendingInitialNavigationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasScrolledToInitialPosition;                                                               //@synthesize hasScrolledToInitialPosition=_hasScrolledToInitialPosition - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGesture;                                                           //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGesture;                                               //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGesture;                                                       //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (nonatomic,retain) PXAssetReference * navigatedAssetReference;                                                      //@synthesize navigatedAssetReference=_navigatedAssetReference - In the implementation block
@property (nonatomic,retain) UIView * emptyPlaceholderView;                                                                   //@synthesize emptyPlaceholderView=_emptyPlaceholderView - In the implementation block
@property (assign,getter=isShowingInitialLoadingPlaceholder,nonatomic) BOOL showingInitialLoadPlaceholder;                    //@synthesize showingInitialLoadPlaceholder=_showingInitialLoadPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) PXPhotosViewConfiguration * configuration;                                                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel; 
@property (nonatomic,readonly) PXPhotosContentController * contentController;                                                 //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,retain) UIView * alternateContentView;                                                                   //@synthesize alternateContentView=_alternateContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PXGridPresentationBarsUpdateDelegate> gridPresentationBarsUpdateDelegate;              //@synthesize gridPresentationBarsUpdateDelegate=_gridPresentationBarsUpdateDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containerViewController;                                               //@synthesize containerViewController=_containerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long userInterfaceFeature; 
-(id)initWithCoder:(id)arg1 ;
-(PXPhotosViewConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(id)keyCommands;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)paste:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)scrollView;
-(id)contentScrollView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)gridView;
-(UILongPressGestureRecognizer *)longPressGesture;
-(PXPhotosViewModel *)viewModel;
-(void)_handleTap:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)userInterfaceFeature;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)px_navigationDestination;
-(id<PXPhotosViewEventTracker>)eventTracker;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationHelperScrollView:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)hostViewControllerForActionPerformer:(id)arg1 ;
-(id)currentDataSource;
-(id)regionOfInterestForAssetReference:(id)arg1 ;
-(id)regionOfInterestForAssetReference:(id)arg1 image:(id*)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)splitViewController:(id)arg1 didChangeSidebarVisibility:(BOOL)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2 ;
-(BOOL)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1 ;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(PXSimpleIndexPath)arg2 toIndexPath:(PXSimpleIndexPath)arg3 ;
-(void)swipeSelectionManagerDidAutoScroll:(id)arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg1 ;
-(id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(CGPoint)arg2 ;
-(id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3 ;
-(id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(CGPoint)arg2 ;
-(id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2 ;
-(id)dragControllerViewControllerForPresentation:(id)arg1 ;
-(BOOL)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2 ;
-(BOOL)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2 ;
-(void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2 ;
-(void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2 ;
-(void)dragController:(id)arg1 isDragSessionActiveDidChange:(BOOL)arg2 ;
-(void)keyCommandDidRequestToNavigateToOneUp:(id)arg1 ;
-(void)keyCommandDidRequestToBePerformed:(id)arg1 ;
-(void)_updateEmptyPlaceholder;
-(void)px_willTransitionBars;
-(void)px_didTransitionBars;
-(void)_prepareGestureRecognizers;
-(BOOL)pu_handleSecondTabTap;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(BOOL)_scrollToBottomAnimated:(BOOL)arg1 ;
-(BOOL)_handleTapWithHitTestResult:(id)arg1 rangeSelectionEnabled:(BOOL)arg2 ;
-(void)_handlePinch:(id)arg1 ;
-(BOOL)_presentOneUpForAssetReference:(id)arg1 animated:(BOOL)arg2 withInteractiveMode:(long long)arg3 ;
-(PXSimpleIndexPath)_indexPathForAssetAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 forSwipeSelectionManager:(id)arg3 ;
-(PXPhotosBarsController *)barsController;
-(PXAssetSelectionUserActivityController *)userActivityController;
-(PXPhotosDragController *)dragController;
-(PXPhotosDragController *)emptyPlaceholderDragController;
-(UITapGestureRecognizer *)tapGesture;
-(UIPinchGestureRecognizer *)pinchGesture;
-(PXSwipeSelectionManager *)swipeSelectionManager;
-(PXAssetReference *)navigatedAssetReference;
-(void)setNavigatedAssetReference:(PXAssetReference *)arg1 ;
-(UIView *)emptyPlaceholderView;
-(void)setEmptyPlaceholderView:(UIView *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)px_layoutMargins;
-(BOOL)px_determinesPreferredStatusBarStyle;
-(void)containerView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)photosContentController:(id)arg1 presentViewController:(id)arg2 ;
-(void)dismissPresentedViewControllerForContentController:(id)arg1 ;
-(BOOL)photosContentController:(id)arg1 pushViewController:(id)arg2 ;
-(void)needsUpdateForContentController:(id)arg1 ;
-(id)presentingViewControllerForContentController:(id)arg1 ;
-(PXPhotosContentController *)contentController;
-(id)contentControllerIfLoaded;
-(void)setAlternateContentView:(UIView *)arg1 ;
-(void)_updateEmptyBehaviorIfNeeded;
-(void)_updateEmptyPlaceholderLayout;
-(void)_updateSubviewsOrdering;
-(void)_updateBackButtonBehavior;
-(void)setShowingInitialLoadPlaceholder:(BOOL)arg1 ;
-(void)photosBarsControllerDidUpdateBars:(id)arg1 ;
-(void)invalidateHeaderView;
-(void)_dismissOnInternalRequest;
-(void)_updateNavigationItem;
-(void)_scrollToInitialPositionIfNecessary;
-(void)_prepareSwipeSelectionManager;
-(id)_assetReferenceAtLocation:(CGPoint)arg1 withPadding:(UIEdgeInsets)arg2 inCoordinateSpace:(id)arg3 ;
-(void)_waitForAvailabilityOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(BOOL)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)ppt_navigateToAsset:(id)arg1 inAssetContainer:(id)arg2 revealInOneUp:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_waitUntilOneUpPresentationCanStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_pickNavigatedAssetReference;
-(id)createContextMenuActionManagerForNavigatedAssetReference;
-(id<PXGridPresentationBarsUpdateDelegate>)gridPresentationBarsUpdateDelegate;
-(void)setGridPresentationBarsUpdateDelegate:(id<PXGridPresentationBarsUpdateDelegate>)arg1 ;
-(UIViewController *)containerViewController;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(PXProgrammaticNavigationRequest *)pendingInitialNavigationRequest;
-(void)setPendingInitialNavigationRequest:(PXProgrammaticNavigationRequest *)arg1 ;
-(BOOL)hasScrolledToInitialPosition;
-(void)setHasScrolledToInitialPosition:(BOOL)arg1 ;
-(BOOL)isShowingInitialLoadingPlaceholder;
-(UIView *)alternateContentView;
@end

