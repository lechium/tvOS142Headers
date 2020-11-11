/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol DDSManaging, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableSet, NSString;

@interface DDSServer : NSObject <NSXPCListenerDelegate> {

	id<DDSManaging> _manager;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _clientConnections;

}

@property (nonatomic,readonly) id<DDSManaging> manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * clientConnections;                //@synthesize clientConnections=_clientConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithManager:(id)arg1 ;
-(id<DDSManaging>)manager;
-(NSXPCListener *)listener;
-(NSMutableSet *)clientConnections;
-(void)handleEndedConnection:(id)arg1 ;
@end

