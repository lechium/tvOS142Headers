/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/HMDAccountManager.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/IDSAccountDelegate.h>
#import <libobjc.A.dylib/IDSAccountRegistrationDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class HMDBackingStore, HMFUnfairLock, NSObject, HMDAccount, HMDAppleAccountContext, ACAccountStore, APSConnection, HMFExponentialBackoffTimer, HMFTimer, IDSService, HMDIDSActivityMonitorBroadcaster, HMDCloudCache, HMDDevice, HMDAppleAccountSettings, NSString, NSUUID;

@interface HMDAppleAccountManager : HMFObject <APSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, IDSServiceDelegate> {

	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _monitoring;
	BOOL _rapportIdentitiesChangedNotificationTokenValid;
	int _rapportIdentitiesChangedNotificationToken;
	HMDAccount* _account;
	HMDAppleAccountContext* _accountContext;
	ACAccountStore* _accountStore;
	APSConnection* _pushConnection;
	HMFExponentialBackoffTimer* _accountChangeBackoffTimer;
	HMFTimer* _devicesChangeBackoffTimer;
	IDSService* _service;
	HMDIDSActivityMonitorBroadcaster* _activityBroadcaster;
	HMDBackingStore* _backingStore;
	HMDCloudCache* _cloudCache;

}

@property (nonatomic,readonly) APSConnection * pushConnection;                                                                                         //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,readonly) HMFExponentialBackoffTimer * accountChangeBackoffTimer;                                                                 //@synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer - In the implementation block
@property (nonatomic,readonly) HMFTimer * devicesChangeBackoffTimer;                                                                                   //@synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                                                                                      //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,nonatomic) int rapportIdentitiesChangedNotificationToken;                                                                            //@synthesize rapportIdentitiesChangedNotificationToken=_rapportIdentitiesChangedNotificationToken - In the implementation block
@property (assign,getter=isRapportIdentitiesChangedNotificationTokenValid,nonatomic) BOOL rapportIdentitiesChangedNotificationTokenValid;              //@synthesize rapportIdentitiesChangedNotificationTokenValid=_rapportIdentitiesChangedNotificationTokenValid - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                                                                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) HMDIDSActivityMonitorBroadcaster * activityBroadcaster;                                                                 //@synthesize activityBroadcaster=_activityBroadcaster - In the implementation block
@property (retain) HMDAccount * account;                                                                                                               //@synthesize account=_account - In the implementation block
@property (readonly) HMDAppleAccountContext * accountContext;                                                                                          //@synthesize accountContext=_accountContext - In the implementation block
@property (nonatomic,retain) HMDBackingStore * backingStore;                                                                                           //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) HMDCloudCache * cloudCache;                                                                                               //@synthesize cloudCache=_cloudCache - In the implementation block
@property (readonly) HMDDevice * device; 
@property (nonatomic,readonly) HMDAppleAccountSettings * settings; 
@property (readonly) ACAccountStore * accountStore;                                                                                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(void)start;
-(void)stop;
-(IDSService *)service;
-(HMDDevice *)device;
-(HMDAppleAccountSettings *)settings;
-(BOOL)isMonitoring;
-(ACAccountStore *)accountStore;
-(HMDAccount *)account;
-(void)setAccount:(HMDAccount *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(HMDCloudCache *)cloudCache;
-(void)timerDidFire:(id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(APSConnection *)pushConnection;
-(HMDIDSActivityMonitorBroadcaster *)activityBroadcaster;
-(HMDAppleAccountContext *)accountContext;
-(void)setCloudCache:(HMDCloudCache *)arg1 ;
-(BOOL)shouldCacheAccount:(id)arg1 ;
-(id)primaryHandleForAccount:(id)arg1 ;
-(BOOL)shouldSyncAccount:(id)arg1 ;
-(BOOL)shouldSyncDevice:(id)arg1 ;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3 ;
-(id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2 ;
-(HMFExponentialBackoffTimer *)accountChangeBackoffTimer;
-(HMFTimer *)devicesChangeBackoffTimer;
-(BOOL)isRapportIdentitiesChangedNotificationTokenValid;
-(void)setRapportIdentitiesChangedNotificationTokenValid:(BOOL)arg1 ;
-(int)rapportIdentitiesChangedNotificationToken;
-(void)_registerForRapportNotifications;
-(void)_deregisterForRapportNotifications;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3 ;
-(void)__localDataReset:(id)arg1 ;
-(void)__handleModifiedAccount:(id)arg1 ;
-(void)__handleRemovedAccount:(id)arg1 ;
-(void)__handleUpdatedName:(id)arg1 ;
-(void)__handleMigrationUpdated:(id)arg1 ;
-(void)__deviceAddedToCurrentAccount:(id)arg1 ;
-(void)__deviceRemovedFromCurrentAccount:(id)arg1 ;
-(BOOL)isModelCurrentAccount:(id)arg1 ;
-(void)processAccountModel:(id)arg1 message:(id)arg2 ;
-(void)processAccountModelRemove:(id)arg1 message:(id)arg2 ;
-(void)setRapportIdentitiesChangedNotificationToken:(int)arg1 ;
@end

