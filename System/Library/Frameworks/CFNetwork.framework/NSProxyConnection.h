/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_tcp_connection, NSProxyConnectionDelegate;
@class NSObject;

@interface NSProxyConnection : NSObject {

	BOOL _doCleanupWhenWritesCompleted;
	NSObject*<OS_tcp_connection> _connection;
	id<NSProxyConnectionDelegate> _delegate;
	long long _pendingWrites;

}
-(void)dealloc;
-(void)cancel;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
@end

