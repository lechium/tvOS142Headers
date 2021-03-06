//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRUWBServiceProviding-Protocol.h"

@class NSString;

@interface PRUWBManagerAgent : NSObject <PRUWBServiceProviding>
{
    shared_ptr_55175bc8 _clientReference;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000100018e30
- (void).cxx_destruct;	// IMP=0x0000000100018e28
- (_Bool)sendHangupSignalForTicket:(unsigned long long)arg1;	// IMP=0x0000000100018d14
- (_Bool)sendTrackingAssistanceData;	// IMP=0x0000000100018c54
- (void)requestAsyncServiceStatusUpdate;	// IMP=0x0000000100018b78
- (_Bool)stopWithTicket:(unsigned long long)arg1;	// IMP=0x0000000100018ae8
- (_Bool)startWithTicket:(unsigned long long)arg1 options:(struct RoseStartRangingOptions)arg2;	// IMP=0x0000000100018a48
- (_Bool)unregisterForService:(unsigned long long)arg1;	// IMP=0x0000000100018954
- (_Bool)registerForService:(const struct RoseServiceRequest *)arg1 outTicket:(unsigned long long *)arg2;	// IMP=0x0000000100018814
- (void)disconnect;	// IMP=0x0000000100018720
- (void)connect;	// IMP=0x0000000100018528
- (shared_ptr_3baa22f1)configurationManager;	// IMP=0x00000001000184e0
- (struct PRUWBDeviceCapabilities)deviceCapabilities;	// IMP=0x000000010001836c
- (id)getQueue;	// IMP=0x0000000100018354
- (id)initWithClientReference:(shared_ptr_55175bc8)arg1;	// IMP=0x00000001000182b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

