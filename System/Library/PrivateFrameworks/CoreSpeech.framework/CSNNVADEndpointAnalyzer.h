/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNResultsObserving.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImpl.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue, CSAudioFileWriter;
@class NSString, SNAudioStreamAnalyzer, AVAudioFormat, NSObject;

@interface CSNNVADEndpointAnalyzer : NSObject <SNResultsObserving, CSEndpointAnalyzerImpl> {

	BOOL _saveSamplesSeenInReset;
	BOOL _shouldDetectTwoShot;
	BOOL _didEnterTwoshot;
	BOOL _finishedSkippingSamplesForVT;
	id<CSEndpointAnalyzerDelegate> _delegate;
	id<CSEndpointAnalyzerImplDelegate> _implDelegate;
	unsigned long long _activeChannel;
	double _startWaitTime;
	double _endWaitTime;
	double _automaticEndpointingSuspensionEndTime;
	long long _endpointStyle;
	long long _endpointMode;
	double _interspeechWaitTime;
	double _delay;
	double _minimumDurationForEndpointer;
	double _lastEndOfVoiceActivityTime;
	double _lastStartOfVoiceActivityTime;
	SNAudioStreamAnalyzer* _snAudioStreamAnalyzer;
	unsigned long long _framePosition;
	unsigned long long _nnvadState;
	unsigned long long _numSamplesReceived;
	unsigned long long _currentRequestSampleRate;
	AVAudioFormat* _currentRequestAudioFormat;
	double _vtEndInSecs;
	unsigned long long _vtEndInSampleCount;
	double _vtExtraAudioAtStartInMs;
	double _nnvadAudioOriginInMs;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioFileWriter> _audioFileWriter;
	double _firstAudioSampleSensorTimestamp;
	long long _firstSampleId;
	unsigned long long _numSamplesSkippedForVT;

}

