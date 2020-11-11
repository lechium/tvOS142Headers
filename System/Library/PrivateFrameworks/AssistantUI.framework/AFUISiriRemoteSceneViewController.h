/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <AssistantUI/AFUISceneHostingViewController.h>
#import <libobjc.A.dylib/AFUIViewControllerHosting.h>
#import <libobjc.A.dylib/SiriUIPresentationRemoteControlling.h>

@protocol AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate;
@class NSArray, AFApplicationInfo, NSXPCConnection, NSString;

@interface AFUISiriRemoteSceneViewController : AFUISceneHostingViewController <AFUIViewControllerHosting, SiriUIPresentationRemoteControlling> {

	BOOL _connectionHasBeenResumed;
	NSArray* _audioCategoriesDisablingVolumeHUD;
	BOOL _expectingInvalidation;
	id<AFUISiriRemoteSceneViewControllerDataSource> _dataSource;
	id<AFUISiriRemoteSceneViewControllerDelegate> _delegate;
	AFApplicationInfo* _viewServiceApplicationInfo;
	NSXPCConnection* _remoteConnection;

}

@property (nonatomic,retain) NSXPCConnection * remoteConnection;                                             //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteSceneViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteSceneViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AFApplicationInfo * viewServiceApplicationInfo;                               //@synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)remoteObjectInterface;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AFUISiriRemoteSceneViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriRemoteSceneViewControllerDelegate>)arg1 ;
-(id)_connection;
-(void)setRemoteConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)remoteConnection;
-(void)_invalidated;
-(void)_interrupted;
-(void)setSession:(id)arg1 ;
-(id<AFUISiriRemoteSceneViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<AFUISiriRemoteSceneViewControllerDataSource>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRequestOptions:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)applicationWillResignActive;
-(id)serviceViewControllerProxy;
-(id)serviceViewControllerProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)preloadPluginBundles;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1 ;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1 ;
-(void)_handleSceneDidActivateWithIdentifier:(id)arg1 ;
-(void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2 ;
-(void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3 ;
-(void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1 ;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2 withDismissalReason:(unsigned long long)arg3 ;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1 ;
-(void)serviceStartRequestWithOptions:(id)arg1 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)setFullScreenDimmingLayerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCarDisplaySnippetMode:(long long)arg1 ;
-(void)setStatusViewDisabled:(BOOL)arg1 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3 ;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1 ;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 ;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1 ;
-(void)serviceViewControllerRequestsPresentation:(/*^block*/id)arg1 ;
-(void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)servicePresentedIntentWithBundleId:(id)arg1 ;
-(void)setTypeToSiriViewHidden:(BOOL)arg1 ;
-(void)extendCurrentTTSRequested;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg1 ;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg1 ;
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg1 ;
-(void)requestHostBlurVisible:(BOOL)arg1 reason:(long long)arg2 fence:(id)arg3 ;
-(void)updateToPresentationWithIdentifier:(id)arg1 presentationProperties:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)preloadPresentationBundleWithIdentifier:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3 ;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(long long)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)startRequestForText:(id)arg1 ;
-(void)siriKeyboardViewDidChange:(SCD_Struct_AF1*)arg1 ;
-(void)setBottomContentInset:(double)arg1 ;
-(void)setSpeechSynthesis:(id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveShortTapAction;
-(void)setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)hasContentAtPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriWillBeginTearDownForDismissalReason:(unsigned long long)arg1 ;
-(id)sessionDelegate;
-(id)speechSynthesisDelegate;
-(void)siriWillShowPasscodeUnlock;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(void)setStatusViewHeight:(double)arg1 ;
-(void)applicationDidBecomeActive;
-(void)emitUIStateTransitionForSiriDismissalWithDismissalReason:(int)arg1 ;
-(void)emitInstrumentationEvent:(id)arg1 ;
-(AFApplicationInfo *)viewServiceApplicationInfo;
@end

