/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * details; 
@property (nonatomic,readonly) double weight; 
-(NSString *)name;
-(id)description;
-(NSString *)details;
-(double)weight;
-(id)sourceDescription;
-(id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2 ;
-(id)suggestionResultWithPerson:(id)arg1 ;
-(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 ;
-(id)suggestionResultsWithPersons:(id)arg1 ;
-(BOOL)canRunWithOptions:(id)arg1 ;
-(BOOL)canRunWithInput:(id)arg1 ;
@end

