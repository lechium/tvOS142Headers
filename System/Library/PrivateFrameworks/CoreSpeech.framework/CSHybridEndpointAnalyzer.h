/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSAssetManagerDelegate.h>
#import <libobjc.A.dylib/CSFirstUnlockMonitorDelegate.h>
#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImpl.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;
@class CSAsset, NSObject, EARCaesuraSilencePosteriorGenerator, EARClientSilenceFeatures, _EAREndpointer, NSString, CSServerEndpointFeatures, NSMutableArray, NSDate, NSDictionary;

@interface CSHybridEndpointAnalyzer : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, EARCaesuraSilencePosteriorGeneratorDelegate, CSEndpointAnalyzerImpl> {

	BOOL _saveSamplesSeenInReset;
	BOOL _canProcessCurrentRequest;
	BOOL _didAddAudio;
	BOOL _epResult;
	BOOL _didReceiveServerFeatures;
	BOOL _useDefaultServerFeaturesOnClientLag;
	BOOL _didCommunicateEndpoint;
	BOOL _speechEndpointDetected;
	BOOL _didTimestampFirstAudioPacket;
	BOOL _recordingDidStop;
	BOOL _didDetectSpeech;
	float _lastEndpointPosterior;
	id<CSEndpointAnalyzerDelegate> _delegate;
	id<CSEndpointAnalyzerImplDelegate> _implDelegate;
	unsigned long long _activeChannel;
	long long _endpointStyle;
	long long _endpointMode;
	double _startWaitTime;
	double _endWaitTime;
	double _interspeechWaitTime;
	double _delay;
	double _automaticEndpointingSuspensionEndTime;
	double _minimumDurationForEndpointer;
	CSAsset* _currentAsset;
	NSObject*<OS_dispatch_queue> _apQueue;
	unsigned long long _numSamplesProcessed;
	EARCaesuraSilencePosteriorGenerator* _caesuraSPG;
	EARClientSilenceFeatures* _clientSilenceFeaturesAtEndpoint;
	_EAREndpointer* _hybridClassifier;
	NSString* _endpointerModelVersion;
	NSObject*<OS_dispatch_queue> _serverFeaturesQueue;
	CSServerEndpointFeatures* _lastKnownServerEPFeatures;
	EARClientSilenceFeatures* _lastKnownClientEPFeatures;
	NSMutableArray* _serverFeatureLatencies;
	double _lastKnowServerFeaturesLatency;
	double _serverFeaturesWarmupLatency;
	NSDate* _lastServerFeatureTimestamp;
	double _clientLagThresholdMs;
	double _clampedSFLatencyMsForClientLag;
	NSObject*<OS_dispatch_queue> _hybridClassifierQueue;
	double _lastReportedEndpointTimeMs;
	double _processedAudioInSeconds;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;
	unsigned long long _currentRequestSampleRate;
	double _vtExtraAudioAtStartInMs;
	unsigned long long _vtEndInSampleCount;
	double _hepAudioOriginInMs;
	NSDictionary* _recordContext;
	NSDate* _firstAudioPacketTimestamp;
	double _firstAudioSampleSensorTimestamp;
	NSObject*<OS_dispatch_queue> _silencePosteriorGeneratorQueue;
	double _elapsedTimeWithNoSpeech;
	double _trailingSilenceDurationAtEndpoint;

}

