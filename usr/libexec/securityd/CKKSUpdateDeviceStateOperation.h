//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class CKKSKeychainView, CKModifyRecordsOperation, CKOperationGroup;

__attribute__((visibility("hidden")))
@interface CKKSUpdateDeviceStateOperation : CKKSGroupOperation
{
    _Bool _rateLimit;	// 10 = 0xa
    CKKSKeychainView *_ckks;	// 16 = 0x10
    CKModifyRecordsOperation *_modifyRecordsOperation;	// 24 = 0x18
    CKOperationGroup *_group;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100090efc
@property _Bool rateLimit; // @synthesize rateLimit=_rateLimit;
@property(retain) CKOperationGroup *group; // @synthesize group=_group;
@property(retain) CKModifyRecordsOperation *modifyRecordsOperation; // @synthesize modifyRecordsOperation=_modifyRecordsOperation;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x00000001000906dc
- (id)initWithCKKSKeychainView:(id)arg1 rateLimit:(_Bool)arg2 ckoperationGroup:(id)arg3;	// IMP=0x000000010009061c

@end

