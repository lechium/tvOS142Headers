/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;
@interface MPSNNScaleNode : MPSNNFilterNode {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _size;

}
+(id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
+(id)nodeWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)initWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
@end

