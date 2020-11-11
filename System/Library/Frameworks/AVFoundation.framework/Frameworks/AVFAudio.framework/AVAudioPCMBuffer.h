/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic,readonly) NSArray * peakPowerPerChannel; 
@property (nonatomic,readonly) NSArray * averagePowerPerChannel; 
@property (nonatomic,readonly) unsigned frameCapacity; 
@property (assign,nonatomic) unsigned frameLength; 
@property (nonatomic,readonly) unsigned long long stride; 
@property (nonatomic,readonly) float* floatChannelData; 
@property (nonatomic,readonly) short* int16ChannelData; 
@property (nonatomic,readonly) int* int32ChannelData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)frameLength;
-(unsigned long long)stride;
-(void)setByteLength:(unsigned)arg1 ;
-(id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned)arg2 ;
-(unsigned)frameCapacity;
-(void)setFrameLength:(unsigned)arg1 ;
-(void)_initChannelPtrs;
-(float*)floatChannelData;
-(int*)int32ChannelData;
-(short*)int16ChannelData;
-(BOOL)appendDataFromBuffer:(id)arg1 ;
-(BOOL)appendDataFromBuffer:(id)arg1 channel:(long long)arg2 ;
-(id)splitIntoSingleChannelBuffers;
-(NSArray *)averagePowerPerChannel;
-(NSArray *)peakPowerPerChannel;
-(id)calculatePower:(unsigned long long)arg1 ;
-(float)calculatePower:(unsigned long long)arg1 forFloatData:(float*)arg2 stride:(long long)arg3 frameLength:(unsigned)arg4 ;
@end

