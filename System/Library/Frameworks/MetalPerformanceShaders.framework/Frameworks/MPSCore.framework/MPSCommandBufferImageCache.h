/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLCommandBuffer, MPSHeapProvider;
#import <MPSCore/MPSCore-Structs.h>
@interface MPSCommandBufferImageCache : NSObject {

	MPSDevice* _device;
	id<MTLCommandBuffer> _cmdBuffer;
	long long _debugMode;
	HeapNode* _freeList[65];
	CacheFrame* _frameList;
	ResourceNode* _retainedResources;
	MPSAutoCache* _userCacheFrame;
	unsigned long long _minimumBin;
	unsigned long long _batchSize;
	BOOL _needsRetain;
	unsigned long long _totalAllocationBytes;
	unsigned long long _cacheDelay;
	atomic<long> _commandBufferCount;
	id<MPSHeapProvider> _heapProvider;
	BOOL _isMPSCommandBuffer;

}

@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer;              //@synthesize cmdBuffer=_cmdBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long batchSizeHint;                  //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) id<MPSHeapProvider> heapProvider;                  //@synthesize heapProvider=_heapProvider - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)addHandlerToCommandBuffer:(id)arg1 ;
-(id)newHeapBlock:(unsigned long long)arg1 ;
-(void)releaseHeapBlock:(id)arg1 heapProvider:(id)arg2 ;
-(unsigned long long)batchSizeHint;
-(void)setBatchSizeHint:(unsigned long long)arg1 ;
-(id<MPSHeapProvider>)heapProvider;
-(void)setHeapProvider:(id<MPSHeapProvider>)arg1 ;
@end

