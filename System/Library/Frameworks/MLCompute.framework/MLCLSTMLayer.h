/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLayer.h>

@class MLCLSTMDescriptor, NSArray, MLCActivationDescriptor;

@interface MLCLSTMLayer : MLCLayer {

	MLCLSTMDescriptor* _descriptor;
	NSArray* _gateActivations;
	MLCActivationDescriptor* _outputResultActivation;
	NSArray* _inputWeights;
	NSArray* _hiddenWeights;
	NSArray* _peepholeWeights;
	NSArray* _biases;
	NSArray* _inputWeightsParameters;
	NSArray* _hiddenWeightsParameters;
	NSArray* _peepholeWeightsParameters;
	NSArray* _biasesParameters;

}

@property (nonatomic,copy,readonly) MLCLSTMDescriptor * descriptor;                                //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gateActivations;                                     //@synthesize gateActivations=_gateActivations - In the implementation block
@property (nonatomic,copy,readonly) MLCActivationDescriptor * outputResultActivation;              //@synthesize outputResultActivation=_outputResultActivation - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputWeights;                                      //@synthesize inputWeights=_inputWeights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * hiddenWeights;                                     //@synthesize hiddenWeights=_hiddenWeights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * peepholeWeights;                                   //@synthesize peepholeWeights=_peepholeWeights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biases;                                            //@synthesize biases=_biases - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputWeightsParameters;                            //@synthesize inputWeightsParameters=_inputWeightsParameters - In the implementation block
@property (nonatomic,retain,readonly) NSArray * hiddenWeightsParameters;                           //@synthesize hiddenWeightsParameters=_hiddenWeightsParameters - In the implementation block
@property (nonatomic,retain,readonly) NSArray * peepholeWeightsParameters;                         //@synthesize peepholeWeightsParameters=_peepholeWeightsParameters - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biasesParameters;                                  //@synthesize biasesParameters=_biasesParameters - In the implementation block
+(id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5 ;
+(id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biases:(id)arg4 ;
+(id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 ;
-(id)description;
-(MLCLSTMDescriptor *)descriptor;
-(NSArray *)inputWeights;
-(NSArray *)biases;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(NSArray *)inputWeightsParameters;
-(NSArray *)hiddenWeightsParameters;
-(NSArray *)biasesParameters;
-(NSArray *)hiddenWeights;
-(id)resultStateTensorWithSources:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7 ;
-(NSArray *)peepholeWeights;
-(NSArray *)gateActivations;
-(MLCActivationDescriptor *)outputResultActivation;
-(NSArray *)peepholeWeightsParameters;
@end

