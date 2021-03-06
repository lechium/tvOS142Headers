//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVApplicationControllerDelegate-Protocol.h"
#import "TVWNViewServicePresenter-Protocol.h"

@class NSString, TVApplicationController, TVStoreApplicationSetupHelper;

@interface TVWhatsNewViewController : UIViewController <TVWNViewServicePresenter, TVApplicationControllerDelegate>
{
    TVApplicationController *_appController;	// 8 = 0x8
    TVStoreApplicationSetupHelper *_setupHelper;	// 16 = 0x10
    CDUnknownBlockType _messageReplyBlock;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100003c80
+ (id)_exportedInterface;	// IMP=0x0000000100003b48
- (void).cxx_destruct;	// IMP=0x0000000100003d30
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003618
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003594
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00000001000032ac
- (void)_executeRemoteMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003158
- (void)_markAsSeenAndDismiss;	// IMP=0x00000001000030d8
- (void)_handleDismissNotification:(id)arg1;	// IMP=0x0000000100003040
- (void)_loadWithBootURL:(id)arg1;	// IMP=0x0000000100002e8c
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100002dfc
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100002cc8
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100002c40
- (void)_presetLaunchErrorDialog;	// IMP=0x0000000100002a60
- (void)_setupContentViewWithAppCntroller:(id)arg1;	// IMP=0x0000000100002948
- (void)loadView;	// IMP=0x00000001000028b4
- (void)dealloc;	// IMP=0x000000010000283c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100002520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

