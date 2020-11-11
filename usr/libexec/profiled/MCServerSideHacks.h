//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCHacks.h>

@interface MCServerSideHacks : MCHacks
{
}

+ (id)mergeArray:(id)arg1 withArray:(id)arg2;	// IMP=0x0000000100077e84
+ (id)sharedHacks;	// IMP=0x00000001000751dc
+ (void)setAllowHacksToCallExternalComponents:(_Bool)arg1;	// IMP=0x00000001000751d0
- (void)resetSettingsSender:(id)arg1;	// IMP=0x00000001000791fc
- (void)applyGracePeriodSettingFromKeybagToUserSettings;	// IMP=0x0000000100079098
- (void)recomputeHacksAfterProfileChangesEffectiveUserSettings:(id)arg1 sendNotifications:(_Bool)arg2;	// IMP=0x0000000100078f9c
- (void)recomputeWebContentFilterEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2 outMechanismChangedDetected:(_Bool *)arg3;	// IMP=0x0000000100077f64
- (id)recomputeAccountVPNAssociations;	// IMP=0x0000000100077e7c
- (void)recomputeAppRulesForNetworkExtension;	// IMP=0x0000000100077d10
- (void)recomputeAppOptionsEffectiveUserSettings:(id)arg1 outEffectiveChangeDetected:(_Bool *)arg2;	// IMP=0x0000000100076f28
- (_Bool)applyEffectiveSettings:(id)arg1 toSettings:(id)arg2 withOldRestrictions:(id)arg3 newRestrictions:(id)arg4;	// IMP=0x0000000100076cb8
- (void)applyEffectiveSettings:(id)arg1 toOtherSubsystemsPasscode:(id)arg2 credentialSet:(id)arg3;	// IMP=0x0000000100076224
- (void)_checkCarrierBundleRelatedSettings;	// IMP=0x0000000100076074
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;	// IMP=0x0000000100075398
- (_Bool)_anyBoolRestrictionChangedInSet:(id)arg1 oldRestrictions:(id)arg2 newRestrictions:(id)arg3;	// IMP=0x0000000100075218

@end
