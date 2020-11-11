/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSXPCHandshake.h>

@protocol PDSRemote, PDSDaemonListenerVendor, OS_dispatch_queue, PDSXPCDaemonConnection;
@class NSObject;

@interface PDSXPCClient : NSObject <PDSXPCHandshake> {

	id<PDSRemote> _daemonListener;
	id<PDSDaemonListenerVendor> _daemonListenerVendor;
	NSObject*<OS_dispatch_queue> _queue;
	id<PDSXPCDaemonConnection> _connection;

}

@property (nonatomic,retain) id<PDSRemote> daemonListener;                                  //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,retain) id<PDSDaemonListenerVendor> daemonListenerVendor;              //@synthesize daemonListenerVendor=_daemonListenerVendor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<PDSXPCDaemonConnection> connection;                         //@synthesize connection=_connection - In the implementation block
-(void)resume;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PDSXPCDaemonConnection>)connection;
-(void)setConnection:(id<PDSXPCDaemonConnection>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<PDSRemote>)daemonListener;
-(void)connectWithClientID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectInternalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 interfaceVendor:(id)arg2 daemonListenerVendor:(id)arg3 queue:(id)arg4 ;
-(id<PDSDaemonListenerVendor>)daemonListenerVendor;
-(void)setDaemonListenerVendor:(id<PDSDaemonListenerVendor>)arg1 ;
-(BOOL)_hasToolEntitlement;
-(id)_connectionEntitledClientIDs;
-(void)setDaemonListener:(id<PDSRemote>)arg1 ;
@end

