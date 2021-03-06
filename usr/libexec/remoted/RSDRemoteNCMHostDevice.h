//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RSDRemoteNCMDevice.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface RSDRemoteNCMHostDevice : RSDRemoteNCMDevice
{
    NSObject<OS_dispatch_source> *connection_timer;	// 8 = 0x8
    _Bool _suspended;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100016770
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (_Bool)connectable;	// IMP=0x00000001000165f0
- (void)connected;	// IMP=0x0000000100016590
- (void)disconnect;	// IMP=0x00000001000164b8
- (void)needsConnect;	// IMP=0x0000000100015c58
- (void)setupConnectionTimer;	// IMP=0x0000000100015a3c
- (void)attach;	// IMP=0x00000001000159ac
- (id)initWithInterface:(id)arg1;	// IMP=0x000000010001584c
- (id)initWithUSBSerialNumber:(const struct __CFString *)arg1;	// IMP=0x0000000100015640
- (id)initWithGeneratedName;	// IMP=0x00000001000155a0
- (unsigned int)type;	// IMP=0x0000000100015598

@end

