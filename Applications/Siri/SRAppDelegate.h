//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegatePrivate-Protocol.h"

@class NSString, UIScene, UIWindow;
@protocol SRApplicationDataSource;

@interface SRAppDelegate : UIResponder <UIApplicationDelegatePrivate>
{
    UIWindow *_appWindow;	// 8 = 0x8
    UIScene *_currentScene;	// 16 = 0x10
    id <SRApplicationDataSource> _dataSource;	// 24 = 0x18
}

+ (id)sharedDelegate;	// IMP=0x000000010009e908
+ (id)sharedApplication;	// IMP=0x000000010009e8f4
- (void).cxx_destruct;	// IMP=0x000000010009f458
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScene *currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
- (void)willEnterForegroundHandler;	// IMP=0x000000010009f370
- (void)willResignActiveHandler;	// IMP=0x000000010009f310
- (void)didBecomeActiveHandler;	// IMP=0x000000010009f2b0
- (void)tearDownViews;	// IMP=0x000000010009f250
- (void)setUpViews;	// IMP=0x000000010009f1f0
- (void)invalidateKeyboardWindowIfNeeded;	// IMP=0x000000010009ef44
- (void)_updateDeferral;	// IMP=0x000000010009ec8c
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x000000010009ec24
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010009ec20
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010009ec1c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010009ec18
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010009ec14
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010009ec10
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010009e9e0
- (void)_windowWillDestroyContext:(id)arg1;	// IMP=0x000000010009e980
- (void)_windowDidCreateContext:(id)arg1;	// IMP=0x000000010009e920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

