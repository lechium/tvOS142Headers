/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFDispatchQueueExtending.h>

@class PFDispatchQueueExtension, NSString;

@interface PFDispatchQueueExtensionManager : NSObject <PFDispatchQueueExtending> {

	AQ _enabledExtensionCount;
	PFDispatchQueueExtension* _extensions[4];
	AB _extensionEnabled[4];
	unsigned long long _suspendCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)extensions;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3 ;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2 ;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 willExecute:(id)arg2 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(void)queueDidSuspend:(id)arg1 ;
-(void)queueWillResume:(id)arg1 ;
-(void)enableExtension:(id)arg1 ;
-(void)disableExtension:(id)arg1 ;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)addExtensions:(id)arg1 queue:(id)arg2 ;
-(id)announce:(/*^block*/id)arg1 ;
-(void)messageExtensions:(id)arg1 messageBlock:(/*^block*/id)arg2 ;
@end