@property (nonatomic,retain) CSAsset * currentAsset;                                                   //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> apQueue;                                     //@synthesize apQueue=_apQueue - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProcessed;                                   //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (assign,nonatomic) BOOL didAddAudio;                                                         //@synthesize didAddAudio=_didAddAudio - In the implementation block
@property (nonatomic,retain) EARCaesuraSilencePosteriorGenerator * caesuraSPG;                         //@synthesize caesuraSPG=_caesuraSPG - In the implementation block
@property (nonatomic,retain) EARClientSilenceFeatures * clientSilenceFeaturesAtEndpoint;               //@synthesize clientSilenceFeaturesAtEndpoint=_clientSilenceFeaturesAtEndpoint - In the implementation block
@property (assign,nonatomic) BOOL canProcessCurrentRequest;                                            //@synthesize canProcessCurrentRequest=_canProcessCurrentRequest - In the implementation block
@property (nonatomic,retain) _EAREndpointer * hybridClassifier;                                        //@synthesize hybridClassifier=_hybridClassifier - In the implementation block
@property (nonatomic,retain) NSString * endpointerModelVersion;                                        //@synthesize endpointerModelVersion=_endpointerModelVersion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverFeaturesQueue;                         //@synthesize serverFeaturesQueue=_serverFeaturesQueue - In the implementation block
@property (nonatomic,retain) CSServerEndpointFeatures * lastKnownServerEPFeatures;                     //@synthesize lastKnownServerEPFeatures=_lastKnownServerEPFeatures - In the implementation block
@property (nonatomic,retain) EARClientSilenceFeatures * lastKnownClientEPFeatures;                     //@synthesize lastKnownClientEPFeatures=_lastKnownClientEPFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * serverFeatureLatencies;                                  //@synthesize serverFeatureLatencies=_serverFeatureLatencies - In the implementation block
@property (assign,nonatomic) double lastKnowServerFeaturesLatency;                                     //@synthesize lastKnowServerFeaturesLatency=_lastKnowServerFeaturesLatency - In the implementation block
@property (assign,nonatomic) BOOL epResult;                                                            //@synthesize epResult=_epResult - In the implementation block
@property (assign,nonatomic) double serverFeaturesWarmupLatency;                                       //@synthesize serverFeaturesWarmupLatency=_serverFeaturesWarmupLatency - In the implementation block
@property (nonatomic,retain) NSDate * lastServerFeatureTimestamp;                                      //@synthesize lastServerFeatureTimestamp=_lastServerFeatureTimestamp - In the implementation block
@property (assign,nonatomic) BOOL didReceiveServerFeatures;                                            //@synthesize didReceiveServerFeatures=_didReceiveServerFeatures - In the implementation block
@property (assign,nonatomic) double clientLagThresholdMs;                                              //@synthesize clientLagThresholdMs=_clientLagThresholdMs - In the implementation block
@property (assign,nonatomic) double clampedSFLatencyMsForClientLag;                                    //@synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag - In the implementation block
@property (assign,nonatomic) BOOL useDefaultServerFeaturesOnClientLag;                                 //@synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hybridClassifierQueue;                       //@synthesize hybridClassifierQueue=_hybridClassifierQueue - In the implementation block
@property (assign,nonatomic) double lastReportedEndpointTimeMs;                                        //@synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs - In the implementation block
@property (assign,nonatomic) double processedAudioInSeconds;                                           //@synthesize processedAudioInSeconds=_processedAudioInSeconds - In the implementation block
@property (assign,nonatomic) float lastEndpointPosterior;                                              //@synthesize lastEndpointPosterior=_lastEndpointPosterior - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateSerialQueue;                            //@synthesize stateSerialQueue=_stateSerialQueue - In the implementation block
@property (assign,nonatomic) BOOL didCommunicateEndpoint;                                              //@synthesize didCommunicateEndpoint=_didCommunicateEndpoint - In the implementation block
@property (assign,nonatomic) unsigned long long currentRequestSampleRate;                              //@synthesize currentRequestSampleRate=_currentRequestSampleRate - In the implementation block
@property (assign,nonatomic) double vtExtraAudioAtStartInMs;                                           //@synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                                    //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) double hepAudioOriginInMs;                                                //@synthesize hepAudioOriginInMs=_hepAudioOriginInMs - In the implementation block
@property (nonatomic,retain) NSDictionary * recordContext;                                             //@synthesize recordContext=_recordContext - In the implementation block
@property (assign,nonatomic) BOOL speechEndpointDetected;                                              //@synthesize speechEndpointDetected=_speechEndpointDetected - In the implementation block
@property (nonatomic,retain) NSDate * firstAudioPacketTimestamp;                                       //@synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp - In the implementation block
@property (assign,nonatomic) double firstAudioSampleSensorTimestamp;                                   //@synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp - In the implementation block
@property (assign,nonatomic) BOOL didTimestampFirstAudioPacket;                                        //@synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket - In the implementation block
@property (assign,nonatomic) BOOL recordingDidStop;                                                    //@synthesize recordingDidStop=_recordingDidStop - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> silencePosteriorGeneratorQueue;              //@synthesize silencePosteriorGeneratorQueue=_silencePosteriorGeneratorQueue - In the implementation block
@property (assign,nonatomic) BOOL didDetectSpeech;                                                     //@synthesize didDetectSpeech=_didDetectSpeech - In the implementation block
@property (assign,nonatomic) double elapsedTimeWithNoSpeech;                                           //@synthesize elapsedTimeWithNoSpeech=_elapsedTimeWithNoSpeech - In the implementation block
@property (assign,nonatomic) double trailingSilenceDurationAtEndpoint;                                 //@synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate;                   //@synthesize implDelegate=_implDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                                         //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) long long endpointStyle;                                                  //@synthesize endpointStyle=_endpointStyle - In the implementation block
@property (assign,nonatomic) double delay;                                                             //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double startWaitTime;                                                     //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime;                             //@synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime - In the implementation block
@property (assign,nonatomic) double minimumDurationForEndpointer;                                      //@synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer - In the implementation block
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime; 
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime; 
@property (assign,nonatomic) double bypassSamples; 
@property (assign,nonatomic) long long endpointMode;                                                   //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign,nonatomic) double interspeechWaitTime;                                               //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign,nonatomic) double endWaitTime;                                                       //@synthesize endWaitTime=_endWaitTime - In the implementation block
@property (assign,nonatomic) BOOL saveSamplesSeenInReset;                                              //@synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset - In the implementation block
-(id)init;
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(void)reset;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)preheat;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1 ;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateSerialQueue;
-(void)setStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)endpointStyle;
-(void)setEndpointStyle:(long long)arg1 ;
-(BOOL)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(BOOL)arg1 ;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3 ;
-(void)processAudioSamplesAsynchronously:(id)arg1 ;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(double)trailingSilenceDurationAtEndpoint;
-(id<CSEndpointAnalyzerImplDelegate>)implDelegate;
-(void)setImplDelegate:(id<CSEndpointAnalyzerImplDelegate>)arg1 ;
-(BOOL)canProcessCurrentRequest;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1 ;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2 ;
-(void)logFeaturesWithEvent:(id)arg1 locale:(id)arg2 ;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1 ;
-(NSString *)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;
-(unsigned long long)currentRequestSampleRate;
-(void)setCurrentRequestSampleRate:(unsigned long long)arg1 ;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(double)vtExtraAudioAtStartInMs;
-(void)setVtExtraAudioAtStartInMs:(double)arg1 ;
-(double)firstAudioSampleSensorTimestamp;
-(void)setFirstAudioSampleSensorTimestamp:(double)arg1 ;
-(void)setTrailingSilenceDurationAtEndpoint:(double)arg1 ;
-(void)CSAssetManagerDidDownloadNewAsset:(id)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2 ;
-(void)setRecordContext:(NSDictionary *)arg1 ;
-(NSDictionary *)recordContext;
-(void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2 ;
-(unsigned long long)numSamplesProcessed;
-(void)setNumSamplesProcessed:(unsigned long long)arg1 ;
-(void)_loadAndSetupEndpointerAssetIfNecessary;
-(void)_readParametersFromHEPAsset:(id)arg1 ;
-(BOOL)_shouldUsePhaticWithRecordContext;
-(BOOL)_multimodalEndpointerEnabled;
-(id)serverFeaturesLatencyDistributionDictionary;
-(void)terminateProcessing;
-(id)_getCSHybridEndpointerConfigForAsset:(id)arg1 ;
-(void)_updateAssetWithLanguage:(id)arg1 ;
-(void)_updateAssetWithCurrentLanguage;
-(void)setCanProcessCurrentRequest:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)apQueue;
-(void)setApQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)didAddAudio;
-(void)setDidAddAudio:(BOOL)arg1 ;
-(EARCaesuraSilencePosteriorGenerator *)caesuraSPG;
-(void)setCaesuraSPG:(EARCaesuraSilencePosteriorGenerator *)arg1 ;
-(EARClientSilenceFeatures *)clientSilenceFeaturesAtEndpoint;
-(void)setClientSilenceFeaturesAtEndpoint:(EARClientSilenceFeatures *)arg1 ;
-(_EAREndpointer *)hybridClassifier;
-(void)setHybridClassifier:(_EAREndpointer *)arg1 ;
-(void)setEndpointerModelVersion:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverFeaturesQueue;
-(void)setServerFeaturesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSServerEndpointFeatures *)lastKnownServerEPFeatures;
-(void)setLastKnownServerEPFeatures:(CSServerEndpointFeatures *)arg1 ;
-(EARClientSilenceFeatures *)lastKnownClientEPFeatures;
-(void)setLastKnownClientEPFeatures:(EARClientSilenceFeatures *)arg1 ;
-(NSMutableArray *)serverFeatureLatencies;
-(void)setServerFeatureLatencies:(NSMutableArray *)arg1 ;
-(double)lastKnowServerFeaturesLatency;
-(void)setLastKnowServerFeaturesLatency:(double)arg1 ;
-(BOOL)epResult;
-(void)setEpResult:(BOOL)arg1 ;
-(double)serverFeaturesWarmupLatency;
-(void)setServerFeaturesWarmupLatency:(double)arg1 ;
-(NSDate *)lastServerFeatureTimestamp;
-(void)setLastServerFeatureTimestamp:(NSDate *)arg1 ;
-(BOOL)didReceiveServerFeatures;
-(void)setDidReceiveServerFeatures:(BOOL)arg1 ;
-(double)clientLagThresholdMs;
-(void)setClientLagThresholdMs:(double)arg1 ;
-(double)clampedSFLatencyMsForClientLag;
-(void)setClampedSFLatencyMsForClientLag:(double)arg1 ;
-(BOOL)useDefaultServerFeaturesOnClientLag;
-(void)setUseDefaultServerFeaturesOnClientLag:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)hybridClassifierQueue;
-(void)setHybridClassifierQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)lastReportedEndpointTimeMs;
-(void)setLastReportedEndpointTimeMs:(double)arg1 ;
-(double)processedAudioInSeconds;
-(void)setProcessedAudioInSeconds:(double)arg1 ;
-(float)lastEndpointPosterior;
-(void)setLastEndpointPosterior:(float)arg1 ;
-(BOOL)didCommunicateEndpoint;
-(void)setDidCommunicateEndpoint:(BOOL)arg1 ;
-(double)hepAudioOriginInMs;
-(void)setHepAudioOriginInMs:(double)arg1 ;
-(BOOL)speechEndpointDetected;
-(void)setSpeechEndpointDetected:(BOOL)arg1 ;
-(NSDate *)firstAudioPacketTimestamp;
-(void)setFirstAudioPacketTimestamp:(NSDate *)arg1 ;
-(BOOL)didTimestampFirstAudioPacket;
-(void)setDidTimestampFirstAudioPacket:(BOOL)arg1 ;
-(BOOL)recordingDidStop;
-(void)setRecordingDidStop:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)silencePosteriorGeneratorQueue;
-(void)setSilencePosteriorGeneratorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)didDetectSpeech;
-(void)setDidDetectSpeech:(BOOL)arg1 ;
-(void)setElapsedTimeWithNoSpeech:(double)arg1 ;
@end

