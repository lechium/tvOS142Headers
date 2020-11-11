/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CWFXPCListenerDelegate.h>
#import <libobjc.A.dylib/CWFXPCRequestProxyDelegate.h>

@protocol OS_dispatch_queue, CWFXPCManagerDelegate;
@class NSObject, NSMutableArray, CWFXPCRequestProxy, NSSet, NSString;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableArray* _mutableXPCListeners;
	CWFXPCRequestProxy* _XPCRequestProxy;
	id<CWFXPCManagerDelegate> _delegate;
	NSSet* _supportedRequestTypes;

}

@property (retain) id<CWFXPCManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSSet * supportedRequestTypes;                     //@synthesize supportedRequestTypes=_supportedRequestTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<CWFXPCManagerDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCManagerDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(id)registeredEventIDs;
-(id)registeredActivities;
-(void)sendXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setTargetQueue:(id)arg1 requestType:(long long)arg2 interfaceName:(id)arg3 ;
-(NSSet *)supportedRequestTypes;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCListener:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3 ;
-(void)XPCListener:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3 ;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3 ;
-(void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2 ;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithServiceTypes:(id)arg1 ;
-(void)setSupportedRequestTypes:(NSSet *)arg1 ;
@end

