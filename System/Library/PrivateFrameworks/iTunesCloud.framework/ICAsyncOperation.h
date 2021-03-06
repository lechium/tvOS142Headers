/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <Foundation/NSOperation.h>

@class NSOperationQueue, NSError;

@interface ICAsyncOperation : NSOperation {

	os_unfair_lock_s _asyncOperationLock;
	NSOperationQueue* _childOperationQueue;
	long long _qualityOfServiceForChildOperationQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)_execute;
-(void)enqueueChildOperation:(id)arg1 ;
@end

