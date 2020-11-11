/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTStoreManager.h>

@class RTDefaultsManager, RTFingerprintStore, RTScenarioTriggerManager, RTWiFiManager, NSDate, NSString;

@interface RTFingerprintManager : RTService <RTPurgable, RTStoreManager> {

	BOOL _available;
	BOOL _fingerprintMonitoringEnabled;
	RTDefaultsManager* _defaultsManager;
	RTFingerprintStore* _fingerprintStore;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTWiFiManager* _wifiManager;
	unsigned long long _accessPointsFetchLimit;
	unsigned long long _accessPointsCollectedPerFingerprint;
	NSDate* _startCollectAccessPoints;
	unsigned long long _settledState;

}

@property (assign,nonatomic) BOOL available;                                                                       //@synthesize available=_available - In the implementation block
@property (assign,getter=isFingerprintMonitoringEnabled,nonatomic) BOOL fingerprintMonitoringEnabled;              //@synthesize fingerprintMonitoringEnabled=_fingerprintMonitoringEnabled - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTFingerprintStore * fingerprintStore;                                              //@synthesize fingerprintStore=_fingerprintStore - In the implementation block
@property (nonatomic,readonly) RTScenarioTriggerManager * scenarioTriggerManager;                                  //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,readonly) RTWiFiManager * wifiManager;                                                        //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) unsigned long long accessPointsFetchLimit;                                            //@synthesize accessPointsFetchLimit=_accessPointsFetchLimit - In the implementation block
@property (assign,nonatomic) unsigned long long accessPointsCollectedPerFingerprint;                               //@synthesize accessPointsCollectedPerFingerprint=_accessPointsCollectedPerFingerprint - In the implementation block
@property (nonatomic,retain) NSDate * startCollectAccessPoints;                                                    //@synthesize startCollectAccessPoints=_startCollectAccessPoints - In the implementation block
@property (assign,nonatomic) unsigned long long settledState;                                                      //@synthesize settledState=_settledState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)vendedClasses;
-(void)_setup;
-(RTWiFiManager *)wifiManager;
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(void)_shutdown;
-(unsigned long long)settledState;
-(void)setSettledState:(unsigned long long)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithDefaultsManager:(id)arg1 fingerprintStore:(id)arg2 scenarioTriggerManager:(id)arg3 wifiManager:(id)arg4 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchWifiAccessPointsForFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFingerprintsInDateInterval:(id)arg1 filteredBySettledState:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)injectFingerprints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)injectWifiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)onWiFiScanNotification:(id)arg1 ;
-(void)setAccessPointsFetchLimit:(unsigned long long)arg1 ;
-(RTFingerprintStore *)fingerprintStore;
-(void)onStoreAvailabilityDidChangeNotification:(id)arg1 ;
-(void)setFingerprintMonitoringEnabled:(BOOL)arg1 ;
-(unsigned long long)accessPointsFetchLimit;
-(void)onSettledNotification:(id)arg1 ;
-(void)onUnsettledNotification:(id)arg1 ;
-(void)setStartCollectAccessPoints:(NSDate *)arg1 ;
-(NSDate *)startCollectAccessPoints;
-(unsigned long long)accessPointsCollectedPerFingerprint;
-(void)setAccessPointsCollectedPerFingerprint:(unsigned long long)arg1 ;
-(BOOL)isFingerprintMonitoringEnabled;
@end

