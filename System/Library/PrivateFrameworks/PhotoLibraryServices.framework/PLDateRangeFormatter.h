/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLocale, NSTimeZone, NSDateFormatter;

@interface PLDateRangeFormatter : NSObject {

	os_unfair_lock_s _lock;
	long long _preset;
	NSLocale* _locale;
	BOOL _useLocalDates;
	NSTimeZone* _timeZone;
	BOOL _includeDayNumbers;
	BOOL _includeDayNumbersWhenMonthsDiffer;
	BOOL _useRelativeDayFormatting;
	BOOL _useShortMonths;
	BOOL _useShortDaysInRanges;
	BOOL _useTime;
	BOOL _yearOnly;
	BOOL _monthOnly;
	BOOL _timeOnly;
	BOOL _omitYear;
	BOOL _monthWithDelimiterAndYear;
	NSDateFormatter* _sameDayDateFormatter;
	NSDateFormatter* _sameDayNoYearDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	NSDateFormatter* _yearDateFormatter;
	NSDateFormatter* _monthDateFormatter;
	NSDateFormatter* _monthYearDateFormatter;
	NSDateFormatter* _relativeDateFormatter;
	UDateIntervalFormatRef _monthDayIntervalFormat;
	UDateIntervalFormatRef _monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef _timeIntervalFormat;
	UDateIntervalFormatRef _monthIntervalFormat;
	UDateIntervalFormatRef _monthYearIntervalFormat;
	UDateIntervalFormatRef _yearIntervalFormat;

}

@property (assign,nonatomic) long long preset; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL useLocalDates; 
+(id)autoupdatingFormatterWithPreset:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localTimeZone;
-(id)stringFromDate:(id)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)_resetFormatters;
-(id)_relativeDateFormatter;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)initWithPreset:(long long)arg1 ;
-(void)setUseLocalDates:(BOOL)arg1 ;
-(id)_sameDayDateFormatter;
-(id)_sameDayNoYearDateFormatter;
-(id)_dayOfTheWeekDateFormatter;
-(id)_yearDateFormatter;
-(id)_monthDateFormatter;
-(id)_monthYearDateFormatter;
-(UDateIntervalFormatRef)_monthDayIntervalFormat;
-(UDateIntervalFormatRef)_monthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_dayOfTheWeekIntervalFormat;
-(UDateIntervalFormatRef)_timeIntervalFormat;
-(UDateIntervalFormatRef)_monthIntervalFormat;
-(UDateIntervalFormatRef)_monthYearIntervalFormat;
-(UDateIntervalFormatRef)_yearIntervalFormat;
-(void)_systemTimeZoneDidChange:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_handlePresetDidChange;
-(void)_handleUseLocalDatesDidChange;
-(id)_sameMonthTemplate;
-(id)_dayTemplate;
-(id)_dayDifferentMonthsTemplate;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(long long)preset;
-(void)setPreset:(long long)arg1 ;
-(BOOL)useLocalDates;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
@end

