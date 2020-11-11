/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@class PVRenderEffectLoader, NSDate;

@interface PVRenderer : PVRendererBase {

	HGSynchronizable* _cvPoolsLock;
	vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool> > >* _cvPools;
	BOOL _enableDestinationPool;
	HGRef<HGCVPixelBufferPool>* _destinationBufferPool;
	HGRef<PVRenderManager>* _renderManager;
	PVRenderEffectLoader* _effectLoader;
	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _dateLock;
	NSDate* _lastStatsLogDateTime;
	NSDate* _lastTextureCacheFlushDate;
	unsigned _destinationPixelFormat;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(SCD_Struct_PV21)frameDuration;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)updateDestinationFormatForOutputColorSpace;
-(void)cleanupMemoryCaches;
-(unsigned)outputCVPixelBufferFormat;
-(void)_configureDefaultPoolPolicy;
-(void)_statsLogCheck;
-(HGRef<HGCVPixelBuffer>*)hgCVPixelBufferFromCVPoolForSize:(CGSize)arg1 withFormat:(unsigned)arg2 ;
-(void)startRenderRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadInstructionGraphEffects:(id)arg1 ;
-(HGRef<HGBitmap>*)getDestinationBuffer:(CGSize)arg1 cvPixelBufferFormat:(unsigned)arg2 ;
@end

