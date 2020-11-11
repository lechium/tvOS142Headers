/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNNPadding, MPSImageAllocator;
@class MPSExternalCNNBinary;

@interface MPSCNNBinaryKernel : MPSKernel {

	SCD_Struct_MP11 _primaryOffset;
	SCD_Struct_MP11 _secondaryOffset;
	SCD_Struct_MP4 _clipRect;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelOffset;
	unsigned long long _secondarySourceFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelMaxCount;
	unsigned long long _secondarySourceFeatureChannelMaxCount;
	MPSExternalCNNBinary* _plugin;
	BOOL _pluginSupportsBatchEncode;
	unsigned long long _primaryKernelWidth;
	unsigned long long _primaryKernelHeight;
	unsigned long long _secondaryKernelWidth;
	unsigned long long _secondaryKernelHeight;
	unsigned long long _primaryStrideInPixelsX;
	unsigned long long _primaryStrideInPixelsY;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _primaryDilationRateX;
	unsigned long long _primaryDilationRateY;
	unsigned long long _secondaryDilationRateX;
	unsigned long long _secondaryDilationRateY;
	BOOL _isBackwards;
	BOOL _supportsBroadcasting;
	id<MPSNNPadding> _padding;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	/*function pointer*/void* _batchEncode;
	void* _encodeData;
	id<MPSImageAllocator> _destinationImageAllocator;
	unsigned long long _pluginOptions;

}

@property (assign,nonatomic) SCD_Struct_MP11 primaryOffset;                                         //@synthesize primaryOffset=_primaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP11 secondaryOffset;                                       //@synthesize secondaryOffset=_secondaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 clipRect;                                               //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;                    //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primarySourceFeatureChannelOffset;                  //@synthesize primarySourceFeatureChannelOffset=_primarySourceFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long secondarySourceFeatureChannelOffset;                //@synthesize secondarySourceFeatureChannelOffset=_secondarySourceFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primarySourceFeatureChannelMaxCount;                //@synthesize primarySourceFeatureChannelMaxCount=_primarySourceFeatureChannelMaxCount - In the implementation block
@property (assign,nonatomic) unsigned long long secondarySourceFeatureChannelMaxCount;              //@synthesize secondarySourceFeatureChannelMaxCount=_secondarySourceFeatureChannelMaxCount - In the implementation block
@property (assign,nonatomic) unsigned long long primaryEdgeMode;                                    //@synthesize primaryEdgeMode=_primaryEdgeMode - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryEdgeMode;                                  //@synthesize secondaryEdgeMode=_secondaryEdgeMode - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKernelWidth;                               //@synthesize primaryKernelWidth=_primaryKernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKernelHeight;                              //@synthesize primaryKernelHeight=_primaryKernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryKernelWidth;                             //@synthesize secondaryKernelWidth=_secondaryKernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryKernelHeight;                            //@synthesize secondaryKernelHeight=_secondaryKernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsX;                             //@synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsY;                             //@synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsX;                           //@synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsY;                           //@synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryDilationRateX;                             //@synthesize primaryDilationRateX=_primaryDilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryDilationRateY;                             //@synthesize primaryDilationRateY=_primaryDilationRateY - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryDilationRateX;                           //@synthesize secondaryDilationRateX=_secondaryDilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryDilationRateY;                           //@synthesize secondaryDilationRateY=_secondaryDilationRateY - In the implementation block
@property (nonatomic,readonly) BOOL isBackwards;                                                    //@synthesize isBackwards=_isBackwards - In the implementation block
@property (nonatomic,readonly) BOOL isStateModified; 
@property (nonatomic,retain) id<MPSNNPadding> padding;                                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;                       //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)clipRect;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 ;
-(MPSRegion)primarySourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(MPSRegion)secondarySourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(SCD_Struct_MP11)primaryOffset;
-(void)setPrimaryOffset:(SCD_Struct_MP11)arg1 ;
-(SCD_Struct_MP11)secondaryOffset;
-(void)setSecondaryOffset:(SCD_Struct_MP11)arg1 ;
-(unsigned long long)primaryEdgeMode;
-(void)setPrimaryEdgeMode:(unsigned long long)arg1 ;
-(unsigned long long)secondaryEdgeMode;
-(void)setSecondaryEdgeMode:(unsigned long long)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP11*)arg4 secondaryOffset:(SCD_Struct_MP11*)arg5 kernelOffset:(SCD_Struct_MP11*)arg6 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)primaryStrideInPixelsX;
-(unsigned long long)primaryStrideInPixelsY;
-(unsigned long long)primarySourceFeatureChannelMaxCount;
-(BOOL)setPlugin:(id)arg1 ;
-(id)plugin;
-(void)copyToBinaryGradientState:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(unsigned long long)primarySourceFeatureChannelOffset;
-(unsigned long long)secondarySourceFeatureChannelOffset;
-(unsigned long long)secondarySourceFeatureChannelMaxCount;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 destinationImages:(id)arg5 ;
-(void)setPrimaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(unsigned long long)secondaryStrideInPixelsX;
-(unsigned long long)secondaryStrideInPixelsY;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(id<MPSNNPadding>)padding;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(BOOL)filterHandlesPlugin;
-(void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 destinationImages:(id)arg4 ;
-(void)setPrimarySourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setPrimarySourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setSecondarySourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSecondarySourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(id)resultStateBatchForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(unsigned long long)encodingStorageSizeForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(unsigned long long)batchEncodingStorageSizeForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(BOOL)isStateModified;
-(unsigned long long)primaryKernelWidth;
-(unsigned long long)primaryKernelHeight;
-(unsigned long long)primaryDilationRateX;
-(unsigned long long)primaryDilationRateY;
-(BOOL)appendBatchBarrier;
-(unsigned long long)secondaryKernelWidth;
-(unsigned long long)secondaryKernelHeight;
-(unsigned long long)secondaryDilationRateX;
-(unsigned long long)secondaryDilationRateY;
-(id)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 subBatchIndex:(unsigned long long)arg6 batchSize:(unsigned long long)arg7 ;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 destinationStates:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(BOOL)isBackwards;
@end

