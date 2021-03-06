//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "MCTVInstallProfileViewControllerDelegate-Protocol.h"
#import "TSKViewControllerExternalObserving-Protocol.h"

@class MCTVInstallProfileViewController, NSString, NSURLSessionDataTask;

@interface MCTVProfileListViewController : TSKViewController <MCTVInstallProfileViewControllerDelegate, TSKViewControllerExternalObserving>
{
    NSURLSessionDataTask *_profileLoadTask;	// 8 = 0x8
    id _externalValue;	// 16 = 0x10
    MCTVInstallProfileViewController *_installProfileViewController;	// 24 = 0x18
}

+ (id)_keyValueDictionaryForURL:(id)arg1;	// IMP=0x0000000000034fa0
- (void).cxx_destruct;	// IMP=0x0000000000035444
@property(retain, nonatomic) MCTVInstallProfileViewController *installProfileViewController; // @synthesize installProfileViewController=_installProfileViewController;
@property(retain, nonatomic) id externalValue; // @synthesize externalValue=_externalValue;
@property(retain, nonatomic) NSURLSessionDataTask *profileLoadTask; // @synthesize profileLoadTask=_profileLoadTask;
- (void)_updateTitleAndExternalData;	// IMP=0x000000000003454c
- (void)_dataManagerUpdated;	// IMP=0x0000000000034504
- (void)_loadProfileDataAtURL:(id)arg1;	// IMP=0x0000000000033c10
- (void)_installProvisioningProfile;	// IMP=0x0000000000033b98
- (void)_showInstallConfigurationProfile;	// IMP=0x0000000000033920
- (void)installViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x0000000000033850
- (void)displayTriggeredByURL:(id)arg1;	// IMP=0x00000000000336d4
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x000000000003352c
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000033304
- (id)loadSettingGroups;	// IMP=0x000000000003076c
- (void)setTitle:(id)arg1;	// IMP=0x000000000003071c
- (void)dealloc;	// IMP=0x0000000000030674
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000003051c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

