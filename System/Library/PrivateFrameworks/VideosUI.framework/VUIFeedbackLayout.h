/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout, VUIFeedbackTableLayout, TVRatingBadgeLayout, UIColor;

@interface VUIFeedbackLayout : TVViewLayout {

	VUITextLayout* _headerTitleLayout;
	VUITextLayout* _headerSubtitleLayout;
	VUITextLayout* _sourceTextLayout;
	VUITextLayout* _descriptionTextLayout;
	TVImageLayout* _headerBadgeLayout;
	TVImageLayout* _sourceBadgeLayout;
	VUIFeedbackTableLayout* _reviewTableLayout;
	TVRatingBadgeLayout* _ratingBadgeLayout;
	UIColor* _darkHighlightColor;
	long long _layoutType;
	TVCornerRadii _borderRadii;
	UIEdgeInsets _headerImagePadding;

}

@property (nonatomic,readonly) VUITextLayout * headerTitleLayout;                       //@synthesize headerTitleLayout=_headerTitleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * headerSubtitleLayout;                    //@synthesize headerSubtitleLayout=_headerSubtitleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * sourceTextLayout;                        //@synthesize sourceTextLayout=_sourceTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;                   //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * headerBadgeLayout;                       //@synthesize headerBadgeLayout=_headerBadgeLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * sourceBadgeLayout;                       //@synthesize sourceBadgeLayout=_sourceBadgeLayout - In the implementation block
@property (nonatomic,readonly) VUIFeedbackTableLayout * reviewTableLayout;              //@synthesize reviewTableLayout=_reviewTableLayout - In the implementation block
@property (nonatomic,readonly) TVRatingBadgeLayout * ratingBadgeLayout;                 //@synthesize ratingBadgeLayout=_ratingBadgeLayout - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                                 //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,retain) UIColor * darkHighlightColor;                              //@synthesize darkHighlightColor=_darkHighlightColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerImagePadding;                         //@synthesize headerImagePadding=_headerImagePadding - In the implementation block
@property (nonatomic,readonly) long long layoutType;                                    //@synthesize layoutType=_layoutType - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(TVCornerRadii)borderRadii;
-(long long)layoutType;
-(TVRatingBadgeLayout *)ratingBadgeLayout;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUITextLayout *)descriptionTextLayout;
-(id)initWithLayoutType:(long long)arg1 ;
-(VUITextLayout *)headerTitleLayout;
-(VUITextLayout *)headerSubtitleLayout;
-(VUITextLayout *)sourceTextLayout;
-(void)setDarkHighlightColor:(UIColor *)arg1 ;
-(VUIFeedbackTableLayout *)reviewTableLayout;
-(void)_setupLayout:(long long)arg1 ;
-(TVImageLayout *)headerBadgeLayout;
-(TVImageLayout *)sourceBadgeLayout;
-(UIColor *)darkHighlightColor;
-(UIEdgeInsets)headerImagePadding;
@end

