//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCentralManager;
@protocol OS_dispatch_queue;

@interface W5BluetoothController : NSObject
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    CDUnknownBlockType _updatedBluetoothCallback;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType updatedBluetoothCallback; // @synthesize updatedBluetoothCallback=_updatedBluetoothCallback;
- (id)devices;	// IMP=0x0000000100037954
- (id)__ios__deviceList;	// IMP=0x0000000100037360
- (void)__ios__handleBTAdvertisingNotification:(id)arg1;	// IMP=0x0000000100037278
- (void)__ios__handleBTDiscoveryNotification:(id)arg1;	// IMP=0x0000000100037190
- (void)__ios__handleBTConnectabiliyNotification:(id)arg1;	// IMP=0x00000001000370a8
- (void)__ios__handleBTPowerNotification:(id)arg1;	// IMP=0x0000000100036fc0
- (void)__ios__handleBTAvailabilityNotification:(id)arg1;	// IMP=0x0000000100036ed8
- (_Bool)isScanning;	// IMP=0x0000000100036df8
- (_Bool)isAvailable;	// IMP=0x0000000100036d18
- (_Bool)isConnectable;	// IMP=0x0000000100036c38
- (_Bool)isDiscoverable;	// IMP=0x0000000100036b58
- (id)address;	// IMP=0x0000000100036a18
- (_Bool)powerOn;	// IMP=0x0000000100036930
- (void)stopEventMonitoring;	// IMP=0x0000000100036874
- (void)startEventMonitoring;	// IMP=0x00000001000366ec
- (void)dealloc;	// IMP=0x0000000100036690
- (id)init;	// IMP=0x00000001000364b4

@end
