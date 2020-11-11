/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerEndInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;

@end

