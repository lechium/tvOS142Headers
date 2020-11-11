//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDD, NSDictionary;
@protocol OS_dispatch_queue;

@interface CDDPrivacyMonitor : NSObject
{
    CDD *cdd;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *privacyDispatchQ;	// 16 = 0x10
    NSDictionary *tableEntryOptions;	// 24 = 0x18
    _Bool updateAllowed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002cb04
@property(readonly) _Bool updateAllowed; // @synthesize updateAllowed;
@property(retain, nonatomic) CDD *cdd; // @synthesize cdd;
- (void)deletePrivacySensitiveDBEntries;	// IMP=0x000000010002cae0
- (_Bool)isManagedConfigurationSettingOn;	// IMP=0x000000010002ca8c
- (void)privacyCloak;	// IMP=0x000000010002c908
- (id)initWithCDDinstance:(id)arg1;	// IMP=0x000000010002be98
- (_Bool)loadCurrentPrivacySetting;	// IMP=0x000000010002bd0c
- (void)shadowRemotePrivacySetting:(_Bool)arg1;	// IMP=0x000000010002bba4
- (void)saveCurrentPrivacySetting:(_Bool)arg1;	// IMP=0x000000010002ba88

@end

