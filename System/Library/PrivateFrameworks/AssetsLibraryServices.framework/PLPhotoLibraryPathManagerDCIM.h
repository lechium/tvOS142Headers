/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {

	unsigned _persistedAlbumDataDirectoryExists;
	NSString* _photoDataDirectory;
	NSString* _photoDataCachesDirectory;
	NSString* _photoDataAnalyticsDirectory;
	NSString* _photoDataSearchDirectory;
	NSString* _restoreInfoDirectory;
	NSString* _dcimDirectory;
	NSString* _cplAssetsDirectory;
	NSString* _cmmAssetsDirectory;
	NSString* _journalsDirectory;
	NSString* _projectsDirectory;
	NSString* _privateDirectory;
	NSString* _changeStoreDatabasePath;
	NSString* _thumbnailsDirectory;
	NSString* _thumbnailsV2Directory;
	NSString* _thumbnailsVideoKeyFramesDirectory;
	BOOL _assetAlbumOrderStructurePathCreated;
	PLImportFileManager* _importFileManager;

}

@property (nonatomic,retain) PLImportFileManager * importFileManager;              //@synthesize importFileManager=_importFileManager - In the implementation block
+(id)systemLibraryPathManager;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)basePrivateDirectoryPath;
-(id)convertPhotoLibraryPathType:(unsigned char)arg1 ;
-(id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)photosDatabasePath;
-(id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathsForClientAccess:(id)arg1 ;
-(id)pathsForPermissionCheck;
-(id)pathsForExternalWriters;
-(id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)privateCacheDirectoryWithSubType:(unsigned char)arg1 ;
-(id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 ;
-(id)pathToAssetsToAlbumsMapping;
-(id)syncInfoPath;
-(id)getImportFileManager;
-(id)createPathsForNewLibraries;
-(id)photoMetadataDirectory;
-(id)photoMutationsDirectory;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(id)pathToAssetAlbumOrderStructure;
-(id)cloudRestoreForegroundPhaseCompleteTokenPath;
-(id)cloudRestoreBackgroundPhaseInProgressTokenPath;
-(id)cloudRestoreCompleteTokenPath;
-(id)modelRestorePostProcessingCompleteTokenPath;
-(id)iTunesPhotosSyncDirectory;
-(id)iTunesSyncedAssetsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)iTunesPhotosSyncMetadataFilePath;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)assetBaseFilenameForAdjustmentFilePath:(id)arg1 ;
-(id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2 ;
-(PLImportFileManager *)importFileManager;
-(void)setImportFileManager:(PLImportFileManager *)arg1 ;
@end

