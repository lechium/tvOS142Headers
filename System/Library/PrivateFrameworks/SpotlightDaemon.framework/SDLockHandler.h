/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SDLockHandler : NSObject
+(BOOL)deviceUnlocked;
+(void)_deviceLockSetup;
+(void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(BOOL)arg2 indexEnabled:(BOOL)arg3 delegate:(id)arg4 ;
+(BOOL)deviceFirstUnlockedInMKB;
+(BOOL)deviceFirstUnlockedInSB;
+(BOOL)unlockedSinceBoot;
@end
