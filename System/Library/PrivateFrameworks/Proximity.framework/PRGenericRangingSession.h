/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Proximity/PRRangingDevice.h>
#import <libobjc.A.dylib/PRRangingClientProtocol.h>

@protocol OS_dispatch_queue, OS_os_log, PRGenericRangingSessionDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface PRGenericRangingSession : PRRangingDevice <PRRangingClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_os_log> _logger;
	id<PRGenericRangingSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PRGenericRangingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<PRGenericRangingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRGenericRangingSessionDelegate>)arg1 ;
-(void)handleInterruption;
-(id)synchronousRemoteObject;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)connectToDaemon;
-(id)remoteObject;
-(void)didFailWithError:(id)arg1 ;
-(void)handleInvalidation;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)configureForP2PRanging:(id)arg1 options:(id)arg2 ;
-(BOOL)startP2PRanging:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopP2PRanging:(id)arg1 error:(id*)arg2 ;
@end

