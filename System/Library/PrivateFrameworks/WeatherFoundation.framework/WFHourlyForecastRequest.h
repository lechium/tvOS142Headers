/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFHourlyForecastRequest : WFAggregateForecastRequest {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
