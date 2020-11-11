/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreSpeechXPCProtocol
@required
-(void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2;
-(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(/*^block*/id)arg6;
-(void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(/*^block*/id)arg3;

@end
