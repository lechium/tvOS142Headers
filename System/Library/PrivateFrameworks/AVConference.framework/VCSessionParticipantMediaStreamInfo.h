/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCMediaStream, NSMutableArray, NSArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject {

	VCMediaStream* _stream;
	NSMutableArray* _streamConfigs;

}

@property (nonatomic,retain) VCMediaStream * stream;                 //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSArray * streamConfigs;              //@synthesize streamConfigs=_streamConfigs - In the implementation block
-(id)init;
-(void)dealloc;
-(VCMediaStream *)stream;
-(void)setStream:(VCMediaStream *)arg1 ;
-(NSArray *)streamConfigs;
-(void)addStreamConfig:(id)arg1 ;
@end

