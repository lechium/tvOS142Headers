/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedProgressBlock;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSMutableArray * subscriptions;                                                       //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                                                            //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                                                //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,retain) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id subscriptionFetchedProgressBlock;                                                    //@synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock - In the implementation block
-(void)main;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSubscriptionFetchedProgressBlock:(id)arg1 ;
-(id)subscriptionFetchedProgressBlock;
-(void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
@end

