/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString;

@interface _DASLogEntry : NSObject {

	NSDate* _date;
	NSString* _category;
	NSString* _message;

}

@property (nonatomic,retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * message;               //@synthesize message=_message - In the implementation block
+(id)logEntryForDate:(id)arg1 category:(id)arg2 message:(id)arg3 ;
-(id)description;
-(NSDate *)date;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

