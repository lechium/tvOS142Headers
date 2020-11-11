//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfParadeItem.h"

#import "PBSAppInfoControllerObserver-Protocol.h"

@class HBTopShelfInstallApplicationAction, HBTopShelfInstallingApplicationAction, NSString, PBSAppInfoController;

@interface HBTopShelfAppStoreParadeItem : HBTopShelfParadeItem <PBSAppInfoControllerObserver>
{
    _Bool _observingApplicationInstalls;	// 8 = 0x8
    HBTopShelfInstallApplicationAction *_installApplicationAction;	// 16 = 0x10
    HBTopShelfInstallingApplicationAction *_installingApplicationAction;	// 24 = 0x18
    PBSAppInfoController *_appInfoController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002f288
@property(nonatomic, getter=isObservingApplicationInstalls) _Bool observingApplicationInstalls; // @synthesize observingApplicationInstalls=_observingApplicationInstalls;
@property(retain, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) HBTopShelfInstallingApplicationAction *installingApplicationAction; // @synthesize installingApplicationAction=_installingApplicationAction;
@property(retain, nonatomic) HBTopShelfInstallApplicationAction *installApplicationAction; // @synthesize installApplicationAction=_installApplicationAction;
- (id)_lazyInstallingApplicationAction;	// IMP=0x000000010002f14c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010002f030
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010002eb38
- (void)_updatePrimaryAction;	// IMP=0x000000010002e474
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x000000010002e3b8
- (void)_willPerformAction:(id)arg1;	// IMP=0x000000010002e2e0
- (void)stopObservingApplicationInstalls;	// IMP=0x000000010002e1a4
- (void)startObservingApplicationInstalls;	// IMP=0x000000010002e068
- (void)dealloc;	// IMP=0x000000010002dff8
- (id)initWithTopShelfAppStoreCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010002de70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

