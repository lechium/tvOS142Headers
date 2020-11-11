/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>

@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)stride;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
-(void)setStride:(unsigned long long)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(void)setStepRate:(unsigned long long)arg1 ;
@end

