/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>

@protocol MTLTexture, MTLDevice;
@class CAMetalLayer, NSString;

@interface MTKOffscreenDrawable : NSObject <CAMetalDrawable> {

	id<MTLTexture> _texture;
	unsigned long long _pixelFormat;
	CGSize _size;
	BOOL _textureDirty;
	CAMetalLayer* _layer;
	double _presentedTime;
	unsigned long long _drawableID;
	id<MTLDevice> _device;

}

@property (readonly) CAMetalLayer * layer;                                 //@synthesize layer=_layer - In the implementation block
@property (readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) double presentedTime;                       //@synthesize presentedTime=_presentedTime - In the implementation block
@property (nonatomic,readonly) unsigned long long drawableID;              //@synthesize drawableID=_drawableID - In the implementation block
@property (nonatomic,retain) id<MTLDevice> device;                         //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(unsigned long long)pixelFormat;
-(id<MTLDevice>)device;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id<MTLTexture>)texture;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)present;
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(double)presentedTime;
-(unsigned long long)drawableID;
-(CAMetalLayer *)layer;
-(id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(CGSize)arg3 drawableID:(unsigned long long)arg4 ;
@end

