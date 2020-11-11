//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol SDUnlockIDSControllerDelegate;

__attribute__((visibility("hidden")))
@interface SDUnlockIDSController : NSObject <IDSServiceDelegate>
{
    id <SDUnlockIDSControllerDelegate> _delegate;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    IDSService *_idsServiceClassA;	// 24 = 0x18
    NSMutableDictionary *_errorHandlers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100046bac
@property(retain) NSMutableDictionary *errorHandlers; // @synthesize errorHandlers=_errorHandlers;
@property(retain) IDSService *idsServiceClassA; // @synthesize idsServiceClassA=_idsServiceClassA;
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDUnlockIDSControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dataClassStringForDataClass:(long long)arg1;	// IMP=0x0000000100046b20
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100046a3c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100046828
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000466a0
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;	// IMP=0x00000001000465d0
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000100046470
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 dataClass:(long long)arg5 queueOneID:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100045f98
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 queueOneID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100045ee4
- (void)sendProtocolBufferData:(id)arg1 withType:(unsigned short)arg2 timeout:(id)arg3 option:(long long)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100045e5c
- (id)activeIDSDevice;	// IMP=0x0000000100045d14
- (_Bool)isDefaultPairedDeviceNearby;	// IMP=0x0000000100045b4c
- (_Bool)hasDefaultDevice;	// IMP=0x0000000100045a10
- (id)init;	// IMP=0x0000000100045850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

