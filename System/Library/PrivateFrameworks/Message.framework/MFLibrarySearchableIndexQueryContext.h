/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface MFLibrarySearchableIndexQueryContext : NSObject {

	NSMutableArray* _mutableFetchAttributes;
	NSMutableArray* _mutableProtectionClasses;
	NSMutableArray* _mutableRankingQueries;

}

@property (nonatomic,retain) NSMutableArray * mutableFetchAttributes;                //@synthesize mutableFetchAttributes=_mutableFetchAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableProtectionClasses;              //@synthesize mutableProtectionClasses=_mutableProtectionClasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableRankingQueries;                 //@synthesize mutableRankingQueries=_mutableRankingQueries - In the implementation block
@property (nonatomic,copy) NSArray * fetchAttributes; 
@property (nonatomic,copy) NSArray * protectionClasses; 
@property (nonatomic,copy) NSArray * rankingQueries; 
-(void)dealloc;
-(void)setFetchAttributes:(NSArray *)arg1 ;
-(NSMutableArray *)mutableFetchAttributes;
-(NSMutableArray *)mutableProtectionClasses;
-(NSMutableArray *)mutableRankingQueries;
-(NSArray *)fetchAttributes;
-(void)addFetchAttribute:(id)arg1 ;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(NSArray *)protectionClasses;
-(void)addProtectionClass:(id)arg1 ;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(NSArray *)rankingQueries;
-(void)addRankingQuery:(id)arg1 ;
-(void)setMutableFetchAttributes:(NSMutableArray *)arg1 ;
-(void)setMutableProtectionClasses:(NSMutableArray *)arg1 ;
-(void)setMutableRankingQueries:(NSMutableArray *)arg1 ;
@end

