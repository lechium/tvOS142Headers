/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CWFXPCEventProtocolPrivate.h>
#import <libobjc.A.dylib/CWFXPCEventProtocolPublic.h>

@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;
@class NSObject, NSMutableDictionary;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventAckMap;
	id<CWFXPCEventProxyDelegate> _delegate;

}

@property (retain) id<CWFXPCEventProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CWFXPCEventProxyDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCEventProxyDelegate>)arg1 ;
-(void)__acknowledgeEventWithUUID:(id)arg1 ;
-(void)receivedXPCEvent:(id)arg1 ;
-(void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
