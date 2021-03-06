/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassSampleBufferAttachmentDescriptor.h>

@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor {

	MTLRenderPassSampleBufferAttachmentDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(const MTLRenderPassSampleBufferAttachmentDescriptorPrivate*)_descriptorPrivate;
-(void)setSampleBuffer:(id)arg1 ;
-(id)sampleBuffer;
-(void)setStartOfVertexSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfVertexSampleIndex;
-(void)setEndOfVertexSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfVertexSampleIndex;
-(void)setStartOfFragmentSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startOfFragmentSampleIndex;
-(void)setEndOfFragmentSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)endOfFragmentSampleIndex;
@end

