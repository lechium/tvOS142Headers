//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHAccountSetupViewControllerDelegate-Protocol.h"
#import "TVHMediaLibraryPickerViewControllerDelegate-Protocol.h"
#import "TVHNoMediaLibrariesDiscoveredViewControllerDelegate-Protocol.h"

@class NSObject, NSString, TVHKMediaLibrary, TVHKStateMachine, TVHMediaLibrariesEnviroment, TVHURL;
@protocol OS_dispatch_source, TVHRootViewControllerDelegate;

@interface TVHRootViewController : UIViewController <TVHAccountSetupViewControllerDelegate, TVHMediaLibraryPickerViewControllerDelegate, TVHNoMediaLibrariesDiscoveredViewControllerDelegate>
{
    TVHMediaLibrariesEnviroment *_mediaLibrariesEnviroment;	// 8 = 0x8
    id <TVHRootViewControllerDelegate> _delegate;	// 16 = 0x10
    TVHKStateMachine *_stateMachine;	// 24 = 0x18
    TVHURL *_openURL;	// 32 = 0x20
    TVHKMediaLibrary *_currentMediaLibrary;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_mediaLibrariesWaitTimer;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0000000100046460
- (void).cxx_destruct;	// IMP=0x000000010004aad8
@property(retain, nonatomic) NSObject<OS_dispatch_source> *mediaLibrariesWaitTimer; // @synthesize mediaLibrariesWaitTimer=_mediaLibrariesWaitTimer;
@property(retain, nonatomic) TVHKMediaLibrary *currentMediaLibrary; // @synthesize currentMediaLibrary=_currentMediaLibrary;
@property(retain, nonatomic) TVHURL *openURL; // @synthesize openURL=_openURL;
@property(readonly, nonatomic) TVHKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak id <TVHRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVHMediaLibrariesEnviroment *mediaLibrariesEnviroment; // @synthesize mediaLibrariesEnviroment=_mediaLibrariesEnviroment;
- (void)_stopMediaLibrariesWaitTimer;	// IMP=0x000000010004a944
- (void)_startMediaLibrariesWaitTimer;	// IMP=0x000000010004a748
- (id)_mediaLibraryForOpenURL:(id)arg1;	// IMP=0x000000010004a6b0
- (void)_stopListentingToMediaLibraryRelatedNotifications;	// IMP=0x000000010004a5bc
- (void)_startListentingToMediaLibraryRelatedNotifications;	// IMP=0x000000010004a4b8
- (void)_enqueueAsyncMainQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004a3bc
- (id)_navigationController;	// IMP=0x000000010004a3b0
- (id)_mediaLibrariesManager;	// IMP=0x000000010004a35c
- (id)_browseViewControllersAndClearOpenURLWithMediaLibrary:(id)arg1;	// IMP=0x000000010004a228
- (void)_dismissRestartingMediaLibraryDiscoveryViewController;	// IMP=0x000000010004a1cc
- (void)_presentRestartingMediaLibraryDiscoveryViewController;	// IMP=0x000000010004a144
- (void)_presentFatalErrorDialogWithError:(id)arg1;	// IMP=0x0000000100049ecc
- (void)_presentConnectionFailedDialogWithMediaLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049c18
- (id)_setupHomeSharingViewController;	// IMP=0x0000000100049bd8
- (id)_noMediaLibrariesDiscoveredViewController;	// IMP=0x0000000100049b1c
- (void)_updateMediaLibraryPickerController;	// IMP=0x0000000100049a24
- (id)_mediaLibraryPickerViewController;	// IMP=0x000000010004998c
- (id)_activityIndicatorViewController;	// IMP=0x0000000100049970
- (void)_registerStateMachineHandlers;	// IMP=0x00000001000474bc
- (void)_configureStateMachine;	// IMP=0x0000000100047434
- (void)_handleNavigationControllerDidDisplayViewControllerNotification:(id)arg1;	// IMP=0x0000000100047308
- (void)_handleMediaLibraryConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100047054
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100046e1c
- (void)restartMediaLibraryDiscoveryForNoMediaLibrariesDiscoveredViewController:(id)arg1;	// IMP=0x0000000100046dd4
- (void)mediaLibraryPickerViewController:(id)arg1 didPickMediaLibrary:(id)arg2;	// IMP=0x0000000100046ce0
- (void)accountSetupViewControllerDidCancel:(id)arg1;	// IMP=0x0000000100046c60
- (void)accountSetupViewController:(id)arg1 didSucceedWithAccountName:(id)arg2;	// IMP=0x0000000100046bf4
- (id)preferredFocusEnvironments;	// IMP=0x0000000100046b48
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100046ad0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100046a58
- (void)viewDidLoad;	// IMP=0x0000000100046984
- (void)_didFinish;	// IMP=0x000000010004693c
- (void)_mediaLibrary:(id)arg1 connectionStateDidChange:(unsigned long long)arg2;	// IMP=0x0000000100046938
- (id)_browseViewControllersWithMediaLibrary:(id)arg1 openURL:(id)arg2;	// IMP=0x00000001000468a4
- (id)childNavigationController;	// IMP=0x0000000100046898
- (void)handleURL:(id)arg1;	// IMP=0x00000001000467f0
- (void)dealloc;	// IMP=0x000000010004676c
- (id)initWithMediaLibrariesEnviroment:(id)arg1;	// IMP=0x0000000100046634
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000465ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100046524
- (id)init;	// IMP=0x000000010004649c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