@property (nonatomic,retain) SNAudioStreamAnalyzer * snAudioStreamAnalyzer;                       //@synthesize snAudioStreamAnalyzer=_snAudioStreamAnalyzer - In the implementation block
@property (assign,nonatomic) unsigned long long framePosition;                                    //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned long long nnvadState;                                       //@synthesize nnvadState=_nnvadState - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesReceived;                               //@synthesize numSamplesReceived=_numSamplesReceived - In the implementation block
@property (assign,nonatomic) unsigned long long currentRequestSampleRate;                         //@synthesize currentRequestSampleRate=_currentRequestSampleRate - In the implementation block
@property (nonatomic,retain) AVAudioFormat * currentRequestAudioFormat;                           //@synthesize currentRequestAudioFormat=_currentRequestAudioFormat - In the implementation block
@property (assign,nonatomic) double vtEndInSecs;                                                  //@synthesize vtEndInSecs=_vtEndInSecs - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                               //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) double vtExtraAudioAtStartInMs;                                      //@synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs - In the implementation block
@property (assign,nonatomic) double nnvadAudioOriginInMs;                                         //@synthesize nnvadAudioOriginInMs=_nnvadAudioOriginInMs - In the implementation block
@property (assign,nonatomic) BOOL shouldDetectTwoShot;                                            //@synthesize shouldDetectTwoShot=_shouldDetectTwoShot - In the implementation block
@property (assign,nonatomic) BOOL didEnterTwoshot;                                                //@synthesize didEnterTwoshot=_didEnterTwoshot - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> audioFileWriter;                               //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (assign,nonatomic) double firstAudioSampleSensorTimestamp;                              //@synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp - In the implementation block
@property (assign,nonatomic) long long firstSampleId;                                             //@synthesize firstSampleId=_firstSampleId - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesSkippedForVT;                           //@synthesize numSamplesSkippedForVT=_numSamplesSkippedForVT - In the implementation block
@property (assign,nonatomic) BOOL finishedSkippingSamplesForVT;                                   //@synthesize finishedSkippingSamplesForVT=_finishedSkippingSamplesForVT - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate;              //@synthesize implDelegate=_implDelegate - In the implementation block
@property (nonatomic,readonly) BOOL canProcessCurrentRequest; 
@property (assign,nonatomic) unsigned long long activeChannel;                                    //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,readonly) NSString * endpointerModelVersion; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
@property (assign,nonatomic) long long endpointStyle;                                             //@synthesize endpointStyle=_endpointStyle - In the implementation block
@property (assign,nonatomic) double delay;                                                        //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double startWaitTime;                                                //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime;                        //@synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime - In the implementation block
@property (assign,nonatomic) double minimumDurationForEndpointer;                                 //@synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer - In the implementation block
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime;                                 //@synthesize lastEndOfVoiceActivityTime=_lastEndOfVoiceActivityTime - In the implementation block
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime;                               //@synthesize lastStartOfVoiceActivityTime=_lastStartOfVoiceActivityTime - In the implementation block
@property (assign,nonatomic) double bypassSamples; 
@property (assign,nonatomic) long long endpointMode;                                              //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign,nonatomic) double interspeechWaitTime;                                          //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign,nonatomic) double endWaitTime;                                                  //@synthesize endWaitTime=_endWaitTime - In the implementation block
@property (assign,nonatomic) BOOL saveSamplesSeenInReset;                                         //@synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset - In the implementation block
+(id)timeStampString;
-(id)init;
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
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
-(unsigned long long)framePosition;
-(void)setFramePosition:(unsigned long long)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(double)lastStartOfVoiceActivityTime;
-(double)lastEndOfVoiceActivityTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)automaticEndpointingSuspensionEndTime;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(id<CSAudioFileWriter>)audioFileWriter;
-(void)setAudioFileWriter:(id<CSAudioFileWriter>)arg1 ;
-(id)_pcmBufferForAudioChunk:(id)arg1 ;
-(double)_effectiveAudioTimeInSecsForSNObservation:(id)arg1 ;
-(void)_reportStartpointAtTsInSecs:(double)arg1 ;
-(BOOL)_shouldEnterTwoShotAtAudioTimeInSecs:(double)arg1 ;
-(void)_reportTwoShotAtTsInSecs:(double)arg1 ;
-(void)_reportEndpointAtTsInSecs:(double)arg1 ;
-(void)_checkSNObservationForStartpoint:(id)arg1 ;
-(void)_checkSNObservationForEndpoint:(id)arg1 ;
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
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1 ;
-(SNAudioStreamAnalyzer *)snAudioStreamAnalyzer;
-(void)setSnAudioStreamAnalyzer:(SNAudioStreamAnalyzer *)arg1 ;
-(unsigned long long)nnvadState;
-(void)setNnvadState:(unsigned long long)arg1 ;
-(unsigned long long)numSamplesReceived;
-(void)setNumSamplesReceived:(unsigned long long)arg1 ;
-(unsigned long long)currentRequestSampleRate;
-(void)setCurrentRequestSampleRate:(unsigned long long)arg1 ;
-(AVAudioFormat *)currentRequestAudioFormat;
-(void)setCurrentRequestAudioFormat:(AVAudioFormat *)arg1 ;
-(double)vtEndInSecs;
-(void)setVtEndInSecs:(double)arg1 ;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(double)vtExtraAudioAtStartInMs;
-(void)setVtExtraAudioAtStartInMs:(double)arg1 ;
-(double)nnvadAudioOriginInMs;
-(void)setNnvadAudioOriginInMs:(double)arg1 ;
-(BOOL)shouldDetectTwoShot;
-(void)setShouldDetectTwoShot:(BOOL)arg1 ;
-(BOOL)didEnterTwoshot;
-(void)setDidEnterTwoshot:(BOOL)arg1 ;
-(double)firstAudioSampleSensorTimestamp;
-(void)setFirstAudioSampleSensorTimestamp:(double)arg1 ;
-(long long)firstSampleId;
-(void)setFirstSampleId:(long long)arg1 ;
-(unsigned long long)numSamplesSkippedForVT;
-(void)setNumSamplesSkippedForVT:(unsigned long long)arg1 ;
-(BOOL)finishedSkippingSamplesForVT;
-(void)setFinishedSkippingSamplesForVT:(BOOL)arg1 ;
@end

