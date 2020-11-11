/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/_HMFCFHTTPServerConnectionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFHTTPClientConnectionDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, _HMFCFHTTPServerConnection, HMFNetAddress, NSString;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging> {

	id<HMFHTTPClientConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRespones;
	_HMFCFHTTPServerConnection* _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRespones;                      //@synthesize pendingRespones=_pendingRespones - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerConnection * internal;                 //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * peerAddress; 
@property (__weak) id<HMFHTTPClientConnectionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)close;
-(id<HMFHTTPClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<HMFHTTPClientConnectionDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(_HMFCFHTTPServerConnection *)internal;
-(HMFNetAddress *)peerAddress;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSMutableArray *)pendingRespones;
-(void)sendResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

