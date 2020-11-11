/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTLearnedPlaceTypeInferenceStats, RTLearnedPlace;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject {

	RTLearnedPlaceTypeInferenceStats* _stats;
	RTLearnedPlace* _place;
	unsigned long long _visitsCount;

}

@property (nonatomic,retain) RTLearnedPlace * place;                                  //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) unsigned long long visitsCount;                          //@synthesize visitsCount=_visitsCount - In the implementation block
@property (nonatomic,readonly) RTLearnedPlaceTypeInferenceStats * stats;              //@synthesize stats=_stats - In the implementation block
+(id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3 ;
+(id)extractDailyStatsFromVisits:(id)arg1 ;
+(id)extractWeeklyStatsFromDailyStats:(id)arg1 ;
+(double)extractTopMedianDwellTimeFromVisits:(id)arg1 ;
-(id)description;
-(void)log;
-(unsigned long long)visitsCount;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(RTLearnedPlace *)place;
-(void)setPlace:(RTLearnedPlace *)arg1 ;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
-(void)setVisitsCount:(unsigned long long)arg1 ;
@end

