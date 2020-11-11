/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/TVCollectionViewDelegateFullScreenLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HBUITopShelfParadeContentCoordinatorDelegate.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol HBUITopShelfParadeContent, HBUITopShelfParadeViewControllerDelegate;
@class NSMapTable, __UIDiffableDataSource, HBUITopShelfParadePageControlsView, NSTimer, UITapGestureRecognizer, NSIndexPath, NSString, UIView, FBSDisplayMonitor;

@interface HBUITopShelfParadeViewController : UICollectionViewController <TVCollectionViewDelegateFullScreenLayout, UIGestureRecognizerDelegate, HBUITopShelfParadeContentCoordinatorDelegate, FBSDisplayObserving> {

	BOOL _contentOccluded;
	BOOL _didFinishFirstLoop;
	BOOL _mainDisplayConnected;
	BOOL _hasInitialMainDisplayState;
	id<HBUITopShelfParadeContent> _paradeContent;
	id<HBUITopShelfParadeViewControllerDelegate> _delegate;
	long long _contentStyle;
	NSMapTable* _contentCoordinators;
	__UIDiffableDataSource* _diffableDataSource;
	HBUITopShelfParadePageControlsView* _pageControlsView;
	NSTimer* _hidePageControlsViewTimer;
	UITapGestureRecognizer* _showContentViewsPressGestureRecognizer;
	UITapGestureRecognizer* _showContentViewsTapGestureRecognizer;
	UITapGestureRecognizer* _hideContentViewsGestureRecognizer;
	NSIndexPath* _centerItemIndexPath;
	NSString* _focusedItemIdentifier;
	NSTimer* _autoAdvanceTimer;
	UIView* _loopScrollSnapshotView;
	NSIndexPath* _loopScrollSnapshotIndexPath;
	FBSDisplayMonitor* _displayMonitor;
	id<HBUITopShelfParadeContent> _paradeContentAfterAnimating;

}

