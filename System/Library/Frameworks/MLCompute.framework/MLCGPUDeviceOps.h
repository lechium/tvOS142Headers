/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCDeviceOps.h>

@class _MLCGPULayer, NSArray, NSMutableArray, MLCActivationDescriptor;

@interface MLCGPUDeviceOps : MLCDeviceOps {

	BOOL _countIncludesPadding;
	BOOL _useSourceGradientDeviceMemoryForResultGradientTensor;
	BOOL _useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
	BOOL _transposeX;
	BOOL _transposeY;
	BOOL _permutationNeededForFC;
	int _arithmeticOp;
	_MLCGPULayer* _layer;
	id _forwardKernel;
	id _gradientKernel;
	id _secondaryGradientKernel;
	id _lossInitialGradientKernel;
	id _combinedForwardAndGradientLossKernel;
	id _reduceLossKernel;
	id _gradientState;
	id _forwardStatisticsKernel;
	id _gradientStatisticsKernel;
	NSArray* _momentumVectors;
	NSArray* _velocityVectors;
	NSArray* _centerWeightVectors;
	id _exportableState;
	id _movingState;
	NSArray* _bnMovingUpdateKernels;
	unsigned long long _totalElementsPerChannel;
	id _imageToMatrixCopyKernel;
	id _matrixToImageCopyKernel;
	id _permuteKernel;
	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;
	NSMutableArray* _matrixDescsForward;
	NSMutableArray* _matrixDescsBackward;
	MLCActivationDescriptor* _neuronDescriptor;
	NSArray* _source0Shape;
	NSArray* _source1Shape;
	NSArray* _begin;
	NSArray* _count;
	NSArray* _stride;
	NSArray* _end;

}

