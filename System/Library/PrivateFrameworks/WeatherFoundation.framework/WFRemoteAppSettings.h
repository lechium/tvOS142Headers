/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL, NSDate;

@interface WFRemoteAppSettings : NSObject <WFSettings> {

	float _dataSamplingRate;
	float _telemetrySamplingRate;
	NSString* _apiVersion;
	NSString* _apiVersionFallback;
	NSSet* _aqiEnabledCountryCodes;
	unsigned long long _networkFailedAttemptsLimit;
	unsigned long long _networkSwitchExpirationTimeInSeconds;
	unsigned long long _locationNumDecimalsOfPrecision;
	WFWeatherEventsConfig* _weatherEventsConfig;
	NSDictionary* _widgetRefreshPolicy;
	NSURL* _appAnalyticsEndpointUrl;
	double _userIdentifierResetTimeInterval;
	double _privateUserIdentifierResetTimeInterval;
	NSDictionary* _config;
	long long _appConfigRefreshRate;
	NSDate* _lastModificationDate;
	NSString* _bundleID;
	NSString* _countryCode;
	unsigned long long _apiConfigModdedHash;
	unsigned long long _apiConfigMinRange;
	unsigned long long _apiConfigMaxRange;

}

@property (nonatomic,readonly) long long appConfigRefreshRate;                                       //@synthesize appConfigRefreshRate=_appConfigRefreshRate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModificationDate;                                        //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) unsigned long long apiConfigModdedHash;                               //@synthesize apiConfigModdedHash=_apiConfigModdedHash - In the implementation block
@property (nonatomic,readonly) unsigned long long apiConfigMinRange;                                 //@synthesize apiConfigMinRange=_apiConfigMinRange - In the implementation block
@property (nonatomic,readonly) unsigned long long apiConfigMaxRange;                                 //@synthesize apiConfigMaxRange=_apiConfigMaxRange - In the implementation block
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) NSDictionary * config;                                                //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSString * apiVersion;                                                //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes;                                       //@synthesize aqiEnabledCountryCodes=_aqiEnabledCountryCodes - In the implementation block
@property (nonatomic,readonly) NSString * apiVersionFallback;                                        //@synthesize apiVersionFallback=_apiVersionFallback - In the implementation block
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit;                        //@synthesize networkFailedAttemptsLimit=_networkFailedAttemptsLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds;              //@synthesize networkSwitchExpirationTimeInSeconds=_networkSwitchExpirationTimeInSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision;                    //@synthesize locationNumDecimalsOfPrecision=_locationNumDecimalsOfPrecision - In the implementation block
@property (nonatomic,readonly) WFWeatherEventsConfig * weatherEventsConfig;                          //@synthesize weatherEventsConfig=_weatherEventsConfig - In the implementation block
@property (nonatomic,readonly) NSDictionary * widgetRefreshPolicy;                                   //@synthesize widgetRefreshPolicy=_widgetRefreshPolicy - In the implementation block
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl;                                      //@synthesize appAnalyticsEndpointUrl=_appAnalyticsEndpointUrl - In the implementation block
@property (nonatomic,readonly) float dataSamplingRate;                                               //@synthesize dataSamplingRate=_dataSamplingRate - In the implementation block
@property (nonatomic,readonly) float telemetrySamplingRate;                                          //@synthesize telemetrySamplingRate=_telemetrySamplingRate - In the implementation block
@property (nonatomic,readonly) double userIdentifierResetTimeInterval;                               //@synthesize userIdentifierResetTimeInterval=_userIdentifierResetTimeInterval - In the implementation block
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval;                        //@synthesize privateUserIdentifierResetTimeInterval=_privateUserIdentifierResetTimeInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSettings;
+(BOOL)useInternalBundleID;
+(BOOL)wfSeedBuild;
+(id)bundleIDsListFor:(id)arg1 useInternalBundleID:(BOOL)arg2 useSeedBundleID:(BOOL)arg3 ;
+(id)configurationWithData:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4 error:(id*)arg5 ;
+(BOOL)wfInternalBuild;
+(id)configurationWithData:(id)arg1 userID:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)countryCode;
-(NSString *)bundleID;
-(NSDictionary *)config;
-(BOOL)isExpired;
-(NSDate *)lastModificationDate;
-(NSString *)apiVersion;
-(id)initWithConfigDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4 ;
-(id)getEnvironmentSpecificConfigDictionaryFromDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 ;
-(id)getAPIVersionFromDictionary:(id)arg1 userID:(id)arg2 ;
-(id)getSpecificConfigFromConfigs:(id)arg1 configSpecifiers:(id)arg2 specifierKey:(id)arg3 ;
-(BOOL)shouldUseAPIVersionFromDictionary:(id)arg1 userID:(id)arg2 ;
-(NSSet *)aqiEnabledCountryCodes;
-(long long)appConfigRefreshRate;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(NSString *)apiVersionFallback;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSDictionary *)widgetRefreshPolicy;
-(NSURL *)appAnalyticsEndpointUrl;
-(float)dataSamplingRate;
-(float)telemetrySamplingRate;
-(double)userIdentifierResetTimeInterval;
-(double)privateUserIdentifierResetTimeInterval;
-(BOOL)aqiEnabledForCountryCode:(id)arg1 ;
-(unsigned long long)apiConfigModdedHash;
-(unsigned long long)apiConfigMinRange;
-(unsigned long long)apiConfigMaxRange;
@end

