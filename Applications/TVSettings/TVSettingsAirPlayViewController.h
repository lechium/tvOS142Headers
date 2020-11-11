//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "HMResidentDeviceDelegate-Protocol.h"

@class NSMutableSet, NSString, TSKSettingItem, TVSettingsFollowUpFacade, TVSettingsHomeSetupController, TVSiCloudAccountManager;

@interface TVSettingsAirPlayViewController : TSKViewController <HMResidentDeviceDelegate>
{
    TSKSettingItem *_nameItem;	// 8 = 0x8
    TVSettingsHomeSetupController *_homeSetupController;	// 16 = 0x10
    TVSettingsFollowUpFacade *_followUpFacade;	// 24 = 0x18
    TVSiCloudAccountManager *_accountManager;	// 32 = 0x20
    NSMutableSet *_updatingResidentDevices;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000c5f24
@property(retain, nonatomic) NSMutableSet *updatingResidentDevices; // @synthesize updatingResidentDevices=_updatingResidentDevices;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVSettingsFollowUpFacade *followUpFacade; // @synthesize followUpFacade=_followUpFacade;
@property(retain, nonatomic) TVSettingsHomeSetupController *homeSetupController; // @synthesize homeSetupController=_homeSetupController;
@property(readonly, nonatomic) TSKSettingItem *nameItem; // @synthesize nameItem=_nameItem;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000c5de8
- (void)_pushRoomPickerViewController;	// IMP=0x00000001000c5dcc
- (void)_presentWHASetupViewController;	// IMP=0x00000001000c5dac
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x00000001000c5c24
- (void)_setDeviceName:(id)arg1;	// IMP=0x00000001000c57b0
- (id)_makeDeviceNameChildViewControllerWithItem:(id)arg1;	// IMP=0x00000001000c5614
- (void)_toggleResidenceEnabled:(id)arg1;	// IMP=0x00000001000c53a8
- (id)_homeNoiCloudAccountAlertViewController;	// IMP=0x00000001000c51ec
- (id)_homeNeedsUserInterentionAlertViewController;	// IMP=0x00000001000c5030
- (id)_crdViewController;	// IMP=0x00000001000c4eec
- (id)_overscanAdjustmentFormatter;	// IMP=0x00000001000c4d1c
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x00000001000c4d10
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;	// IMP=0x00000001000c4d04
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;	// IMP=0x00000001000c4cf8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c49e0
- (id)loadSettingGroups;	// IMP=0x00000001000c2808
- (void)dealloc;	// IMP=0x00000001000c2710
- (id)initWithFollowUpFacade:(id)arg1;	// IMP=0x00000001000c2570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

