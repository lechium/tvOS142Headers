/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol MKPlaceHoursViewDelegate;
@class NSArray, _MKUILabel, NSLayoutConstraint, _MKLocalizedHoursBuilder, NSDictionary, GEOBusinessHours;

@interface MKPlaceHoursView : UIView {

	NSArray* _labels;
	_MKUILabel* _topLabel;
	_MKUILabel* _topMessageLabel;
	_MKUILabel* _topDayOrHourLabel;
	_MKUILabel* _bottomMessageLabel;
	_MKUILabel* _collapsableOpenStateLabel;
	NSLayoutConstraint* _baselineToTop;
	NSArray* _baselineToBaselineConstraints;
	NSArray* _baselineToBottomConstraints;
	NSArray* _topAndBottomLabelConstraints;
	NSArray* _placeDailyHours;
	unsigned long long _placeHoursViewOptions;
	_MKLocalizedHoursBuilder* _hoursBuilder;
	NSDictionary* _formattedHoursData;
	GEOBusinessHours* _businessHours;
	id<MKPlaceHoursViewDelegate> _hoursDelegate;

}

@property (assign,nonatomic) unsigned long long placeHoursViewOptions;                       //@synthesize placeHoursViewOptions=_placeHoursViewOptions - In the implementation block
@property (nonatomic,retain) _MKLocalizedHoursBuilder * hoursBuilder;                        //@synthesize hoursBuilder=_hoursBuilder - In the implementation block
@property (nonatomic,retain) NSDictionary * formattedHoursData;                              //@synthesize formattedHoursData=_formattedHoursData - In the implementation block
@property (nonatomic,retain) GEOBusinessHours * businessHours;                               //@synthesize businessHours=_businessHours - In the implementation block
@property (nonatomic,readonly) _MKUILabel * topLabel; 
@property (assign,nonatomic,__weak) id<MKPlaceHoursViewDelegate> hoursDelegate;              //@synthesize hoursDelegate=_hoursDelegate - In the implementation block
-(GEOBusinessHours *)businessHours;
-(void)setBusinessHours:(GEOBusinessHours *)arg1 ;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)setHoursBuilder:(_MKLocalizedHoursBuilder *)arg1 ;
-(unsigned long long)placeHoursViewOptions;
-(void)setPlaceHoursViewOptions:(unsigned long long)arg1 ;
-(_MKLocalizedHoursBuilder *)hoursBuilder;
-(id)initWithBusinessHours:(id)arg1 ;
-(void)setHoursDelegate:(id<MKPlaceHoursViewDelegate>)arg1 ;
-(_MKUILabel *)topLabel;
-(id)_standardLabel;
-(BOOL)_shouldCollapseTopMessageLabel;
-(void)_updateHoursView;
-(id)hoursGrayColor;
-(void)applyRulesForTopAndBottomLabel;
-(void)_collapseAllLabelsFromOptions;
-(NSDictionary *)formattedHoursData;
-(void)_updateOptionsForCollapsingToSingleLineAndColor;
-(void)setTopLabel:(_MKUILabel *)arg1 ;
-(id<MKPlaceHoursViewDelegate>)hoursDelegate;
-(BOOL)wantsDefaultClipping;
-(void)setFormattedHoursData:(NSDictionary *)arg1 ;
@end

