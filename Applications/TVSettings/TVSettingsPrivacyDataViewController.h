//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsDiagnosticLogsFacade;

@interface TVSettingsPrivacyDataViewController : TSKViewController
{
    TVSettingsDiagnosticLogsFacade *_logsFacade;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000ae20
@property(retain, nonatomic) TVSettingsDiagnosticLogsFacade *logsFacade; // @synthesize logsFacade=_logsFacade;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000ad44
- (id)loadSettingGroups;	// IMP=0x000000010000a9f4
- (void)dealloc;	// IMP=0x000000010000a988
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010000a8f4

@end
