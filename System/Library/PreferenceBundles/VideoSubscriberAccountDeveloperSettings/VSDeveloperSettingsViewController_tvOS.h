//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class VSDeveloperSettingsFacade;

@interface VSDeveloperSettingsViewController_tvOS : TSKViewController
{
    _Bool _isCacheBusterEnabled;	// 8 = 0x8
    _Bool _requestTimeoutsDisabled;	// 9 = 0x9
    _Bool _simulateExpiredToken;	// 10 = 0xa
    VSDeveloperSettingsFacade *_facade;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b434
@property(nonatomic) _Bool simulateExpiredToken; // @synthesize simulateExpiredToken=_simulateExpiredToken;
@property(nonatomic) _Bool requestTimeoutsDisabled; // @synthesize requestTimeoutsDisabled=_requestTimeoutsDisabled;
@property(nonatomic) _Bool isCacheBusterEnabled; // @synthesize isCacheBusterEnabled=_isCacheBusterEnabled;
@property(retain, nonatomic) VSDeveloperSettingsFacade *facade; // @synthesize facade=_facade;
- (void)settingsFacadeSettingsDidChangeNotification:(id)arg1;	// IMP=0x000000000000b200
- (id)loadSettingGroups;	// IMP=0x000000000000a6d0
- (void)dealloc;	// IMP=0x0000000000009dec
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000009d9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009b6c

@end

