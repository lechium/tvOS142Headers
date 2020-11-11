/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSRayIntersector/MPSSVGFTextureAllocator.h>

@protocol MTLDevice;
@class NSMutableArray, NSString;

@interface MPSSVGFDefaultTextureAllocator : NSObject <MPSSVGFTextureAllocator> {

	NSMutableArray* _textures;
	id<MTLDevice> _device;
	unsigned long long _allocatedTextureCount;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long allocatedTextureCount;              //@synthesize allocatedTextureCount=_allocatedTextureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(id)textureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)returnTexture:(id)arg1 ;
-(unsigned long long)allocatedTextureCount;
@end

