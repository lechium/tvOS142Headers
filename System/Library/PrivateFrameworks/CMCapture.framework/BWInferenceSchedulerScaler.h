/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>

@protocol BWInferenceScalingProvider;
@class BWInferenceVideoRequirement, NSArray, NSString;

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferenceJobProvider, BWInferencePreventable> {

	BWInferenceVideoRequirement* _inputRequirement;
	NSArray* _outputRequirements;
	id<BWInferenceScalingProvider> _provider;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * inputRequirement;              //@synthesize inputRequirement=_inputRequirement - In the implementation block
@property (nonatomic,readonly) NSArray * outputRequirements;                                //@synthesize outputRequirements=_outputRequirements - In the implementation block
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(int)prepare;
-(id<BWInferenceExecutable>)executable;
-(NSArray *)outputRequirements;
-(BWInferenceVideoRequirement *)inputRequirement;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 options:(unsigned long long)arg3 ;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW7)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW7)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW7)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(id)_newProviderForWithOptions:(unsigned long long)arg1 ;
@end

