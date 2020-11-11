//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RSDRemoteNCMDevice;

@interface RSDNCMInterface : NSObject
{
    _Bool _is_private;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    unsigned int _service;	// 16 = 0x10
    unsigned int _notification;	// 20 = 0x14
    char *_name;	// 24 = 0x18
    RSDRemoteNCMDevice *_device;	// 32 = 0x20
    char *_mac_addr;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000f4dc
@property(nonatomic) char *mac_addr; // @synthesize mac_addr=_mac_addr;
@property(nonatomic) _Bool is_private; // @synthesize is_private=_is_private;
@property(retain, nonatomic) RSDRemoteNCMDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned int notification; // @synthesize notification=_notification;
@property(nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) char *name; // @synthesize name=_name;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (void)dealloc;	// IMP=0x000000010000f2f0
- (void)updateOnLinkActive;	// IMP=0x000000010000ec70
- (id)initWithService:(unsigned int)arg1 notification:(struct IONotificationPort *)arg2 queue:(id)arg3 callback:(CDUnknownFunctionPointerType)arg4;	// IMP=0x000000010000ea68

@end

