/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray;

@interface BWIOSurfaceTracking : NSObject {

	os_unfair_lock_s _trackedSurfacesLock;
	NSMutableArray* _trackedSurfaces;

}
+(void)initialize;
+(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
+(void)noteSurfaceIDInUse:(unsigned)arg1 byClient:(id)arg2 ;
+(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 byClient:(id)arg2 ;
+(id)defaultSurfaceTracking;
-(id)init;
-(void)dealloc;
-(void)trackPixelBuffer:(CVBufferRef)arg1 surfaceUseCountIsZeroHandler:(/*^block*/id)arg2 ;
-(void)noteSurfaceIDInUse:(unsigned)arg1 ;
-(void)noteSurfaceIDNoLongerInUse:(unsigned)arg1 ;
@end

