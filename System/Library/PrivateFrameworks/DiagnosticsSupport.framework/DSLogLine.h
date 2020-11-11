/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSArray;

@interface DSLogLine : NSObject {

	BOOL _isUsable;
	NSString* _type;
	NSDate* _date;
	NSString* _exception;
	NSArray* _fields;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL isUsable;                     //@synthesize isUsable=_isUsable - In the implementation block
@property (nonatomic,readonly) NSString * exception;              //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSArray * fields;                  //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(id)logLinesFromArray:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)type;
-(NSArray *)fields;
-(NSString *)bundleID;
-(BOOL)isUsable;
-(NSString *)exception;
-(id)initWithLogLine:(id)arg1 ;
-(int)integerFromFieldAtIndex:(int)arg1 ;
-(id)initWithLine:(id)arg1 ;
-(long long)longLongFromFieldAtIndex:(int)arg1 ;
-(double)doubleFromFieldAtIndex:(int)arg1 ;
-(BOOL)boolFromFieldAtIndex:(int)arg1 ;
-(id)blankingStringFromFieldAtIndex:(int)arg1 ;
-(id)nilableStringFromFieldAtIndex:(int)arg1 ;
@end

