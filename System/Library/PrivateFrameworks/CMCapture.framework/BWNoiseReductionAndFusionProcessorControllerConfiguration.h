/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, BWVideoFormat, FigStillImageSharedProcessingResources;


@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration <NSObject>
@property (nonatomic,retain) NSArray * sensorConfigurations; 
@property (assign,nonatomic) BOOL deferredProcessingEnabled; 
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue; 
@property (nonatomic,retain) BWVideoFormat * inputFormat; 
@property (nonatomic,retain) BWVideoFormat * outputFormat; 
@property (assign,nonatomic) BOOL fusionEnabled; 
@property (assign,nonatomic) BOOL lowLightFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionWaitForProcessingToFinish; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers; 
@property (assign,nonatomic) unsigned figThreadPriority; 
@property (assign,nonatomic) BOOL semanticRenderingEnabled; 
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor; 
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources; 
@required
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(id)arg1;
-(BWVideoFormat *)inputFormat;
-(FigStillImageSharedProcessingResources *)sharedResources;
-(void)setInputFormat:(id)arg1;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1;
-(BOOL)deferredProcessingEnabled;
-(NSArray *)sensorConfigurations;
-(void)setSensorConfigurations:(id)arg1;
-(void)setDeferredProcessingEnabled:(BOOL)arg1;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id)arg1;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1;
-(float)gainMapMainImageDownscalingFactor;
-(BOOL)fusionEnabled;
-(void)setFusionEnabled:(BOOL)arg1;
-(BOOL)lowLightFusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionWaitForProcessingToFinish;
-(void)setDeepFusionWaitForProcessingToFinish:(BOOL)arg1;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1;
-(void)setSharedResources:(id)arg1;

@end

