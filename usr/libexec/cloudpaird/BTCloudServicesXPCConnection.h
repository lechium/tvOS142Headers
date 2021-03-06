//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTCloudServicesXPCDaemonInterface-Protocol.h"

@class BTUserCloudServicesDaemon, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BTCloudServicesXPCConnection : NSObject <BTCloudServicesXPCDaemonInterface>
{
    _Bool _direct;	// 8 = 0x8
    _Bool _entitled;	// 9 = 0x9
    BTUserCloudServicesDaemon *_daemon;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSXPCConnection *_xpcCnx;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000287c4
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(retain, nonatomic) BTUserCloudServicesDaemon *daemon; // @synthesize daemon=_daemon;
- (void)fetchCloudPairingIdentifierForPeripheral:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000280e0
- (void)fetchCloudAccountInfoUpdatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027d38
- (void)modifyMagicSettingsRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000279e8
- (void)fetchAllMagicSettingsRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000275e0
- (void)fetchMagicSettingsRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000271b8
- (void)deleteMagicSettingsRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026e68
- (void)createMagicSettingsRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026b18
- (void)modifyDeviceSupportInformationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000267c8
- (void)fetchAllBTCloudDeviceSupportInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000263c0
- (void)fetchBTCloudDeviceSupportInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025f98
- (void)deleteDeviceSupportInformationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025c48
- (void)createDeviceSupportInformationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000258fc
- (void)fetchDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000254bc
- (void)fetchDeviceRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025094
- (void)deleteDeviceRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024d44
- (void)modifyDeviceRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024c84
- (void)createDeviceRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002491c
- (void)xpcConnectionInvalidated;	// IMP=0x0000000100024918
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x000000010002478c

@end

