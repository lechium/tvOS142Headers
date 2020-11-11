//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockTransport : NSObject <IDSServiceDelegate>
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    id <SDAutoUnlockTransportClient> _primaryClient;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    IDSService *_activityService;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_transportQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
    NSMapTable *_clientMap;	// 72 = 0x48
    NSMutableDictionary *_completionHandlers;	// 80 = 0x50
    NSMutableDictionary *_sendIdentifierToSessionID;	// 88 = 0x58
    NSMutableDictionary *_sendDates;	// 96 = 0x60
    NSDate *_lastSendDate;	// 104 = 0x68
    NSMutableDictionary *_autoUnlockDeviceCache;	// 112 = 0x70
    NSMutableDictionary *_cloudPairRetryRecords;	// 120 = 0x78
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 128 = 0x80
    NSSet *_cachedApproveBluetoothIDs;	// 136 = 0x88
}

+ (id)sharedTransport;	// IMP=0x0000000100138218
- (void).cxx_destruct;	// IMP=0x000000010013fd4c
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)state;	// IMP=0x000000010013f85c
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x000000010013f5d4
- (_Bool)disableEncryption;	// IMP=0x000000010013f5ac
- (_Bool)showOtherDevices;	// IMP=0x000000010013f584
- (_Bool)showIDInName;	// IMP=0x000000010013f55c
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x000000010013ee70
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010013ebc8
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x000000010013e89c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010013e1d4
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010013e00c
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010013ded8
- (id)dataFromUUID:(id)arg1;	// IMP=0x000000010013de5c
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010013dd68
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000010013d648
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010013d55c
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000010013d3fc
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010013d334
- (void)loadCloudPairRetries;	// IMP=0x000000010013d264
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x000000010013d018
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x000000010013ccb8
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x000000010013ccb4
- (id)connectionCacheDevices;	// IMP=0x000000010013cb54
- (_Bool)localDeviceIDSRegistered;	// IMP=0x000000010013c954
- (_Bool)activityServiceHasWatch;	// IMP=0x000000010013c754
- (id)placeholderDevice;	// IMP=0x000000010013c5f4
- (void)updateBluetoothIDCache;	// IMP=0x000000010013c324
- (void)logBluetoothIDCache;	// IMP=0x000000010013c258
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013c1d8
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013bfe8
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x000000010013be30
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x000000010013bc78
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x000000010013bb8c
- (id)nameForDevice:(id)arg1;	// IMP=0x000000010013ba90
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x000000010013b874
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x000000010013b75c
- (id)modelNameForDevice:(id)arg1;	// IMP=0x000000010013b6e4
- (void)updateApproveBluetoothIDs;	// IMP=0x000000010013b3d4
- (id)approveBluetoothIDs;	// IMP=0x000000010013b32c
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x000000010013ac48
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x000000010013ac34
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013a8c8
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013a784
- (id)enabledAutoUnlockDevices;	// IMP=0x000000010013a774
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1;	// IMP=0x000000010013a014
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1;	// IMP=0x0000000100139ed0
- (id)autoUnlockEligibleDevices;	// IMP=0x0000000100139ec0
- (id)onqueue_devicesWithLTKs;	// IMP=0x0000000100139cbc
- (id)devicesWithLTKs;	// IMP=0x0000000100139b70
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x0000000100139af0
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x0000000100139ae0
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x0000000100139a74
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x0000000100139a20
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x00000001001398b0
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x0000000100139858
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x0000000100139804
- (id)idsMacDeviceIDs;	// IMP=0x00000001001395fc
- (id)idsDevicesIDs;	// IMP=0x000000010013946c
- (_Bool)deviceNearby;	// IMP=0x0000000100139420
- (_Bool)isDeviceSatellitePaired;	// IMP=0x0000000100139328
- (id)activeDevice;	// IMP=0x00000001001391c0
- (id)pairedDeviceID;	// IMP=0x000000010013916c
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x0000000100138fb8
- (id)bluetoothDeviceIdentifiers;	// IMP=0x0000000100138e74
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x0000000100138ca4
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x0000000100138aa8
- (void)clearAutoUnlockDeviceCache;	// IMP=0x0000000100138a08
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x00000001001389c8
- (void)logDevices;	// IMP=0x00000001001388d4
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x00000001001385a0
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x0000000100138470
- (id)init;	// IMP=0x0000000100138284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
