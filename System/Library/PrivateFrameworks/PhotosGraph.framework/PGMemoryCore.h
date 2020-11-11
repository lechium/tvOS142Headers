/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSArray;


@protocol PGMemoryCore <NSObject>
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSArray * meaningLabels; 
@property (nonatomic,readonly) NSArray * moodKeywords; 
@property (nonatomic,readonly) unsigned long long suggestedMood; 
@property (nonatomic,readonly) unsigned long long category; 
@required
-(unsigned long long)category;
-(unsigned long long)suggestedMood;
-(NSArray *)moodKeywords;
-(NSArray *)meaningLabels;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;

@end
