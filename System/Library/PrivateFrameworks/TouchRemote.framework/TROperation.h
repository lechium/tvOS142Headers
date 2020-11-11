/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class TRSession, NSDictionary, NSError, NSObject;

@interface TROperation : NSOperation {

	TRSession* _session;
	NSDictionary* _result;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,copy) NSDictionary * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TRSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)userCancelledError;
-(NSError *)error;
-(TRSession *)session;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(NSDictionary *)result;
-(void)execute;
-(void)setSession:(TRSession *)arg1 ;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

