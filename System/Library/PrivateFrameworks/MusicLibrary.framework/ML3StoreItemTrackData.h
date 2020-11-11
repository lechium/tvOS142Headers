/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {

	NSArray* _lookupItems;
	NSData* _trackData;
	NSArray* _parsedStoreItemsImportProperties;
	NSDateFormatter* _storePlatformDateFormatter;

}

@property (nonatomic,readonly) NSData * trackData; 
@property (nonatomic,readonly) NSArray * parsedStoreItemsImportProperties; 
@property (nonatomic,readonly) unsigned long long trackCount; 
-(NSData *)trackData;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2 ;
-(id)initWithLookupItems:(id)arg1 ;
-(NSArray *)parsedStoreItemsImportProperties;
-(id)_storeItemsImportPropertiesFromLookupItems:(id)arg1 ;
-(id)_storeItemsImportPropertiesFromTrackData:(id)arg1 ;
-(id)_allSongItemsFromLookupItems:(id)arg1 ;
-(id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2 ;
-(BOOL)_platformMetadataItemIsMusicKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsAUCKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsVideoKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsMusicVideoKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsAUCVideoKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsTVShowKind:(id)arg1 ;
-(BOOL)_platformMetadataItemIsMovieKind:(id)arg1 ;
-(id)_parentDictForItemAlbumId:(id)arg1 ;
-(long long)_episodeTypeFromVideoSubTypeString:(id)arg1 ;
-(id)_lookupItemArtworksForArtworkDictionaries:(id)arg1 ;
-(id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_storePlatformDateFormatter;
-(double)_songDurationFromOffersArray:(id)arg1 ;
-(id)_artworkTokenForItemWithCollectionID:(long long)arg1 itemID:(long long)arg2 ;
-(id)_allSongItemsFromCollectionLookupItem:(id)arg1 ;
-(BOOL)_platformMetadataItemIsSongKind:(id)arg1 ;
-(BOOL)_platformMetadataItem:(id)arg1 matchesKind:(id)arg2 ;
-(BOOL)_platformMetadataItemIsAUCAudioKind:(id)arg1 ;
-(id)initWithTrackData:(id)arg1 ;
-(unsigned long long)trackCount;
-(id)_artworkTokenFromLookupItem:(id)arg1 ;
@end

