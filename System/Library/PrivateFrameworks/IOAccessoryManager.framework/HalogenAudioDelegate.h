/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HalogenAudioDelegate <NSObject>
@required
-(int)recordCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;
-(int)playbackCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;

@end

