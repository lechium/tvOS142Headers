/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSMutableArray;

@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps {

	BOOL _mhaHasZeroAttention;
	BOOL _mhaHasKeyMask;
	BOOL _mhaHasAttentionMask;
	BOOL _mhaHasBias;
	BOOL _mhaHasAttentionBias;
	unsigned long long _mhaHeadCount;
	id _mhaConcatKernel;
	id _mhaPermuteKernel;
	NSMutableArray* _mhaSourcesQKV;
	NSMutableArray* _mhaInputProjForwardKernels;
	NSMutableArray* _mhaInputProjGradientKernels;
	NSMutableArray* _mhaInputProjStates;
	NSMutableArray* _mhaInputProjResults;
	NSMutableArray* _mhaMatMulForwardKernels;
	NSMutableArray* _mhaMatMulGradientKernels;
	NSMutableArray* _mhaMatMulSecondaryGradientKernels;
	NSMutableArray* _mhaMatMulSourcesQKV;
	NSMutableArray* _mhaQKSoftMaxForwardKernels;
	NSMutableArray* _mhaQKSoftMaxGradientKernels;
	NSMutableArray* _mhaQKSoftMaxResultMatrix;
	NSMutableArray* _mhaAttentionBiasTensors;
	NSMutableArray* _mhaAttentionBiasGradientTensors;
	id _mhaZeroAttenionData;
	id _mhaKeyMaskCompareKernel;
	id _mhaKeyMaskGateKernel;
	id _mhaAttentionMaskKernel;
	id _mhaDropoutForwardKernel;
	id _mhaDropoutGradientKernel;
	id _mhaDropoutSource;
	id _mhaDropoutState;
	NSMutableArray* _mhaMultiGPUChildOps;

}

