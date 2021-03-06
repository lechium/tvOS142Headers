/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFPlaybackStackControllerDelegate
@required
-(void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 timeStamp:(id)arg3;
-(void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;
-(void)itemDidFailToLoad:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidBecomeCurrent:(id)arg1 timeStamp:(id)arg2;
-(void)itemDidResignCurrent:(id)arg1 timeStamp:(id)arg2;
-(void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 timeStamp:(id)arg3;
-(void)playbackDidStopForItem:(id)arg1 timeStamp:(id)arg2;
-(void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;
-(void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;
-(void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;
-(void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)playbackIsLikelyToKeepUp:(BOOL)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;
-(void)didReachEndOfQueueWithReason:(id)arg1;
-(void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;
-(void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(BOOL)arg2 timeStamp:(id)arg3;
-(void)routeDidChange:(BOOL)arg1 metadata:(id)arg2 timeStamp:(id)arg3;
-(void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;
-(void)screenRecordingDidChange:(BOOL)arg1 timeStamp:(id)arg2;
-(void)userActionDidBegin:(id)arg1;
-(void)userActionDidEnd:(id)arg1 error:(id)arg2;
-(void)mediaServicesInterruptionDidBeginWithTimeStamp:(id)arg1;
-(void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;
-(void)playbackIsBlockedOnNonPlayableItem:(id)arg1;

@end

