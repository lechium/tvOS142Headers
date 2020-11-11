/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXClientService.h>
#import <libobjc.A.dylib/SVXClientServiceDelegate.h>

@protocol OS_dispatch_queue, SVXClientService, SVXClientServiceServerConnectionDelegate;
@class NSObject, NSXPCConnection, SVXDeviceSetupContext, NSString;

@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXClientServiceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	id<SVXClientService> _localService;
	id<SVXClientServiceServerConnectionDelegate> _connectionDelegate;
	SVXDeviceSetupContext* _deviceSetupContext;

}

@property (nonatomic,copy,readonly) SVXDeviceSetupContext * deviceSetupContext;              //@synthesize deviceSetupContext=_deviceSetupContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)_connectionInvalidated;
-(oneway void)pingWithReply:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted;
-(oneway void)synthesizeRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanUpConnection;
-(oneway void)fetchSessionStateWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)deactivateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchSessionActivityStateWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)preheatWithActivationSource:(long long)arg1 ;
-(oneway void)prewarmWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)performManualEndpointing;
-(oneway void)transitToAutomaticEndpointing;
-(oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)prewarmRequest:(id)arg1 ;
-(oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1 ;
-(oneway void)stopSpeechSynthesisRequest:(id)arg1 ;
-(oneway void)setDeviceSetupContext:(SVXDeviceSetupContext *)arg1 ;
-(oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_remoteServiceDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)requestPermissionToActivateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)notifyWillActivateWithContext:(id)arg1 ;
-(oneway void)notifyDidActivateWithContext:(id)arg1 ;
-(oneway void)notifyDidNotActivateWithContext:(id)arg1 error:(id)arg2 ;
-(oneway void)notifyWillDeactivateWithContext:(id)arg1 ;
-(oneway void)notifyDidDeactivateWithContext:(id)arg1 ;
-(oneway void)notifyWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2 ;
-(oneway void)notifyDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2 ;
-(oneway void)notifySessionWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(oneway void)notifySessionWillStartSoundWithID:(long long)arg1 ;
-(oneway void)notifySessionDidStartSoundWithID:(long long)arg1 ;
-(oneway void)notifySessionDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(oneway void)notifySessionWillBecomeActiveWithActivationContext:(id)arg1 ;
-(oneway void)notifySessionDidBecomeActiveWithActivationContext:(id)arg1 ;
-(oneway void)notifySessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(oneway void)notifySessionDidResignActiveWithDeactivationContext:(id)arg1 ;
-(oneway void)notifyWillBeginUpdateAudioPowerWithType:(long long)arg1 wrapper:(id)arg2 ;
-(oneway void)notifyDidEndUpdateAudioPowerWithType:(long long)arg1 ;
-(oneway void)notifyAudioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(oneway void)notifyAudioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(id)initWithConnection:(id)arg1 connectionDelegate:(id)arg2 localService:(id)arg3 ;
-(SVXDeviceSetupContext *)deviceSetupContext;
@end

