/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSMutableDictionary, HMDHome, NSNotificationCenter, NSObject, NSSet, NSUUID, NSString;

@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject <HMFMessageReceiver, HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _groupRecords;
	HMDHome* _home;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                     //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSSet * activeGroups; 
@property (copy,readonly) NSSet * persistedGroups; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(HMDHome *)home;
-(NSNotificationCenter *)notificationCenter;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_registerForMessages;
-(void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2 ;
-(id)initWithHome:(id)arg1 notificationCenter:(id)arg2 ;
-(void)handleAddedAccessory:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistedGroups:(id)arg3 ;
-(NSSet *)persistedGroups;
-(NSSet *)activeGroups;
-(long long)targetProtectionModeForGroupWithUUID:(id)arg1 ;
-(id)groupRecordWithUUID:(id)arg1 ;
-(void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg1 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3 requestMessage:(id)arg4 ;
-(void)addActiveSurrogateGroupForAccessory:(id)arg1 shouldNotifyChange:(BOOL)arg2 ;
-(BOOL)_evaluateActiveStatusForGroupWithUUID:(id)arg1 ;
-(void)_setupProtectionGroupForAccessory:(id)arg1 shouldNotifyChange:(BOOL)arg2 ;
-(void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg1 ;
-(void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg1 ;
-(void)_registerForAccessoryChanges:(id)arg1 ;
-(BOOL)_updateGroupWithUUID:(id)arg1 active:(BOOL)arg2 ;
-(id)groupWithUUID:(id)arg1 ;
-(id)markGroupWithUUID:(id)arg1 active:(BOOL)arg2 ;
-(void)notifyClientsOfAddedGroup:(id)arg1 ;
-(void)notifyClientsOfRemovedGroup:(id)arg1 ;
-(BOOL)addActiveSurrogateGroup:(id)arg1 ;
-(void)_setupActiveGroupsForHome;
-(id)removeGroupWithUUID:(id)arg1 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3 ;
-(id)accessoriesForGroupWithUUID:(id)arg1 ;
@end

