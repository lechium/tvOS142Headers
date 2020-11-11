/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaEntitiesDataSource.h>

@class NSNumber, NSString, VUIMediaAPIClient, NSURLRequest, VUIMediaAPIResponseMetadata, NSMutableArray;

@interface VUIFamilySharingMediaEntitiesDataSource : VUIMediaEntitiesDataSource {

	BOOL _shouldCoalesceEpisodesToShows;
	BOOL _shouldCoalesceEpisodesToSeasons;
	BOOL _shouldGroupBySeason;
	BOOL _orderEpisodesByEpisodeNumber;
	BOOL _loadingNextBatch;
	BOOL _fetchAllEntities;
	NSNumber* _resultLimit;
	NSString* _seasonIdentifierFilter;
	VUIMediaAPIClient* _mediaClient;
	NSURLRequest* _urlRequest;
	VUIMediaAPIResponseMetadata* _responseMetadata;
	NSNumber* _desiredBatchSize;
	NSMutableArray* _processedEntities;
	unsigned long long _numberOfEntitiesProcessedInBatch;

}

@property (nonatomic,retain) VUIMediaAPIClient * mediaClient;                                  //@synthesize mediaClient=_mediaClient - In the implementation block
@property (nonatomic,retain) NSURLRequest * urlRequest;                                        //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) VUIMediaAPIResponseMetadata * responseMetadata;                   //@synthesize responseMetadata=_responseMetadata - In the implementation block
@property (nonatomic,retain) NSNumber * desiredBatchSize;                                      //@synthesize desiredBatchSize=_desiredBatchSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedEntities;                               //@synthesize processedEntities=_processedEntities - In the implementation block
@property (assign,nonatomic) BOOL loadingNextBatch;                                            //@synthesize loadingNextBatch=_loadingNextBatch - In the implementation block
@property (assign,nonatomic) BOOL fetchAllEntities;                                            //@synthesize fetchAllEntities=_fetchAllEntities - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfEntitiesProcessedInBatch;              //@synthesize numberOfEntitiesProcessedInBatch=_numberOfEntitiesProcessedInBatch - In the implementation block
@property (nonatomic,retain) NSNumber * resultLimit;                                           //@synthesize resultLimit=_resultLimit - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceEpisodesToShows;                               //@synthesize shouldCoalesceEpisodesToShows=_shouldCoalesceEpisodesToShows - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceEpisodesToSeasons;                             //@synthesize shouldCoalesceEpisodesToSeasons=_shouldCoalesceEpisodesToSeasons - In the implementation block
@property (assign,nonatomic) BOOL shouldGroupBySeason;                                         //@synthesize shouldGroupBySeason=_shouldGroupBySeason - In the implementation block
@property (assign,nonatomic) BOOL orderEpisodesByEpisodeNumber;                                //@synthesize orderEpisodesByEpisodeNumber=_orderEpisodesByEpisodeNumber - In the implementation block
@property (nonatomic,retain) NSString * seasonIdentifierFilter;                                //@synthesize seasonIdentifierFilter=_seasonIdentifierFilter - In the implementation block
-(NSNumber *)resultLimit;
-(void)setResultLimit:(NSNumber *)arg1 ;
-(NSURLRequest *)urlRequest;
-(void)setUrlRequest:(NSURLRequest *)arg1 ;
-(id)initWithNSURLRequest:(id)arg1 ;
-(void)setShouldCoalesceEpisodesToSeasons:(BOOL)arg1 ;
-(void)setShouldGroupBySeason:(BOOL)arg1 ;
-(void)setOrderEpisodesByEpisodeNumber:(BOOL)arg1 ;
-(void)setSeasonIdentifierFilter:(NSString *)arg1 ;
-(void)setShouldCoalesceEpisodesToShows:(BOOL)arg1 ;
-(void)startFetch;
-(id)_getLimitFromURLRequest;
-(VUIMediaAPIClient *)mediaClient;
-(void)setResponseMetadata:(VUIMediaAPIResponseMetadata *)arg1 ;
-(BOOL)shouldGroupBySeason;
-(void)_groupEpisodesbySeason:(id)arg1 ;
-(void)_orderEpisodesInGroupings;
-(BOOL)shouldCoalesceEpisodesToShows;
-(void)_coalesceEpisodesToShowsFromParsedEntities:(id)arg1 ;
-(BOOL)shouldCoalesceEpisodesToSeasons;
-(void)_coalesceEpisodesToSeasonsFromParsedEntities:(id)arg1 ;
-(void)_orderSeasonsBySeasonNumber;
-(void)setProcessedEntities:(NSMutableArray *)arg1 ;
-(NSMutableArray *)processedEntities;
-(unsigned long long)numberOfEntitiesProcessedInBatch;
-(void)setNumberOfEntitiesProcessedInBatch:(unsigned long long)arg1 ;
-(BOOL)loadingNextBatch;
-(void)setLoadingNextBatch:(BOOL)arg1 ;
-(void)_applyContentRestrictionsFilter;
-(void)_filterEntitiesBySeasonIdentifierIfNecessary;
-(void)_filterGroupingsBySeasonIdentifierIfNecessary;
-(void)_orderEpisodesIfNecessary;
-(void)_limitEntitiesReturnedIfNecessary;
-(NSNumber *)desiredBatchSize;
-(BOOL)fetchAllEntities;
-(BOOL)_hasNextBatch;
-(void)loadNextEntityBatch;
-(void)_appendNextOffsetToURLRequest;
-(BOOL)_processedEntitiesContainsEntityWithIdentifier:(id)arg1 ;
-(id)_mediaCollectionWithAMSMediaItem:(id)arg1 ;
-(id)_getEntityInProcessedEntitiesWithIdentifier:(id)arg1 ;
-(id)_addSeasonNumber:(id)arg1 toCollectionSeasonNumbers:(id)arg2 ;
-(id)_getGroupingFrom:(id)arg1 groupingIdentifier:(id)arg2 ;
-(BOOL)_grouping:(id)arg1 containsMediaEntity:(id)arg2 ;
-(id)_updateOffsetQueryItemForQueryItems:(id)arg1 ;
-(VUIMediaAPIResponseMetadata *)responseMetadata;
-(/*^block*/id)_episodeOrderingComparator;
-(BOOL)orderEpisodesByEpisodeNumber;
-(NSString *)seasonIdentifierFilter;
-(id)_applyContentRestrictionsFilterToMediaEntities:(id)arg1 ;
-(void)_applyContentRestrictionsFilterToGroupings;
-(BOOL)_isAllowedToShowMediaItem:(id)arg1 ;
-(void)setMediaClient:(VUIMediaAPIClient *)arg1 ;
-(void)setDesiredBatchSize:(NSNumber *)arg1 ;
-(void)setFetchAllEntities:(BOOL)arg1 ;
@end

