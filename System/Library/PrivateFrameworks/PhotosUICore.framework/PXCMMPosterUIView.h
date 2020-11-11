/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXRoundedCornerOverlayView, PXCMMPosterHeaderView, PXCMMPosterBannerView, UIActivityIndicatorView, PXUpdater, NSString, UIColor;

@interface PXCMMPosterUIView : UIView {

	NSRange _bannerHeadlineBoldRange;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	PXCMMPosterHeaderView* _headerView;
	PXCMMPosterBannerView* _bannerView;
	long long _actionButtonType;
	/*^block*/id _actionButtonAction;
	UIActivityIndicatorView* _activityIndicatorView;
	PXUpdater* _updater;
	BOOL _needsBannerView;
	BOOL _actionInProgress;
	NSString* _bannerHeadline;
	NSString* _bannerSubheadline;
	UIColor* _opaqueAncestorBackgroundColor;
	unsigned long long _cornersToRound;
	double _cornerRadius;
	long long _selectedCount;
	long long _totalCount;

}

@property (nonatomic,copy) NSString * locationString; 
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * statusString; 
@property (nonatomic,copy) NSString * bannerHeadline;                                      //@synthesize bannerHeadline=_bannerHeadline - In the implementation block
@property (nonatomic,copy) NSString * bannerSubheadline;                                   //@synthesize bannerSubheadline=_bannerSubheadline - In the implementation block
@property (nonatomic,copy) UIColor * opaqueAncestorBackgroundColor;                        //@synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long cornersToRound;                            //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL needsBannerView;                                         //@synthesize needsBannerView=_needsBannerView - In the implementation block
@property (nonatomic,readonly) PXCMMPosterBannerView * bannerView;                         //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) long long selectedCount;                                      //@synthesize selectedCount=_selectedCount - In the implementation block
@property (assign,nonatomic) long long totalCount;                                         //@synthesize totalCount=_totalCount - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;              //@synthesize actionInProgress=_actionInProgress - In the implementation block
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(long long)totalCount;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(PXCMMPosterBannerView *)bannerView;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(unsigned long long)cornersToRound;
-(void)setTotalCount:(long long)arg1 ;
-(long long)selectedCount;
-(void)setSelectedCount:(long long)arg1 ;
-(void)setOpaqueAncestorBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)opaqueAncestorBackgroundColor;
-(NSString *)dateString;
-(void)setDateString:(NSString *)arg1 ;
-(void)setAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)setBannerHeadline:(NSString *)arg1 ;
-(void)setBannerHeadline:(id)arg1 boldRange:(NSRange)arg2 ;
-(void)setBannerSubheadline:(NSString *)arg1 ;
-(void)setNeedsBannerView:(BOOL)arg1 ;
-(void)setActionButtonWithType:(long long)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)setActionInProgress:(BOOL)arg1 ;
-(void)_updateBannerTitles;
-(void)_updateBannerActionButton;
-(void)_updateBannerView;
-(void)_updateCorners;
-(id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 ;
-(NSString *)bannerHeadline;
-(NSString *)bannerSubheadline;
-(BOOL)needsBannerView;
-(BOOL)isActionInProgress;
@end

