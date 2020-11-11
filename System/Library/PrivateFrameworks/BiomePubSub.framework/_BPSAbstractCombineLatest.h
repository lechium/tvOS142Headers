/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSMutableArray;

@interface _BPSAbstractCombineLatest : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _downstreamLock;
	BOOL _recursion;
	BOOL _finished;
	BOOL _errored;
	BOOL _cancelled;
	unsigned long long _upstreamCount;
	id<BPSSubscriber> _downstream;
	NSMutableArray* _subscriptions;
	NSMutableArray* _buffers;
	long long _demand;
	unsigned long long _finishCount;

}

@property (assign,nonatomic) unsigned long long upstreamCount;              //@synthesize upstreamCount=_upstreamCount - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                  //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                      //@synthesize buffers=_buffers - In the implementation block
@property (assign,nonatomic) BOOL recursion;                                //@synthesize recursion=_recursion - In the implementation block
@property (assign,nonatomic) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL errored;                                  //@synthesize errored=_errored - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) long long demand;                              //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) unsigned long long finishCount;                //@synthesize finishCount=_finishCount - In the implementation block
-(void)cancel;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(BOOL)cancelled;
-(NSMutableArray *)buffers;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(BOOL)recursion;
-(void)setRecursion:(BOOL)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(long long)demand;
-(void)setDemand:(long long)arg1 ;
-(void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)errored;
-(unsigned long long)upstreamCount;
-(unsigned long long)finishCount;
-(void)setFinishCount:(unsigned long long)arg1 ;
-(void)setErrored:(BOOL)arg1 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 ;
-(void)setUpstreamCount:(unsigned long long)arg1 ;
-(id)convertValues:(id)arg1 ;
@end
