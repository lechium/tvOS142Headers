/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/CKPKPushRegistryDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSOperationQueue, APSConnection;

@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate> {

	BOOL _useOpportunisticPushTopics;
	NSString* _apsEnvironment;
	NSMutableDictionary* _subscriptionInfos;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;
	APSConnection* _apsConnection;
	NSString* _machServiceName;
	unsigned long long _strategy;

}

@property (nonatomic,retain) NSMutableDictionary * subscriptionInfos;                 //@synthesize subscriptionInfos=_subscriptionInfos - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironment;                             //@synthesize apsEnvironment=_apsEnvironment - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                           //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) unsigned long long strategy;                             //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) BOOL useOpportunisticPushTopics;                         //@synthesize useOpportunisticPushTopics=_useOpportunisticPushTopics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)suggestedStrategy;
-(id)init;
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)strategy;
-(void)setStrategy:(unsigned long long)arg1 ;
-(void)registerForSubscription:(id)arg1 inDatabase:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStrategy:(unsigned long long)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(id)initWithStrategy:(unsigned long long)arg1 machServiceName:(id)arg2 ;
-(void)checkConfiguration;
-(NSString *)apsEnvironment;
-(BOOL)hasAPSConnectionInitiateEntitlement;
-(APSConnection *)apsConnection;
-(void)updateAPSConnection;
-(id)uniqueKeyForSubscriptionID:(id)arg1 inDatabase:(id)arg2 ;
-(NSMutableDictionary *)subscriptionInfos;
-(void)updatePushNotificationListeners;
-(void)updatePKPushRegistry;
-(NSString *)machServiceName;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)registerForMachServiceAPSConnectionNotifications;
-(BOOL)useOpportunisticPushTopics;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)handlePushNotificationWithPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveIncomingPushWithPayload:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasInitializedAPSConnection;
-(void)setUseOpportunisticPushTopics:(BOOL)arg1 ;
-(BOOL)isRegisteredForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 ;
-(void)setSubscriptionInfos:(NSMutableDictionary *)arg1 ;
@end

