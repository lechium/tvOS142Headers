//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"
#import "TVSBluetoothManagerScanObserver-Protocol.h"

@class NSString, TVSBluetoothDevice;
@protocol SATVBluetoothKeyboardManagerDelegate;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerScanObserver, TVSBluetoothManagerDelegate>
{
    id <SATVBluetoothKeyboardManagerDelegate> _delegate;	// 8 = 0x8
    TVSBluetoothDevice *_pairingDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100023aa4
@property(retain, nonatomic) TVSBluetoothDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(nonatomic) __weak id <SATVBluetoothKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_pairedKeyboard;	// IMP=0x00000001000238e8
- (void)_removeSelfFromBluetoothManager;	// IMP=0x00000001000237fc
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000237ec
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000236f4
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x000000010002363c
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100023544
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x00000001000231ec
- (void)stopPairing;	// IMP=0x00000001000231b4
- (void)cancelPINPairing;	// IMP=0x000000010002315c
- (void)startPairing;	// IMP=0x00000001000230d0
- (void)dealloc;	// IMP=0x0000000100023084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

