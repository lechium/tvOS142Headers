//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHHapticEngine, CHHapticPattern, GCController, NSArray, NSDictionary;

@interface GCTVSettingsControllerRepresentedObject : NSObject
{
    CHHapticPattern *_findControllerPattern;	// 8 = 0x8
    _Bool _findingController;	// 16 = 0x10
    GCController *_device;	// 24 = 0x18
    CHHapticEngine *_engine;	// 32 = 0x20
    NSArray *_appsWithSettings;	// 40 = 0x28
    NSArray *_appsWithoutSettings;	// 48 = 0x30
    NSDictionary *_settingsForBundleID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000001964
@property(retain, nonatomic) NSDictionary *settingsForBundleID; // @synthesize settingsForBundleID=_settingsForBundleID;
@property(retain, nonatomic) NSArray *appsWithoutSettings; // @synthesize appsWithoutSettings=_appsWithoutSettings;
@property(retain, nonatomic) NSArray *appsWithSettings; // @synthesize appsWithSettings=_appsWithSettings;
@property(nonatomic) _Bool findingController; // @synthesize findingController=_findingController;
@property(retain, nonatomic) CHHapticEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) GCController *device; // @synthesize device=_device;
- (void)findController;	// IMP=0x00000000000014bc
- (void)loadFindControllerPattern;	// IMP=0x0000000000001310
- (id)init;	// IMP=0x0000000000001230

@end

