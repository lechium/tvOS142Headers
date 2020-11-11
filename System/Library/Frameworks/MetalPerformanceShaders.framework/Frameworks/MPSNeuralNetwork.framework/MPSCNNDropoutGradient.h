/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNDropoutGradient : MPSCNNGradientKernel {

	float _keepProbability;
	unsigned long long _seed;
	MPSImageCoordinate _maskStrideInPixels;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStrideInPixels=_maskStrideInPixels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)seed;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
@end

