/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotoGalleryViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MKPhotoGalleryTransitionAnimator.h>

@protocol MKPictureItemContainerAnalyticsDelegate, MKPlaceViewControllerPresentingProtocol, MKPictureItemContainerDelegate, GEOPictureItemContainer;
@class GEOMapItemAttribution, UIScrollView, UIStackView, UIImageView, UIButton, NSString;

@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator> {

	BOOL _hoverActive;
	id<MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
	id<MKPlaceViewControllerPresentingProtocol> _presentingProtocol;
	id<MKPictureItemContainerDelegate> _delegate;
	id<GEOPictureItemContainer> _pictureItemContainer;
	GEOMapItemAttribution* _attribution;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	UIImageView* _imageViewForTransition;
	UIButton* _previousPageButton;
	UIButton* _nextPageButton;
	CGPoint _beginAnalyticsScrollingPoint;

}

@property (nonatomic,readonly) id<GEOPictureItemContainer> pictureItemContainer;                                 //@synthesize pictureItemContainer=_pictureItemContainer - In the implementation block
@property (nonatomic,readonly) GEOMapItemAttribution * attribution;                                              //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                            //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) CGPoint beginAnalyticsScrollingPoint;                                               //@synthesize beginAnalyticsScrollingPoint=_beginAnalyticsScrollingPoint - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewForTransition;                                               //@synthesize imageViewForTransition=_imageViewForTransition - In the implementation block
@property (nonatomic,retain) UIButton * previousPageButton;                                                      //@synthesize previousPageButton=_previousPageButton - In the implementation block
@property (nonatomic,retain) UIButton * nextPageButton;                                                          //@synthesize nextPageButton=_nextPageButton - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL hoverActive;                                                   //@synthesize hoverActive=_hoverActive - In the implementation block
@property (assign,nonatomic,__weak) id<MKPictureItemContainerAnalyticsDelegate> analyticsDelegate;               //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceViewControllerPresentingProtocol> presentingProtocol;              //@synthesize presentingProtocol=_presentingProtocol - In the implementation block
@property (assign,nonatomic,__weak) id<MKPictureItemContainerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKPictureItemContainerDelegate>)delegate;
-(void)setDelegate:(id<MKPictureItemContainerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(GEOMapItemAttribution *)attribution;
-(id<GEOPictureItemContainer>)pictureItemContainer;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(BOOL)_canShowWhileLocked;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)infoCardThemeChanged;
-(id<MKPictureItemContainerAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<MKPictureItemContainerAnalyticsDelegate>)arg1 ;
-(void)updateUIForTheme:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)didTapOnPictureItemView:(id)arg1 ;
-(void)applyCornerRadius;
-(void)addControlButtons;
-(void)downloadImageForVisiblePictureItemViews;
-(void)updateChevronVisibility;
-(id)visiblePictureItemViews;
-(void)setImageViewForTransition:(UIImageView *)arg1 ;
-(void)scrollToPrevious;
-(void)scrollToNext;
-(void)adjustScrollIndexByOffset:(long long)arg1 ;
-(void)setBeginAnalyticsScrollingPoint:(CGPoint)arg1 ;
-(CGPoint)beginAnalyticsScrollingPoint;
-(id<MKPlaceViewControllerPresentingProtocol>)presentingProtocol;
-(UIImageView *)imageViewForTransition;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidFinishDismissing:(id)arg1 ;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2 ;
-(void)setHoverActive:(BOOL)arg1 ;
-(void)setPresentingProtocol:(id<MKPlaceViewControllerPresentingProtocol>)arg1 ;
-(UIButton *)previousPageButton;
-(void)setPreviousPageButton:(UIButton *)arg1 ;
-(UIButton *)nextPageButton;
-(void)setNextPageButton:(UIButton *)arg1 ;
@end

