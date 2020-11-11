/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@protocol OS_dispatch_queue, BWInferenceResourceProvider;
@class BWInferenceVideoRequirement, FigLearnedMattingMetalStage, BWEspressoInferenceProvider, NSObject, BWLearnedMattingInferenceConfiguration, NSSet, NSArray, NSString;

@interface BWLearnedMattingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {

	BWInferenceVideoRequirement* _inputImageVideoRequirement;
	BWInferenceVideoRequirement* _inputAlphaVideoRequirement;
	BWInferenceVideoRequirement* _outputAlphaVideoRequirement;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	FigLearnedMattingMetalStage* _metalProcessor;
	BWInferenceVideoRequirement* _tileImageInputVideoRequirement;
	BWInferenceVideoRequirement* _tileAlphaInputVideoRequirement;
	BWInferenceVideoRequirement* _tileAlphaOutputVideoRequirement;
	BWInferenceVideoRequirement* _accumulateAlphaVideoRequirement;
	BWEspressoInferenceProvider* _espressoProvider;
	NSObject*<OS_dispatch_queue> _espressoWorkQueue;
	 _outputTileSize;
	 _inputTileSize;
	 _inputAlphaScale;
	 _outputTileOverlap;
	 _inputTileOverlap;
	 _numTiles;
	BWLearnedMattingInferenceConfiguration* _configuration;
	id<BWInferenceResourceProvider> _resourceProvider;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements; 
@property (nonatomic,readonly) NSArray * outputVideoRequirements; 
@property (nonatomic,readonly) NSArray * cloneVideoRequirements; 
@property (nonatomic,readonly) NSArray * inputMetadataRequirements; 
@property (nonatomic,readonly) NSArray * outputMetadataRequirements; 
@property (nonatomic,readonly) unsigned allowedPixelBufferCompressionDirection; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(int)type;
-(id<BWInferenceExecutable>)executable;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)executionTarget;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1 ;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(unsigned)allowedPixelBufferCompressionDirection;
-(id)_networkURLForVersion:(unsigned)arg1 ;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW7)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)_initEspressoProvider;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2 ;
@end

