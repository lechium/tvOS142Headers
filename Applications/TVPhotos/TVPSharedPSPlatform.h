//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSASPlatform-Protocol.h"

@class NSString;

@interface TVPSharedPSPlatform : NSObject <MSASPlatform>
{
}

- (_Bool)shouldEnableNewFeatures;	// IMP=0x000000010008d4a0
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;	// IMP=0x000000010008d498
- (_Bool)MSASIsAllowedToUploadAssets;	// IMP=0x000000010008d490
- (_Bool)MSASIsAllowedToTransferMetadata;	// IMP=0x000000010008d488
- (id)personIDsEnabledForAlbumSharing;	// IMP=0x000000010008d3d8
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;	// IMP=0x000000010008d328
- (id)pushTokenForPersonID:(id)arg1;	// IMP=0x000000010008d2a8
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;	// IMP=0x000000010008d17c
- (id)baseSharingURLForPersonID:(id)arg1;	// IMP=0x000000010008cffc
- (Class)pluginClass;	// IMP=0x000000010008cff0
- (id)pathAlbumSharingDir;	// IMP=0x000000010008ce84
- (id)albumSharingDaemon;	// IMP=0x000000010008ce18
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;	// IMP=0x000000010008ce14
- (_Bool)shouldLogAtLevel:(int)arg1;	// IMP=0x000000010008ce0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

