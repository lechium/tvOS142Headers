/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCMediaStreamDelegate <NSObject>
@optional
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg1;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg1;
-(void)vcMediaStream:(id)arg1 remoteMediaStalled:(BOOL)arg2;
-(void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2;
-(void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
-(void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4;
-(void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;
-(void)vcMediaStream:(id)arg1 didReceiveFirstVideoFrameWithTime:(SCD_Struct_VC63)arg2;
-(void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
-(void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;

@required
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
-(void)vcMediaStreamDidStop:(id)arg1;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;

@end

