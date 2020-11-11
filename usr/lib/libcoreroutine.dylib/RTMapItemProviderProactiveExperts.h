/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTPersonalizationPortraitManager, RTMapServiceManager, RTMapItemProviderProactiveExpertsParameters, NSString;

@interface RTMapItemProviderProactiveExperts : RTMapItemProviderBase <RTMapItemProvider> {

	RTPersonalizationPortraitManager* _personalizationPortraitManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderProactiveExpertsParameters* _parameters;

}

@property (nonatomic,retain) RTPersonalizationPortraitManager * personalizationPortraitManager;              //@synthesize personalizationPortraitManager=_personalizationPortraitManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderProactiveExpertsParameters * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderProactiveExpertsParameters *)parameters;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 personalizationPortraitManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 parameters:(id)arg4 personalizationPortraitManager:(id)arg5 ;
-(id)_recentLocationsFrom:(id)arg1 error:(id*)arg2 ;
-(id)_filterConnectionLocations:(id)arg1 location:(id)arg2 distance:(double)arg3 error:(id*)arg4 ;
-(id)_mapItemsWithConnectionsLocations:(id)arg1 options:(id)arg2 ;
-(RTPersonalizationPortraitManager *)personalizationPortraitManager;
-(void)setPersonalizationPortraitManager:(RTPersonalizationPortraitManager *)arg1 ;
@end

