//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "AKAppleIDAuthenticationInAppContextDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TVSettingsAccountsFacade, UITapGestureRecognizer;

@interface TVSettingsGameCenterAccountViewController : TSKViewController <AKAppleIDAuthenticationInAppContextDelegate, UIGestureRecognizerDelegate>
{
    _Bool _authenticationInProgress;	// 8 = 0x8
    UITapGestureRecognizer *_menuGestureRecognizer;	// 16 = 0x10
    _Bool _signOutInProgress;	// 24 = 0x18
    TVSettingsAccountsFacade *_accountsFacade;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001ac6c
@property(retain, nonatomic) TVSettingsAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
- (void)contextDidDismissLoginAlertController:(id)arg1;	// IMP=0x000000010001ac44
- (void)contextWillDismissLoginAlertController:(id)arg1;	// IMP=0x000000010001ac40
- (void)contextDidPresentLoginAlertController:(id)arg1;	// IMP=0x000000010001ac08
- (void)_presentAboutFriends:(id)arg1;	// IMP=0x000000010001aa84
- (void)_updateSignInItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010001a6e8
- (void)_presentError:(id)arg1;	// IMP=0x000000010001a448
- (void)_signOut:(id)arg1;	// IMP=0x000000010001a120
- (void)_resetAuthenticationInProgressState;	// IMP=0x000000010001a028
- (void)_signIn:(id)arg1;	// IMP=0x00000001000199a8
@property(getter=isAuthenticationInProgress) _Bool authenticationInProgress;
- (id)loadSettingGroups;	// IMP=0x000000010001916c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100019108
- (id)init;	// IMP=0x00000001000190d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100019098
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100019060
- (id)initWithAccountsFacade:(id)arg1;	// IMP=0x0000000100018ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

