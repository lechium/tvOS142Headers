/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWNode, BWSynchronizerNode, BWNodeOutput;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {

	BWNode* _sourceNode;
	BWSynchronizerNode* _synchronizerNode;
	OpaqueCMClockRef _masterClock;

}

@property (assign,nonatomic) OpaqueCMClockRef masterClock;                                        //@synthesize masterClock=_masterClock - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatDescription; 
@property (nonatomic,readonly) BWNodeOutput * output; 
+(void)initialize;
-(void)dealloc;
-(BWNodeOutput *)output;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 errorOut:(int*)arg4 ;
-(int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2 ;
@end

