/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPActiveUserChangeMonitorDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
@class NSObject, NSArray, QueryCriteriaResultsCache, NSMutableDictionary, NSMutableArray, NSPointerArray, ICUserIdentity, _MPActiveUserChangeMonitor, NSURL, NSString, NSNumber, NSDate, ML3MusicLibrary;

@interface MPMediaLibrary : NSObject <_MPActiveUserChangeMonitorDelegate, NSSecureCoding> {

	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
	NSObject*<OS_dispatch_queue> _entityCacheQueue;
	NSObject*<OS_dispatch_queue> _fixedQueue;
	NSArray* _notificationObservers;
	QueryCriteriaResultsCache* _itemsForCriteriaCache;
	QueryCriteriaResultsCache* _hasItemsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfItemsForCriteriaCache;
	QueryCriteriaResultsCache* _itemResultSetsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsForCriteriaCache;
	QueryCriteriaResultsCache* _hasCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsResultSetsForCriteriaCache;
	NSMutableDictionary* _hasItemsDidLoadForCriteria;
	NSMutableDictionary* _hasCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfItemsDidLoadForCriteria;
	NSMutableArray* _additionalLibraryFilterPredicates;
	NSObject*<OS_dispatch_queue> _additionalLibraryFilterPredicatesAccessQueue;
	NSPointerArray* _connectionAssertions;
	NSObject*<OS_dispatch_queue> _connectionAssertionsQueue;
	BOOL _disconnectAfterReleasingAssertions;
	float _connectionProgress;
	long long _removalReason;
	unsigned _determinedHasMedia : 1;
	unsigned _hasMedia : 1;
	unsigned _determinedHasSongs : 1;
	unsigned _hasSongs : 1;
	unsigned _determinedHasGeniusMixes : 1;
	unsigned _hasGeniusMixes : 1;
	unsigned _determinedHasPlaylists : 1;
	unsigned _hasPlaylists : 1;
	unsigned _determinedHasComposers : 1;
	unsigned _hasComposers : 1;
	unsigned _determinedHasPodcasts : 1;
	unsigned _hasPodcasts : 1;
	unsigned _determinedHasUbiquitousBookmarkableItems : 1;
	unsigned _hasUbiquitousBookmarkableContent : 1;
	unsigned _determinedHasAudiobooks : 1;
	unsigned _hasAudiobooks : 1;
	long long _cloudFilteringType;
	BOOL _filteringDisabled;
	BOOL _hasVideos;
	BOOL _determinedHasVideos;
	BOOL _hasMusicVideos;
	BOOL _determinedHasMusicVideos;
	BOOL _hasAudibleAudioBooks;
	BOOL _determinedHasAudibleAudioBooks;
	BOOL _hasMovies;
	BOOL _determinedHasMovies;
	BOOL _hasCompilations;
	BOOL _determinedHasCompilations;
	BOOL _hasITunesU;
	BOOL _determinedHasITunesU;
	BOOL _hasVideoITunesU;
	BOOL _determinedHasVideoITunesU;
	BOOL _hasMovieRentals;
	BOOL _determinedHasMovieRentals;
	BOOL _hasTVShows;
	BOOL _determinedHasTVShows;
	BOOL _hasHomeVideos;
	BOOL _determinedHasHomeVideos;
	BOOL _hasVideoPodcasts;
	BOOL _determinedHasVideoPodcasts;
	unsigned char _originalCellNetworkFlags;
	unsigned char _originalWiFiNetworkFlags;
	os_unfair_lock_s __MLCoreStorageLock;
	id __MLCoreStorage;
	ICUserIdentity* _userIdentity;
	long long _libraryChangeObservers;
	_MPActiveUserChangeMonitor* _activeUserChangeMonitor;
	os_unfair_lock_s* __MLCoreStorageLockPointer;

}

