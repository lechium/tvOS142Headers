/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIDatePickerViewComponent;
@class UIView, _UIDatePickerDataModel, NSDate, UIColor, NSString, NSLocale, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

	UIView*<_UIDatePickerViewComponent> _pickerView;
	_UIDatePickerDataModel* _data;
	BOOL _useCurrentDateDuringDecoding;
	long long _preferredDatePickerStyle;

}

@property (assign,nonatomic) double timeInterval; 
@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) BOOL usesBlackChrome; 
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) BOOL drawsBackground; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_dateUnderSelectionBar,nonatomic,readonly) NSDate * dateUnderSelectionBar; 
@property (getter=_contentWidth,nonatomic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,setter=_setUseCurrentDateDuringDecoding:,getter=_useCurrentDateDuringDecoding,nonatomic) BOOL useCurrentDateDuringDecoding; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
@property (setter=_setCustomFontDesign:,getter=_customFontDesign,nonatomic,retain) NSString * customFontDesign; 
@property (assign,nonatomic) long long datePickerMode; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) double countDownDuration; 
@property (assign,nonatomic) long long minuteInterval; 
@property (assign,nonatomic) long long preferredDatePickerStyle;                                                                                           //@synthesize preferredDatePickerStyle=_preferredDatePickerStyle - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(void)setDelegate:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(int)hour;
-(int)minute;
-(int)second;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)_locale;
-(void)setDate:(NSDate *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_highlightColor;
-(id)_textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)dateComponents;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)setPreferredDatePickerStyle:(long long)arg1 ;
-(void)layoutMarginsDidChange;
-(void)awakeFromNib;
-(void)invalidateIntrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_drawsBackground;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(long long)datePickerMode;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTimeInterval:(double)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(double)_contentWidth;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_registerObservers;
-(void)_setHighlightColor:(id)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(long long)minuteInterval;
-(id)_systemDefaultFocusGroupDescriptor;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(id)_textShadowColor;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)_emitValueChanged;
-(void)_emitBeginEditing;
-(void)_emitEndEditing;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(long long)datePickerStyle;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(void)setDateComponents:(id)arg1 ;
-(void)setStaggerTimeIntervals:(BOOL)arg1 ;
-(void)setHighlightsToday:(BOOL)arg1 ;
-(void)_setTextShadowColor:(id)arg1 ;
-(id)_magnifierLineColor;
-(void)_setMagnifierLineColor:(id)arg1 ;
-(id)_customFontDesign;
-(void)_workaround66574039_updateLayoutMargins;
-(void)_installPickerView:(id)arg1 updatingSize:(BOOL)arg2 ;
-(void)_setUpInitialValues;
-(void)_setUseCurrentDateDuringDecoding:(BOOL)arg1 ;
-(BOOL)_useCurrentDateDuringDecoding;
-(void)_datePickerReset:(id)arg1 ;
-(void)_todayChanged:(id)arg1 ;
-(void)_updatePickerViewIfNecessary;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(void)_setCustomFontDesign:(id)arg1 ;
-(void)setDate:(id)arg1 animate:(BOOL)arg2 ;
-(void)_setHighlightsToday:(BOOL)arg1 ;
-(id)_dateUnderSelectionBar;
-(void)_setUsesBlackChrome:(BOOL)arg1 ;
-(BOOL)_usesBlackChrome;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_lastSelectedDateComponents;
-(long long)preferredDatePickerStyle;
@end

