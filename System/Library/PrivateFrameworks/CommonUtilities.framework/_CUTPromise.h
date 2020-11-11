/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTPromise.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CUTResult;

@interface _CUTPromise : CUTPromise {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	BOOL _done;
	CUTResult* _result;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL done;                                       //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                              //@synthesize result=_result - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CUTResult *)result;
-(NSObject*<OS_dispatch_group>)group;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setResult:(CUTResult *)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

