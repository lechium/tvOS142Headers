/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AFKUser.framework/AFKUser
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;
#import <AFKUser/AFKUser-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AFKEndpointInterface : NSObject {

	unsigned _service;
	unsigned _connect;
	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _asyncPort;
	NSObject*<OS_dispatch_source> _source;
	unsigned _state;
	NSMutableDictionary* _properties;
	/*^block*/id _responseHandler;
	/*^block*/id _reportHandler;
	/*^block*/id _commandHandler;
	/*^block*/id _eventHandler;
	IODataQueueMemory* _dataQueue;
	unsigned long long _dataQueueSize;
	unsigned _dataQueuePort;
	NSObject*<OS_dispatch_mach> _dataQueueMachChannel;
	unsigned long long _regID;

}
+(id)withService:(unsigned)arg1 ;
+(id)withService:(unsigned)arg1 properties:(id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(void)activate;
-(id)initWithService:(unsigned)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setResponseHandler:(/*^block*/id)arg1 ;
-(int)enqueueCommand:(unsigned)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 outputPayloadSize:(unsigned long long)arg4 context:(void*)arg5 options:(unsigned)arg6 ;
-(void)_cancel;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setCommandHandler:(/*^block*/id)arg1 ;
-(void)setReportHandler:(/*^block*/id)arg1 ;
-(void)asyncCallback:(AsyncContext*)arg1 result:(int)arg2 bufferSize:(unsigned long long)arg3 ;
-(int)enqueueCommand:(unsigned)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 outputPayloadSize:(unsigned long long)arg5 context:(void*)arg6 options:(unsigned)arg7 ;
-(int)enqueueReport:(unsigned)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 options:(unsigned)arg5 ;
-(int)enqueueReport:(unsigned)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 options:(unsigned)arg4 ;
-(int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 timestamp:(unsigned long long)arg3 outputBuffer:(void*)arg4 outputBufferSize:(unsigned long long)arg5 options:(unsigned)arg6 ;
-(int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 outputBuffer:(void*)arg3 outputBufferSize:(unsigned long long)arg4 options:(unsigned)arg5 ;
-(void)dequeueDataMessage;
-(int)startSession:(BOOL)arg1 ;
@end

