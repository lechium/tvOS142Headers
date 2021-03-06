//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"
#import "TVSUIDigitEntryViewControllerDelegate-Protocol.h"

@class NSString, TVSettingsBluetoothFacade, UIAlertController;

@interface TVSettingsBluetoothViewController : TSKViewController <TVSBluetoothManagerDelegate, TVSUIDigitEntryViewControllerDelegate>
{
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 8 = 0x8
    _Bool _startedScanning;	// 16 = 0x10
    UIAlertController *_errorAlert;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d93b8
@property(retain, nonatomic) UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
- (id)_devicePairingAction:(id)arg1;	// IMP=0x00000001000d9244
- (void)_postAlertWithErrorCode:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000001000d8930
- (void)_connectDevice:(id)arg1;	// IMP=0x00000001000d87e0
- (void)deviceInfoDidUpdate:(id)arg1;	// IMP=0x00000001000d87d4
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d86d8
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d85dc
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000d856c
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000d8518
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x00000001000d8240
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000001000d7edc
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000d7db8
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000d7d2c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d7b88
- (id)loadSettingGroups;	// IMP=0x00000001000d6df4
- (void)viewDidLoad;	// IMP=0x00000001000d6d18
- (void)dealloc;	// IMP=0x00000001000d6c78
- (id)initWithFacade:(id)arg1;	// IMP=0x00000001000d6b64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

