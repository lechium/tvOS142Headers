/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>

@class NSOperation, NSString, HAP2Lock, NSOperationQueue;

@interface HAP2SerializedOperationQueue : HAP2LoggingObject {

	NSOperation* _lastOperation;
	NSString* _name;
	HAP2Lock* _lock;
	NSOperationQueue* _queue;

}

@property (nonatomic,readonly) HAP2Lock * lock;                               //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * lastOperation;              //@synthesize lastOperation=_lastOperation - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)commonOperationQueue;
-(NSString *)name;
-(id)init;
-(HAP2Lock *)lock;
-(void)addOperation:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSOperationQueue *)queue;
-(NSOperation *)lastOperation;
-(void)assertCurrentQueue;
-(void)addBlock:(/*^block*/id)arg1 ;
-(void)addConcurrentBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 operationQueue:(id)arg2 ;
-(id)_swapLastOperation:(id)arg1 ;
-(void)setLastOperation:(NSOperation *)arg1 ;
-(void)addConcurrentOperation:(id)arg1 ;
@end

