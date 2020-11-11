/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Announce/Announce-Structs.h>
@interface ANProcessAudio : NSObject
+(BOOL)process:(id)arg1 to:(id)arg2 withOptions:(unsigned long long)arg3 error:(id*)arg4 ;
+(AudioComponentDescription)_lookupComponent:(unsigned long long)arg1 ;
+(id)_ANAudioEffectToName:(unsigned long long)arg1 ;
+(BOOL)_configureEngine:(id)arg1 player:(id)arg2 effect:(id)arg3 sourceFile:(id)arg4 error:(id*)arg5 ;
+(void)_renderAudioTo:(id)arg1 length:(long long)arg2 engine:(id)arg3 error:(id*)arg4 ;
+(id)_lookupTunings:(unsigned long long)arg1 ;
@end

