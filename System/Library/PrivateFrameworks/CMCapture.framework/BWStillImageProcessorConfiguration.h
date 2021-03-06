/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLCommandQueue;
@class NSArray, BWInferenceScheduler;

@interface BWStillImageProcessorConfiguration : NSObject {

	NSArray* _sensorConfigurations;
	BOOL _deferredProcessingEnabled;
	id<MTLCommandQueue> _metalCommandQueue;
	BWInferenceScheduler* _inferenceScheduler;
	unsigned _figThreadPriority;

}

@property (nonatomic,retain) NSArray * sensorConfigurations;                         //@synthesize sensorConfigurations=_sensorConfigurations - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                         //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;                  //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
@property (nonatomic,retain) BWInferenceScheduler * inferenceScheduler;              //@synthesize inferenceScheduler=_inferenceScheduler - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                             //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
-(void)dealloc;
-(BOOL)deferredProcessingEnabled;
-(NSArray *)sensorConfigurations;
-(void)setSensorConfigurations:(NSArray *)arg1 ;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(BWInferenceScheduler *)inferenceScheduler;
-(void)setInferenceScheduler:(BWInferenceScheduler *)arg1 ;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1 ;
@end

