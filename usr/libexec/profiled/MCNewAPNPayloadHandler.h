//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCNewAPNPayloadHandler : MCNewPayloadHandler
{
}

- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010003e0a0
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010003e094
- (void)_sendNotifications;	// IMP=0x000000010003dfb4
- (void)migrateDefaults;	// IMP=0x000000010003de8c
- (void)unsetAside;	// IMP=0x000000010003de18
- (void)setAside;	// IMP=0x000000010003dda4
- (void)remove;	// IMP=0x000000010003dce8
- (void)_remove;	// IMP=0x000000010003dc1c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010003d8b0
- (_Bool)_install;	// IMP=0x000000010003d800
- (void)_notifyCoreTelephonyOfAPNChange;	// IMP=0x000000010003d720

@end

