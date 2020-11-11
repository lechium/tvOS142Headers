/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject;

@interface MSVAsyncOperation : NSOperation {

	BOOL __executing;
	BOOL __finished;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,setter=_setExecuting:,getter=_isExecuting,nonatomic) BOOL _executing;              //@synthesize _executing=__executing - In the implementation block
@property (assign,setter=_setFinished:,getter=_isFinished,nonatomic) BOOL _finished;                 //@synthesize _finished=__finished - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(BOOL)_isFinished;
-(BOOL)_isExecuting;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
@end

