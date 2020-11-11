/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNAudioDataSourceUtilities : NSObject
+(void)enableAlwaysOnAudioRouting:(OpaqueAudioQueueRef)arg1 ;
+(void)setChannelAssignment:(unsigned)arg1 onQueue:(OpaqueAudioQueueRef)arg2 ;
+(id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)builtInMicrophoneDeviceUID;
+(id)audioQueueConfiguration;
@end

