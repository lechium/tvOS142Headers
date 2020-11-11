/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, VUIMediaEntityType, NSNumber, NSDate, _TVContentRating, VUIFamilySharingRelationships, WLKOfferListing;

@interface VUIFamilySharingEntity : NSObject {

	NSString* _identifier;
	VUIMediaEntityType* _type;
	NSString* _title;
	NSString* _showTitle;
	NSString* _genreTitle;
	NSString* _artworkURL;
	NSString* _iTunesExtrasUrl;
	NSString* _previewArtworkURL;
	NSString* _standardDescription;
	NSNumber* _seasonNumber;
	NSNumber* _episodeNumber;
	NSDate* _releaseDate;
	_TVContentRating* _contentRating;
	VUIFamilySharingRelationships* _relationships;
	WLKOfferListing* _offerListing;
	WLKOfferListing* _personalizedOfferListing;

}

@property (nonatomic,retain) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) VUIMediaEntityType * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * showTitle;                                       //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,retain) NSString * genreTitle;                                      //@synthesize genreTitle=_genreTitle - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                                      //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * iTunesExtrasUrl;                                 //@synthesize iTunesExtrasUrl=_iTunesExtrasUrl - In the implementation block
@property (nonatomic,retain) NSString * previewArtworkURL;                               //@synthesize previewArtworkURL=_previewArtworkURL - In the implementation block
@property (nonatomic,retain) NSString * standardDescription;                             //@synthesize standardDescription=_standardDescription - In the implementation block
@property (nonatomic,retain) NSNumber * seasonNumber;                                    //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,retain) NSNumber * episodeNumber;                                   //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                       //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) _TVContentRating * contentRating;                           //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationships * relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,retain) WLKOfferListing * offerListing;                             //@synthesize offerListing=_offerListing - In the implementation block
@property (nonatomic,retain) WLKOfferListing * personalizedOfferListing;                 //@synthesize personalizedOfferListing=_personalizedOfferListing - In the implementation block
-(void)setType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(void)setContentRating:(_TVContentRating *)arg1 ;
-(_TVContentRating *)contentRating;
-(VUIFamilySharingRelationships *)relationships;
-(void)setRelationships:(VUIFamilySharingRelationships *)arg1 ;
-(NSString *)showTitle;
-(void)setShowTitle:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSNumber *)seasonNumber;
-(void)setSeasonNumber:(NSNumber *)arg1 ;
-(NSNumber *)episodeNumber;
-(void)setEpisodeNumber:(NSNumber *)arg1 ;
-(NSString *)genreTitle;
-(WLKOfferListing *)offerListing;
-(void)setPreviewArtworkURL:(NSString *)arg1 ;
-(void)setOfferListing:(WLKOfferListing *)arg1 ;
-(void)setStandardDescription:(NSString *)arg1 ;
-(void)setGenreTitle:(NSString *)arg1 ;
-(void)setPersonalizedOfferListing:(WLKOfferListing *)arg1 ;
-(void)setITunesExtrasUrl:(NSString *)arg1 ;
-(NSString *)iTunesExtrasUrl;
-(NSString *)previewArtworkURL;
-(NSString *)standardDescription;
-(WLKOfferListing *)personalizedOfferListing;
@end

