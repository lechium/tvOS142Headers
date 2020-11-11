/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, WLKSubscriptionData;

@interface WLKSubscriptionStore : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
	WLKSubscriptionData* _subscriptionData;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)fetchSubscriptionData:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setIsSubscriptionSyncInProgress:(BOOL)arg1 ;
-(void)refreshSubscriptionDataIfNeeded;
-(id)cachedSubscriptionData;
-(BOOL)_isSubscriptionSyncInProgress;
@end

