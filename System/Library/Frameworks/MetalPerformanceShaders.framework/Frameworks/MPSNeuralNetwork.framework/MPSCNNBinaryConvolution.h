/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer;
@class MPSCNNPoolingAverage;

@interface MPSCNNBinaryConvolution : MPSCNNKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	NeuronInfo _neuronInfo;
	unsigned long long _filterStride;
	id<MTLBuffer> _weights;
	id<MTLBuffer> _outputbias;
	id<MTLBuffer> _outputScale;
	id<MTLBuffer> _inputbias;
	id<MTLBuffer> _inputScale;
	unsigned long long _flags;
	unsigned long long _convType;
	MPSCNNPoolingAverage* _poolingFilter;
	BOOL _fullyConnected;
	float _outputScaleValue;

}

@property (nonatomic,readonly) unsigned long long inputFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP11*)arg4 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(id)initWithDevice:(id)arg1 convolutionData:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithDevice:(id)arg1 convolutionData:(id)arg2 outputBiasTerms:(const float*)arg3 outputScaleTerms:(const float*)arg4 inputBiasTerms:(const float*)arg5 inputScaleTerms:(const float*)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8 ;
-(id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned*)arg3 outputBiasTerms:(const float*)arg4 outputScaleTerms:(const float*)arg5 inputBiasTerms:(const float*)arg6 inputScaleTerms:(const float*)arg7 type:(unsigned long long)arg8 flags:(unsigned long long)arg9 ;
-(void)createBuffersFromkernelWeights:(const unsigned*)arg1 inputBiasTerms:(const float*)arg2 inputScaleTerms:(const float*)arg3 outputBiasTerms:(const float*)arg4 outputScaleTerms:(const float*)arg5 useHalfPrecision:(BOOL)arg6 ;
-(id)copyBuffer:(id)arg1 device:(id)arg2 ;
-(id)initWithDeviceImpl:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const unsigned*)arg3 biasTerms:(const float*)arg4 scaleValue:(float)arg5 type:(unsigned long long)arg6 flags:(unsigned long long)arg7 ;
@end

