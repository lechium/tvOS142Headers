/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandBuffer.h>

@protocol MTLDevice, OS_dispatch_semaphore;
@class MTLIOAccelDevice, NSObject, NSMutableSet;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {

	MTLIOAccelDevice*<MTLDevice> _device;
	MTLIOAccelCommandBufferStorage* _storage;
	unsigned long long* _submitToHardwareTimeStampPointer;
	unsigned long long _protectionOptions;
	void* _scheduledCallbackBlockPtr;
	void* _completedCallbackBlockPtr;
	NSObject*<OS_dispatch_semaphore> _commitAndResetSem;
	NSMutableSet* _purgedResources;

}

@property (readonly) MTLIOAccelCommandBufferResourceInfo* commandBufferResourceInfo; 
@property (readonly) IOAccelResourceList* ioAccelResourceList; 
@property (readonly) id<MTLDevice> device;                                                        //@synthesize device=_device - In the implementation block
@property (readonly) MTLIOAccelCommandBufferStorage* commandBufferStorage;                        //@synthesize storage=_storage - In the implementation block
-(void)dealloc;
-(unsigned long long)protectionOptions;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)kernelCommandCollectTimeStamp;
-(void)_encodePurgedResources;
-(void)commit;
-(void)commitAndReset;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)growKernelCommandBuffer:(unsigned long long)arg1 ;
-(void)getCurrentKernelCommandBufferPointer:(void*)arg1 end:(void*)arg2 ;
-(void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(void)commitEncoder;
-(void)_debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)getCurrentKernelCommandBufferStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(void)setCurrentKernelCommandBufferPointer:(void*)arg1 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned)arg1 ;
-(IOAccelResourceList*)ioAccelResourceList;
-(IOAccelSegmentListHeader*)getSegmentListHeader;
-(void)getSegmentListPointerStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(MTLIOAccelCommandBufferResourceInfo*)commandBufferResourceInfo;
-(void)setCurrentSegmentListPointer:(void*)arg1 ;
-(void)growSegmentList;
-(void)beginSegment:(void*)arg1 ;
-(void)endCurrentSegment;
-(void)validate;
-(id)akResourceList;
-(id)akPrivateResourceList;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeSubmitSleepMS:(unsigned)arg1 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(MTLIOAccelCommandBufferStorage*)commandBufferStorage;
@end

