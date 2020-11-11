/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzer.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMIVideoCommandBufferDelegate.h>
#import <libobjc.A.dylib/HMIVideoDecoderDelegate.h>
#import <libobjc.A.dylib/HMIVideoEncoderDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameSelectorDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameAnalyzerDelegate.h>
#import <libobjc.A.dylib/HMIVideoAssetWriterDelegate.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMIVideoCommandBuffer, HMIVideoDecoder, HMIVideoFrameSampler, HMIVideoEncoder, HMIVideoFrameSelector, HMIVideoFrameAnalyzer, HMIVideoAssetWriter, HMIVideoEventBuffer, NSData, HMIVideoPackageAnalyzer, HMIVideoAnalyzerScheduler, HMIVideoTimeline, NSString;

@interface HMIVideoAnalyzerServer : HMIVideoAnalyzer <HMFLogging, HMIVideoCommandBufferDelegate, HMIVideoDecoderDelegate, HMIVideoEncoderDelegate, HMIVideoFrameSelectorDelegate, HMIVideoFrameAnalyzerDelegate, HMIVideoAssetWriterDelegate, HMIVideoFrameSamplerDelegate, HMIVideoPackageAnalyzerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMIVideoCommandBuffer* _commandBuffer;
	HMIVideoDecoder* _decoder;
	HMIVideoFrameSampler* _frameThumbnailSampler;
	BOOL _encode;
	HMIVideoEncoder* _encoder;
	HMIVideoFrameSelector* _frameSelector;
	HMIVideoFrameAnalyzer* _frameAnalyzer;
	HMIVideoAssetWriter* _assetWriter;
	SCD_Struct_HM3 _currentPTS;
	SCD_Struct_HM3 _currentDTS;
	HMIVideoEventBuffer* _frameAnalyzerResultBuffer;
	HMIVideoEventBuffer* _thumbnailBuffer;
	NSData* _initializationSegment;
	HMIVideoEventBuffer* _dynamicConfigurationBuffer;
	HMIVideoPackageAnalyzer* _packageAnalyzer;
	BOOL _failed;
	BOOL _cancelled;
	HMIVideoAnalyzerScheduler* _scheduler;
	HMIVideoTimeline* _timeline;
	double _analysisFPS;
	long long _numDecodedSamples;
	long long _numDidAnalyzeFrames;
	long long _numDidAnalyzeFragments;
	BOOL _monitored;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)cancel;
-(double)delay;
-(unsigned long long)status;
-(void)finish;
-(void)flush;
-(id)stateDescription;
-(void)_notifyDelegateDidFailWithError:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(void)flushAsync;
-(void)setAnalysisFPS:(double)arg1 ;
-(void)encoder:(id)arg1 didEncodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)encoder:(id)arg1 didFailWithError:(id)arg2 ;
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2 error:(id)arg3 ;
-(BOOL)monitored;
-(void)setMonitored:(BOOL)arg1 ;
-(void)buffer:(id)arg1 willHandleSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)bufferWillFlush:(id)arg1 ;
-(void)bufferWillFinish:(id)arg1 ;
-(void)decoder:(id)arg1 didDecodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)decoder:(id)arg1 didFailWithError:(id)arg2 ;
-(void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2 ;
-(void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 timeRange:(SCD_Struct_HM4)arg3 ;
-(void)assetWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)frameSelector:(id)arg1 didSelectFrame:(opaqueCMSampleBufferRef)arg2 detections:(id)arg3 ;
-(void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleMessageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_ensureAssetWriterForFragment:(id)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handleDecodedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_ensureEncoderForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)dynamicConfigurationForTime:(SCD_Struct_HM3)arg1 ;
-(void)_notifyDelegateDidAnalyzeFrame:(id)arg1 ;
-(void)_notifyDelegateDidAnalyzeFragment:(id)arg1 ;
-(void)_produceResult:(SEL)arg1 withArguments:(id)arg2 ;
@end

