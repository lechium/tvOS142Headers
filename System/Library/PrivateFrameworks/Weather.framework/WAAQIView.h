/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WAAQIViewDelegate;
@class UILabel, WAAQIScaleView, WAAQIViewStyler, City, WAAQIAttributionStringBuilder;

@interface WAAQIView : UIView {

	BOOL _hideCitationString;
	BOOL _hideRecommendationString;
	BOOL _forceHideThisEntireView;
	BOOL _initialized;
	id<WAAQIViewDelegate> _delegate;
	UILabel* _aqiLabel;
	UILabel* _aqiIndexLabel;
	UILabel* _aqiAgencyLabel;
	UILabel* _dash;
	WAAQIScaleView* _aqiScaleView;
	UILabel* _aqiCategoryLabel;
	UILabel* _airQualityMetadataGradeLabel;
	UILabel* _airQualityRecommendationLabel;
	UILabel* _aqiCitationLabel;
	WAAQIViewStyler* _styler;
	City* _city;
	WAAQIAttributionStringBuilder* _attributionStringBuilder;
	unsigned long long _layoutMode;

}

@property (nonatomic,retain) UILabel * aqiLabel;                                                    //@synthesize aqiLabel=_aqiLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiIndexLabel;                                               //@synthesize aqiIndexLabel=_aqiIndexLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiAgencyLabel;                                              //@synthesize aqiAgencyLabel=_aqiAgencyLabel - In the implementation block
@property (nonatomic,retain) UILabel * dash;                                                        //@synthesize dash=_dash - In the implementation block
@property (nonatomic,retain) WAAQIScaleView * aqiScaleView;                                         //@synthesize aqiScaleView=_aqiScaleView - In the implementation block
@property (nonatomic,retain) UILabel * aqiCategoryLabel;                                            //@synthesize aqiCategoryLabel=_aqiCategoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * airQualityMetadataGradeLabel;                                //@synthesize airQualityMetadataGradeLabel=_airQualityMetadataGradeLabel - In the implementation block
@property (nonatomic,retain) UILabel * airQualityRecommendationLabel;                               //@synthesize airQualityRecommendationLabel=_airQualityRecommendationLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiCitationLabel;                                            //@synthesize aqiCitationLabel=_aqiCitationLabel - In the implementation block
@property (nonatomic,retain) WAAQIViewStyler * styler;                                              //@synthesize styler=_styler - In the implementation block
@property (nonatomic,retain) City * city;                                                           //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) WAAQIAttributionStringBuilder * attributionStringBuilder;              //@synthesize attributionStringBuilder=_attributionStringBuilder - In the implementation block
@property (assign,nonatomic) BOOL hideCitationString;                                               //@synthesize hideCitationString=_hideCitationString - In the implementation block
@property (assign,nonatomic) BOOL hideRecommendationString;                                         //@synthesize hideRecommendationString=_hideRecommendationString - In the implementation block
@property (assign,nonatomic) BOOL forceHideThisEntireView;                                          //@synthesize forceHideThisEntireView=_forceHideThisEntireView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                         //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                      //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic,__weak) id<WAAQIViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
+(id)createWeatherLabelWithLightColor:(BOOL)arg1 ;
-(void)initialize;
-(id<WAAQIViewDelegate>)delegate;
-(void)setDelegate:(id<WAAQIViewDelegate>)arg1 ;
-(BOOL)initialized;
-(void)prepareForReuse;
-(void)setCity:(City *)arg1 ;
-(City *)city;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)handleTapGesture:(id)arg1 ;
-(BOOL)accessibilityElementsHidden;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)setupForLayoutTemporarilyUnavailable;
-(void)setupForLayoutCompactScaleViewOneLinePlatterView:(BOOL)arg1 ;
-(void)setupForLayoutExtendedScaleView;
-(void)setupForLayoutExtendedNoScaleView;
-(UILabel *)aqiCitationLabel;
-(UILabel *)aqiIndexLabel;
-(UILabel *)aqiLabel;
-(UILabel *)aqiAgencyLabel;
-(UILabel *)aqiCategoryLabel;
-(UILabel *)airQualityMetadataGradeLabel;
-(UILabel *)airQualityRecommendationLabel;
-(void)setHideCitationString:(BOOL)arg1 ;
-(void)setForceHideThisEntireView:(BOOL)arg1 ;
-(WAAQIViewStyler *)styler;
-(id)sourceForScale:(id)arg1 countryCode:(id)arg2 ;
-(id)scaleFromScaleIdentifier:(id)arg1 countryCode:(id)arg2 ;
-(WAAQIScaleView *)aqiScaleView;
-(void)setHideRecommendationString:(BOOL)arg1 ;
-(WAAQIAttributionStringBuilder *)attributionStringBuilder;
-(CGSize)sizeForAQITemporarilyUnavailableThatFits:(CGSize)arg1 ;
-(CGSize)sizeForAQIAvailableThatFits:(CGSize)arg1 ;
-(CGSize)sizeForCompactOneLineLayoutWithScaleViewThatFits:(CGSize)arg1 platterView:(BOOL)arg2 ;
-(CGSize)sizeForExtendedLayoutWithScaleViewThatFits:(CGSize)arg1 ;
-(CGSize)sizeForLayoutWithoutScaleViewThatFits:(CGSize)arg1 ;
-(BOOL)forceHideThisEntireView;
-(CGSize)sizeForTwoLineLayoutWithScaleViewTheFits:(CGSize)arg1 platterView:(BOOL)arg2 ;
-(void)setupForLayoutCompactScaleViewTwoLinesPlatterView:(BOOL)arg1 ;
-(BOOL)hideRecommendationString;
-(BOOL)hideCitationString;
-(UILabel *)dash;
-(void)hideEverything;
-(void)layoutForCompactModeWithScaleInPlatterView:(BOOL)arg1 ;
-(void)layoutForExtendedModeWithScale;
-(void)layoutForModeWithoutScale;
-(void)layoutForModeAQITemporarilyUnavailable;
-(CGRect)adjustedFrame:(CGRect)arg1 basedOnFont:(id)arg2 desiredBaseline:(double)arg3 ;
-(CGRect)rtlAdjustFrame:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)layoutForTwoLinesLayoutWithScaleInPlatterView:(BOOL)arg1 ;
-(void)updateWithCity:(id)arg1 layoutMode:(unsigned long long)arg2 ;
-(double)contentMarginFromTop;
-(void)setAqiLabel:(UILabel *)arg1 ;
-(void)setAqiIndexLabel:(UILabel *)arg1 ;
-(void)setAqiAgencyLabel:(UILabel *)arg1 ;
-(void)setDash:(UILabel *)arg1 ;
-(void)setAqiScaleView:(WAAQIScaleView *)arg1 ;
-(void)setAqiCategoryLabel:(UILabel *)arg1 ;
-(void)setAirQualityMetadataGradeLabel:(UILabel *)arg1 ;
-(void)setAirQualityRecommendationLabel:(UILabel *)arg1 ;
-(void)setAqiCitationLabel:(UILabel *)arg1 ;
-(void)setStyler:(WAAQIViewStyler *)arg1 ;
-(void)setAttributionStringBuilder:(WAAQIAttributionStringBuilder *)arg1 ;
@end

