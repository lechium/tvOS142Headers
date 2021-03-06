/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg1 ;
+(void)startServiceWithStateBroadcastHandler:(id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)startWithStateBroadcastHandler:(id)arg1 ;
-(void)_configureNotificationService;
-(void)_configureStateBroadcastService;
@end

