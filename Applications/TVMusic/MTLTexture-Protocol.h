//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTLResource-Protocol.h"

@class MTLSharedTextureHandle;
@protocol MTLBuffer, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
@property(nonatomic, readonly) CDStruct_a06f635e swizzle;
- (MTLSharedTextureHandle *)newSharedTextureHandle;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_4c83c94d)arg3 mipmapLevel:(unsigned long long)arg4;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_4c83c94d)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
@property(nonatomic, readonly) _Bool allowGPUOptimizedContents;
- (_Bool)isFramebufferOnly;
- (_Bool)isShareable;
@property(nonatomic, readonly) unsigned long long usage;
@property(nonatomic, readonly) long long arrayLength;
@property(nonatomic, readonly) long long sampleCount;
@property(nonatomic, readonly) long long mipmapLevelCount;
@property(nonatomic, readonly) long long depth;
@property(nonatomic, readonly) long long height;
@property(nonatomic, readonly) long long width;
@property(nonatomic, readonly) unsigned long long pixelFormat;
@property(nonatomic, readonly) unsigned long long textureType;
@property(nonatomic, readonly) long long iosurfacePlane;
@property(nonatomic, readonly) struct __IOSurface *iosurface;
@property(nonatomic, readonly) long long bufferBytesPerRow;
@property(nonatomic, readonly) long long bufferOffset;
@property(nonatomic, readonly) id <MTLBuffer> buffer;
@property(nonatomic, readonly) long long parentRelativeSlice;
@property(nonatomic, readonly) long long parentRelativeLevel;
@property(nonatomic, readonly) id <MTLTexture> parentTexture;
@property(nonatomic, readonly) id <MTLResource> rootResource;

// Remaining properties
@property(nonatomic, readonly) _Bool framebufferOnly;
@property(nonatomic, readonly) _Bool shareable;
@end
