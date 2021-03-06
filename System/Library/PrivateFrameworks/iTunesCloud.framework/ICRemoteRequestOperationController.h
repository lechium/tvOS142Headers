/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection;

@interface ICRemoteRequestOperationController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _numberOfActiveRequests;
	NSXPCConnection* _clientConnection;
	NSObject*<OS_dispatch_source> _clientConnectionInvalidationTimer;

}
+(id)sharedRemoteRequestOperationController;
-(id)_init;
-(id)_clientConnection;
-(void)_willBeginExecutingRemoteRequestOperation;
-(void)_didEndExecutingRemoteRequestOperation;
-(void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleInvalidationOfClientConnection;
-(void)_cancelClientConnectionInvalidationTimer;
-(void)_invalidateClientConnection;
-(void)_clientConnectionInvalidationTimerDidExpire;
@end

