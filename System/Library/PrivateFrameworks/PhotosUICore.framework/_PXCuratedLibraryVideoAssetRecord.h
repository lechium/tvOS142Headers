/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackRecord.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGDisplayAssetPixelBufferSource.h>

@class PXVideoSession, NSString, PXGSpriteReference;

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource> {

	double _videoTranformScale;
	PXVideoSession* _videoSession;
	NSString* _bufferRequestIdentifier;
	long long _desiredPlayState;
	/*^block*/id _pixelBufferDidChangeHandler;

}

@property (nonatomic,readonly) PXGSpriteReference * geometryReference; 
@property (nonatomic,readonly) NSString * videoStatusDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler;                          //@synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler - In the implementation block
+(id)videoSessionQueue;
-(void)dealloc;
-(BOOL)isPlaying;
-(CGAffineTransform)preferredTransform;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(id)arg1 ;
-(id)pixelBufferDidChangeHandler;
-(NSString *)videoStatusDescription;
-(id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3 ;
-(void)prepareForVisible;
-(void)prepareForInvisible;
-(void)_videoQueue_ensureVideoSession;
-(void)_videoQueue_relinquishVideoSession;
-(void)_configureVideoSession:(id)arg1 ;
@end
