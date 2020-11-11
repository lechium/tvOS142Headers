/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HIDVirtualEventServiceDelegate, OS_dispatch_queue;
@class HIDEventSystemClient, HIDServiceClient, NSObject;

@interface HIDVirtualEventService : NSObject {

	id<HIDVirtualEventServiceDelegate> _delegate;
	HIDEventSystemClient* _client;
	HIDServiceClient* _serviceClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) HIDEventSystemClient * client;                            //@synthesize client=_client - In the implementation block
@property (retain) HIDServiceClient * serviceClient;                         //@synthesize serviceClient=_serviceClient - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long serviceID; 
@property (__weak) id<HIDVirtualEventServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(id)init;
-(id<HIDVirtualEventServiceDelegate>)delegate;
-(void)setDelegate:(id<HIDVirtualEventServiceDelegate>)arg1 ;
-(void)cancel;
-(HIDEventSystemClient *)client;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setClient:(HIDEventSystemClient *)arg1 ;
-(void)activate;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(BOOL)dispatchEvent:(id)arg1 ;
-(unsigned long long)serviceID;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(HIDServiceClient *)serviceClient;
-(void)setServiceClient:(HIDServiceClient *)arg1 ;
@end

