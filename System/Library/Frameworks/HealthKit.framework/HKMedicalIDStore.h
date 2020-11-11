/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, _HKMedicalIDData, NSString;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKTaskServerProxyProvider* _setupStatusProxyProvider;
	_HKMedicalIDData* _lastFetchedMedicalIDData;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) long long medicalIDSetUpStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)serverInterface;
+(id)clientInterface;
+(id)setupStatusTaskIdentifier;
+(id)setupStatusClientInterface;
+(id)setupStatusServerInterface;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastFetchedMedicalIDData:(id)arg1 ;
-(id)lastFetchedMedicalIDData;
-(long long)medicalIDSetUpStatus;
-(void)fetchMedicalIDClinicalContactsWithCompletion:(/*^block*/id)arg1 ;
@end

