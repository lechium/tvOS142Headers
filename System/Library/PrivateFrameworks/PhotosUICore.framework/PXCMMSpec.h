/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor;

@interface PXCMMSpec : PXFeatureSpec {

	unsigned long long _activityType;
	UIColor* _reviewBackgroundColor;
	long long _reviewGridContentMode;
	double _reviewHeaderTopInset;
	double _reviewHeaderCornerRadius;
	double _reviewBannerHeight;
	double _reviewSendBackFooterHeight;
	double _reviewFooterBottomInset;
	double _reviewSectionHeaderHeight;
	UIColor* _composeRecipientViewBackgroundColor;
	double _composeTableViewCellHeight;
	double _composeTableViewCellInset;
	double _composeCornerRadius;
	double _composePrivacyMessageInset;
	double _composeHeaderVerticalPadding;
	double _bubbleStatusIconCornerRadius;
	CGSize _reviewGridInterItemSpacing;
	CGSize _reviewGridItemSize;
	CGSize _composeTableViewCellImageViewSize;
	UIEdgeInsets _reviewContentInsets;
	UIEdgeInsets _reviewSafeAreaInsets;
	UIEdgeInsets _reviewGridContentInsets;
	UIEdgeInsets _composeHeaderLabelMargins;
	UIEdgeInsets _composeFooterInsets;
	UIEdgeInsets _composeFooterMargins;

}

@property (nonatomic,readonly) unsigned long long activityType;                            //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) UIColor * reviewBackgroundColor;                            //@synthesize reviewBackgroundColor=_reviewBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets reviewContentInsets;                           //@synthesize reviewContentInsets=_reviewContentInsets - In the implementation block
@property (nonatomic,readonly) CGSize reviewGridInterItemSpacing;                          //@synthesize reviewGridInterItemSpacing=_reviewGridInterItemSpacing - In the implementation block
@property (nonatomic,readonly) CGSize reviewGridItemSize;                                  //@synthesize reviewGridItemSize=_reviewGridItemSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets reviewSafeAreaInsets;                          //@synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets reviewGridContentInsets;                       //@synthesize reviewGridContentInsets=_reviewGridContentInsets - In the implementation block
@property (nonatomic,readonly) long long reviewGridContentMode;                            //@synthesize reviewGridContentMode=_reviewGridContentMode - In the implementation block
@property (nonatomic,readonly) double reviewHeaderTopInset;                                //@synthesize reviewHeaderTopInset=_reviewHeaderTopInset - In the implementation block
@property (nonatomic,readonly) double reviewHeaderCornerRadius;                            //@synthesize reviewHeaderCornerRadius=_reviewHeaderCornerRadius - In the implementation block
@property (nonatomic,readonly) double reviewBannerHeight;                                  //@synthesize reviewBannerHeight=_reviewBannerHeight - In the implementation block
@property (nonatomic,readonly) double reviewSendBackFooterHeight;                          //@synthesize reviewSendBackFooterHeight=_reviewSendBackFooterHeight - In the implementation block
@property (nonatomic,readonly) double reviewFooterBottomInset;                             //@synthesize reviewFooterBottomInset=_reviewFooterBottomInset - In the implementation block
@property (nonatomic,readonly) double reviewSectionHeaderHeight;                           //@synthesize reviewSectionHeaderHeight=_reviewSectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) UIColor * composeRecipientViewBackgroundColor;              //@synthesize composeRecipientViewBackgroundColor=_composeRecipientViewBackgroundColor - In the implementation block
@property (nonatomic,readonly) double composeTableViewCellHeight;                          //@synthesize composeTableViewCellHeight=_composeTableViewCellHeight - In the implementation block
@property (nonatomic,readonly) double composeTableViewCellInset;                           //@synthesize composeTableViewCellInset=_composeTableViewCellInset - In the implementation block
@property (nonatomic,readonly) CGSize composeTableViewCellImageViewSize;                   //@synthesize composeTableViewCellImageViewSize=_composeTableViewCellImageViewSize - In the implementation block
@property (nonatomic,readonly) double composeCornerRadius;                                 //@synthesize composeCornerRadius=_composeCornerRadius - In the implementation block
@property (nonatomic,readonly) double composePrivacyMessageInset;                          //@synthesize composePrivacyMessageInset=_composePrivacyMessageInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets composeHeaderLabelMargins;                     //@synthesize composeHeaderLabelMargins=_composeHeaderLabelMargins - In the implementation block
@property (nonatomic,readonly) double composeHeaderVerticalPadding;                        //@synthesize composeHeaderVerticalPadding=_composeHeaderVerticalPadding - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets composeFooterInsets;                           //@synthesize composeFooterInsets=_composeFooterInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets composeFooterMargins;                          //@synthesize composeFooterMargins=_composeFooterMargins - In the implementation block
@property (nonatomic,readonly) UIColor * bubbleBackgroundColor; 
@property (nonatomic,readonly) double bubbleStatusIconCornerRadius;                        //@synthesize bubbleStatusIconCornerRadius=_bubbleStatusIconCornerRadius - In the implementation block
+(double)maxBubbleWidthForDisplayScale:(double)arg1 ;
-(unsigned long long)activityType;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(UIEdgeInsets)reviewSafeAreaInsets;
-(double)_composeTableViewCellHeight;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 activityType:(unsigned long long)arg3 ;
-(UIColor *)bubbleBackgroundColor;
-(double)_reviewSectionHeaderHeightForContentSize:(id)arg1 ;
-(UIColor *)reviewBackgroundColor;
-(UIEdgeInsets)reviewContentInsets;
-(CGSize)reviewGridInterItemSpacing;
-(CGSize)reviewGridItemSize;
-(UIEdgeInsets)reviewGridContentInsets;
-(long long)reviewGridContentMode;
-(double)reviewHeaderTopInset;
-(double)reviewHeaderCornerRadius;
-(double)reviewBannerHeight;
-(double)reviewSendBackFooterHeight;
-(double)reviewFooterBottomInset;
-(double)reviewSectionHeaderHeight;
-(UIColor *)composeRecipientViewBackgroundColor;
-(double)composeTableViewCellHeight;
-(double)composeTableViewCellInset;
-(CGSize)composeTableViewCellImageViewSize;
-(double)composeCornerRadius;
-(double)composePrivacyMessageInset;
-(UIEdgeInsets)composeHeaderLabelMargins;
-(double)composeHeaderVerticalPadding;
-(UIEdgeInsets)composeFooterInsets;
-(UIEdgeInsets)composeFooterMargins;
-(double)bubbleStatusIconCornerRadius;
@end

