//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
{
}

+ (void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;	// IMP=0x0000000100074c6c
+ (_Bool)didPasscodePolicyChangeWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;	// IMP=0x0000000100074a50
+ (id)sharedManager;	// IMP=0x00000001000739ac
- (void)resetPasscodeMetadata;	// IMP=0x0000000100074c70
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100074774
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100073afc
- (void)_sendPasscodeChangedNotification;	// IMP=0x0000000100073ad4
- (void)_setPrivatePasscodeDict:(id)arg1;	// IMP=0x00000001000739e8

@end

