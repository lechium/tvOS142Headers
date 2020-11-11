/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface VUITVShowDetailPageViewModel : NSObject {

	NSArray* _seasonIdentifiers;
	NSDictionary* _episodeShelfViewControllerBySeasonIdentifier;
	NSDictionary* _episodesBySeasonIdentifer;

}

@property (nonatomic,retain) NSArray * seasonIdentifiers;                                              //@synthesize seasonIdentifiers=_seasonIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * episodeShelfViewControllerBySeasonIdentifier;              //@synthesize episodeShelfViewControllerBySeasonIdentifier=_episodeShelfViewControllerBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * episodesBySeasonIdentifer;                                 //@synthesize episodesBySeasonIdentifer=_episodesBySeasonIdentifer - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
-(BOOL)hasContent;
-(NSDictionary *)episodeShelfViewControllerBySeasonIdentifier;
-(NSArray *)seasonIdentifiers;
-(NSDictionary *)episodesBySeasonIdentifer;
-(void)setSeasonIdentifiers:(NSArray *)arg1 ;
-(void)setEpisodeShelfViewControllerBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setEpisodesBySeasonIdentifer:(NSDictionary *)arg1 ;
@end

