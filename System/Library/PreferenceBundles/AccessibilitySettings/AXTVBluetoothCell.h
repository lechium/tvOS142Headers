//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKTableViewTextCell.h>

@class AXTVBluetoothDevice, AXTVBluetoothRecognizer, NSString, UIImageView;

@interface AXTVBluetoothCell : TSKTableViewTextCell
{
    UIImageView *_batteryIconView;	// 8 = 0x8
    AXTVBluetoothRecognizer *_touchGesture;	// 16 = 0x10
    NSString *_originalText;	// 24 = 0x18
    AXTVBluetoothDevice *_bluetoothDevice;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000011b50
@property(retain, nonatomic) AXTVBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000011b38
- (void)_touchGesture:(id)arg1;	// IMP=0x00000000000119ec
- (void)_updateBatteryImage;	// IMP=0x0000000000011804
- (void)_enableTouchGestureIfPossible;	// IMP=0x0000000000011780
- (void)_updateAccessoryTintColor;	// IMP=0x0000000000011628
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000011558
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000011480
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000113b0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000112d8
- (void)layoutSubviews;	// IMP=0x0000000000010f84
- (void)prepareForReuse;	// IMP=0x0000000000010db4
- (void)dealloc;	// IMP=0x0000000000010d64
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000010be0

@end

