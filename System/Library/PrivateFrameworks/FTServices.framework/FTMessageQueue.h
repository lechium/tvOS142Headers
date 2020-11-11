/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FTMessageQueueDelegate;
@class NSMutableArray, CUTDeferredTaskQueue, IDSBaseMessage, NSArray;

@interface FTMessageQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;
	CUTDeferredTaskQueue* _timeoutTask;

}

@property (retain) NSMutableArray * _queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * _addDates;                       //@synthesize addDates=_addDates - In the implementation block
@property (readonly) IDSBaseMessage * topMessage; 
@property (readonly) long long count; 
@property (readonly) NSArray * messages; 
@property (__weak) id<FTMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(long long)count;
-(id<FTMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(NSMutableArray *)_queue;
-(NSArray *)messages;
-(BOOL)addMessage:(id)arg1 ;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(void)removeAllMessages;
-(IDSBaseMessage *)topMessage;
-(void)_timeoutHit;
-(void)_clearTimeout;
-(void)_setTimeout;
-(id)dequeueTopMessage;
-(BOOL)addMessageAtHeadOfQueue:(id)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
-(NSMutableArray *)_addDates;
-(void)set_addDates:(NSMutableArray *)arg1 ;
@end

