/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVISHTTPRequester : NSObject
+(id)userAgent;
+(id)cachingServerSession;
+(id)_lastETagForURL:(id)arg1 ;
+(void)_updateETagForURLResponse:(id)arg1 ;
+(id)cacheServerDownloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)conditionalDataTaskForURL:(id)arg1 localTargetFileURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
