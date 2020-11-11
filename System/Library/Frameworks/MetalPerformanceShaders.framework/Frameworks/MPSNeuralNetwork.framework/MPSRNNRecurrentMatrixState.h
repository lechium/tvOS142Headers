/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState {

	id* recurrentMatrices;
	id* cellMatrices;
	int nLayers;
	BOOL _isTemporary;

}
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(id)initWithDevice:(id)arg1 commandBuffer:(id)arg2 recurrentMatrixDescriptors:(id*)arg3 cellMatrixDescriptors:(id*)arg4 isTemporary:(BOOL)arg5 layerCount:(int)arg6 ;
-(id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
@end

