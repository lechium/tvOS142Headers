//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class DMDPolicyPersistence, NSString;

@interface DMDPolicyServerListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005d6cc
@property(readonly, nonatomic) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005d56c
- (id)initWithPolicyPersistence:(id)arg1;	// IMP=0x000000010005d4f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

