/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTPreferences : NSObject
+(id)sharedPreferences;
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
-(id)init;
-(void)synchronize;
-(id)_languageCode;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(id)_localeIdentifier;
-(BOOL)_voiceTriggerEnabled;
-(BOOL)corespeechDaemonEnabled;
-(BOOL)isMultiPhraseVTEnabled;
-(BOOL)_storeModeEnabled;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 sender:(id)arg2 ;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg1 ;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)_isLocalVoiceTriggerAvailable;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)_gibraltarHasBuiltInMic;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(id)_VTSATBasePath;
-(id)_VTSATCachePath;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(BOOL)phraseSpotterEnabled;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg1 ;
-(id)localizedTriggerPhrase;
-(BOOL)secondPassAudioLoggingEnabled;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg1 ;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg1 ;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(void)discardAllSATEnrollment;
-(id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1 ;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1 ;
-(id)getSATEnrollmentPath;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)gestureSubscriptionEnabled;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)isSATAvailable;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(id)audioInjectionFilePath;
-(BOOL)useSiriActivationSPIForiOS;
-(BOOL)useSiriActivationSPIForwatchOS;
@end
