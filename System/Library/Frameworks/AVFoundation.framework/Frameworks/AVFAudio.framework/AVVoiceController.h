/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSDictionary, AVAudioFormat;

@interface AVVoiceController : NSObject {

	void* _impl;
	unsigned long long _alertStartTime;

}

@property (getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled; 
@property (getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled; 
@property (copy,readonly) NSString * recordRoute; 
@property (copy,readonly) NSString * playbackRoute; 
@property (readonly) unsigned long long lastRecordStartTime; 
@property (readonly) NSDictionary * voiceTriggerInfo; 
@property (getter=isSynchronousCallbackEnabled) BOOL synchronousCallbackEnabled; 
@property (readonly) AVAudioFormat * pcmRecordBufferFormat; 
@property (setter=setDuckOthersOption:) BOOL duckOthersOption; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) NSDictionary * recordSettings; 
@property (getter=isRecording,readonly) BOOL recording; 
@property (retain) id<Endpointer> endpointerDelegate; 
@property (assign) int recordEndpointMode; 
@property (assign) double recordStartWaitTime; 
@property (assign) double recordInterspeechWaitTime; 
@property (assign) double recordEndWaitTime; 
@property (assign) id<AVVoiceControllerRecordDelegate> recordDelegate; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (readonly) NSDictionary * playbackSettings; 
@property (getter=isPlaying,readonly) BOOL playing; 
@property (assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate; 
@property (assign) float playbackVolume; 
@property (getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled; 
@property (assign) float alertVolume; 
@property (readonly) unsigned long long alertStartTime;                                       //@synthesize alertStartTime=_alertStartTime - In the implementation block
@property (readonly) NSDictionary * metrics; 
-(id)retain;
-(oneway void)release;
-(void)dealloc;
-(void)finalize;
-(void)decodeError;
-(id)initWithError:(id*)arg1 ;
-(NSDictionary *)metrics;
-(NSString *)recordRoute;
-(id)initWithContext:(id)arg1 error:(id*)arg2 ;
-(void)prewarmAudioSession;
-(void)releaseAudioSession;
-(void)releaseAudioSession:(unsigned long long)arg1 ;
-(void)enableMiniDucking:(BOOL)arg1 ;
-(BOOL)willAcceptContext:(id)arg1 ;
-(BOOL)IsDeviceAvailableInLocalRoute:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2 ;
-(BOOL)playAlertSoundForType:(int)arg1 ;
-(void)resetEndpointer;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(int)doStartRecordingAtTime_v1:(unsigned long long)arg1 behavior:(id)arg2 ;
-(void)setupAlertBehavior_v1:(id)arg1 ;
-(BOOL)startRecording;
-(BOOL)startRecording:(id*)arg1 ;
-(BOOL)startRecordingAtTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)configureAlertBehavior:(id)arg1 ;
-(BOOL)prepareListenWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)startListening:(id*)arg1 ;
-(BOOL)startListeningWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)setRecordMode:(long long)arg1 error:(id*)arg2 ;
-(BOOL)releaseAudioSessionForListening:(id*)arg1 ;
-(BOOL)releaseAudioSessionForListening:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)stopRecording;
-(BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)startPlaying;
-(void)stopPlaying;
-(id<AVVoiceControllerRecordDelegate>)recordDelegate;
-(void)setRecordDelegate:(id<AVVoiceControllerRecordDelegate>)arg1 ;
-(NSDictionary *)recordSettings;
-(double)getRecordBufferDuration;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(id<Endpointer>)endpointerDelegate;
-(void)setEndpointerDelegate:(id<Endpointer>)arg1 ;
-(int)recordEndpointMode;
-(void)setRecordEndpointMode:(int)arg1 ;
-(double)recordStartWaitTime;
-(void)setRecordStartWaitTime:(double)arg1 ;
-(double)recordInterspeechWaitTime;
-(void)setRecordInterspeechWaitTime:(double)arg1 ;
-(double)recordEndWaitTime;
-(void)setRecordEndWaitTime:(double)arg1 ;
-(id<AVVoiceControllerPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<AVVoiceControllerPlaybackDelegate>)arg1 ;
-(NSDictionary *)playbackSettings;
-(double)getPlaybackBufferDuration;
-(BOOL)setPlaybackBufferDuration:(double)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isRecording;
-(void)setAlertVolume:(float)arg1 ;
-(float)alertVolume;
-(unsigned long long)getAlertStartTime;
-(void)setPlaybackVolume:(float)arg1 ;
-(float)playbackVolume;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isStopOnEndpointEnabled;
-(void)setStopOnEndpointEnabled:(BOOL)arg1 ;
-(id)currentRecordDeviceInfo;
-(unsigned long long)setContext:(id)arg1 error:(id*)arg2 ;
-(void)prepareRecordForStream:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)prepareRecordForStream:(id)arg1 error:(id*)arg2 ;
-(void)startRecordWithSettings:(id)arg1 completion:(/*^block*/id)arg2 alertCompletion:(/*^block*/id)arg3 audioCallback:(/*^block*/id)arg4 ;
-(BOOL)startRecordForStream:(id)arg1 error:(id*)arg2 ;
-(BOOL)configureAlertBehaviorForStream:(id)arg1 error:(id*)arg2 ;
-(void)stopRecordOnStream:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)stopRecordForStream:(unsigned long long)arg1 error:(id*)arg2 ;
-(long long)getCurrentStreamState:(unsigned long long)arg1 ;
-(id)getRecordDeviceInfoForStream:(unsigned long long)arg1 ;
-(BOOL)activateAudioSessionForStream:(unsigned long long)arg1 isPrewarm:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)activateAudioSessionForStream:(unsigned long long)arg1 isPrewarm:(BOOL)arg2 recordMode:(BOOL)arg3 error:(id*)arg4 ;
-(void)deactivateAudioSessionWithOptions:(unsigned long long)arg1 ;
-(long long)getCurrentSessionState;
-(BOOL)setContextForStream:(id)arg1 forStream:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)playAlert:(int)arg1 withOverride:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)playAlertSoundForType:(int)arg1 overrideMode:(long long)arg2 ;
-(double)getRecordBufferDurationForStream:(unsigned long long)arg1 ;
-(id)getRecordSettingsForStream:(unsigned long long)arg1 ;
-(BOOL)isMeteringEnabledForStream:(unsigned long long)arg1 ;
-(BOOL)updateMeterForStream:(unsigned long long)arg1 ;
-(float)getPeakPowerForStream:(unsigned long long)arg1 forChannel:(unsigned long long)arg2 ;
-(float)getAveragePowerForStream:(unsigned long long)arg1 forChannel:(unsigned long long)arg2 ;
-(void)setRecordStatusChangeBlock:(/*^block*/id)arg1 ;
-(BOOL)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setRecordModeForStream:(unsigned long long)arg1 recordMode:(long long)arg2 error:(id*)arg3 ;
-(long long)getRecordModeForStream:(unsigned long long)arg1 ;
-(unsigned long long)alertStartTime;
-(void)setSessionNotifications_v1v2;
-(void)removeSessionNotifications;
-(ControllerImpl*)impl;
-(void)hardwareConfigChanged;
-(void)handlePluginDidPublishDevice:(id)arg1 withDevice:(id)arg2 ;
-(void)handlePluginDidUnpublishDevice:(id)arg1 withDevice:(id)arg2 ;
-(void)beganRecording_v1v2:(id)arg1 ;
-(void)finishedRecording_v1v2:(id)arg1 ;
-(void)startpointDetected;
-(void)interspeechPointDetected;
-(void)endpointDetected;
-(void)encodeError;
-(void)beganPlaying;
-(void)playbackBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedPlaying_v1v2;
-(void)alertPlaybackFinishedOfType_v1v2:(int)arg1 ;
-(void)notifyStreamInvalidated_v1v2:(unsigned long long)arg1 ;
-(void)beginRecordInterruption_v1v2;
-(void)beginRecordInterruptionWithContext_v1v2:(id)arg1 ;
-(void)endRecordInterruption_v1v2;
-(void)beginPlaybackInterruption_v1v2;
-(void)endPlaybackInterruption_v1v2;
-(void)beginAudioSessionActivate_v1v2:(BOOL)arg1 ;
-(void)endAudioSessionActivate_v1v2:(BOOL)arg1 ;
-(void)sendRemoteConnectionMessage:(id)arg1 ;
-(NSString *)playbackRoute;
-(unsigned long long)lastRecordStartTime;
-(NSDictionary *)voiceTriggerInfo;
-(BOOL)isBargeInDetectEnabled;
-(void)setBargeInDetectEnabled:(BOOL)arg1 ;
-(BOOL)isStopOnBargeInEnabled;
-(void)setStopOnBargeInEnabled:(BOOL)arg1 ;
-(BOOL)isSynchronousCallbackEnabled;
-(void)setSynchronousCallbackEnabled:(BOOL)arg1 ;
-(AVAudioFormat *)pcmRecordBufferFormat;
-(void)setDuckOthersOption:(BOOL)arg1 ;
-(BOOL)duckOthersOption;
-(unsigned long long)numberOfChannels;
-(void)handleInterruption_v1v2:(id)arg1 ;
-(void)handleRouteChange_v1v2:(id)arg1 ;
-(void)handleMediaServerDeath_v1v2:(id)arg1 ;
-(void)handleMediaServerReset_v1v2:(id)arg1 ;
@end

