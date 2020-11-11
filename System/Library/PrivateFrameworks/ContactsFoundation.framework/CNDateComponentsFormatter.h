/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSLocale, NSArray, NSString;

@interface CNDateComponentsFormatter : NSFormatter {

	NSLocale* _locale;
	NSArray* _lazyFormatterFutures;
	NSString* _dateFormatPlaceholderString;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)os_log;
+(id)shortDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)formatterFuturesWithLocale:(id)arg1 ;
+(BOOL)shouldUseChinaSpecificFormattersForLocale:(id)arg1 ;
+(id)chineseRelatedGregorianYearMonthDayFormatter;
+(id)chineseMonthDayFormatter;
+(id)chineseMonthDayHanidayFormatter;
+(id)chineseCyclicYearMonthDayFormatter;
+(id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+(id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+(id)longDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(BOOL)shouldUseIslamicSpecificFormattersForLocale:(id)arg1 ;
+(id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(BOOL)arg2 locale:(id)arg3 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(void)regenerateFormatterFutures;
-(id)dateFormatPlaceholderStringForLanguage:(id)arg1 ;
-(BOOL)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicGregorianPlaceholderString;
-(BOOL)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicIslamicPlaceholderString;
-(id)dmyFormatString;
-(id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(BOOL)shouldUseChinesePlaceholderString;
-(id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3 ;
-(id)displayFormatterForComponents:(id)arg1 ;
-(id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 ;
-(unsigned long long)componentsToExtract;
-(id)dateFormatPlaceholderString;
-(id)dateComponentsFromString:(id)arg1 ;
@end

