/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableIndexSet;

@interface PFFrameCache : NSObject {

	CGImageSourceRef _gifSource;
	unsigned long long _frameCount;
	unsigned long long _fullCachingCost;
	NSObject*<OS_dispatch_queue> _frameGenerationQueue;
	NSObject*<OS_dispatch_queue> _cacheIsolationQueue;
	unsigned long long _frameCacheSize;
	NSMutableDictionary* _frameCache;
	unsigned long long _lastRequestedIdx;
	NSMutableIndexSet* _cachedIndexes;
	SCD_Struct_PF13 _isValid;
	long long _cacheStrategy;

}

@property (assign,nonatomic) long long cacheStrategy;              //@synthesize cacheStrategy=_cacheStrategy - In the implementation block
+(id)sharedFrameGenerationQueue;
-(void)dealloc;
-(void)_invalidateCache;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(long long)cacheStrategy;
-(void)setCacheStrategy:(long long)arg1 ;
-(CGImageRef)frameAtIndex:(unsigned long long)arg1 ;
-(CGImageRef)frameAtIndexIfReady:(unsigned long long)arg1 ;
-(CGImageRef)_frameAtIndex:(unsigned long long)arg1 allowLazy:(BOOL)arg2 ;
-(void)_invalidateCacheSize;
-(void)_updateIfNeeded;
-(void)_updateDesiredCacheSize;
-(void)_updateFrameCache;
-(void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1 ;
-(void)_frameGenerationQueue_updateFrameCache;
-(CGImageRef)_createPredrawnImage:(CGImageRef)arg1 ;
@end

