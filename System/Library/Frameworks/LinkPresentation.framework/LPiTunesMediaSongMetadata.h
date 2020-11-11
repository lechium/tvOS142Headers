/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPLinkMetadataStoreTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataStatusTransformer.h>

@class NSString, LPImage, LPArtworkMetadata, NSURL, NSArray;

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer, LPLinkMetadataStatusTransformer> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _artist;
	NSString* _album;
	NSString* _lyrics;
	LPImage* _artwork;
	LPArtworkMetadata* _artworkMetadata;
	NSURL* _previewURL;
	NSArray* _offers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                 //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * lyrics;                                //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,retain) LPImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) LPArtworkMetadata * artworkMetadata;              //@synthesize artworkMetadata=_artworkMetadata - In the implementation block
@property (nonatomic,copy) NSURL * previewURL;                               //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                 //@synthesize offers=_offers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(LPImage *)artwork;
-(void)setArtwork:(LPImage *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setLyrics:(NSString *)arg1 ;
-(NSString *)lyrics;
-(NSURL *)previewURL;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(LPArtworkMetadata *)artworkMetadata;
-(void)setArtworkMetadata:(LPArtworkMetadata *)arg1 ;
-(void)initializeForTransformer:(id)arg1 ;
-(void)destroyForTransformer:(id)arg1 ;
-(id)statusForTransformer:(id)arg1 ;
-(id)actionURLForTransformer:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(id)inlinePlaybackInformationForURL:(id)arg1 ;
-(id)storeIdentifierForTransformer:(id)arg1 ;
@end

