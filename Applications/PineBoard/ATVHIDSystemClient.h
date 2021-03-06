//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAssertion, NSArray, PBHIDServiceBrowser, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_btKeyboardHIDSystemClient;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    BKSAssertion *_dispatchingRulesAssertion;	// 32 = 0x20
    PBHIDServiceBrowser *_MFIGamePadBrowser;	// 40 = 0x28
    SSIndicatorLight *_sil;	// 48 = 0x30
}

+ (_Bool)_buttonEvent:(struct __IOHIDEvent *)arg1 containsUsage:(long long)arg2;	// IMP=0x00000001000ffcf4
+ (_Bool)isRemoteAppEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000ffcac
+ (_Bool)isCECButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000ffc64
+ (_Bool)isIRRemoteButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000ffc1c
+ (_Bool)isBluetoothKeyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000ffba0
+ (id)sharedInstance;	// IMP=0x00000001000ff4c4
- (void).cxx_destruct;	// IMP=0x0000000100102644
- (void)enableNormalEventRouting;	// IMP=0x00000001001024f0
- (void)enableSleepEventRouting;	// IMP=0x000000010010235c
- (void)disableAllEventRouting;	// IMP=0x00000001001021c8
- (id)_routingRulesThatIgnoreEvents;	// IMP=0x0000000100101fe8
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x0000000100101f18
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x0000000100101e8c
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100101be0
- (void)setSILState_Off;	// IMP=0x0000000100101ba4
- (void)setSILState_On;	// IMP=0x0000000100101b68
- (void)_setSILState_On:(id)arg1;	// IMP=0x00000001001018e4
- (void)_setSILState_Off:(id)arg1;	// IMP=0x0000000100101660
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100101508
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100101454
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100101400
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100101174
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001001010cc
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100100c48
- (void)setupHIDEventRouters;	// IMP=0x00000001000ffe18
- (_Bool)isMultiButtonMFIGamePadEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000ffdd0
- (void)dealloc;	// IMP=0x00000001000ffadc
- (void)_startKeyboardHIDClient;	// IMP=0x00000001000ff91c
- (int)_init;	// IMP=0x00000001000ff6e4
- (id)init;	// IMP=0x00000001000ff594

@end

