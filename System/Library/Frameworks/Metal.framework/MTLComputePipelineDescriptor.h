/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLStageInputOutputDescriptor, MTLPipelineBufferDescriptorArray, NSArray, MTLLinkedFunctions;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) BOOL forceResourceIndex; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> computeFunction; 
@property (assign,nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (nonatomic,copy) MTLStageInputOutputDescriptor * stageInputDescriptor; 
@property (readonly) MTLPipelineBufferDescriptorArray * buffers; 
@property (assign,nonatomic) BOOL supportIndirectCommandBuffers; 
@property (nonatomic,copy) NSArray * insertLibraries; 
@property (nonatomic,copy) NSArray * binaryArchives; 
@property (nonatomic,copy) MTLLinkedFunctions * linkedFunctions; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

