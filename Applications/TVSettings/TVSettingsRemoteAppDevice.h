//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVCSEndpoint, TVSettingsRemoteAppFacade;

@interface TVSettingsRemoteAppDevice : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    TVCSEndpoint *_endpoint;	// 32 = 0x20
    TVSettingsRemoteAppFacade *_remoteFacade;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100093a7c
@property(nonatomic) __weak TVSettingsRemoteAppFacade *remoteFacade; // @synthesize remoteFacade=_remoteFacade;
@property(readonly, copy, nonatomic) TVCSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)pairWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100093978
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000938f0
- (unsigned long long)hash;	// IMP=0x0000000100093894
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100093648
- (id)initWithEndpoint:(id)arg1;	// IMP=0x000000010009359c
- (id)initWithDeviceRef:(void *)arg1;	// IMP=0x0000000100093508

@end

