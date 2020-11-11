/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	os_unfair_recursive_lock_s _lock;
	int _pid;
	BOOL _willBeTerminated;
	BOOL _postedDeathNote;

}
@end

