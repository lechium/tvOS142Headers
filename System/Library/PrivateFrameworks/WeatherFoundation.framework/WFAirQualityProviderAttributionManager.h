/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSMutableDictionary, WFAirQualityProviderAttribution;

@interface WFAirQualityProviderAttributionManager : NSObject {

	os_unfair_lock_s _dataSynchronizationLock;
	NSMutableDictionary* _attributionCache;

}

@property (assign,nonatomic) os_unfair_lock_s dataSynchronizationLock;                                    //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributionCache;                                      //@synthesize attributionCache=_attributionCache - In the implementation block
@property (nonatomic,readonly) WFAirQualityProviderAttribution * defaultProviderAttribution; 
+(id)sharedManager;
-(id)init;
-(void)setDataSynchronizationLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)dataSynchronizationLock;
-(id)p_archivedDataForProviderAttribution:(id)arg1 ;
-(NSMutableDictionary *)attributionCache;
-(void)p_updateCacheWithProviderAttribution:(id)arg1 ;
-(id)cachedAttributionForProvider:(id)arg1 ;
-(WFAirQualityProviderAttribution *)defaultProviderAttribution;
-(void)registerProviderAttribution:(id)arg1 ;
-(void)loadAttributionForProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAttributionCache:(NSMutableDictionary *)arg1 ;
@end

