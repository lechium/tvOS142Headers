//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSDate, NSString, UINavigationController, UIWindow;

@interface TVSettingsAppDelegate : NSObject <UIApplicationDelegate>
{
    UINavigationController *_navigationController;	// 8 = 0x8
    NSDate *_backgroundedDate;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000e57a4
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2;	// IMP=0x00000001000e53e8
- (_Bool)_openURLConfiguration:(id)arg1;	// IMP=0x00000001000e4638
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001000e4384
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000e41e0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000e40d0
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000e40bc
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000e3f38
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3;	// IMP=0x000000010005e304
- (void)_presentRegionsAlertController;	// IMP=0x000000010005e26c
- (void)startScrollTestForScrollViewClass:(Class)arg1 fromViewHierarchy:(id)arg2 testName:(id)arg3 axis:(unsigned long long)arg4 options:(id)arg5;	// IMP=0x000000010005de4c
- (void)startLogTest:(id)arg1;	// IMP=0x000000010005dd20
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x000000010005d974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

