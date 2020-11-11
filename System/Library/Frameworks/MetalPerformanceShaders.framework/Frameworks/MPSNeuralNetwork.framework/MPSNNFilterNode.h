/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSNNPadding;
#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
@class NSMutableArray, MPSNNImageNode, NSString, MPSNNStateNode, NSArray;

@interface MPSNNFilterNode : NSObject {

	NSMutableArray* _sourceImages;
	NSMutableArray* _sourceStates;
	MPSNNImageNode* _resultImage;
	NSMutableArray* _resultStates;
	id<MPSNNPadding> _paddingPolicy;
	NSString* _label;

}

@property (nonatomic,readonly) MPSNNImageNode * resultImage;              //@synthesize resultImage=_resultImage - In the implementation block
@property (nonatomic,readonly) MPSNNStateNode * resultState; 
@property (nonatomic,readonly) NSArray * resultStates; 
@property (nonatomic,retain) id<MPSNNPadding> paddingPolicy;              //@synthesize paddingPolicy=_paddingPolicy - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3 ;
-(FilterGraphNodeRef)newFilterNode;
-(id)gradientFilterWithSource:(id)arg1 ;
-(Class)gradientClass;
-(MPSNNStateNode *)resultState;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(id)sourceImages;
-(id)sourceStates;
-(id<MPSNNPadding>)paddingPolicy;
-(MPSNNImageNode *)resultImage;
-(id)resultStatesNoAllocate;
-(id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(/*^block*/id)arg2 ;
-(id)gradientFiltersWithSource:(id)arg1 ;
-(void)setPaddingPolicy:(id<MPSNNPadding>)arg1 ;
-(NSArray *)resultStates;
@end