@property (nonatomic,readonly) long long contentStyle;                                                       //@synthesize contentStyle=_contentStyle - In the implementation block
@property (nonatomic,readonly) NSMapTable * contentCoordinators;                                             //@synthesize contentCoordinators=_contentCoordinators - In the implementation block
@property (nonatomic,readonly) __UIDiffableDataSource * diffableDataSource;                                  //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadePageControlsView * pageControlsView;                        //@synthesize pageControlsView=_pageControlsView - In the implementation block
@property (nonatomic,readonly) NSTimer * hidePageControlsViewTimer;                                          //@synthesize hidePageControlsViewTimer=_hidePageControlsViewTimer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * showContentViewsPressGestureRecognizer;              //@synthesize showContentViewsPressGestureRecognizer=_showContentViewsPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * showContentViewsTapGestureRecognizer;                //@synthesize showContentViewsTapGestureRecognizer=_showContentViewsTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * hideContentViewsGestureRecognizer;                   //@synthesize hideContentViewsGestureRecognizer=_hideContentViewsGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * centerItemIndexPath;                                            //@synthesize centerItemIndexPath=_centerItemIndexPath - In the implementation block
@property (nonatomic,readonly) NSString * focusedItemIdentifier;                                             //@synthesize focusedItemIdentifier=_focusedItemIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL didFinishFirstLoop;                                                      //@synthesize didFinishFirstLoop=_didFinishFirstLoop - In the implementation block
@property (nonatomic,readonly) NSTimer * autoAdvanceTimer;                                                   //@synthesize autoAdvanceTimer=_autoAdvanceTimer - In the implementation block
@property (nonatomic,readonly) UIView * loopScrollSnapshotView;                                              //@synthesize loopScrollSnapshotView=_loopScrollSnapshotView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * loopScrollSnapshotIndexPath;                                    //@synthesize loopScrollSnapshotIndexPath=_loopScrollSnapshotIndexPath - In the implementation block
@property (nonatomic,readonly) FBSDisplayMonitor * displayMonitor;                                           //@synthesize displayMonitor=_displayMonitor - In the implementation block
@property (nonatomic,readonly) BOOL mainDisplayConnected;                                                    //@synthesize mainDisplayConnected=_mainDisplayConnected - In the implementation block
@property (nonatomic,readonly) BOOL hasInitialMainDisplayState;                                              //@synthesize hasInitialMainDisplayState=_hasInitialMainDisplayState - In the implementation block
@property (nonatomic,readonly) id<HBUITopShelfParadeContent> paradeContentAfterAnimating;                    //@synthesize paradeContentAfterAnimating=_paradeContentAfterAnimating - In the implementation block
@property (nonatomic,retain) id<HBUITopShelfParadeContent> paradeContent;                                    //@synthesize paradeContent=_paradeContent - In the implementation block
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded;                                  //@synthesize contentOccluded=_contentOccluded - In the implementation block
@property (assign,nonatomic,__weak) id<HBUITopShelfParadeViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(void)dealloc;
-(id<HBUITopShelfParadeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfParadeViewControllerDelegate>)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(__UIDiffableDataSource *)diffableDataSource;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(FBSDisplayMonitor *)displayMonitor;
-(NSTimer *)autoAdvanceTimer;
-(BOOL)_containsFocus;
-(void)collectionView:(id)arg1 layout:(id)arg2 didCenterCellAtIndexPath:(id)arg3 ;
-(void)_advanceToNextItem;
-(void)paradeContentViewController:(id)arg1 didSelectAction:(id)arg2 forItem:(id)arg3 ;
-(NSIndexPath *)centerItemIndexPath;
-(void)paradeBackgroundViewControllerDidFinish:(id)arg1 ;
-(long long)contentStyle;
-(void)setContentOccluded:(BOOL)arg1 ;
-(BOOL)isContentOccluded;
-(id)_paradeCollectionView;
-(/*^block*/id)_diffableDataSourceCollectionViewCellProvider;
-(void)_showContentViews:(id)arg1 ;
-(void)_hideContentViews:(id)arg1 ;
-(void)_paradeContentDidChange:(id)arg1 animated:(BOOL)arg2 ;
-(void)_centerItemIndexPathDidChange;
-(void)_updateParadeMediaPlayerState;
-(void)_setPageControlsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_scheduleHidePageControlsViewTimerIfNeeded;
-(BOOL)_canScheduleHidePageControlsViewTimer;
-(id)_contentCoordinatorForCell:(id)arg1 withContentOptions:(unsigned long long)arg2 ;
-(id<HBUITopShelfParadeContent>)paradeContent;
-(id)_existingContentCoordinatorForItemAtIndexPath:(id)arg1 ;
-(id)_existingBackgroundViewControllerForItemAtIndexPath:(id)arg1 ;
-(id)_existingContentViewControllerForItemAtIndexPath:(id)arg1 ;
-(id)_paradeItemAtIndexPath:(id)arg1 ;
-(id)initWithContentStyle:(long long)arg1 ;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setParadeContent:(id<HBUITopShelfParadeContent>)arg1 ;
-(id)_currentBackgroundViewController;
-(id)_currentContentViewController;
-(NSMapTable *)contentCoordinators;
-(HBUITopShelfParadePageControlsView *)pageControlsView;
-(NSTimer *)hidePageControlsViewTimer;
-(UITapGestureRecognizer *)showContentViewsPressGestureRecognizer;
-(UITapGestureRecognizer *)showContentViewsTapGestureRecognizer;
-(UITapGestureRecognizer *)hideContentViewsGestureRecognizer;
-(NSString *)focusedItemIdentifier;
-(BOOL)didFinishFirstLoop;
-(UIView *)loopScrollSnapshotView;
-(NSIndexPath *)loopScrollSnapshotIndexPath;
-(BOOL)mainDisplayConnected;
-(BOOL)hasInitialMainDisplayState;
-(id<HBUITopShelfParadeContent>)paradeContentAfterAnimating;
@end

