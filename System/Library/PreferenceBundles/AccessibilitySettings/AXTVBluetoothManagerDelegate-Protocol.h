//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXTVBluetoothDevice, AXTVBluetoothManager, NSError;

@protocol AXTVBluetoothManagerDelegate <NSObject>

@optional
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 didRejectPairingPINForDevice:(AXTVBluetoothDevice *)arg2;
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 didAcceptPairingPINForDevice:(AXTVBluetoothDevice *)arg2;
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 presentBuiltInPairingPinForDevice:(AXTVBluetoothDevice *)arg2;
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 presentGeneratedPairingPIN:(long long)arg2 forDevice:(AXTVBluetoothDevice *)arg3;
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 didCompleteDeviceDisconnection:(AXTVBluetoothDevice *)arg2 error:(NSError *)arg3;
- (void)bluetoothManager:(AXTVBluetoothManager *)arg1 didCompleteDeviceConnection:(AXTVBluetoothDevice *)arg2 error:(NSError *)arg3;
@end

