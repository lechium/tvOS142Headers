//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16DaemoniOSLibrary27SDAirDropContactHashManager : NSObject
{
    MISSING_TYPE *systemMonitor;	// 8 = 0x8
    MISSING_TYPE *hashManagerQ;	// 16 = 0x10
    MISSING_TYPE *bucket;	// 24 = 0x18
    MISSING_TYPE *contactStore;	// 32 = 0x20
    MISSING_TYPE *hashDB;	// 40 = 0x28
    MISSING_TYPE *activated;	// 56 = 0x38
    MISSING_TYPE *updateTimer;	// 64 = 0x40
    MISSING_TYPE *meCardInfo;	// 72 = 0x48
    MISSING_TYPE *numUnpersisted;	// 88 = 0x58
}

+ (id)shared;	// IMP=0x00000001001db1f8
- (void).cxx_destruct;	// IMP=0x00000001001e36b4
- (id)init;	// IMP=0x00000001001dcc00
- (_Bool)acquireTokenForIdentifier:(unsigned long long)arg1;	// IMP=0x00000001001db238

@end

