/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLGenericAlbum.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>
#import <libobjc.A.dylib/PLDeletableManagedObject.h>

@class NSOrderedSet, NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject> {

	BOOL _needsPersistenceUpdate;
	BOOL _needsFixedOrderKeysComplianceUpdate;

}

@property (assign,nonatomic) BOOL needsPersistenceUpdate;                           //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (assign,nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;              //@synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * childCollections; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(id)validKindsForPersistence;
+(id)childKeyForOrdering;
+(id)localizedRecoveredTitle;
+(id)insertNewFolderWithTitle:(id)arg1 kind:(int)arg2 intoLibrary:(id)arg3 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(id)identifier;
-(int)filter;
-(void)prepareForDeletion;
-(void)willSave;
-(void)didSave;
-(unsigned long long)photosCount;
-(NSString *)_typeDescription;
-(id)assets;
-(unsigned long long)videosCount;
-(unsigned long long)assetsCount;
-(id)albums;
-(long long)cloudDeletionType;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(NSString *)cloudUUIDForDeletion;
-(BOOL)isValidForPersistence;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(BOOL)needsPersistenceUpdate;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(BOOL)canPerformDeleteOperation;
-(id)childKeyForOrdering;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(void)insertObject:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2 ;
-(void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg1 ;
-(short)albumListType;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(void)addChildCollections:(id)arg1 ;
-(void)_enforceFixedOrderKeyCompliance;
-(void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)arg1 ;
-(void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertChildCollections:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildCollectionsAtIndexes:(id)arg1 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2 ;
-(void)addChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollectionsObject:(id)arg1 ;
-(void)removeChildCollections:(id)arg1 ;
-(void)refreshCollections;
-(BOOL)needsFixedOrderKeysComplianceUpdate;
-(void)setNeedsFixedOrderKeysComplianceUpdate:(BOOL)arg1 ;
-(id)descriptionOfChildCollectionOrderValues;
@end
