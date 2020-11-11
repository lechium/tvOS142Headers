/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class _UIRemoteViewController, HMHome, HMSetupAccessoryDescription, _UIAsyncInvocation, HMSetupRemoteViewController, NSString;

@interface HMSetupViewController : UIViewController <HMSetupRemoteHost, _UIRemoteViewControllerContaining> {

	BOOL _cancelling;
	BOOL _disconnected;
	BOOL _shouldPresentWhenLoaded;
	HMHome* _home;
	HMSetupAccessoryDescription* _accessoryDescription;
	/*^block*/id _completionHandler;
	/*^block*/id _loadHandler;
	_UIAsyncInvocation* _cancelServiceInvocation;
	HMSetupRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) HMHome * home;                                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;                      //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentWhenLoaded;                                            //@synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                            //@synthesize loadHandler=_loadHandler - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                            //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) HMSetupRemoteViewController * remoteViewController;                      //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCancelling,nonatomic) BOOL cancelling;                                     //@synthesize cancelling=_cancelling - In the implementation block
@property (assign,getter=isDisconnected,nonatomic) BOOL disconnected;                                 //@synthesize disconnected=_disconnected - In the implementation block
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)viewDidLoad;
-(HMSetupRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(HMSetupRemoteViewController *)arg1 ;
-(void)_requestRemoteViewController;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
-(void)setupFailedWithError:(id)arg1 ;
-(void)setupInterruptedWithError:(id)arg1 ;
-(id)initWithHome:(id)arg1 accessoryDescription:(id)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(void)setLoadHandler:(id)arg1 ;
-(void)setCancelling:(BOOL)arg1 ;
-(void)setDisconnected:(BOOL)arg1 ;
-(void)setShouldPresentWhenLoaded:(BOOL)arg1 ;
-(void)_finishSetupWithInfo:(id)arg1 error:(id)arg2 ;
-(void)_configureAndAddRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(BOOL)shouldPresentWhenLoaded;
-(void)_presentAsTopmostViewController;
-(id)loadHandler;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)presentWhenLoaded;
-(BOOL)isCancelling;
-(BOOL)isDisconnected;
-(_UIAsyncInvocation *)cancelServiceInvocation;
@end
