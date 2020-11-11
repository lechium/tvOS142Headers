/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDateComponents, NSDate, NSTimeZone, NSCalendar;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding> {

	NSArray* _recurrences;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;
	NSDate* _fireDate;
	NSTimeZone* _timeZone;
	NSDateComponents* _recurrence;
	NSCalendar* _recurrenceCalendar;

}

@property (nonatomic,copy) NSDate * fireDate;                                               //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSDateComponents * recurrence;                                   //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,copy,readonly) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recurrences;                                  //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * recurrenceCalendar;                        //@synthesize recurrenceCalendar=_recurrenceCalendar - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDateComponents *)recurrence;
-(void)setRecurrence:(NSDateComponents *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)significantEvent;
-(void)updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateTimerTriggerWithResponse:(/*^block*/id)arg1 payloadToSend:(id)arg2 ;
-(void)_updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateSignificantEventOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateTimerTriggerPropertiesFromResponse:(id)arg1 ;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4 ;
-(id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4 ;
-(void)updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSignificantEventOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSCalendar *)recurrenceCalendar;
@end

