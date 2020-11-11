/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PFDispatchQueue : NSObject
+(void)initialize;
+(id)mainQueue;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
+(id)globalCurrentQOSQueue;
+(id)globalUtilityQOSQueue;
+(id)newQueueWithLabel:(id)arg1 ;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newSerialQueueWithLabel:(id)arg1 ;
+(id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned)arg2 ;
+(Class)concreteQueueClass;
+(id)_newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 ;
+(id)injectedExtensions;
+(id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 ;
+(id)globalUserInteractiveQOSQueue;
+(id)globalUserInitiatedQOSQueue;
+(id)globalDefaultQOSQueue;
+(id)globalBackgroundQOSQueue;
+(id)globalQOSQueue:(unsigned)arg1 ;
+(void)dispatchApply:(unsigned long long)arg1 ofBlock:(/*^block*/id)arg2 ;
+(void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(/*^block*/id)arg4 ;
-(id)_init;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1 ;
@end

