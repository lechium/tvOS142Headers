/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSDate *)expirationDate;
-(id)bundleIdentifier;
-(id)valueForProperty:(id)arg1 ;
-(void)_setExpirationDate:(id)arg1 ;
-(id)shortDescription;
-(BOOL)isRestricted;
-(id)bundleVersion;
-(id)collectionIdentifier;
-(id)contentRating;
-(id)_offers;
-(NSString *)artistName;
-(id)releaseDate;
-(void)requestDidFinish:(id)arg1 ;
-(id)podcastFeedURL;
-(NSString *)itemTitle;
-(SSItemOffer *)defaultItemOffer;
-(NSNumber *)ITunesStoreIdentifier;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)collectionName;
-(BOOL)isCompilation;
-(id)composerName;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreName;
-(id)genreIdentifier;
-(id)indexInCollection;
-(id)longDescription;
-(id)networkName;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)seasonNumber;
-(id)seriesName;
-(id)videoDetails;
-(NSString *)itemKind;
-(id)softwareType;
-(BOOL)isHighDefinition;
-(id)playableMedia;
-(SSItemImageCollection *)imageCollection;
-(id)releaseDateString;
-(id)initWithItemDictionary:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(id)buyParameters;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)tellAFriendBody;
-(id)_tellAFriendDictionary;
-(id)priceDisplay;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(float)averageUserRating;
-(BOOL)isGameCenterEnabled;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(long long)numberOfUserRatings;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(NSArray *)thumbnailImages;
-(id)tweetInitialText;
-(id)tweetURL;
-(NSURL *)viewItemURL;
-(id)mediaKind;
-(id)sendGiftURL;
-(id)viewReviewsURL;
@end

