/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBWatchListItem.h>
@class NSString, NSData;


@protocol _SFPBWatchListItem <NSObject>
@property (nonatomic,copy) NSString * watchListIdentifier; 
@property (nonatomic,copy) NSString * seasonEpisodeTextFormat; 
@property (nonatomic,copy) NSString * continueInTextFormat; 
@property (nonatomic,copy) NSString * openButtonTitle; 
@property (nonatomic,copy) NSString * installButtonTitle; 
@property (nonatomic,copy) NSString * purchaseOfferTextFormat; 
@property (nonatomic,copy) NSString * inUpNextText; 
@property (nonatomic,copy) NSString * addToUpNextText; 
@property (nonatomic,copy) NSString * addedToUpNextText; 
@property (nonatomic,copy) NSString * watchLiveTextFormat; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(id)arg1;
-(NSString *)seasonEpisodeTextFormat;
-(void)setSeasonEpisodeTextFormat:(id)arg1;
-(NSString *)continueInTextFormat;
-(void)setContinueInTextFormat:(id)arg1;
-(NSString *)openButtonTitle;
-(void)setOpenButtonTitle:(id)arg1;
-(NSString *)installButtonTitle;
-(void)setInstallButtonTitle:(id)arg1;
-(NSString *)purchaseOfferTextFormat;
-(void)setPurchaseOfferTextFormat:(id)arg1;
-(NSString *)inUpNextText;
-(void)setInUpNextText:(id)arg1;
-(NSString *)addToUpNextText;
-(void)setAddToUpNextText:(id)arg1;
-(NSString *)addedToUpNextText;
-(void)setAddedToUpNextText:(id)arg1;
-(NSString *)watchLiveTextFormat;
-(void)setWatchLiveTextFormat:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding> {

	NSString* _watchListIdentifier;
	NSString* _seasonEpisodeTextFormat;
	NSString* _continueInTextFormat;
	NSString* _openButtonTitle;
	NSString* _installButtonTitle;
	NSString* _purchaseOfferTextFormat;
	NSString* _inUpNextText;
	NSString* _addToUpNextText;
	NSString* _addedToUpNextText;
	NSString* _watchLiveTextFormat;

}

@property (nonatomic,copy) NSString * watchListIdentifier;                  //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,copy) NSString * seasonEpisodeTextFormat;              //@synthesize seasonEpisodeTextFormat=_seasonEpisodeTextFormat - In the implementation block
@property (nonatomic,copy) NSString * continueInTextFormat;                 //@synthesize continueInTextFormat=_continueInTextFormat - In the implementation block
@property (nonatomic,copy) NSString * openButtonTitle;                      //@synthesize openButtonTitle=_openButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * installButtonTitle;                   //@synthesize installButtonTitle=_installButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * purchaseOfferTextFormat;              //@synthesize purchaseOfferTextFormat=_purchaseOfferTextFormat - In the implementation block
@property (nonatomic,copy) NSString * inUpNextText;                         //@synthesize inUpNextText=_inUpNextText - In the implementation block
@property (nonatomic,copy) NSString * addToUpNextText;                      //@synthesize addToUpNextText=_addToUpNextText - In the implementation block
@property (nonatomic,copy) NSString * addedToUpNextText;                    //@synthesize addedToUpNextText=_addedToUpNextText - In the implementation block
@property (nonatomic,copy) NSString * watchLiveTextFormat;                  //@synthesize watchLiveTextFormat=_watchLiveTextFormat - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(NSString *)seasonEpisodeTextFormat;
-(void)setSeasonEpisodeTextFormat:(NSString *)arg1 ;
-(NSString *)continueInTextFormat;
-(void)setContinueInTextFormat:(NSString *)arg1 ;
-(NSString *)openButtonTitle;
-(void)setOpenButtonTitle:(NSString *)arg1 ;
-(NSString *)installButtonTitle;
-(void)setInstallButtonTitle:(NSString *)arg1 ;
-(NSString *)purchaseOfferTextFormat;
-(void)setPurchaseOfferTextFormat:(NSString *)arg1 ;
-(NSString *)inUpNextText;
-(void)setInUpNextText:(NSString *)arg1 ;
-(NSString *)addToUpNextText;
-(void)setAddToUpNextText:(NSString *)arg1 ;
-(NSString *)addedToUpNextText;
-(void)setAddedToUpNextText:(NSString *)arg1 ;
-(NSString *)watchLiveTextFormat;
-(void)setWatchLiveTextFormat:(NSString *)arg1 ;
@end

