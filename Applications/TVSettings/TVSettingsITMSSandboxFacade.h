//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface TVSettingsITMSSandboxFacade : NSObject
{
    _Bool _isSandboxUIEnabled;	// 8 = 0x8
    _Bool _isAuthenticationInProgress;	// 9 = 0x9
    _Bool _isSignOutInProgress;	// 10 = 0xa
    ACAccount *_sandboxAccount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000edd24
@property(retain, nonatomic) ACAccount *sandboxAccount; // @synthesize sandboxAccount=_sandboxAccount;
@property(nonatomic) _Bool isSignOutInProgress; // @synthesize isSignOutInProgress=_isSignOutInProgress;
@property(nonatomic) _Bool isAuthenticationInProgress; // @synthesize isAuthenticationInProgress=_isAuthenticationInProgress;
@property(nonatomic) _Bool isSandboxUIEnabled; // @synthesize isSandboxUIEnabled=_isSandboxUIEnabled;
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x00000001000edba8
- (void)signOut;	// IMP=0x00000001000ed94c
- (void)signInSandboxAccountWithPresentingViewController:(id)arg1;	// IMP=0x00000001000ed6b8
- (void)updateSandboxAccountState;	// IMP=0x00000001000ed5fc
- (id)_getSandboxAccount;	// IMP=0x00000001000ed594
- (void)dealloc;	// IMP=0x00000001000ed51c
- (id)init;	// IMP=0x00000001000ed474

@end
