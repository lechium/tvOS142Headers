//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, NSArray;
@protocol OS_dispatch_queue;

@interface TVSettingsNotificationsFacade : NSObject
{
    NSArray *_notificationSettings;	// 8 = 0x8
    BBSettingsGateway *_gateway;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_gatewayQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100005d24
- (void).cxx_destruct;	// IMP=0x0000000100006b5c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *gatewayQueue; // @synthesize gatewayQueue=_gatewayQueue;
@property(readonly, nonatomic) BBSettingsGateway *gateway; // @synthesize gateway=_gateway;
@property(copy, nonatomic) NSArray *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
- (void)_updateBulletinSettingsSynchronously:(_Bool)arg1;	// IMP=0x00000001000063c8
- (void)_updateSettings:(id)arg1;	// IMP=0x0000000100006160
- (void)didBecomeActive:(id)arg1;	// IMP=0x0000000100006150
- (id)notificationSettingForIdentifier:(id)arg1;	// IMP=0x0000000100005fbc
- (void)dealloc;	// IMP=0x0000000100005ef0
- (id)init;	// IMP=0x0000000100005d90

@end
