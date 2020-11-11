/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface TVCKDataQueryProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _serialProcessingQueue;
	NSMutableDictionary* _dataClientQueryRecords;
	NSString* _processingQueueName;

}

@property (nonatomic,copy) NSString * processingQueueName;              //@synthesize processingQueueName=_processingQueueName - In the implementation block
+(void)initialize;
-(id)initWithQueueName:(id)arg1 ;
-(void)executeFirstQuery:(id)arg1 dataClient:(id)arg2 ;
-(void)completeQuery:(id)arg1 dataClient:(id)arg2 ;
-(void)executeQuery:(id)arg1 andProcessNextWithDataClient:(id)arg2 ;
-(void)processQuery:(id)arg1 concurrentCount:(int)arg2 dataClient:(id)arg3 priority:(long long)arg4 withCompletionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)shutdownClient:(id)arg1 ;
-(NSString *)processingQueueName;
-(void)setProcessingQueueName:(NSString *)arg1 ;
@end

