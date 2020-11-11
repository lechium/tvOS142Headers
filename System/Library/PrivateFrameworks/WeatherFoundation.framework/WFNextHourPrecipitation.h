/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, WFNextHourPrecipitationDescription;

@interface WFNextHourPrecipitation : NSObject <NSCopying> {

	NSDate* _readDate;
	NSDate* _startDate;
	NSDate* _expirationDate;
	NSArray* _minutes;
	NSArray* _precipitationDescriptions;
	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSDate * readDate;                                               //@synthesize readDate=_readDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * minutes;                                               //@synthesize minutes=_minutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * precipitationDescriptions;                             //@synthesize precipitationDescriptions=_precipitationDescriptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conditions;                                            //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) BOOL isRelevant; 
@property (nonatomic,readonly) WFNextHourPrecipitationDescription * currentDescription; 
@property (nonatomic,readonly) NSArray * activeMinutes; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(NSArray *)minutes;
-(NSDate *)startDate;
-(NSArray *)conditions;
-(id)initWithReadDate:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 minutes:(id)arg4 conditions:(id)arg5 descriptions:(id)arg6 ;
-(NSDate *)readDate;
-(BOOL)shouldUseActiveMinutesInNextHourPrecipitation;
-(NSArray *)activeMinutes;
-(BOOL)isRelevant;
-(WFNextHourPrecipitationDescription *)currentDescription;
-(NSArray *)precipitationDescriptions;
@end
