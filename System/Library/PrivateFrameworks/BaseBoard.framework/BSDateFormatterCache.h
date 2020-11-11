/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDateFormatter, NSNumberFormatter, NSDateComponentsFormatter;

@interface BSDateFormatterCache : NSObject {

	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayOfWeekWithMonthDayFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _multiLineDayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSDateFormatter* _longYMDHMSZFormatter;
	NSDateFormatter* _longYMDHMSZPosixLocaleFormatter;
	NSDateFormatter* _longYMDHMSNoSpaceFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateComponentsFormatter* _abbreviatedTimerFormatter;
	NSDateComponentsFormatter* _alarmSnoozeFormatter;

}
+(id)sharedInstance;
+(id)formatterForDateAsTimeNoAMPMWithLocale:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)resetFormatters:(id)arg1 ;
-(void)_resetFormatters;
-(void)resetFormattersIfNecessary;
-(id)formatNumberAsDecimal:(id)arg1 ;
-(id)formatDateAsDayOfWeek:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1 ;
-(id)formatDateAsDayMonthYearStyle:(id)arg1 ;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)arg1 ;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZWithDate:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg1 ;
-(id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1 ;
-(id)formatDateAsRelativeDateStyle:(id)arg1 ;
-(id)formatTimerDuration:(double)arg1 ;
-(id)formatAbbreviatedTimerDuration:(double)arg1 ;
-(id)formatAlarmSnoozeDuration:(double)arg1 ;
-(BOOL)supportsMultiLineDayOfWeekMonthDayStyle;
@end

