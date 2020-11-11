/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSMediaPlayingMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSSiriEnabledMonitorDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSSmartSiriVolumeProcessor.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUserDefaults, CSSmartSiriVolumeEnablePolicy, CSAsset, CSAudioStream, NSString;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor> {

	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> >* _smartSiriVolumeNoiseLevel;
	unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> >* _smartSiriVolumeLKFS;
	vector<float, std::__1::allocator<float> >* _floatBuffer;
	NSUserDefaults* _defaults;
	CSSmartSiriVolumeEnablePolicy* _ssvEnablePolicy;
	unsigned long long _startAnalyzeSampleCount;
	unsigned long long _samplesFed;
	unsigned long long _processedSampleCount;
	BOOL _isStartSampleCountMarked;
	BOOL _isListenPollingStarting;
	BOOL _shouldPauseSSVProcess;
	BOOL _shouldPauseLKFSProcess;
	BOOL _alarmSoundIsFiring;
	BOOL _timerSoundIsFiring;
	BOOL _mediaIsPlaying;
	CSAsset* _currentAsset;
	float _musicVolumeDB;
	float _alarmVolume;
	unsigned long long _noiseLevelChannelBitset;
	unsigned long long _LKFSChannelBitset;
	unsigned _energyBufferSize;
	unsigned _noiseLowerPercentile;
	unsigned _noiseUpperPercentile;
	unsigned _LKFSLowerPercentile;
	unsigned _LKFSUpperPercentile;
	float _noiseTimeConstant;
	float _noiseMicSensitivityOffset;
	float _noiseMicSensitivityOffsetDeviceSimple;
	float _LKFSTimeConstant;
	float _LKFSMicSensitivityOffset;
	float _noiseTTSMappingInputRangeLow;
	float _noiseTTSMappingInputRangeHigh;
	float _noiseTTSMappingOutputRangeLow;
	float _noiseTTSMappingOutputRangeHigh;
	float _LKFSTTSMappingInputRangeLow;
	float _LKFSTTSMappingInputRangeHigh;
	float _LKFSTTSMappingOutputRangeLow;
	float _LKFSTTSMappingOutputRangeHigh;
	float _userOffsetInputRangeLow;
	float _userOffsetInputRangeHigh;
	float _userOffsetOutputRangeLow;
	float _userOffsetOutputRangeHigh;
	float _TTSVolumeLowerLimitDB;
	float _TTSVolumeUpperLimitDB;
	float _noiseWeight;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_source> _listenPollingTimer;
	long long _listenPollingTimerCount;

}

@property (nonatomic,retain) CSAudioStream * audioStream;                                   //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> listenPollingTimer;              //@synthesize listenPollingTimer=_listenPollingTimer - In the implementation block
@property (assign,nonatomic) long long listenPollingTimerCount;                             //@synthesize listenPollingTimerCount=_listenPollingTimerCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reset;
-(void)reset;
-(void)setAsset:(id)arg1 ;
-(void)_stopListening;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(void)initializeMediaPlayingState;
-(void)initializeTimerState;
-(void)initializeAlarmState;
-(void)_setAsset:(id)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)startSmartSiriVolume;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(id)initWithSamplingRate:(float)arg1 asset:(id)arg2 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3 ;
-(void)didReceiveAlarmChanged:(long long)arg1 ;
-(void)didReceiveTimerChanged:(long long)arg1 ;
-(void)didReceiveMusicVolumeChanged:(float)arg1 ;
-(void)didReceiveAlarmVolumeChanged:(float)arg1 ;
-(void)didDetectKeywordWithResult:(id)arg1 ;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_setDefaultParameters;
-(float)_convertDB2Mag:(float)arg1 ;
-(void)fetchInitSystemVolumes;
-(void)_resumeSSVProcessing;
-(void)_pauseSSVProcessing;
-(float)_getDevicedBFSForInputLinearVolume:(float)arg1 ;
-(float*)_getFloatBufferData:(id)arg1 ;
-(void)_prepareSoundLevelBufferFromSamples:(unsigned)arg1 soundType:(long long)arg2 ;
-(void)_processAudioChunk:(id)arg1 soundType:(long long)arg2 ;
-(float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7 ;
-(float)_getUserOffsetFromMusicVolumeDB:(float)arg1 ;
-(float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3 ;
-(float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1 ;
-(float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5 ;
-(float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1 ;
-(float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1 ;
-(float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1 ;
-(float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1 ;
-(float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1 ;
-(float)estimateSoundLevelbySoundType:(long long)arg1 ;
-(float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2 ;
-(void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(BOOL)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5 ;
-(NSObject*<OS_dispatch_source>)listenPollingTimer;
-(void)setListenPollingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)listenPollingTimerCount;
-(void)setListenPollingTimerCount:(long long)arg1 ;
@end
