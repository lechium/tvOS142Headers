/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject {

	NSArray* _lookupItems;
	NSData* _playlistData;
	NSArray* _parsedPlaylistsImportProperties;

}

@property (nonatomic,readonly) NSData * playlistsData; 
@property (nonatomic,readonly) NSArray * parsedStorePlaylistsImportProperties; 
@property (nonatomic,readonly) unsigned long long playlistCount; 
-(NSArray *)parsedStorePlaylistsImportProperties;
-(id)_playlistPropertiesForLookupItems:(id)arg1 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1 ;
-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2 ;
-(id)initWithLookupItems:(id)arg1 ;
-(id)initWithPlaylistsData:(id)arg1 ;
-(NSData *)playlistsData;
-(unsigned long long)playlistCount;
@end

