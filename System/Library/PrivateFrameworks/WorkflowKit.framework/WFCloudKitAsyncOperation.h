/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@interface WFCloudKitAsyncOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;

}

@property (assign) BOOL isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)finishExecuting;
-(void)startExecuting;
@end

