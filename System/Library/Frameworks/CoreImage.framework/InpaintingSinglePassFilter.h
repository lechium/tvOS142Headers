/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface InpaintingSinglePassFilter : CIImageProcessorKernel
+(int)outputFormat;
+(id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 error:(id*)arg6 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(id)performSinglePassInpaintingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
+(BOOL)allowPartialOutputRegion;
+(id)performInpaintingAndBlendingOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 blendingRadius:(int)arg3 inpaintingResourceDescriptor:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6 ;
@end

