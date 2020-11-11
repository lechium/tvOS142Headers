/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_nw_connection, OS_dispatch_io;
@class NSObject;

@interface OS_xpc_remote_channel : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSObject*<OS_nw_connection> conn;
	/*^block*/id event_handler;
	/*^block*/id msg_handler;
	unsigned state;
	int error;
	int stream_direction;
	NSObject*<OS_dispatch_io> stream_io;
	NSObject*<OS_dispatch_io> parent_io;
	BOOL tx_complete;
	unsigned char wire_version;

}
@end

