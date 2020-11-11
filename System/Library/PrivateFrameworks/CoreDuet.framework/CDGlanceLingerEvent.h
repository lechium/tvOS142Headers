/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface CDGlanceLingerEvent : NSObject {

	NSString* _bundle;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSString * bundle;               //@synthesize bundle=_bundle - In the implementation block
@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)description;
-(NSString *)bundle;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setBundle:(NSString *)arg1 ;
@end

