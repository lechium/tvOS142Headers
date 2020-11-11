//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKSResultOperation, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSString;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTClientStateMachine : NSObject
{
    NSString<OctagonStateString> *_currentState;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    NSString *_clientName;	// 40 = 0x28
    NSMutableDictionary *_stateConditions;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    NSString *_clientScope;	// 72 = 0x48
    NSOperation *_holdStateMachineOperation;	// 80 = 0x50
    CKKSResultOperation *_nextClientStateMachineCycleOperation;	// 88 = 0x58
    NSMutableArray *_stateMachineClientRequests;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001001761c4
@property(retain) NSMutableArray *stateMachineClientRequests; // @synthesize stateMachineClientRequests=_stateMachineClientRequests;
@property(retain) CKKSResultOperation *nextClientStateMachineCycleOperation; // @synthesize nextClientStateMachineCycleOperation=_nextClientStateMachineCycleOperation;
@property(retain) NSOperation *holdStateMachineOperation; // @synthesize holdStateMachineOperation=_holdStateMachineOperation;
@property(retain) NSString *clientScope; // @synthesize clientScope=_clientScope;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *stateConditions; // @synthesize stateConditions=_stateConditions;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)rpcVoucher:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0000000100175d68
- (void)rpcEpoch:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100175a30
- (void)notifyContainerChange;	// IMP=0x0000000100175888
- (id)_onqueueNextClientStateMachineTransition:(id)arg1;	// IMP=0x0000000100175410
- (_Bool)isAcceptorWaitingForFirstMessage;	// IMP=0x000000010017535c
- (void)handleExternalClientStateMachineRequest:(id)arg1 client:(id)arg2;	// IMP=0x000000010017527c
- (void)_onqueueStartNextClientStateMachineOperation:(id)arg1;	// IMP=0x0000000100175024
- (void)_onqueuePokeClientStateMachine:(id)arg1;	// IMP=0x0000000100174f90
- (id)createOperationToFinishAttemptForClient:(id)arg1 clientName:(id)arg2;	// IMP=0x0000000100174dfc
- (void)startOctagonStateMachine;	// IMP=0x0000000100174d80
@property(retain) NSString<OctagonStateString> *currentState;
- (void)dealloc;	// IMP=0x0000000100174c24
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3 cuttlefish:(id)arg4;	// IMP=0x00000001001748e4

@end

