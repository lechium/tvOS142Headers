//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKEventEmitter, NSString;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject
{
    NSString *_udid;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_osVersion;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_gameKitVersion;	// 40 = 0x28
    _Bool _gameKitAvailable;	// 48 = 0x30
    GKEventEmitter<GKLockStatusObserver> *_emitter;	// 56 = 0x38
}

+ (id)currentDevice;	// IMP=0x00000001000878b0
@property(retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter; // @synthesize emitter=_emitter;
@property(readonly, nonatomic, getter=isGameKitAvailable) _Bool gameKitAvailable; // @synthesize gameKitAvailable=_gameKitAvailable;
@property(readonly, nonatomic) NSString *gameKitVersion; // @synthesize gameKitVersion=_gameKitVersion;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void)removeLockStatusObserver:(id)arg1;	// IMP=0x00000001000881c4
- (void)addLockStatusObserver:(id)arg1;	// IMP=0x00000001000881b4
- (void)stopObservingKeyBagStatus;	// IMP=0x0000000100088184
- (void)beginObservingKeyBagStatusWithCallback:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000100088148
- (id)platformBuildVersion;	// IMP=0x0000000100088084
- (id)buildVersionHeader;	// IMP=0x0000000100087fb0
- (id)protocolVersionHeader;	// IMP=0x0000000100087f80
- (id)storeUserAgent;	// IMP=0x0000000100087e40
- (id)processNameHeader;	// IMP=0x0000000100087dac
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;	// IMP=0x0000000100087bf0
- (id)userAgent;	// IMP=0x0000000100087bdc
- (void)dealloc;	// IMP=0x0000000100087b5c
@property(readonly, nonatomic) NSString *udid;
- (id)init;	// IMP=0x0000000100087944
- (_Bool)isProductType:(unsigned int)arg1;	// IMP=0x00000001000d4d34
- (_Bool)isFocusDevice;	// IMP=0x00000001000d4cc4
- (_Bool)isDevelopmentDevice;	// IMP=0x00000001000d4c48
- (id)_platformUDID;	// IMP=0x00000001000d4bdc
- (void)_initPlatform;	// IMP=0x00000001000d496c

@end

