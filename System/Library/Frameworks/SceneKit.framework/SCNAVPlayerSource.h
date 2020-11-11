/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@protocol MTLTexture;
@class AVPlayer, AVPlayerItemVideoOutput;

@interface SCNAVPlayerSource : SCNTextureSource {

	AVPlayer* _player;
	AVPlayerItemVideoOutput* _videoOutput;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	unsigned long long _texturePixelFormat;
	unsigned char _videoSourceFormat;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,retain) AVPlayer * player; 
-(id)init;
-(void)dealloc;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)registerPlayer:(id)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)setVideoSourceFormat:(unsigned char)arg1 ;
-(void)discardVideoData;
@end

