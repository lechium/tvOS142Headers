/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableArray;

@interface VCPVoiceDetector : NSObject {

	NSDictionary* _model;
	AudioStreamBasicDescription _audioStream;
	int _sampleBatchSize;
	SCD_Struct_VC6 _trackStart;
	BOOL _voiceActivity;
	SCD_Struct_VC6 _voiceStart;
	NSMutableArray* _voiceDetections;
	NSMutableArray* _utteranceDetections;
	NSMutableArray* _musicDetections;

}

@property (retain) NSMutableArray * voiceDetections;              //@synthesize voiceDetections=_voiceDetections - In the implementation block
+(id)detector;
-(id)init;
-(id)results;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(id)audioFormatRequirements;
-(NSMutableArray *)voiceDetections;
-(void)setVoiceDetections:(NSMutableArray *)arg1 ;
-(void)addDetectionFromTime:(const SCD_Struct_VC6*)arg1 toTime:(const SCD_Struct_VC6*)arg2 result:(id)arg3 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
-(int)loadModel;
@end

