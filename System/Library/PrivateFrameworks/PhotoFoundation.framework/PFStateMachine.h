/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PFStateMachineGraph, PFStateMachineNode, NSString, NSMutableArray;

@interface PFStateMachine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _uuid;
	PFStateMachineGraph* _graph;
	PFStateMachineNode* _previousNode;
	PFStateMachineNode* _currentNode;
	id _owner;
	NSString* _name;
	id _delayedEventCancelToken;
	NSMutableArray* _subflowStack;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) id uuid;                      //@synthesize uuid=_uuid - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(id)uuid;
-(void)trace:(id)arg1 ;
-(id)graph;
-(void)_handleEvent:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(id)previousNode;
-(id)currentNode;
-(id)owner;
-(id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3 ;
-(void)_pushReturnTransition:(id)arg1 ;
-(id)_popReturnTransition;
-(void)postEvent:(id)arg1 afterTimeout:(double)arg2 ;
-(void)atomicHandleEvent:(/*^block*/id)arg1 ;
-(void)atomicHandleEventAsync:(/*^block*/id)arg1 ;
-(id)atomicQueue;
-(void)_cancelLastDelayedEvent;
-(void)traceObject:(id)arg1 state:(id)arg2 ;
@end
