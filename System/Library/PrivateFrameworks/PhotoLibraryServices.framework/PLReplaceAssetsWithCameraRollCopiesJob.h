/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, PLManagedAlbum, PLPhotoLibrary, PLManagedObjectContext, NSPersistentStoreCoordinator;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {

	NSArray* _assets;
	PLManagedAlbum* _album;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSArray * assets;                                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLManagedAlbum * album;                                       //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator; 
+(void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(PLManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)coordinator;
-(void)setAlbum:(PLManagedAlbum *)arg1 ;
-(PLManagedAlbum *)album;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)runDaemonSide;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
@end
