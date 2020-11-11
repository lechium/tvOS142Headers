/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXGImageTexture;


@protocol PXGTextureConverter <NSObject>
@property (nonatomic,readonly) int presentationType; 
@property (assign,nonatomic) BOOL lowMemoryMode; 
@property (nonatomic,readonly) PXGImageTexture * transparentTexture; 
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue; 
@required
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(id)arg1;
-(int)presentationType;
-(void)setProcessingQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2;
-(id)createPayloadTextureFromPayload:(id)arg1;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX24)arg1;
-(id)createAtlasForTextureAtlasManager:(id)arg1;
-(PXGImageTexture *)transparentTexture;
-(BOOL)supportsTextureAtlas;

@end