@property (nonatomic,retain) _MLCGPULayer * layer;                                                            //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain,readonly) id forwardKernel;                                                       //@synthesize forwardKernel=_forwardKernel - In the implementation block
@property (nonatomic,retain,readonly) id gradientKernel;                                                      //@synthesize gradientKernel=_gradientKernel - In the implementation block
@property (nonatomic,retain,readonly) id secondaryGradientKernel;                                             //@synthesize secondaryGradientKernel=_secondaryGradientKernel - In the implementation block
@property (nonatomic,retain) id lossInitialGradientKernel;                                                    //@synthesize lossInitialGradientKernel=_lossInitialGradientKernel - In the implementation block
@property (nonatomic,retain) id combinedForwardAndGradientLossKernel;                                         //@synthesize combinedForwardAndGradientLossKernel=_combinedForwardAndGradientLossKernel - In the implementation block
@property (nonatomic,retain) id reduceLossKernel;                                                             //@synthesize reduceLossKernel=_reduceLossKernel - In the implementation block
@property (nonatomic,retain) id gradientState;                                                                //@synthesize gradientState=_gradientState - In the implementation block
@property (nonatomic,retain) id forwardStatisticsKernel;                                                      //@synthesize forwardStatisticsKernel=_forwardStatisticsKernel - In the implementation block
@property (nonatomic,retain) id gradientStatisticsKernel;                                                     //@synthesize gradientStatisticsKernel=_gradientStatisticsKernel - In the implementation block
@property (nonatomic,retain) NSArray * momentumVectors;                                                       //@synthesize momentumVectors=_momentumVectors - In the implementation block
@property (nonatomic,retain) NSArray * velocityVectors;                                                       //@synthesize velocityVectors=_velocityVectors - In the implementation block
@property (nonatomic,retain) NSArray * centerWeightVectors;                                                   //@synthesize centerWeightVectors=_centerWeightVectors - In the implementation block
@property (nonatomic,retain) id exportableState;                                                              //@synthesize exportableState=_exportableState - In the implementation block
@property (nonatomic,retain) id movingState;                                                                  //@synthesize movingState=_movingState - In the implementation block
@property (nonatomic,retain) NSArray * bnMovingUpdateKernels;                                                 //@synthesize bnMovingUpdateKernels=_bnMovingUpdateKernels - In the implementation block
@property (assign,nonatomic) unsigned long long totalElementsPerChannel;                                      //@synthesize totalElementsPerChannel=_totalElementsPerChannel - In the implementation block
@property (nonatomic,retain) id imageToMatrixCopyKernel;                                                      //@synthesize imageToMatrixCopyKernel=_imageToMatrixCopyKernel - In the implementation block
@property (nonatomic,retain) id matrixToImageCopyKernel;                                                      //@synthesize matrixToImageCopyKernel=_matrixToImageCopyKernel - In the implementation block
@property (nonatomic,retain) id permuteKernel;                                                                //@synthesize permuteKernel=_permuteKernel - In the implementation block
@property (assign,nonatomic) unsigned long long paddingLeft;                                                  //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) unsigned long long paddingRight;                                                 //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) unsigned long long paddingTop;                                                   //@synthesize paddingTop=_paddingTop - In the implementation block
@property (assign,nonatomic) unsigned long long paddingBottom;                                                //@synthesize paddingBottom=_paddingBottom - In the implementation block
@property (assign,nonatomic) BOOL countIncludesPadding;                                                       //@synthesize countIncludesPadding=_countIncludesPadding - In the implementation block
@property (assign,nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor;                       //@synthesize useSourceGradientDeviceMemoryForResultGradientTensor=_useSourceGradientDeviceMemoryForResultGradientTensor - In the implementation block
@property (assign,nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;              //@synthesize useSourceGradientDeviceMemoryForSecondaryResultGradientTensor=_useSourceGradientDeviceMemoryForSecondaryResultGradientTensor - In the implementation block
@property (nonatomic,retain) NSMutableArray * matrixDescsForward;                                             //@synthesize matrixDescsForward=_matrixDescsForward - In the implementation block
@property (nonatomic,retain) NSMutableArray * matrixDescsBackward;                                            //@synthesize matrixDescsBackward=_matrixDescsBackward - In the implementation block
@property (assign,nonatomic) BOOL transposeX;                                                                 //@synthesize transposeX=_transposeX - In the implementation block
@property (assign,nonatomic) BOOL transposeY;                                                                 //@synthesize transposeY=_transposeY - In the implementation block
@property (nonatomic,retain) MLCActivationDescriptor * neuronDescriptor;                                      //@synthesize neuronDescriptor=_neuronDescriptor - In the implementation block
@property (assign,nonatomic) int arithmeticOp;                                                                //@synthesize arithmeticOp=_arithmeticOp - In the implementation block
@property (nonatomic,copy) NSArray * source0Shape;                                                            //@synthesize source0Shape=_source0Shape - In the implementation block
@property (nonatomic,copy) NSArray * source1Shape;                                                            //@synthesize source1Shape=_source1Shape - In the implementation block
@property (nonatomic,copy) NSArray * begin;                                                                   //@synthesize begin=_begin - In the implementation block
@property (nonatomic,copy) NSArray * count;                                                                   //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * stride;                                                                  //@synthesize stride=_stride - In the implementation block
@property (nonatomic,copy) NSArray * end;                                                                     //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) BOOL permutationNeededForFC;                                                     //@synthesize permutationNeededForFC=_permutationNeededForFC - In the implementation block
+(id)deviceOps;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 ;
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)count;
-(void)setCount:(NSArray *)arg1 ;
-(NSArray *)end;
-(NSArray *)begin;
-(NSArray *)stride;
-(void)setStride:(NSArray *)arg1 ;
-(_MLCGPULayer *)layer;
-(void)setLayer:(_MLCGPULayer *)arg1 ;
-(void)setBegin:(NSArray *)arg1 ;
-(void)setEnd:(NSArray *)arg1 ;
-(unsigned long long)paddingTop;
-(void)setPaddingTop:(unsigned long long)arg1 ;
-(unsigned long long)paddingRight;
-(void)setPaddingRight:(unsigned long long)arg1 ;
-(unsigned long long)paddingBottom;
-(void)setPaddingBottom:(unsigned long long)arg1 ;
-(unsigned long long)paddingLeft;
-(void)setPaddingLeft:(unsigned long long)arg1 ;
-(id)forwardKernel;
-(id)gradientKernel;
-(BOOL)permutationNeededForFC;
-(void)setPermuteKernel:(id)arg1 ;
-(void)setPermutationNeededForFC:(BOOL)arg1 ;
-(NSArray *)momentumVectors;
-(NSArray *)velocityVectors;
-(NSArray *)centerWeightVectors;
-(void)setMomentumVectors:(NSArray *)arg1 ;
-(void)setVelocityVectors:(NSArray *)arg1 ;
-(void)setCenterWeightVectors:(NSArray *)arg1 ;
-(void)setLossInitialGradientKernel:(id)arg1 ;
-(void)setCombinedForwardAndGradientLossKernel:(id)arg1 ;
-(void)setReduceLossKernel:(id)arg1 ;
-(void)setBnMovingUpdateKernels:(NSArray *)arg1 ;
-(void)setTransposeX:(BOOL)arg1 ;
-(void)setTransposeY:(BOOL)arg1 ;
-(void)setMatrixDescsForward:(NSMutableArray *)arg1 ;
-(void)setMatrixDescsBackward:(NSMutableArray *)arg1 ;
-(void)setImageToMatrixCopyKernel:(id)arg1 ;
-(void)setMatrixToImageCopyKernel:(id)arg1 ;
-(void)setNeuronDescriptor:(MLCActivationDescriptor *)arg1 ;
-(BOOL)countIncludesPadding;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 secondaryGradientKernel:(id)arg3 forwardStatistics:(id)arg4 gradientStatistics:(id)arg5 ;
-(id)gradientState;
-(id)secondaryGradientKernel;
-(id)lossInitialGradientKernel;
-(id)forwardStatisticsKernel;
-(id)gradientStatisticsKernel;
-(id)combinedForwardAndGradientLossKernel;
-(id)reduceLossKernel;
-(void)setGradientState:(id)arg1 ;
-(void)setForwardStatisticsKernel:(id)arg1 ;
-(void)setGradientStatisticsKernel:(id)arg1 ;
-(id)exportableState;
-(void)setExportableState:(id)arg1 ;
-(id)movingState;
-(void)setMovingState:(id)arg1 ;
-(NSArray *)bnMovingUpdateKernels;
-(unsigned long long)totalElementsPerChannel;
-(void)setTotalElementsPerChannel:(unsigned long long)arg1 ;
-(id)imageToMatrixCopyKernel;
-(id)matrixToImageCopyKernel;
-(id)permuteKernel;
-(void)setCountIncludesPadding:(BOOL)arg1 ;
-(BOOL)useSourceGradientDeviceMemoryForResultGradientTensor;
-(void)setUseSourceGradientDeviceMemoryForResultGradientTensor:(BOOL)arg1 ;
-(BOOL)useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
-(void)setUseSourceGradientDeviceMemoryForSecondaryResultGradientTensor:(BOOL)arg1 ;
-(NSMutableArray *)matrixDescsForward;
-(NSMutableArray *)matrixDescsBackward;
-(BOOL)transposeX;
-(BOOL)transposeY;
-(MLCActivationDescriptor *)neuronDescriptor;
-(int)arithmeticOp;
-(void)setArithmeticOp:(int)arg1 ;
-(NSArray *)source0Shape;
-(void)setSource0Shape:(NSArray *)arg1 ;
-(NSArray *)source1Shape;
-(void)setSource1Shape:(NSArray *)arg1 ;
@end

