/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedAlbum.h>
#import <libobjc.A.dylib/PLCloudSharedAlbumProtocol.h>

@class NSOrderedSet, NSNumber, NSString, NSDictionary, NSDate, NSMutableOrderedSet, PLPhotoLibrary, NSObject, NSURL, PLManagedAsset, NSArray;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol> {

	BOOL _deleteFromDBOnly;

}

@property (nonatomic,retain) NSOrderedSet * assets; 
@property (assign,nonatomic) short cloudAlbumSubtype; 
@property (nonatomic,retain) NSNumber * cloudRelationshipState; 
@property (nonatomic,retain) NSNumber * cloudRelationshipStateLocal; 
@property (nonatomic,retain) NSNumber * isOwned; 
@property (nonatomic,retain) NSNumber * hasUnseenContent; 
@property (nonatomic,retain) NSNumber * cloudOwnerEmailKey; 
@property (assign,nonatomic) BOOL cloudNotificationsEnabled; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (assign,nonatomic) BOOL cloudOwnerIsWhitelisted; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned long long unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL isProjectAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)allCloudSharedAlbumsInLibrary:(id)arg1 ;
+(id)lightweightReimportDirectoryNameWithGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(BOOL)arg5 allowsEmail:(BOOL)arg6 emailAddressManager:(id)arg7 ;
+(id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(BOOL)arg5 allowsEmail:(BOOL)arg6 emailAddressManager:(id)arg7 ;
+(id)cloudSharedAlbumWithObjectID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)delete;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(void)deleteFromDatabaseOnly;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg1 ;
-(void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(BOOL*)arg3 ;
-(void)userDeleteSubscriberRecord:(id)arg1 ;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(NSString *)arg1 ;
-(unsigned long long)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1 ;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSString *)localizedSharedWithLabel;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(id)sortingComparator;
-(id)_expectedKeyAssets:(id)arg1 ;
-(void)publishBatchOfOriginalAssetUUIDs:(id)arg1 withBatchCommentText:(id)arg2 assetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 andTrimmedVideoPathInfo:(id)arg5 isNewAlbum:(BOOL)arg6 ;
-(id)emailAddressManager;
-(id)albumDirectoryPath;
-(void)persistRecoveryMetadata;
@end

