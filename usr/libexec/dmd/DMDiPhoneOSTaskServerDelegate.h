//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskServerDelegate.h"

@interface DMDiPhoneOSTaskServerDelegate : DMDTaskServerDelegate
{
    _Bool _isMigrationFinished;	// 8 = 0x8
}

@property(nonatomic) _Bool isMigrationFinished; // @synthesize isMigrationFinished=_isMigrationFinished;
- (void)run;	// IMP=0x0000000100069b24
- (id)operationForRequest:(id)arg1 targetUID:(unsigned int)arg2 appleID:(id)arg3 transport:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000698a0

@end

