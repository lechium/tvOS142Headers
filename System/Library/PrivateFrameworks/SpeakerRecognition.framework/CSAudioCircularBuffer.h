/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioCircularBuffer : NSObject {

	unique_ptr<corespeech::CSAudioCircularBufferImpl<float>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float> > >* _csAudioCircularBufferImpl;
	unsigned long long _bufferLength;

}

@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
+(id)createAudioCircularBufferWithDefaultSettings;
-(void)reset;
-(unsigned long long)sampleCount;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(unsigned long long)bufferLength;
-(void)setBufferLength:(unsigned long long)arg1 ;
-(id)copybufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3 ;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)copySamplesFromHostTime:(unsigned long long)arg1 ;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3 ;
@end

