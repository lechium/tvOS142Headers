//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTDeviceInformationAdapter-Protocol.h"

@class CKKSListenerCollection;

__attribute__((visibility("hidden")))
@interface OTDeviceInformationActualAdapter : NSObject <OTDeviceInformationAdapter>
{
    CKKSListenerCollection *_deviceNameUpdateListeners;	// 8 = 0x8
    struct __SCDynamicStore *_store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100033f50
@property struct __SCDynamicStore *store; // @synthesize store=_store;
@property(retain) CKKSListenerCollection *deviceNameUpdateListeners; // @synthesize deviceNameUpdateListeners=_deviceNameUpdateListeners;
- (void)setupDeviceNameListener;	// IMP=0x0000000100033d7c
- (id)serialNumber;	// IMP=0x0000000100033c88
- (id)osVersion;	// IMP=0x0000000100033c84
- (void)registerForDeviceNameUpdates:(id)arg1;	// IMP=0x0000000100033bcc
- (id)deviceName;	// IMP=0x0000000100033ba0
- (id)modelID;	// IMP=0x0000000100033b60
- (void)dealloc;	// IMP=0x0000000100033ae8

@end
