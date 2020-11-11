/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSAudioSessionInfoProvidingDelegate.h>
#import <libobjc.A.dylib/CSXPCClientDelegate.h>
#import <libobjc.A.dylib/CSCoreSpeechDaemonStateMonitorDelegate.h>

@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;
@class NSObject, NSHashTable, CSXPCClient, NSString;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate> {

	BOOL _shouldKeepConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	id<CSAudioSessionInfoProviding> _sessionInfoProvider;
	CSXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) id<CSAudioSessionInfoProviding> sessionInfoProvider;              //@synthesize sessionInfoProvider=_sessionInfoProvider - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                          //@synthesize xpcClient=_xpcClient - In the implementation block
@property (assign) BOOL shouldKeepConnection;                                                  //@synthesize shouldKeepConnection=_shouldKeepConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stopMonitoring;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(unsigned)getAudioSessionID;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(CSXPCClient *)xpcClient;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(void)_startMonitoring;
-(unsigned)_getAudioSessionID;
-(BOOL)_createXPCClientConnectionIfNeeded;
-(id<CSAudioSessionInfoProviding>)sessionInfoProvider;
-(void)setSessionInfoProvider:(id<CSAudioSessionInfoProviding>)arg1 ;
-(void)setShouldKeepConnection:(BOOL)arg1 ;
-(void)_registerInterruptionNotification;
-(void)_registerAudioRouteChangeNotification;
-(void)_teardownXPCClientIfNeeded;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2 ;
-(void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)coreSpeechDaemonStateMonitor:(id)arg1 didReceiveStateChanged:(unsigned long long)arg2 ;
-(void)getAudioSessionIDWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)_getLocalAudioSessionID;
-(void)_handleInterruption:(id)arg1 ;
-(void)_mediaServicesWereLost:(id)arg1 ;
-(void)_audioRouteChanged:(id)arg1 ;
-(BOOL)shouldKeepConnection;
@end

