/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PPCalendar, NSDate, NSURL, NSArray, CLLocation;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying> {

	char _availability;
	unsigned char _eventFlags;
	unsigned char _suggestedEventCategory;
	NSString* _eventIdentifier;
	NSString* _title;
	NSString* _location;
	PPCalendar* _calendar;
	NSDate* _startDate;
	NSDate* _endDate;
	NSURL* _externalURI;
	NSArray* _attendees;
	NSString* _organizerName;
	NSString* _notes;
	NSURL* _url;
	NSString* _structuredLocationTitle;
	NSString* _structuredLocationAddress;
	CLLocation* _structuredLocationCoordinates;

}

@property (nonatomic,readonly) NSString * eventIdentifier;                              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) PPCalendar * calendar;                                   //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) char availability;                                       //@synthesize availability=_availability - In the implementation block
@property (nonatomic,readonly) NSURL * externalURI;                                     //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,readonly) NSArray * attendees;                                     //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,readonly) NSString * organizerName;                                //@synthesize organizerName=_organizerName - In the implementation block
@property (nonatomic,readonly) unsigned char eventFlags;                                //@synthesize eventFlags=_eventFlags - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * structuredLocationTitle;                      //@synthesize structuredLocationTitle=_structuredLocationTitle - In the implementation block
@property (nonatomic,readonly) NSString * structuredLocationAddress;                    //@synthesize structuredLocationAddress=_structuredLocationAddress - In the implementation block
@property (nonatomic,readonly) CLLocation * structuredLocationCoordinates;              //@synthesize structuredLocationCoordinates=_structuredLocationCoordinates - In the implementation block
@property (nonatomic,readonly) unsigned char suggestedEventCategory;                    //@synthesize suggestedEventCategory=_suggestedEventCategory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForSuggestedEventCategory:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPCalendar *)calendar;
-(NSURL *)url;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(NSString *)eventIdentifier;
-(char)availability;
-(NSString *)location;
-(unsigned char)eventFlags;
-(NSString *)notes;
-(NSURL *)externalURI;
-(NSArray *)attendees;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)initWithEKEvent:(id)arg1 calendarInternPool:(id)arg2 ;
-(id)initWithEventIdentifier:(id)arg1 title:(id)arg2 location:(id)arg3 calendar:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 availability:(char)arg7 externalURI:(id)arg8 attendees:(id)arg9 organizerName:(id)arg10 eventFlags:(unsigned char)arg11 notes:(id)arg12 url:(id)arg13 structuredLocationTitle:(id)arg14 structuredLocationAddress:(id)arg15 structuredLocationCoordinates:(id)arg16 suggestedEventCategory:(unsigned char)arg17 ;
-(BOOL)representsUnscheduledFreeTime;
-(BOOL)organizerIsCurrentUser;
-(BOOL)isStructuredEvent;
-(BOOL)isNLEvent;
-(unsigned char)_suggestedEventCategoryFromMetaData:(id)arg1 ;
-(NSString *)organizerName;
-(NSString *)structuredLocationTitle;
-(NSString *)structuredLocationAddress;
-(CLLocation *)structuredLocationCoordinates;
-(unsigned char)suggestedEventCategory;
@end

