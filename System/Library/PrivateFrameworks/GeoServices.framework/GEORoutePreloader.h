/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileLoaderObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, GEOComposedRoute, GEOApplicationAuditToken, geo_isolater, NSString;

@interface GEORoutePreloader : NSObject <GEOTileLoaderObserver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSArray* _strategies;
	GEOComposedRoute* _route;
	BOOL _running;
	unsigned long long _networkQuality;
	GEOOnce_s _didTearDown;
	GEOApplicationAuditToken* _auditToken;
	geo_isolater* _deviceQualitiesIsolation;
	int _batteryNotificationToken;
	BOOL _pluggedIn;
	geo_isolater* _statisticsIsolation;
	unsigned long long _statisticsCounts[5];
	unsigned long long _tilesUsed;
	unsigned long long _nonPreloadedTilesLoadedFromNetwork;
	unsigned long long _nonPreloadedTilesFailed;
	BOOL _hasStartedStatistics;
	double _statisticsStartMonotonicTimestamp;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) unsigned long long networkQuality; 
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(GEOApplicationAuditToken *)auditToken;
-(void)_start;
-(void)tearDown;
-(void)tileLoader:(id)arg1 loadedTileKey:(const GEOTileKey*)arg2 fromSource:(long long)arg3 withOptions:(unsigned long long)arg4 ;
-(void)tileLoader:(id)arg1 failedTileKey:(const GEOTileKey*)arg2 error:(id)arg3 withOptions:(unsigned long long)arg4 ;
-(id)initWithRoute:(id)arg1 strategies:(id)arg2 auditToken:(id)arg3 ;
-(void)_performTearDown;
-(void)_unregisterForNetworkQualityObservation;
-(void)_unregisterForBatteryStatusChanges;
-(void)_finalizeStatistics;
-(void)_stop;
-(void)_registerForNetworkQualityObservation;
-(void)_registerForBatteryStatusChanges;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_updateObservedNetworkPerformanceForDownload:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)_updateBatteryState;
-(id)initWithRoute:(id)arg1 strategies:(id)arg2 ;
-(unsigned long long)networkQuality;
-(void)updateObservedNetworkPerformanceForDownload:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)updateObservedNetworkPerformanceWithServerError;
-(BOOL)isPluggedIn;
-(void)incrementTileLoadStatistic:(long long)arg1 amount:(unsigned long long)arg2 ;
@end

