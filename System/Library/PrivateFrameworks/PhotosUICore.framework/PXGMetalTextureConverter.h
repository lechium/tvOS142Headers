/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureConverter.h>

@protocol OS_dispatch_queue, MTLDeviceSPI, PXGMetalTextureConverterDelegate;
@class NSObject, PXGImageTexture, PXGColorProgramLibrary, NSString;

@interface PXGMetalTextureConverter : NSObject <PXGTextureConverter> {

	long long _screenPixelCount;
	BOOL _lowMemoryMode;
	BOOL _hasExtendedColorTarget;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	PXGImageTexture* _transparentTexture;
	CVMetalTextureCacheRef _videoTextureCache;
	id<MTLDeviceSPI> _device;
	unsigned long long _destinationColorSpaceName;
	id<PXGMetalTextureConverterDelegate> _delegate;
	CGColorSpaceRef _destinationColorSpace;
	PXGColorProgramLibrary* _colorProgramLibrary;

}

@property (nonatomic,retain) id<MTLDeviceSPI> device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL hasExtendedColorTarget;                                     //@synthesize hasExtendedColorTarget=_hasExtendedColorTarget - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;                           //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
@property (nonatomic,readonly) PXGColorProgramLibrary * colorProgramLibrary;                    //@synthesize colorProgramLibrary=_colorProgramLibrary - In the implementation block
@property (nonatomic,readonly) CVMetalTextureCacheRef videoTextureCache;                        //@synthesize videoTextureCache=_videoTextureCache - In the implementation block
@property (nonatomic,readonly) unsigned long long destinationColorSpaceName;                    //@synthesize destinationColorSpaceName=_destinationColorSpaceName - In the implementation block
@property (assign,nonatomic,__weak) id<PXGMetalTextureConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int presentationType; 
@property (assign,nonatomic) BOOL lowMemoryMode;                                                //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) PXGImageTexture * transparentTexture;                            //@synthesize transparentTexture=_transparentTexture - In the implementation block
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;                         //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                      //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PXGMetalTextureConverterDelegate>)delegate;
-(void)setDelegate:(id<PXGMetalTextureConverterDelegate>)arg1 ;
-(id<MTLDeviceSPI>)device;
-(void)setDevice:(id<MTLDeviceSPI>)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)presentationType;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2 ;
-(id)createPayloadTextureFromPayload:(id)arg1 ;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX24)arg1 ;
-(id)createAtlasForTextureAtlasManager:(id)arg1 ;
-(PXGImageTexture *)transparentTexture;
-(BOOL)supportsTextureAtlas;
-(unsigned long long)destinationColorSpaceName;
-(CGColorSpaceRef)destinationColorSpace;
-(id)initWithDevice:(id)arg1 destinationColorspaceName:(unsigned long long)arg2 ;
-(id)_createTransparentTexture;
-(CVMetalTextureCacheRef)videoTextureCache;
-(BOOL)hasExtendedColorTarget;
-(PXGColorProgramLibrary *)colorProgramLibrary;
@end

