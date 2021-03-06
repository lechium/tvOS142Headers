//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RPExtensions)
- (_Bool)_srDeviceHasSufficientSpaceForCurrentRecording;	// IMP=0x0000000100005b94
- (unsigned long long)_srDeviceFreeDiskSpace;	// IMP=0x0000000100005ab4
- (_Bool)_srDeviceHasSufficientFreeSpaceForRecording;	// IMP=0x0000000100005a88
- (id)_srGetCreationDateForFile:(id)arg1;	// IMP=0x00000001000059a8
- (void)_srDeleteFilesWithPrefix:(id)arg1;	// IMP=0x00000001000055ac
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005330
- (void)_srRemoveFile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000510c
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1;	// IMP=0x0000000100004c7c
- (long long)_srDeleteAllTempFiles;	// IMP=0x0000000100004c6c
- (long long)_srSizeOfTempDir:(id *)arg1;	// IMP=0x0000000100004bb4
- (id)trimmedOutputPath:(id)arg1;	// IMP=0x0000000100004ac0
- (id)outputPath:(_Bool)arg1 bundleID:(id)arg2;	// IMP=0x0000000100004974
- (id)dateSuffix;	// IMP=0x00000001000048ac
- (void)_srSetupTempDirectory;	// IMP=0x0000000100004770
- (id)_srTempPath;	// IMP=0x000000010000475c
@end

