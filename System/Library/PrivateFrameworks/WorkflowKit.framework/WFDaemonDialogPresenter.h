/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFScreenOnObserverDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFDialogPresenter.h>

@protocol OS_dispatch_queue;
@class WFScreenOnObserver, WFWorkflowRunningContext, VCVoiceShortcutClient, WFDialogRequest, NSObject, NSString;

@interface WFDaemonDialogPresenter : NSObject <WFScreenOnObserverDelegate, WFApplicationStateObserver, WFDialogPresenter> {

	BOOL _screenDidTurnOffDuringActiveRequest;
	WFScreenOnObserver* _screenOnObserver;
	WFWorkflowRunningContext* _runningContext;
	VCVoiceShortcutClient* _voiceShortcutClient;
	WFDialogRequest* _suspendedRequest;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _suspendedRequestCompletion;

}

@property (nonatomic,readonly) WFScreenOnObserver * screenOnObserver;                    //@synthesize screenOnObserver=_screenOnObserver - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;                //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutClient * voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (nonatomic,retain) WFDialogRequest * suspendedRequest;                         //@synthesize suspendedRequest=_suspendedRequest - In the implementation block
@property (assign,nonatomic) BOOL screenDidTurnOffDuringActiveRequest;                   //@synthesize screenDidTurnOffDuringActiveRequest=_screenDidTurnOffDuringActiveRequest - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id suspendedRequestCompletion;                                //@synthesize suspendedRequestCompletion=_suspendedRequestCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(VCVoiceShortcutClient *)voiceShortcutClient;
-(void)screenOnStateDidChange:(id)arg1 ;
-(WFScreenOnObserver *)screenOnObserver;
-(void)showDialogRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFWorkflowRunningContext *)runningContext;
-(id)initWithRunningContext:(id)arg1 ;
-(void)beginObservingApplicationStateIfNecessary;
-(void)stopObservingApplicationStateIfNecessary;
-(WFDialogRequest *)suspendedRequest;
-(void)setSuspendedRequest:(WFDialogRequest *)arg1 ;
-(BOOL)screenDidTurnOffDuringActiveRequest;
-(void)setScreenDidTurnOffDuringActiveRequest:(BOOL)arg1 ;
-(id)suspendedRequestCompletion;
-(void)setSuspendedRequestCompletion:(id)arg1 ;
@end

