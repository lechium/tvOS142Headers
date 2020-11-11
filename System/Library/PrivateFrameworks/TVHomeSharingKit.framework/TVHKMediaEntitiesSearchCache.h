/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHKMediaServerIdentifier, NSArray, NSMutableDictionary;

@interface TVHKMediaEntitiesSearchCache : NSObject <NSCopying> {

	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	unsigned long long _revision;
	NSArray* _movies;
	NSArray* _movieRentals;
	NSArray* _shows;
	NSArray* _showEpisodes;
	NSArray* _musicAlbums;
	NSArray* _musicAlbumArtists;
	NSArray* _musicSongs;
	NSArray* _musicVideos;
	NSArray* _musicItems;
	NSArray* _podcasts;
	NSArray* _podcastEpisodes;
	NSArray* _iTunesUCourses;
	NSArray* _iTunesUEpisodes;
	NSArray* _audiobooks;
	NSArray* _audiobookChapters;
	NSArray* _homeVideos;
	NSMutableDictionary* _mediaItemByNonPersistentID;
	NSMutableDictionary* _albumByNonPersistentID;
	NSMutableDictionary* _albumArtistByNonPersistentID;
	NSArray* _mediaItems;
	NSArray* _albums;
	NSArray* _albumArtists;

}

@property (nonatomic,copy) TVHKMediaServerIdentifier * mediaServerIdentifier;                 //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long revision;                                     //@synthesize revision=_revision - In the implementation block
@property (nonatomic,retain) NSArray * movies;                                                //@synthesize movies=_movies - In the implementation block
@property (nonatomic,retain) NSArray * movieRentals;                                          //@synthesize movieRentals=_movieRentals - In the implementation block
@property (nonatomic,retain) NSArray * shows;                                                 //@synthesize shows=_shows - In the implementation block
@property (nonatomic,retain) NSArray * showEpisodes;                                          //@synthesize showEpisodes=_showEpisodes - In the implementation block
@property (nonatomic,retain) NSArray * musicAlbums;                                           //@synthesize musicAlbums=_musicAlbums - In the implementation block
@property (nonatomic,retain) NSArray * musicAlbumArtists;                                     //@synthesize musicAlbumArtists=_musicAlbumArtists - In the implementation block
@property (nonatomic,retain) NSArray * musicSongs;                                            //@synthesize musicSongs=_musicSongs - In the implementation block
@property (nonatomic,retain) NSArray * musicVideos;                                           //@synthesize musicVideos=_musicVideos - In the implementation block
@property (nonatomic,retain) NSArray * musicItems;                                            //@synthesize musicItems=_musicItems - In the implementation block
@property (nonatomic,retain) NSArray * podcasts;                                              //@synthesize podcasts=_podcasts - In the implementation block
@property (nonatomic,retain) NSArray * podcastEpisodes;                                       //@synthesize podcastEpisodes=_podcastEpisodes - In the implementation block
@property (nonatomic,retain) NSArray * iTunesUCourses;                                        //@synthesize iTunesUCourses=_iTunesUCourses - In the implementation block
@property (nonatomic,retain) NSArray * iTunesUEpisodes;                                       //@synthesize iTunesUEpisodes=_iTunesUEpisodes - In the implementation block
@property (nonatomic,retain) NSArray * audiobooks;                                            //@synthesize audiobooks=_audiobooks - In the implementation block
@property (nonatomic,retain) NSArray * audiobookChapters;                                     //@synthesize audiobookChapters=_audiobookChapters - In the implementation block
@property (nonatomic,retain) NSArray * homeVideos;                                            //@synthesize homeVideos=_homeVideos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaItemByNonPersistentID;                //@synthesize mediaItemByNonPersistentID=_mediaItemByNonPersistentID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * albumByNonPersistentID;                    //@synthesize albumByNonPersistentID=_albumByNonPersistentID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * albumArtistByNonPersistentID;              //@synthesize albumArtistByNonPersistentID=_albumArtistByNonPersistentID - In the implementation block
@property (nonatomic,copy) NSArray * mediaItems;                                              //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,copy) NSArray * albums;                                                  //@synthesize albums=_albums - In the implementation block
@property (nonatomic,copy) NSArray * albumArtists;                                            //@synthesize albumArtists=_albumArtists - In the implementation block
+(id)new;
+(BOOL)_updateMediaEntitiesDictionary:(id)arg1 withMediaEntityFetchResponse:(id)arg2 ;
+(id)_nonPersistentIDsFromMediaEntityIdentifiers:(id)arg1 ;
+(id)_nonPersistentIDFromMediaEntityIdentifier:(id)arg1 ;
+(id)_mediaEntityTypePredicateWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
+(id)_sortedMediaEntitiesWithMediaEntities:(id)arg1 ;
+(id)_mediaEntityTypePredicateWithMediaEntityCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
+(id)_mediaEntityTypePredicateWithMediaEntityCollectionType:(unsigned long long)arg1 mediaItemType:(unsigned long long)arg2 mediaCategoryType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)reset;
-(void)setRevision:(unsigned long long)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(unsigned long long)revision;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(NSArray *)albums;
-(void)setAlbums:(NSArray *)arg1 ;
-(NSArray *)shows;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHKMediaServerIdentifier *)arg1 ;
-(NSArray *)movieRentals;
-(NSArray *)showEpisodes;
-(NSArray *)musicVideos;
-(NSArray *)musicSongs;
-(NSArray *)musicAlbums;
-(NSArray *)musicAlbumArtists;
-(NSArray *)podcasts;
-(NSArray *)podcastEpisodes;
-(NSArray *)iTunesUCourses;
-(NSArray *)iTunesUEpisodes;
-(NSArray *)audiobooks;
-(NSArray *)audiobookChapters;
-(NSArray *)homeVideos;
-(void)_updateMediaItemsWithMediaItemsResponse:(id)arg1 ;
-(void)_updateAlbumsWithAlbumsResponse:(id)arg1 ;
-(void)_updateAlbumArtistsWithAlbumArtistResponse:(id)arg1 ;
-(NSMutableDictionary *)mediaItemByNonPersistentID;
-(NSMutableDictionary *)albumByNonPersistentID;
-(NSMutableDictionary *)albumArtistByNonPersistentID;
-(void)_clearCachedAlbumArrays;
-(void)_clearCachedAlbumArtistArrays;
-(void)_clearCachedMediaItemArrays;
-(id)_mediaItemsWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(id)_albumsWithMediaCategoryType:(unsigned long long)arg1 ;
-(id)_albumArtistsWithMediaCategoryType:(unsigned long long)arg1 ;
-(id)initWithMediaServerIdentifier:(id)arg1 ;
-(void)setAlbumArtists:(NSArray *)arg1 ;
-(void)setMusicAlbumArtists:(NSArray *)arg1 ;
-(void)setMusicAlbums:(NSArray *)arg1 ;
-(void)setPodcasts:(NSArray *)arg1 ;
-(void)setITunesUCourses:(NSArray *)arg1 ;
-(void)setAudiobooks:(NSArray *)arg1 ;
-(void)setMovieRentals:(NSArray *)arg1 ;
-(void)setMusicItems:(NSArray *)arg1 ;
-(void)setMusicSongs:(NSArray *)arg1 ;
-(void)setMusicVideos:(NSArray *)arg1 ;
-(void)setPodcastEpisodes:(NSArray *)arg1 ;
-(void)setShows:(NSArray *)arg1 ;
-(void)setShowEpisodes:(NSArray *)arg1 ;
-(void)setAudiobookChapters:(NSArray *)arg1 ;
-(void)setITunesUEpisodes:(NSArray *)arg1 ;
-(NSArray *)albumArtists;
-(void)updateWithSearchFetchResponse:(id)arg1 ;
-(NSArray *)musicItems;
-(void)setHomeVideos:(NSArray *)arg1 ;
-(void)setMediaItemByNonPersistentID:(NSMutableDictionary *)arg1 ;
-(void)setAlbumByNonPersistentID:(NSMutableDictionary *)arg1 ;
-(void)setAlbumArtistByNonPersistentID:(NSMutableDictionary *)arg1 ;
@end
