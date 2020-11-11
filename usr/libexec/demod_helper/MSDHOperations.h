//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDSignedManifest;
@protocol OS_os_transaction;

@interface MSDHOperations : NSObject
{
    MSDSignedManifest *_signedManifest;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010001a208
- (void).cxx_destruct;	// IMP=0x000000010001da84
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) MSDSignedManifest *signedManifest; // @synthesize signedManifest=_signedManifest;
- (_Bool)quitHelper;	// IMP=0x000000010001da54
- (_Bool)restoreAttributesUnder:(id)arg1 fromManifest:(id)arg2;	// IMP=0x000000010001d748
- (_Bool)restoreAppDataAttributesUnder:(id)arg1 containerType:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010001d3c4
- (_Bool)restoreBackupAttributesUnder:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000010001d2d0
- (_Bool)reboot;	// IMP=0x000000010001d228
- (_Bool)cleanupStagingArea:(id)arg1;	// IMP=0x000000010001cd80
- (_Bool)switchToBackupFolder;	// IMP=0x000000010001ccd0
- (void)moveFilesFromPath:(id)arg1 inList:(id)arg2 toCache:(id)arg3;	// IMP=0x000000010001c54c
- (_Bool)moveFilesFromStagingPath:(id)arg1 toCache:(id)arg2;	// IMP=0x000000010001c34c
- (_Bool)moveStagingToFinal:(id)arg1 finalPath:(id)arg2;	// IMP=0x000000010001bcc4
- (_Bool)disableLaunchdServicesForWatch;	// IMP=0x000000010001ba30
- (_Bool)manageDemoVolume:(id)arg1;	// IMP=0x000000010001b8ec
- (_Bool)manageDataVolume:(id)arg1;	// IMP=0x000000010001b718
- (_Bool)writeNVRam:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010001b518
- (_Bool)deleteNvram:(id)arg1;	// IMP=0x000000010001b3b8
- (_Bool)cloneFile:(id)arg1 stagingPath:(id)arg2 expectingHash:(id)arg3 expectingTarget:(id)arg4;	// IMP=0x000000010001b2e0
- (_Bool)touchFile:(id)arg1 fileAttributes:(id)arg2;	// IMP=0x000000010001b168
- (_Bool)writeDictionary:(id)arg1 toFile:(id)arg2;	// IMP=0x000000010001afc8
- (_Bool)createDeviceManifest:(id)arg1 forBackup:(_Bool)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000010001ac20
- (_Bool)removeDirectory:(id)arg1;	// IMP=0x000000010001ab88
- (_Bool)prepareDirectory:(id)arg1 writableByNonRoot:(_Bool)arg2;	// IMP=0x000000010001a780
- (_Bool)migratePreferencesFile;	// IMP=0x000000010001a4c0
- (void)dealloc;	// IMP=0x000000010001a2d8
- (id)init;	// IMP=0x000000010001a274

@end

