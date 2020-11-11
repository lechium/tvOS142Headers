/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PGTimeTitleUtility : NSObject
+(BOOL)_yearIsNeededForDisplayingDate:(id)arg1 ;
+(id)timeTitleWithOptions:(id)arg1 ;
+(id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(id)splitTimeTitleWithOptions:(id)arg1 ;
+(id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg1 requireMultipleYears:(BOOL)arg2 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg1 ;
+(id)babyGrowingUpTimeTitleWithEventNodes:(id)arg1 ;
+(id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
+(id)numberOfYearsAgoWithMomentNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(BOOL)arg3 ;
+(BOOL)_canUseOverTheYearsForStartYear:(long long)arg1 endYear:(long long)arg2 ;
+(BOOL)yearIsNeededForDisplayingDate:(id)arg1 ;
+(unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2 ;
+(BOOL)_eventNodesCoverCompleteMonth:(id)arg1 ;
+(BOOL)_eventNodesCoverCompleteYear:(id)arg1 ;
+(BOOL)_momentNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2 ;
+(void)_enumerateNeighborMomentNodesOfMomentNodes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)_hasReachedNumberVisitsPerMonth:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5 ;
+(BOOL)_hasReachedNumberVisitsPerYear:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5 ;
+(id)_commonLocationLabelForLocationNodes:(id)arg1 ;
+(id)_dateNodesFromMomentNodes:(id)arg1 momentsLocalStartDate:(id*)arg2 momentsLocalEndDate:(id*)arg3 ;
+(id)significantDateNodesFromMomentNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2 ;
+(id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1 ;
+(long long)numberOfYearsFromDate:(id)arg1 toDate:(id)arg2 ;
@end

