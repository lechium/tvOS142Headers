//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTAuthKitAdapter-Protocol.h"

@class CKKSListenerCollection;
@protocol OTAuthKitAdapterNotifier;

__attribute__((visibility("hidden")))
@interface OTAuthKitActualAdapter : NSObject <OTAuthKitAdapter>
{
    CKKSListenerCollection<OTAuthKitAdapterNotifier> *_notifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010010e078
@property(retain) CKKSListenerCollection<OTAuthKitAdapterNotifier> *notifiers; // @synthesize notifiers=_notifiers;
- (void)notifyAKDeviceList:(id)arg1;	// IMP=0x000000010010de70
- (void)registerNotification:(id)arg1;	// IMP=0x000000010010dd54
- (void)fetchCurrentDeviceList:(CDUnknownBlockType)arg1;	// IMP=0x000000010010d99c
- (id)machineID:(id *)arg1;	// IMP=0x000000010010d738
- (_Bool)accountIsDemoAccount:(id *)arg1;	// IMP=0x000000010010d4d0
- (_Bool)accountIsHSA2ByAltDSID:(id)arg1;	// IMP=0x000000010010d384
- (id)primaryiCloudAccountAltDSID:(id *)arg1;	// IMP=0x000000010010d1d4

@end