@property (assign,nonatomic) unsigned long long mhaHeadCount;                                 //@synthesize mhaHeadCount=_mhaHeadCount - In the implementation block
@property (nonatomic,retain) id mhaConcatKernel;                                              //@synthesize mhaConcatKernel=_mhaConcatKernel - In the implementation block
@property (nonatomic,retain) id mhaPermuteKernel;                                             //@synthesize mhaPermuteKernel=_mhaPermuteKernel - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaSourcesQKV;                                  //@synthesize mhaSourcesQKV=_mhaSourcesQKV - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaInputProjForwardKernels;                     //@synthesize mhaInputProjForwardKernels=_mhaInputProjForwardKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaInputProjGradientKernels;                    //@synthesize mhaInputProjGradientKernels=_mhaInputProjGradientKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaInputProjStates;                             //@synthesize mhaInputProjStates=_mhaInputProjStates - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaInputProjResults;                            //@synthesize mhaInputProjResults=_mhaInputProjResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaMatMulForwardKernels;                        //@synthesize mhaMatMulForwardKernels=_mhaMatMulForwardKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaMatMulGradientKernels;                       //@synthesize mhaMatMulGradientKernels=_mhaMatMulGradientKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaMatMulSecondaryGradientKernels;              //@synthesize mhaMatMulSecondaryGradientKernels=_mhaMatMulSecondaryGradientKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaMatMulSourcesQKV;                            //@synthesize mhaMatMulSourcesQKV=_mhaMatMulSourcesQKV - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaQKSoftMaxForwardKernels;                     //@synthesize mhaQKSoftMaxForwardKernels=_mhaQKSoftMaxForwardKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaQKSoftMaxGradientKernels;                    //@synthesize mhaQKSoftMaxGradientKernels=_mhaQKSoftMaxGradientKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaQKSoftMaxResultMatrix;                       //@synthesize mhaQKSoftMaxResultMatrix=_mhaQKSoftMaxResultMatrix - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaAttentionBiasTensors;                        //@synthesize mhaAttentionBiasTensors=_mhaAttentionBiasTensors - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaAttentionBiasGradientTensors;                //@synthesize mhaAttentionBiasGradientTensors=_mhaAttentionBiasGradientTensors - In the implementation block
@property (assign,nonatomic) BOOL mhaHasZeroAttention;                                        //@synthesize mhaHasZeroAttention=_mhaHasZeroAttention - In the implementation block
@property (nonatomic,retain) id mhaZeroAttenionData;                                          //@synthesize mhaZeroAttenionData=_mhaZeroAttenionData - In the implementation block
@property (assign,nonatomic) BOOL mhaHasKeyMask;                                              //@synthesize mhaHasKeyMask=_mhaHasKeyMask - In the implementation block
@property (nonatomic,retain) id mhaKeyMaskCompareKernel;                                      //@synthesize mhaKeyMaskCompareKernel=_mhaKeyMaskCompareKernel - In the implementation block
@property (nonatomic,retain) id mhaKeyMaskGateKernel;                                         //@synthesize mhaKeyMaskGateKernel=_mhaKeyMaskGateKernel - In the implementation block
@property (assign,nonatomic) BOOL mhaHasAttentionMask;                                        //@synthesize mhaHasAttentionMask=_mhaHasAttentionMask - In the implementation block
@property (nonatomic,retain) id mhaAttentionMaskKernel;                                       //@synthesize mhaAttentionMaskKernel=_mhaAttentionMaskKernel - In the implementation block
@property (nonatomic,retain) id mhaDropoutForwardKernel;                                      //@synthesize mhaDropoutForwardKernel=_mhaDropoutForwardKernel - In the implementation block
@property (nonatomic,retain) id mhaDropoutGradientKernel;                                     //@synthesize mhaDropoutGradientKernel=_mhaDropoutGradientKernel - In the implementation block
@property (nonatomic,retain) id mhaDropoutSource;                                             //@synthesize mhaDropoutSource=_mhaDropoutSource - In the implementation block
@property (nonatomic,retain) id mhaDropoutState;                                              //@synthesize mhaDropoutState=_mhaDropoutState - In the implementation block
@property (nonatomic,retain) NSMutableArray * mhaMultiGPUChildOps;                            //@synthesize mhaMultiGPUChildOps=_mhaMultiGPUChildOps - In the implementation block
@property (assign,nonatomic) BOOL mhaHasBias;                                                 //@synthesize mhaHasBias=_mhaHasBias - In the implementation block
@property (assign,nonatomic) BOOL mhaHasAttentionBias;                                        //@synthesize mhaHasAttentionBias=_mhaHasAttentionBias - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(NSMutableArray *)mhaInputProjStates;
-(NSMutableArray *)mhaAttentionBiasGradientTensors;
-(unsigned long long)mhaHeadCount;
-(NSMutableArray *)mhaQKSoftMaxResultMatrix;
-(void)setMhaQKSoftMaxResultMatrix:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mhaMatMulSourcesQKV;
-(void)setMhaMatMulSourcesQKV:(NSMutableArray *)arg1 ;
-(void)setMhaInputProjStates:(NSMutableArray *)arg1 ;
-(id)mhaPermuteKernel;
-(NSMutableArray *)mhaInputProjForwardKernels;
-(NSMutableArray *)mhaInputProjResults;
-(NSMutableArray *)mhaAttentionBiasTensors;
-(BOOL)mhaHasZeroAttention;
-(id)mhaConcatKernel;
-(id)mhaZeroAttenionData;
-(void)setMhaZeroAttenionData:(id)arg1 ;
-(NSMutableArray *)mhaMatMulForwardKernels;
-(BOOL)mhaHasAttentionMask;
-(BOOL)mhaHasKeyMask;
-(id)mhaAttentionMaskKernel;
-(id)mhaKeyMaskCompareKernel;
-(id)mhaKeyMaskGateKernel;
-(NSMutableArray *)mhaQKSoftMaxForwardKernels;
-(id)mhaDropoutForwardKernel;
-(void)setMhaDropoutSource:(id)arg1 ;
-(void)setMhaDropoutState:(id)arg1 ;
-(void)setMhaSourcesQKV:(NSMutableArray *)arg1 ;
-(id)mhaDropoutGradientKernel;
-(id)mhaDropoutSource;
-(id)mhaDropoutState;
-(NSMutableArray *)mhaMatMulGradientKernels;
-(NSMutableArray *)mhaMatMulSecondaryGradientKernels;
-(NSMutableArray *)mhaQKSoftMaxGradientKernels;
-(NSMutableArray *)mhaInputProjGradientKernels;
-(NSMutableArray *)mhaSourcesQKV;
-(void)setMhaHeadCount:(unsigned long long)arg1 ;
-(void)setMhaConcatKernel:(id)arg1 ;
-(void)setMhaPermuteKernel:(id)arg1 ;
-(void)setMhaInputProjForwardKernels:(NSMutableArray *)arg1 ;
-(void)setMhaInputProjGradientKernels:(NSMutableArray *)arg1 ;
-(void)setMhaInputProjResults:(NSMutableArray *)arg1 ;
-(void)setMhaMatMulForwardKernels:(NSMutableArray *)arg1 ;
-(void)setMhaMatMulGradientKernels:(NSMutableArray *)arg1 ;
-(void)setMhaMatMulSecondaryGradientKernels:(NSMutableArray *)arg1 ;
-(void)setMhaQKSoftMaxForwardKernels:(NSMutableArray *)arg1 ;
-(void)setMhaQKSoftMaxGradientKernels:(NSMutableArray *)arg1 ;
-(void)setMhaAttentionBiasTensors:(NSMutableArray *)arg1 ;
-(void)setMhaAttentionBiasGradientTensors:(NSMutableArray *)arg1 ;
-(void)setMhaHasZeroAttention:(BOOL)arg1 ;
-(void)setMhaHasKeyMask:(BOOL)arg1 ;
-(void)setMhaKeyMaskCompareKernel:(id)arg1 ;
-(void)setMhaKeyMaskGateKernel:(id)arg1 ;
-(void)setMhaHasAttentionMask:(BOOL)arg1 ;
-(void)setMhaAttentionMaskKernel:(id)arg1 ;
-(void)setMhaDropoutForwardKernel:(id)arg1 ;
-(void)setMhaDropoutGradientKernel:(id)arg1 ;
-(NSMutableArray *)mhaMultiGPUChildOps;
-(void)setMhaMultiGPUChildOps:(NSMutableArray *)arg1 ;
-(BOOL)mhaHasBias;
-(void)setMhaHasBias:(BOOL)arg1 ;
-(BOOL)mhaHasAttentionBias;
-(void)setMhaHasAttentionBias:(BOOL)arg1 ;
@end

