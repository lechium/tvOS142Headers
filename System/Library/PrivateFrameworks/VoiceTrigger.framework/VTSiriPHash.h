/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTSiriPHash : NSObject {

	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)sharedPhash;
+(unsigned long long)sampleSizeForSignalEstimate;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(void)setSignalEstimate:(short)arg1 ;
-(unsigned char)signalFractional;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

