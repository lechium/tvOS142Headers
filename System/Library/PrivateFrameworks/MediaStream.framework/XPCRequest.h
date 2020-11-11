/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface XPCRequest : NSObject {

	/*^block*/id _handler;
	unsigned long long _sequence;
	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _reply;

}

@property (nonatomic,readonly) unsigned long long sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> reply;                //@synthesize reply=_reply - In the implementation block
-(unsigned long long)sequence;
-(NSObject*<OS_xpc_object>)message;
-(NSObject*<OS_xpc_object>)reply;
-(void)sendReply;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3 ;
@end

