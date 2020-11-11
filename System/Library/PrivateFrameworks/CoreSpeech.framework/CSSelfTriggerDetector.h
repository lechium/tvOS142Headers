/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSKeywordAnalyzerNDAPIScoreDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, CSSpeechManager, CSAsset, CSKeywordAnalyzerNDAPI, CSAudioStream, CSPolicy, NSString;

@interface CSSelfTriggerDetector : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate> {

	BOOL _isSiriClientListening;
	BOOL _selfTriggerEnabled;
	BOOL _isListenPollingStarting;
	float _keywordThreshold;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	CSSpeechManager* _speechManager;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzer;
	unsigned long long _outputAudioChannel;
	CSAudioStream* _audioStream;
	CSPolicy* _enablePolicy;
	NSString* _audioProviderUUID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                //@synthesize speechManager=_speechManager - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPI * keywordAnalyzer;              //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long outputAudioChannel;                 //@synthesize outputAudioChannel=_outputAudioChannel - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                           //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) CSPolicy * enablePolicy;                               //@synthesize enablePolicy=_enablePolicy - In the implementation block
@property (assign,nonatomic) BOOL isSiriClientListening;                            //@synthesize isSiriClientListening=_isSiriClientListening - In the implementation block
@property (assign,nonatomic) BOOL selfTriggerEnabled;                               //@synthesize selfTriggerEnabled=_selfTriggerEnabled - In the implementation block
@property (assign,nonatomic) BOOL isListenPollingStarting;                          //@synthesize isListenPollingStarting=_isListenPollingStarting - In the implementation block
@property (nonatomic,retain) NSString * audioProviderUUID;                          //@synthesize audioProviderUUID=_audioProviderUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)_reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setAsset:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)_stopListening;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(CSSpeechManager *)speechManager;
-(CSKeywordAnalyzerNDAPI *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerNDAPI *)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(BOOL)isSiriClientListening;
-(void)setIsSiriClientListening:(BOOL)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(NSString *)audioProviderUUID;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isListenPollingStarting;
-(void)setIsListenPollingStarting:(BOOL)arg1 ;
-(BOOL)_shouldReuseBuiltInAudioProvider;
-(void)setAudioProviderUUID:(NSString *)arg1 ;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(CSPolicy *)enablePolicy;
-(void)_handleEnablePolicyEvent:(BOOL)arg1 ;
-(unsigned long long)outputAudioChannel;
-(void)setOutputAudioChannel:(unsigned long long)arg1 ;
-(void)setEnablePolicy:(CSPolicy *)arg1 ;
-(BOOL)selfTriggerEnabled;
-(void)setSelfTriggerEnabled:(BOOL)arg1 ;
@end

