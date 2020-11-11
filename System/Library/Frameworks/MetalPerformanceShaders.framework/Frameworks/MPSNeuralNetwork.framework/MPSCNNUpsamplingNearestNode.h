/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode {

	double _scaleFactorX;
	double _scaleFactorY;

}

@property (nonatomic,readonly) double scaleFactorX;              //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) double scaleFactorY;              //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
+(id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(double)scaleFactorX;
-(double)scaleFactorY;
-(id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 ;
@end

