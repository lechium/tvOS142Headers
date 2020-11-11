//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSLockStateTracker, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface EscrowRequestPerformEscrowEnrollOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _enforceRateLimiting;	// 10 = 0xa
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    unsigned long long _numberOfRecordsUploaded;	// 32 = 0x20
    CKKSLockStateTracker *_lockStateTracker;	// 40 = 0x28
}

+ (void)cdpUploadPrerecord:(id)arg1 secretType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010009ee4c
- (void).cxx_destruct;	// IMP=0x000000010009e924
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property _Bool enforceRateLimiting; // @synthesize enforceRateLimiting=_enforceRateLimiting;
@property unsigned long long numberOfRecordsUploaded; // @synthesize numberOfRecordsUploaded=_numberOfRecordsUploaded;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)groupStart;	// IMP=0x000000010009e110
- (_Bool)checkFatalError:(id)arg1;	// IMP=0x000000010009df84
- (id)initWithIntendedState:(id)arg1 errorState:(id)arg2 enforceRateLimiting:(_Bool)arg3 lockStateTracker:(id)arg4;	// IMP=0x000000010009de8c

@end

