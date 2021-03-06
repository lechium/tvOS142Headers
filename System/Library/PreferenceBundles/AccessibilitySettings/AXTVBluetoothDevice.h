//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class AXTVCoreBluetoothDevice, NSArray, NSError, NSString, NSURL;

@interface AXTVBluetoothDevice : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _connectDoneBlock;	// 8 = 0x8
    CDUnknownBlockType _disconnectDoneBlock;	// 16 = 0x10
    CDUnknownBlockType _unpairDoneBlock;	// 24 = 0x18
    NSError *_connectionFailure;	// 32 = 0x20
    NSError *_disconnectionFailure;	// 40 = 0x28
    NSError *_unpairingFailure;	// 48 = 0x30
    _Bool _supportsBatteryLevel;	// 56 = 0x38
    _Bool _supportsIsCharging;	// 57 = 0x39
    _Bool _paired;	// 58 = 0x3a
    _Bool _pairing;	// 59 = 0x3b
    _Bool _connected;	// 60 = 0x3c
    _Bool _charging;	// 61 = 0x3d
    _Bool _PINPairing;	// 62 = 0x3e
    _Bool _PINPairingFailed;	// 63 = 0x3f
    _Bool _PINPairingCancelled;	// 64 = 0x40
    long long _type;	// 72 = 0x48
    long long _transportType;	// 80 = 0x50
    NSArray *_registryIDs;	// 88 = 0x58
    NSString *_physicalDeviceUniqueID;	// 96 = 0x60
    NSString *_name;	// 104 = 0x68
    NSString *_identifier;	// 112 = 0x70
    long long _state;	// 120 = 0x78
    double _lastPairTime;	// 128 = 0x80
    double _lastUnpairTime;	// 136 = 0x88
    double _lastConnectTime;	// 144 = 0x90
    double _lastDisconnectTime;	// 152 = 0x98
    long long _batteryLevel;	// 160 = 0xa0
    AXTVCoreBluetoothDevice *_bluetoothDeviceObject;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003319c
- (void).cxx_destruct;	// IMP=0x00000000000373b8
@property(nonatomic, getter=wasPINPairingCancelled) _Bool PINPairingCancelled; // @synthesize PINPairingCancelled=_PINPairingCancelled;
@property(nonatomic, getter=didPINPairingFail) _Bool PINPairingFailed; // @synthesize PINPairingFailed=_PINPairingFailed;
@property(nonatomic, getter=isPINPairing) _Bool PINPairing; // @synthesize PINPairing=_PINPairing;
@property(retain, nonatomic) AXTVCoreBluetoothDevice *bluetoothDeviceObject; // @synthesize bluetoothDeviceObject=_bluetoothDeviceObject;
@property(nonatomic) long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) double lastDisconnectTime; // @synthesize lastDisconnectTime=_lastDisconnectTime;
@property(nonatomic) double lastConnectTime; // @synthesize lastConnectTime=_lastConnectTime;
@property(nonatomic) double lastUnpairTime; // @synthesize lastUnpairTime=_lastUnpairTime;
@property(nonatomic) double lastPairTime; // @synthesize lastPairTime=_lastPairTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isCharging) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isPairing) _Bool pairing; // @synthesize pairing=_pairing;
@property(nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *physicalDeviceUniqueID; // @synthesize physicalDeviceUniqueID=_physicalDeviceUniqueID;
@property(readonly, copy, nonatomic) NSArray *registryIDs; // @synthesize registryIDs=_registryIDs;
@property(readonly, nonatomic) _Bool supportsIsCharging; // @synthesize supportsIsCharging=_supportsIsCharging;
@property(readonly, nonatomic) _Bool supportsBatteryLevel; // @synthesize supportsBatteryLevel=_supportsBatteryLevel;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)_accessory;	// IMP=0x0000000000037034
@property(readonly, nonatomic) _Bool tvset_supportsIAP;
@property(readonly, nonatomic) NSURL *tvset_lookupURL;
- (id)description;	// IMP=0x00000000000367b8
- (unsigned long long)hash;	// IMP=0x0000000000036748
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003665c
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000364b0
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000362a8
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000360a0
- (void)_noteStateChangeFailure:(id)arg1;	// IMP=0x0000000000036030
- (void)_notePairingFailure:(id)arg1;	// IMP=0x0000000000036024
- (void)_noteDisconnectionFailure:(id)arg1;	// IMP=0x0000000000036018
- (void)_noteConnectionFailure:(id)arg1;	// IMP=0x000000000003600c
- (void)_checkStatus;	// IMP=0x0000000000035ee0
- (void)_peripheralBatteryLevelChanged:(id)arg1;	// IMP=0x0000000000035c6c
- (void)_peripheralStateChanged:(id)arg1;	// IMP=0x0000000000035aac
- (void)_remoteChargingChanged:(id)arg1;	// IMP=0x0000000000035964
- (void)_remoteBatteryLevelChanged:(id)arg1;	// IMP=0x000000000003581c
- (void)_remoteConnectedChanged:(id)arg1;	// IMP=0x00000000000356d4
- (void)__updateRemotePowerState;	// IMP=0x000000000003557c
- (void)__updateRemoteConnected;	// IMP=0x0000000000035324
- (void)__updateRemotePaired;	// IMP=0x00000000000350ac
- (void)__updateRemoteState;	// IMP=0x0000000000034f44
- (void)__updateRemoteIdentifiers;	// IMP=0x0000000000034cb4
- (void)__updateDeviceBatteryLevel;	// IMP=0x0000000000034bf0
- (void)__updateDeviceConnected;	// IMP=0x00000000000349ac
- (void)__updateDevicePaired;	// IMP=0x00000000000347ac
- (void)__updateDeviceState;	// IMP=0x00000000000345e8
- (void)__updateDeviceIdentifiers;	// IMP=0x0000000000034374
@property(readonly, nonatomic) unsigned long long lastActivityTimeStamp;
@property(readonly, copy, nonatomic) NSString *macAddress;
@property(readonly, copy, nonatomic) NSString *hardwareVersion;
@property(readonly, copy, nonatomic) NSString *multitouchFirmwareVersion;
@property(readonly, copy, nonatomic) NSString *firmwareVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelNumber;
@property(readonly, copy, nonatomic) NSString *manufacturer;
- (id)__accessory;	// IMP=0x00000000000333ac
@property(readonly, nonatomic, getter=isMagicPaired) _Bool magicPaired;
@property(readonly, nonatomic, getter=isCloudPaired) _Bool cloudPaired;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032c30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032b4c
- (void)_invokeUnpairBlockIfNeeded;	// IMP=0x00000000000328e0
- (void)_invokeDisconnectBlockIfNeeded;	// IMP=0x0000000000032844
- (void)_invokeConnectBlockIfNeeded;	// IMP=0x00000000000327a8
- (void)dealloc;	// IMP=0x0000000000032730
- (id)initWithClassicBluetoothDevice:(id)arg1;	// IMP=0x00000000000323c8
- (id)initWithBTLEPeripheral:(id)arg1;	// IMP=0x000000000003198c

@end

