/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, BSInvalidatable;
@class NSObject;

@interface XBLaunchImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	id<BSInvalidatable> _stateCaptureAssertion;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 createCaptureInfo:(BOOL)arg4 firstImageIsReady:(/*^block*/id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(/*^block*/id)createLaunchImageGeneratorWithContext:(id)arg1 asyncImageData:(BOOL)arg2 error:(id*)arg3 ;
-(void)preheatServiceWithTimeout:(double)arg1 ;
-(void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 asyncImageData:(BOOL)arg4 dataProvider:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_addBadLaunchInterfaceToDenyList:(id)arg1 forError:(id)arg2 ;
@end
