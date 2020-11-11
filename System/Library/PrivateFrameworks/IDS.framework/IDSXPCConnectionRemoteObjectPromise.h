/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCInterface, NSMutableArray, NSObject;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject {

	NSXPCInterface* _interface;
	NSMutableArray* _pendingInvocations;
	id _target;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCInterface * interface;                       //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (nonatomic,retain) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)failWithError:(id)arg1 ;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxy;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_assertVoidReturnValueInInvocation:(id)arg1 ;
-(NSMutableArray *)pendingInvocations;
-(id)initWithInterface:(id)arg1 queue:(id)arg2 ;
-(void)fulfillWithRemoteObject:(id)arg1 ;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
@end

