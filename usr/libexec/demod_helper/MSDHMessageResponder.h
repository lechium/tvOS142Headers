//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDHMessageResponder : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000100020e38
- (_Bool)quitHelper:(id)arg1;	// IMP=0x00000001000230fc
- (_Bool)reboot:(id)arg1;	// IMP=0x0000000100022ff8
- (_Bool)disableLaunchdServicesForWatch:(id)arg1;	// IMP=0x0000000100022ef4
- (_Bool)moveFilesFromStagingPathToCache:(id)arg1;	// IMP=0x0000000100022d88
- (_Bool)switchToBackupFolder:(id)arg1;	// IMP=0x0000000100022c84
- (_Bool)moveStagingToFinal:(id)arg1;	// IMP=0x0000000100022b18
- (_Bool)manageVolume:(id)arg1;	// IMP=0x00000001000228f8
- (_Bool)writeNvram:(id)arg1;	// IMP=0x000000010002278c
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x0000000100022684
- (_Bool)restoreAppDataAttributes:(id)arg1;	// IMP=0x00000001000224ec
- (_Bool)restoreBackupAttributes:(id)arg1;	// IMP=0x0000000100022324
- (_Bool)cloneFile:(id)arg1;	// IMP=0x00000001000221c4
- (_Bool)touchFile:(id)arg1;	// IMP=0x0000000100021f74
- (_Bool)createDeviceManifest:(id)arg1;	// IMP=0x0000000100021d60
- (_Bool)removeWorkDirectory:(id)arg1;	// IMP=0x0000000100021c58
- (_Bool)prepareWorkDirectory:(id)arg1;	// IMP=0x0000000100021ad8
- (_Bool)clearStagedDeviceAfterUpdateProcess;	// IMP=0x00000001000218f0
- (_Bool)stageDeviceForUpdateProcess;	// IMP=0x00000001000215dc
- (_Bool)migratePreferencesFile:(id)arg1;	// IMP=0x00000001000214d8
- (void)sendResponse:(_Bool)arg1 for:(id)arg2 from:(id)arg3;	// IMP=0x0000000100021440
- (void)handleXPCMessage:(id)arg1 fromConnection:(id)arg2;	// IMP=0x0000000100021100
- (_Bool)hasEntitlementMobileStoreDemod:(id)arg1;	// IMP=0x0000000100020f08
- (id)init;	// IMP=0x0000000100020ea4

@end

