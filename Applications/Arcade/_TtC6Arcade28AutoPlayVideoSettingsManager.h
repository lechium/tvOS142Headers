//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Arcade28AutoPlayVideoSettingsManager : NSObject
{
    MISSING_TYPE *defaultAutoPlayVideoSetting;	// 8 = 0x8
    MISSING_TYPE *reduceMotionSetLastAutoPlayVideoValueKey;	// 24 = 0x18
    MISSING_TYPE *lastReduceMotionValueKey;	// 40 = 0x28
    MISSING_TYPE *lowPowerModeSetLastAutoPlayVideoValueKey;	// 56 = 0x38
    MISSING_TYPE *lastLowPowerModeValueKey;	// 72 = 0x48
    MISSING_TYPE *autoPlayVideoSettingKey;	// 88 = 0x58
    MISSING_TYPE *userSetAutoPlayVideoSettingKey;	// 104 = 0x68
    MISSING_TYPE *lastUserSetAutoPlayVideoValueKey;	// 120 = 0x78
    MISSING_TYPE *autoPlayUserSetting;	// 136 = 0x88
    MISSING_TYPE *networkInquiry;	// 144 = 0x90
    MISSING_TYPE *networkObservation;	// 184 = 0xb8
    MISSING_TYPE *networkMayUseCellular;	// 224 = 0xe0
    MISSING_TYPE *fullScreenAudioSettingsTimeoutMinutes;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000001000ec738
- (void)saveFullScreenAudioSettings;	// IMP=0x00000001000ed53c
- (void)restoreFullScreenAudioSettings;	// IMP=0x00000001000ed538
- (void)updateAutoPlayVideoSettings;	// IMP=0x00000001000ed1e0
- (void)dealloc;	// IMP=0x00000001000ec68c
- (id)init;	// IMP=0x00000001000ec5dc

@end

