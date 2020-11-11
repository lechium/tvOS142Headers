/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTEventManager, RTMapServiceManager, RTMapItemProviderEventKitParameters, NSString;

@interface RTMapItemProviderEventKit : RTMapItemProviderBase <RTMapItemProvider> {

	RTEventManager* _eventManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderEventKitParameters* _parameters;

}

@property (nonatomic,retain) RTEventManager * eventManager;                                        //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderEventKitParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderEventKitParameters *)parameters;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(RTEventManager *)eventManager;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 parameters:(id)arg5 ;
@end

