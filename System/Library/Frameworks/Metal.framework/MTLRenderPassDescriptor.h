/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor, MTLRenderPassSampleBufferAttachmentDescriptorArray;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	unsigned long long _renderTargetArrayLength;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
@property (assign,nonatomic) unsigned long long renderTargetArrayLength;                                        //@synthesize renderTargetArrayLength=_renderTargetArrayLength - In the implementation block
@property (readonly) MTLRenderPassSampleBufferAttachmentDescriptorArray * sampleBufferAttachments; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)renderPassDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSamplePositions:(const SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)renderTargetArrayLength;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
@end
