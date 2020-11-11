/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIScrollViewAccessibility_super.h>

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(CGRect)accessibilityFrame;
-(void)_notifyDidScroll;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilitySubviews;
-(long long)accessibilityContainerType;
-(id)accessibilityPath;
-(id)_accessibilityUserTestingChildren;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1 ;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityIsScrollAncestor;
-(BOOL)accessibilityScrollUpPage;
-(CGPoint)_accessibilityContentOffset;
-(BOOL)_accessibilityScrollingEnabled;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 ;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(BOOL)accessibilityScrollDownPage;
-(id)_accessibilityFirstOpaqueElement;
-(id)_accessibilityFocusAbsoluteFirstLastOpaqueElement:(BOOL)arg1 technology:(id)arg2 honorsGroups:(BOOL)arg3 shouldAlwaysScroll:(BOOL)arg4 ;
-(double)_accessibilityZoomScale;
-(id)_accessibilityVerticalScrollBarElement;
-(id)_accessibilityHorizontalScrollBarElement;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(id)_accessibilityFirstOpaqueElementWithOptions:(id)arg1 ;
-(id)_accessibilityLastOpaqueElement;
-(id)_accessibilityLastOpaqueElementWithOptions:(id)arg1 ;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CGRect)_accessibilityContentFrame;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(id)_accessibilityUIViewAccessibilityFrame;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(BOOL)accessibilityScrollUpPageSupported;
-(BOOL)_accessibilityShouldUseFallbackForVisibleContentInset;
-(void)_accessibilitySetShouldUseFallbackForVisibleContentInset:(BOOL)arg1 ;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(BOOL)_accessibilityRemembersLastFocusedChild;
-(BOOL)_accessibilityScrollPageInDirection:(int)arg1 ;
-(double)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(double)_accessibilityScrollWidthDistance;
-(double)_accessibilityScrollHeightDistance;
-(id)_axOverrideShowsVerticalScrollBars;
-(id)_axOverrideShowsHorizontallScrollBars;
-(id)_axVerticalScrollBar;
-(BOOL)_axShowsVerticalScrollBar;
-(void)_axSetVerticalScrollBar:(id)arg1 ;
-(id)_axHorizontalScrollBar;
-(BOOL)_axShowsHorizontalScrollBar;
-(void)_axSetHorizontalScrollBar:(id)arg1 ;
-(void)_announceDelayedStatus;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1 options:(id)arg2 ;
-(void)_axSetAlwaysScrollsContentIntoView:(BOOL)arg1 ;
-(BOOL)_axAlwaysScrollsContentIntoView;
-(BOOL)_axScrollViewPagingEnabled;
-(BOOL)_axShouldScrollToAlignWithPage;
-(CGPoint)_axPageAlignedContentOffsetForPoint:(CGPoint)arg1 ;
-(BOOL)_accessibilityShouldAnimateScrollToVisible;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 type:(int)arg3 ;
-(BOOL)_accessibilityScrollStatusPrefersVertical;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 forVerticalDirection:(BOOL)arg3 ;
-(CGPoint)_axMaximumContentOffset;
-(CGPoint)_axMinimumContentOffset;
-(BOOL)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(void)_scrollViewDidEndDeceleratingForDelegate;
-(id)_accessibilityRetrieveDelegate;
-(double)_axAllowedPagingOverlap;
-(id)_accessibilityElementsFilteredByPagingScrollView:(id)arg1 ;
-(id)_accessibilityDelegateScrollStatus;
-(id)_accessibilityScrollStatusFormatString;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(BOOL)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(double)arg3 ;
-(BOOL)_accessibilityShouldAnimateScroll;
-(CGSize)_axPageSize;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 animationCurve:(int)arg4 ;
-(CGPoint)accessibilityValidateScrollContentOffset:(CGPoint)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(id)_accessibilityStoredShouldUseFallbackForVisibleContentInset;
-(void)_accessibilitySetStoredShouldUseFallbackForVisibleContentInset:(id)arg1 ;
-(id)_accessibilityStoredVisibleContentInset;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(id)_staticScrollBar;
-(CGRect)_defaultFocusRegionFrame;
-(void)_axSetOverrideShowsVerticalScrollBars:(id)arg1 ;
-(void)_axSetOverrideShowsHorizontallScrollBars:(id)arg1 ;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 ;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
@end

