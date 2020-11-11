/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {

	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	MTLPixelFormatInfo _pixelFormatInfo;
	unsigned long long _bytesPerRow;
	NSData* _imageData;
	BOOL _expandRGBToRGBA;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)decodeCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 options:(id)arg3 ;
-(BOOL)decodeCGImageDataProvider:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorSpace:(CGColorSpaceRef)arg4 isOptimized:(BOOL)arg5 options:(id)arg6 ;
@end
