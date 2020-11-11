/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSLocale, NSURL;

@interface WFURLComponents : NSObject <NSSecureCoding, NSCopying> {

	BOOL _showHourlyWeatherOnly;
	BOOL _isLocalWeatherCity;
	unsigned long long _destination;
	CLLocation* _location;
	NSString* _locationName;
	unsigned long long _cityIndex;
	NSLocale* _locale;
	NSString* _platform;

}

@property (assign) BOOL isLocalWeatherCity;                     //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (assign) unsigned long long cityIndex;                //@synthesize cityIndex=_cityIndex - In the implementation block
@property (retain) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (retain) NSString * platform;                         //@synthesize platform=_platform - In the implementation block
@property (assign) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
@property (copy) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (copy) NSString * locationName;                       //@synthesize locationName=_locationName - In the implementation block
@property (assign) BOOL showHourlyWeatherOnly;                  //@synthesize showHourlyWeatherOnly=_showHourlyWeatherOnly - In the implementation block
@property (copy,readonly) NSURL * URL; 
+(BOOL)supportsSecureCoding;
+(id)componentsForURL:(id)arg1 ;
+(void)locationForURLComponents:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)locationForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)componentsForLocation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSURL *)URL;
-(BOOL)isEqualToComponents:(id)arg1 ;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)destination;
-(NSString *)platform;
-(void)setPlatform:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(unsigned long long)cityIndex;
-(void)setShowHourlyWeatherOnly:(BOOL)arg1 ;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(void)setCityIndex:(unsigned long long)arg1 ;
-(BOOL)showHourlyWeatherOnly;
-(BOOL)isLocalWeatherCity;
-(BOOL)_canBuildURLWithProvidedComponents;
@end

