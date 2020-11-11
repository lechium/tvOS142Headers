/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPUConvolution : _MLCCPULayer
+(id)layerWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 convolutionTranspose:(BOOL)arg5 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 weightsDelta:(id)arg2 fullyConnected:(BOOL)arg3 ;
+(id)createBNNSNDArrayDescriptorForDescriptor:(id)arg1 biasDelta:(id)arg2 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3 convolutionDescriptor:(id)arg4 neuronDescriptor:(id)arg5 ;
@end