@property (nonatomic,readonly) shared_ptr<mlcore::DeviceLibrary>* _MediaLibrary_coreLibrary; 
@property (nonatomic,readonly) NSURL * protectedContentSupportStorageURL; 
@property (nonatomic,readonly) NSString * _syncValidity; 
@property (nonatomic,copy) NSNumber * sagaAccountID; 
@property (nonatomic,copy) NSDate * sagaLastItemPlayDataUploadDate; 
@property (nonatomic,copy) NSDate * sagaLastPlaylistPlayDataUploadDate; 
@property (assign,nonatomic) long long sagaDatabaseUserVersion; 
@property (nonatomic,copy) NSString * storefrontIdentifier; 
@property (nonatomic,copy) NSDate * sagaLastLibraryUpdateTime; 
@property (nonatomic,copy) NSDate * sagaLastSubscribedContainersUpdateTime; 
@property (assign,nonatomic) long long sagaOnDiskDatabaseRevision; 
@property (nonatomic,readonly) long long libraryChangeObservers;                                          //@synthesize libraryChangeObservers=_libraryChangeObservers - In the implementation block
@property (assign,nonatomic) long long removalReason; 
@property (nonatomic,readonly) os_unfair_lock_s _MLCoreStorageLock;                                       //@synthesize _MLCoreStorageLock=__MLCoreStorageLock - In the implementation block
@property (nonatomic,retain) _MPActiveUserChangeMonitor * activeUserChangeMonitor;                        //@synthesize activeUserChangeMonitor=_activeUserChangeMonitor - In the implementation block
@property (setter=_setMLCoreStorage:,nonatomic,retain) id _MLCoreStorage;                                 //@synthesize _MLCoreStorage=__MLCoreStorage - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s* _MLCoreStorageLockPointer;                               //@synthesize _MLCoreStorageLockPointer=__MLCoreStorageLockPointer - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * ml3Library; 
@property (nonatomic,copy,readonly) ICUserIdentity * userIdentity;                                        //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(long long)authorizationStatus;
+(id)defaultMediaLibrary;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(void)setRunLoopForNotifications:(id)arg1 ;
+(id)deviceMediaLibrary;
+(void)_endDiscoveringMediaLibrariesIfAllowed;
+(id)_mediaLibraries;
+(id)_deviceMediaLibraryWithUserIdentity:(id)arg1 createIfRequired:(BOOL)arg2 ;
+(void)_postNotificationName:(id)arg1 library:(id)arg2 ;
+(void)_postNotificationName:(id)arg1 library:(id)arg2 userInfo:(id)arg3 ;
+(id)mediaLibraryWithUniqueIdentifier:(id)arg1 ;
+(void)setDefaultMediaLibrary:(id)arg1 ;
+(id)deviceMediaLibraryWithUserIdentity:(id)arg1 ;
+(void)beginDiscoveringMediaLibraries;
+(void)endDiscoveringMediaLibraries;
+(void)validatePermissionsExpiryWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)isLibraryServerDisabled;
+(void)setLibraryServerDisabled:(BOOL)arg1 ;
+(id)mediaLibraries;
+(id)sharedMediaLibraries;
+(id)_libraryForDataProvider:(id)arg1 ;
+(id)_libraryDataProviders;
+(id)libraryDataProviders;
+(void)addLibraryDataProvider:(id)arg1 ;
+(void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2 ;
+(void)reloadLibraryDataProvider:(id)arg1 ;
+(void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1 ;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)arg1 ;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1 ;
+(void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1 ;
+(void)libraryPathDidChangeForDataProvider:(id)arg1 ;
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(long long)status;
-(void)disconnect;
-(id)databasePath;
-(BOOL)writable;
-(NSDate *)lastModifiedDate;
-(BOOL)requiresAuthentication;
-(id)artworkDataSource;
-(void)_disconnect;
-(BOOL)removeItems:(id)arg1 ;
-(id)_initWithUserIdentity:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isValidAssetURL:(id)arg1 ;
-(id)pathForAssetURL:(id)arg1 ;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(BOOL)isCurrentThreadInTransaction;
-(BOOL)isHomeSharingLibrary;
-(unsigned long long)syncGenerationID;
-(id)localizedSectionIndexTitles;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(BOOL)hasUserPlaylists;
-(BOOL)hasAddedToLibraryAppleMusicContent;
-(BOOL)hasUserPlaylistsContainingAppleMusicContent;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(NSNumber *)sagaAccountID;
-(void)setSagaAccountID:(NSNumber *)arg1 ;
-(NSDate *)sagaLastItemPlayDataUploadDate;
-(void)setSagaLastItemPlayDataUploadDate:(NSDate *)arg1 ;
-(NSDate *)sagaLastPlaylistPlayDataUploadDate;
-(void)setSagaLastPlaylistPlayDataUploadDate:(NSDate *)arg1 ;
-(long long)sagaDatabaseUserVersion;
-(void)setSagaDatabaseUserVersion:(long long)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(long long)sagaOnDiskDatabaseRevision;
-(void)setSagaOnDiskDatabaseRevision:(long long)arg1 ;
-(NSDate *)sagaLastLibraryUpdateTime;
-(void)setSagaLastLibraryUpdateTime:(NSDate *)arg1 ;
-(NSDate *)sagaLastSubscribedContainersUpdateTime;
-(void)setSagaLastSubscribedContainersUpdateTime:(NSDate *)arg1 ;
-(void)clearSagaCloudAccountID;
-(void)clearSagaLastItemPlayDataUploadDate;
-(void)clearSagaLastPlaylistPlayDataUploadDate;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(id)errorResolverForItem:(id)arg1 ;
-(NSURL *)protectedContentSupportStorageURL;
-(shared_ptr<mlcore::DeviceLibrary>*)_MediaLibrary_coreLibrary;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)activeUserChangeDidFinish;
-(void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1 ;
-(void)_clearCachedContentDataAndResultSets:(BOOL)arg1 ;
-(void)_scheduleLibraryChangeNotificationPostingBlock:(/*^block*/id)arg1 ;
-(void)_reloadLibraryForRestrictionsChange;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1 ;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)_reloadLibraryForPathChange;
-(void)_activeUserDidChangeNotification:(id)arg1 ;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)_displayValuesDidChangeNotification:(id)arg1 ;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)endGeneratingLibraryChangeNotifications;
-(unsigned long long)currentEntityRevision;
-(long long)playlistGeneration;
-(BOOL)isDeviceLibrary;
-(id)additionalLibraryFilterPredicates;
-(void)addLibraryFilterPredicate:(id)arg1 ;
-(void)removeLibraryFilterPredicate:(id)arg1 ;
-(long long)removalReason;
-(void)setRemovalReason:(long long)arg1 ;
-(BOOL)hasMediaOfType:(unsigned long long)arg1 ;
-(BOOL)hasMedia;
-(BOOL)hasGeniusMixes;
-(BOOL)hasPlaylists;
-(BOOL)hasArtists;
-(BOOL)hasAlbums;
-(BOOL)hasSongs;
-(BOOL)hasPodcasts;
-(BOOL)hasUbiquitousBookmarkableItems;
-(BOOL)hasGenres;
-(BOOL)hasComposers;
-(BOOL)hasAudiobooks;
-(BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 queryHasEntitiesBlock:(/*^block*/id)arg3 ;
-(BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(/*^block*/id)arg4 ;
-(BOOL)hasVideos;
-(BOOL)hasMusicVideos;
-(BOOL)hasAudibleAudioBooks;
-(BOOL)hasMovies;
-(BOOL)hasCompilations;
-(BOOL)hasITunesUContent;
-(BOOL)hasAudioITunesUContent;
-(BOOL)hasVideoITunesUContent;
-(BOOL)hasMovieRentals;
-(BOOL)hasTVShows;
-(BOOL)hasHomeVideos;
-(BOOL)hasVideoPodcasts;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(BOOL)arg3 ;
-(id)itemWithPersistentID:(unsigned long long)arg1 ;
-(id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2 ;
-(id)itemWithStoreID:(unsigned long long)arg1 ;
-(id)decodeItemWithCoder:(id)arg1 ;
-(id)newPlaylistWithPersistentID:(unsigned long long)arg1 ;
-(id)playbackHistoryPlaylist;
-(id)playlistWithPersistentID:(unsigned long long)arg1 ;
-(id)addPlaylistWithName:(id)arg1 ;
-(id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2 ;
-(void)setSyncPlaylistId:(unsigned long long)arg1 ;
-(unsigned long long)syncPlaylistId;
-(unsigned)homeSharingDatabaseID;
-(id)URLForHomeSharingRequest:(id)arg1 ;
-(BOOL)deleteItems:(id)arg1 ;
-(BOOL)removePlaylist:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 ;
-(void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)clearLocationPropertiesOfItem:(id)arg1 ;
-(void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3 ;
-(void)geniusItemsForSeedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isGeniusEnabled;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)connectionAssertionWithIdentifier:(id)arg1 ;
-(float)connectionProgress;
-(id)syncValidity;
-(id)entityCache;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 ;
-(id)entityWithMultiverseIdentifier:(id)arg1 ;
-(id)entityWithLibraryURL:(id)arg1 ;
-(id)entityWithSpotlightIdentifier:(id)arg1 ;
-(id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2 ;
-(unsigned long long)_persistentIDForAssetURL:(id)arg1 ;
-(BOOL)_handlesSameAccountAs:(id)arg1 ;
-(void)_performBlockOnLibraryHandlingTheSameAccount:(/*^block*/id)arg1 ;
-(BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4 ;
-(BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)_itemsForQueryCriteria:(id)arg1 ;
-(id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(/*^block*/id)arg5 loadValueFromDataProviderBlock:(/*^block*/id)arg6 ;
-(BOOL)_hasItemsForQueryCriteria:(id)arg1 ;
-(BOOL)_hasCollectionsForQueryCriteria:(id)arg1 ;
-(unsigned long long)_countOfItemsForQueryCriteria:(id)arg1 ;
-(unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1 ;
-(id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(void)_clearPendingDisconnection;
-(void)setCloudFilteringType:(long long)arg1 ;
-(long long)cloudFilteringType;
-(void)_setLibraryFilterPredicates;
-(id)_collectionsForQueryCriteria:(id)arg1 ;
-(void)_removeConnectionAssertion:(id)arg1 ;
-(ML3MusicLibrary *)ml3Library;
-(long long)libraryChangeObservers;
-(id)_initWithLibraryDataProvider:(id)arg1 ;
-(id)libraryDataProvider;
-(void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addStoreItemIDs:(id)arg1 referralObject:(id)arg2 andAddTracksToCloudLibrary:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1 ;
-(id)_MLCoreStorage;
-(void)_setMLCoreStorage:(id)arg1 ;
-(os_unfair_lock_s)_MLCoreStorageLock;
-(_MPActiveUserChangeMonitor *)activeUserChangeMonitor;
-(void)setActiveUserChangeMonitor:(_MPActiveUserChangeMonitor *)arg1 ;
-(os_unfair_lock_s*)_MLCoreStorageLockPointer;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)_syncValidity;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 ;
@end

