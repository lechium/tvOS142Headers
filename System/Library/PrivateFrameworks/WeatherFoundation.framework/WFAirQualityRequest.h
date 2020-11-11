/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAirQualityRequest : WFTask {

	BOOL _attachRawAPIData;
	NSLocale* _locale;
	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                  //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) id completionHandler;                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;              //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
+(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)cleanup;
-(id)options;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)attachRawAPIData;
-(void)startWithService:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
@end

