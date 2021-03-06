//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TSKViewControllerExternalObserving-Protocol.h"
#import "VSIdentityProviderPickerViewControllerDelegate-Protocol.h"
#import "VSIdentityProviderViewControllerDelegate-Protocol.h"
#import "VSRemoteNotifierDelegate-Protocol.h"

@class NSString, TSKSettingGroup, VSOnboardingInfoCenter, VSRemoteNotifier;

@interface TVSettingsVideoSubscriberAccountViewController : TSKViewController <TSKViewControllerExternalObserving, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate>
{
    id _externalValue;	// 8 = 0x8
    VSRemoteNotifier *_remoteNotifier;	// 16 = 0x10
    VSOnboardingInfoCenter *_onboardingInfoCenter;	// 24 = 0x18
    TSKSettingGroup *_voucherList;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000b3a0
@property(retain, nonatomic) TSKSettingGroup *voucherList; // @synthesize voucherList=_voucherList;
@property(retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // @synthesize onboardingInfoCenter=_onboardingInfoCenter;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) id externalValue; // @synthesize externalValue=_externalValue;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000b308
- (id)_appSettingsViewModelForItemAtIndexPath:(id)arg1;	// IMP=0x000000000000b1f8
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;	// IMP=0x000000000000b1e4
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;	// IMP=0x000000000000af54
- (void)identityProviderViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000ae84
- (void)dismissIdentityProviderViewController:(id)arg1;	// IMP=0x000000000000adb4
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;	// IMP=0x000000000000a86c
- (void)identityProviderPickerViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000a858
- (void)_showPrivacy:(id)arg1;	// IMP=0x000000000000a810
- (void)_initiateSetTopBoxOptOut:(id)arg1;	// IMP=0x0000000000009d38
- (void)_showMoreApps:(id)arg1;	// IMP=0x0000000000009c78
- (void)_signOut:(id)arg1;	// IMP=0x0000000000009a98
- (void)_signIn:(id)arg1;	// IMP=0x00000000000097f4
- (void)_performAction:(id)arg1;	// IMP=0x00000000000092e4
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000000009240
- (void)_presentError:(id)arg1;	// IMP=0x0000000000009178
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000000090d8
- (id)loadSettingGroups;	// IMP=0x0000000000007fe8
- (void)dealloc;	// IMP=0x0000000000007fa4
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000007f44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

