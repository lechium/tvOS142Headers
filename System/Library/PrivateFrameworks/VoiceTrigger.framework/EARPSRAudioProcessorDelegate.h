/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EARPSRAudioProcessorDelegate <NSObject>
@optional
-(void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
-(void)psrAudioProcessor:(id)arg1 hasResult:(id)arg2 numElements:(unsigned long long)arg3;
-(void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;

@end
