/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXScrollViewController.h>
#import <libobjc.A.dylib/PXUIScrollViewDelegate.h>
#import <libobjc.A.dylib/_PXUIScrollViewFocusItemProvider.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol PXUIScrollViewControllerFocusItemProvider;
@class _PXUIScrollView, UIScrollView, NSString;

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider, UIScrollViewDelegate> {

	_PXUIScrollView* _scrollView;
	BOOL _isScrollingToTop;
	id<PXUIScrollViewControllerFocusItemProvider> _focusItemProvider;

}

@property (assign,setter=setScrollingToTop:,nonatomic) BOOL isScrollingToTop;                                     //@synthesize isScrollingToTop=_isScrollingToTop - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<PXUIScrollViewControllerFocusItemProvider> focusItemProvider;              //@synthesize focusItemProvider=_focusItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isTracking;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(UIScrollView *)scrollView;
-(BOOL)isDragging;
-(BOOL)isDecelerating;
-(id)focusItemsForScrollView:(id)arg1 inRect:(CGRect)arg2 ;
-(void)scrollViewWillLayoutSubviews:(id)arg1 ;
-(void)scrollViewDidLayoutSubviews:(id)arg1 ;
-(void)scrollView:(id)arg1 willBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg2 ;
-(BOOL)hasWindow;
-(void)addSubviewToScrollView:(id)arg1 ;
-(void)addFloatingSublayer:(id)arg1 forAxis:(long long)arg2 ;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(void)setScrollingToTop:(BOOL)arg1 ;
-(void)scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)stopScrollingAndZoomingAnimations;
-(void)setScrollViewNeedsLayout;
-(void)scrollViewLayoutIfNeeded;
-(CGSize)scrollViewReferenceSize;
-(CGRect)scrollViewActiveRect;
-(CGRect)scrollViewVisibleRect;
-(CGRect)scrollViewConstrainedVisibleRect;
-(CGRect)scrollViewTargetRect;
-(CGRect)scrollViewContentBounds;
-(CGSize)scrollViewContentSize;
-(void)setScrollViewContentBounds:(CGRect)arg1 ;
-(void)setDeferContentOffsetUpdates:(BOOL)arg1 ;
-(void)setRespectsContentZOrder:(BOOL)arg1 ;
-(BOOL)respectsContentZOrder;
-(BOOL)deferContentOffsetUpdates;
-(void)applyScrollInfo:(id)arg1 ;
-(id)contentCoordinateSpace;
-(void)setFocusItemProvider:(id<PXUIScrollViewControllerFocusItemProvider>)arg1 ;
-(id<PXUIScrollViewControllerFocusItemProvider>)focusItemProvider;
-(BOOL)isScrollingToTop;
@end
