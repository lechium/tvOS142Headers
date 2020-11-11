/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSPreferences : NSObject
+(id)sharedPreferences;
-(BOOL)voiceTriggerEnabled;
-(double)audioSessionActivationDelay;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)isMultiPhraseVTEnabled;
-(BOOL)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)phraseSpotterEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(BOOL)voiceTriggerInCoreSpeech;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForwatchOS;
-(id)assistantAudioFileLogDirectory;
-(BOOL)isAdBlockerAudioLoggingEnabled;
-(id)voiceTriggerAudioLogDirectory;
-(unsigned long long)maxNumGradingFiles;
-(unsigned long long)maxNumLoggingFiles;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(id)assistantLogDirectory;
-(BOOL)runningVoiceTriggerOnMac;
-(BOOL)shouldOverwriteRemoteVADScore;
-(float)overwritingRemoteVADScore;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(id)myriadHashFilePath;
-(BOOL)programmableAudioInjectionEnabled;
-(BOOL)twoShotNotificationEnabled;
-(id)baseDir;
-(id)myriadHashDirectory;
-(id)interstitialRelativeDirForLevel:(long long)arg1 ;
-(BOOL)enableAudioInjection:(BOOL)arg1 withKey:(CFStringRef)arg2 ;
-(BOOL)audioInjectionEnabledWithKey:(CFStringRef)arg1 ;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)isAttentiveSiriEnabled;
-(id)ssvLogDirectory;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg1 ;
-(id)trialBaseAssetDirectory;
-(id)getCatAdBlockerAssetUpdateDirectory;
-(BOOL)speakerRecognitionAudioLoggingEnabled;
-(void)setJarvisTriggerMode:(long long)arg1 ;
-(long long)getJarvisTriggerMode;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(BOOL)forceVoiceTriggerAPMode;
-(BOOL)forceVoiceTriggerAOPMode;
-(id)getStartOfSpeechAudioLogFilePath;
-(BOOL)_isDirectory:(id)arg1 ;
-(double)remoteVoiceTriggerDelayTime;
-(double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1 ;
-(id)interstitialAbsoluteDirForLevel:(long long)arg1 ;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)enableAudioInjection:(BOOL)arg1 ;
-(BOOL)audioInjectionEnabled;
-(BOOL)enableProgrammableAudioInjection:(BOOL)arg1 ;
-(void)setAudioInjectionFilePath:(id)arg1 ;
-(BOOL)isPHSSupported;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)isSpeakerRecognitionAvailable;
-(unsigned long long)speakerIdScoreReportingType;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(BOOL)smartSiriVolumeContextAwareLoggingEnabled;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)iOSBargeInSupportEnabled;
-(void)setHearstFirstPassModelVersion:(id)arg1 ;
-(void)setHearstSecondPassModelVersion:(id)arg1 ;
-(id)fakeHearstModelPath;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)bypassPersonalizedHeySiri;
-(BOOL)isMultiChannelAudioLoggingEnabled;
-(BOOL)isSelfTriggerFileLoggingEnabled;
@end

