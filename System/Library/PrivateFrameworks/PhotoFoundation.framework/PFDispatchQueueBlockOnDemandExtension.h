/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFDispatchQueueExtension.h>
#import <libobjc.A.dylib/PFDispatchQueueBlockOnDemandExecuting.h>

@class PFExtendedDispatchQueue;

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting> {

	PFExtendedDispatchQueue* _queue;
	AQ _countToExecute;
	AQ _enqueuedCount;

}
-(void)installOnQueue:(id)arg1 ;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2 ;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(id)newBlockInfo;
-(unsigned long long)runOneBlock;
-(unsigned long long)runBlockCount:(unsigned long long)arg1 ;
-(void)_willEnqueueOneBlock;
@end

