/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject {

	AVAudioPlayerNode* _player;
	AVAudioUnitTimePitch* _timePitch;

}

@property (nonatomic,retain) AVAudioPlayerNode * player;                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVAudioUnitTimePitch * timePitch;              //@synthesize timePitch=_timePitch - In the implementation block
-(id)init;
-(AVAudioPlayerNode *)player;
-(void)setPlayer:(AVAudioPlayerNode *)arg1 ;
-(void)setTimePitch:(AVAudioUnitTimePitch *)arg1 ;
-(AVAudioUnitTimePitch *)timePitch;
-(void)connectToEngine:(id)arg1 ;
-(void)disconnectFromEngine:(id)arg1 ;
-(BOOL)beginPlayback:(id)arg1 withError:(id*)arg2 ;
@end
