/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FudPluginDelegate <NSObject>
@optional
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 error:(id)arg4;

@required
-(void)log:(int)arg1 format:(id)arg2;
-(void)didBootstrap:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFind:(BOOL)arg1 info:(id)arg2 updateAvailable:(BOOL)arg3 needsDownload:(BOOL)arg4 error:(id)arg5;
-(void)didDownload:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didPrepare:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didApply:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)didFinish:(BOOL)arg1 info:(id)arg2 error:(id)arg3;
-(void)reportAnalytics:(id)arg1 info:(id)arg2;
-(void)progress:(double)arg1;
-(void)logv:(int)arg1 format:(id)arg2 arguments:(char*)arg3;
-(void)accessoryDisconnected:(id)arg1;
-(void)personalizationRequest:(id)arg1;

@end

