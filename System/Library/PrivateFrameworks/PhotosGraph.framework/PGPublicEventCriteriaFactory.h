/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PGGraph, NSDictionary;

@interface PGPublicEventCriteriaFactory : NSObject {

	PGGraph* _graph;
	NSDictionary* _disambiguationCriteriaByEventCategory;
	NSDictionary* _highConfidenceCriteriaByEventCategory;
	NSDictionary* _prohibitedCriteriaByEventCategory;

}

@property (nonatomic,retain) PGGraph * graph;                                                     //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) NSDictionary * disambiguationCriteriaByEventCategory;              //@synthesize disambiguationCriteriaByEventCategory=_disambiguationCriteriaByEventCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * highConfidenceCriteriaByEventCategory;              //@synthesize highConfidenceCriteriaByEventCategory=_highConfidenceCriteriaByEventCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * prohibitedCriteriaByEventCategory;                  //@synthesize prohibitedCriteriaByEventCategory=_prohibitedCriteriaByEventCategory - In the implementation block
+(id)publicEventCriteriaByCategoryForGraph:(id)arg1 ;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)_publicEventCriteriaByCategory;
-(NSDictionary *)highConfidenceCriteriaByEventCategory;
-(NSDictionary *)disambiguationCriteriaByEventCategory;
-(NSDictionary *)prohibitedCriteriaByEventCategory;
-(id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg1 inferenceType:(unsigned long long)arg2 ;
-(id)_sportsCriteriaArray;
-(id)_musicConcertsCriteriaArray;
-(id)_theaterCriteriaArray;
-(id)_danceCriteriaArray;
-(id)_nightLifeCriteriaArray;
-(id)_artsAndMuseumsCriteriaArray;
-(id)_festivalsAndFairsCriteriaArray;
-(id)_appleEventsCriteriaArray;
@end

