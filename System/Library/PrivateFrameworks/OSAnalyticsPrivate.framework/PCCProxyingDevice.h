/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <OSAnalyticsPrivate/OSASyncProxyServices.h>
#import <OSAnalyticsPrivate/OSASyncProxyHandler.h>

@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
@class PCCEndpoint, NSDate, NSMutableDictionary, NSObject, NSString;

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices, OSASyncProxyHandler> {

	PCCEndpoint* _endpoint;
	NSDate* _lastTouch;
	NSMutableDictionary* _reqById;
	NSMutableDictionary* _reqByTracker;
	NSObject*<OS_dispatch_source> _expiryTimer;
	NSObject*<OS_os_transaction> _txn;
	NSMutableDictionary* _sync_summary;
	NSMutableDictionary* _tasking_summary;
	int file_count;
	int msg_count;
	int up_count;
	int request_count;
	int expire_count;
	NSObject*<OS_dispatch_queue> _sync_proxy_queue;
	NSObject*<OS_dispatch_queue> _request_queue;
	double _requestTimeout;

}

@property (assign) double requestTimeout;                                           //@synthesize requestTimeout=_requestTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSObject*<OS_dispatch_queue> initializationQueue;              //@synthesize request_queue=_request_queue - In the implementation block
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithEndpoint:(id)arg1 ;
-(double)requestTimeout;
-(void)startTimer;
-(void)handleConnection:(BOOL)arg1 ;
-(void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)request:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)requestProxyMetadata:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4 ;
-(void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)listDevices:(/*^block*/id)arg1 ;
-(void)request:(id)arg1 logList:(/*^block*/id)arg2 ;
-(void)request:(id)arg1 transferLog:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)handleFile:(id)arg1 metadata:(id)arg2 ;
-(void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)handleMessage:(id)arg1 from:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)initializationQueue;
-(void)startRequest:(id)arg1 message:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)updateProxiedDeviceMetadata:(id)arg1 from:(id)arg2 ;
-(void)finishRequestWithMessage:(id)arg1 result:(id)arg2 ;
-(BOOL)isFilenameReasonable:(id)arg1 ;
-(void)onReport:(id)arg1 ;
-(void)summarizeLog:(id)arg1 reason:(id)arg2 ;
-(void)addRequest:(id)arg1 event:(id)arg2 type:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)finishRequest:(id)arg1 result:(id)arg2 ;
-(void)diagnosticResultsEvent:(id)arg1 type:(id)arg2 result:(id)arg3 ;
-(void)setRequestTimeout:(double)arg1 ;
@end

