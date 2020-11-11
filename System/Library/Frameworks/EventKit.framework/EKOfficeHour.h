/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSTimeZone;

@interface EKOfficeHour : NSObject <NSCopying> {

	BOOL _enabled;
	long long _weekday;
	NSDate* _startTime;
	NSDate* _endTime;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long weekday;                  //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                   //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(id)initWithEnabled:(BOOL)arg1 weekday:(long long)arg2 startTime:(id)arg3 endTime:(id)arg4 timeZone:(id)arg5 ;
@end

