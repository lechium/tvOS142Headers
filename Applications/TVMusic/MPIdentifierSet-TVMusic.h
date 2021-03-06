//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPIdentifierSet.h>

@interface MPIdentifierSet (TVMusic)
+ (void)_setActiveUserIDForMutableIdentifierSet:(id)arg1;	// IMP=0x000000010001a908
+ (id)_activeAccountDSID;	// IMP=0x000000010001a84c
+ (id)tvm_identifierSetForModelKind:(id)arg1 withStoreID:(long long)arg2 subscriptionID:(long long)arg3;	// IMP=0x000000010001a6a8
+ (id)tvm_identifierSetForModelKind:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x000000010001a504
+ (id)tvm_identiferSetForRadioStationStringID:(id)arg1;	// IMP=0x000000010001a364
+ (id)tvm_identiferSetForAlbumWithCloudAlbumID:(id)arg1;	// IMP=0x000000010001a1b0
+ (id)tvm_identiferSetForAlbumWithStoreID:(long long)arg1 subscriptionID:(long long)arg2;	// IMP=0x000000010001a130
+ (id)tvm_identifierSetForPlaylistWithGlobalID:(id)arg1;	// IMP=0x0000000100019f90
+ (id)tvm_identifierSetForPlaylistWithUniversalCloudLibraryID:(id)arg1;	// IMP=0x0000000100019e14
+ (id)tvm_identifierSetForPlaylistWithCloudID:(unsigned long long)arg1;	// IMP=0x0000000100019c94
+ (id)tvm_identifierSetForPlaylistWithPersistentID:(long long)arg1;	// IMP=0x0000000100019c1c
+ (id)tvm_identifierSetForSongWithPersistentID:(long long)arg1 cloudID:(long long)arg2 storeID:(long long)arg3 subscriptionID:(long long)arg4;	// IMP=0x0000000100019918
+ (id)tvm_identiferSetForSongWithStoreID:(long long)arg1 subscriptionID:(long long)arg2;	// IMP=0x00000001000198fc
+ (id)tvm_identifierSetForSongWithCloudAlbumID:(id)arg1;	// IMP=0x0000000100019748
+ (id)tvm_identiferSetForSongWithCloudID:(unsigned long long)arg1;	// IMP=0x000000010001972c
+ (id)tvm_identiferSetForSongWithPersistentID:(long long)arg1;	// IMP=0x0000000100019714
+ (_Bool)tvm_isIdentifierUniversalCloudLibraryID:(id)arg1;	// IMP=0x0000000100019478
- (id)tvm_dictionaryRepresentation;	// IMP=0x00000001000194e0
@end

