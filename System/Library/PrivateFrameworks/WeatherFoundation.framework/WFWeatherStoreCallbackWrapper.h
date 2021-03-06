/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFWeatherStoreCallbackWrapper : NSObject {

	unsigned long long _requestType;
	/*^block*/id _forecastRetrievalCompletionBlock;
	/*^block*/id _aqiScaleRetrievalCompletionBlock;

}

@property (assign,nonatomic) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id forecastRetrievalCompletionBlock;              //@synthesize forecastRetrievalCompletionBlock=_forecastRetrievalCompletionBlock - In the implementation block
@property (nonatomic,copy) id aqiScaleRetrievalCompletionBlock;              //@synthesize aqiScaleRetrievalCompletionBlock=_aqiScaleRetrievalCompletionBlock - In the implementation block
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setForecastRetrievalCompletionBlock:(id)arg1 ;
-(void)setAqiScaleRetrievalCompletionBlock:(id)arg1 ;
-(id)forecastRetrievalCompletionBlock;
-(id)aqiScaleRetrievalCompletionBlock;
-(id)initWithForecastRetrievalBlock:(/*^block*/id)arg1 ;
-(id)initWithAQIScaleRetrievalBlock:(/*^block*/id)arg1 ;
-(void)executeCallbackwithResponse:(id)arg1 error:(id)arg2 ;
@end

