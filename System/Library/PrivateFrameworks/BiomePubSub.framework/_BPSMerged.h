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

@interface _BPSMerged : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _downstreamLock;
	BOOL _terminated;
	BOOL _finished;
	BOOL _recursive;
	id<BPSSubscriber> _downstream;
	long long _count;
	long long _demand;
	long long _upstreamFinished;
	NSMutableArray* _subscriptions;
	NSMutableArray* _activeSubscriptions;
	NSMutableArray* _buffers;
	long long _pending;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                      //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) long long count;                                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long demand;                                  //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) BOOL terminated;                                   //@synthesize terminated=_terminated - In the implementation block
@property (assign,nonatomic) long long upstreamFinished;                        //@synthesize upstreamFinished=_upstreamFinished - In the implementation block
@property (assign,nonatomic) BOOL finished;                                     //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                    //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeSubscriptions;              //@synthesize activeSubscriptions=_activeSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                          //@synthesize buffers=_buffers - In the implementation block
@property (assign,nonatomic) BOOL recursive;                                    //@synthesize recursive=_recursive - In the implementation block
@property (assign,nonatomic) long long pending;                                 //@synthesize pending=_pending - In the implementation block
-(long long)count;
-(void)cancel;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)setCount:(long long)arg1 ;
-(NSMutableArray *)buffers;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(id<BPSSubscriber>)downstream;
-(BOOL)terminated;
-(NSMutableArray *)activeSubscriptions;
-(void)setActiveSubscriptions:(NSMutableArray *)arg1 ;
-(void)setPending:(long long)arg1 ;
-(long long)pending;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(BOOL)recursive;
-(void)setRecursive:(BOOL)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)setTerminated:(BOOL)arg1 ;
-(id)applyDownstreamWhileLocked:(BOOL)arg1 apply:(/*^block*/id)arg2 ;
-(long long)upstreamFinished;
-(void)setUpstreamFinished:(long long)arg1 ;
-(long long)demand;
-(void)setDemand:(long long)arg1 ;
-(id)initWithDownstream:(id)arg1 count:(long long)arg2 ;
-(void)receiveCompletion:(id)arg1 atIndex:(long long)arg2 ;
-(long long)receiveInput:(id)arg1 atIndex:(long long)arg2 ;
-(void)receiveSubscription:(id)arg1 atIndex:(long long)arg2 ;
@end

