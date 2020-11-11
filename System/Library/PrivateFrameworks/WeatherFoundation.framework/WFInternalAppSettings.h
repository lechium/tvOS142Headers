/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes; 
@property (nonatomic,readonly) NSString * apiVersionFallback; 
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit; 
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds; 
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision; 
@property (nonatomic,readonly) WFWeatherEventsConfig * weatherEventsConfig; 
@property (nonatomic,readonly) NSDictionary * widgetRefreshPolicy; 
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl; 
@property (nonatomic,readonly) float dataSamplingRate; 
@property (nonatomic,readonly) float telemetrySamplingRate; 
@property (nonatomic,readonly) double userIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)apiVersion;
-(NSSet *)aqiEnabledCountryCodes;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(NSString *)apiVersionFallback;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSURL *)appAnalyticsEndpointUrl;
-(float)dataSamplingRate;
-(float)telemetrySamplingRate;
-(double)userIdentifierResetTimeInterval;
-(double)privateUserIdentifierResetTimeInterval;
@end

