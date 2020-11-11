/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * localDate;                   //@synthesize localDate=_localDate - In the implementation block
+(unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1 ;
+(BOOL)isMoment:(id)arg1 duringSeason:(id)arg2 ;
+(id)seasonNodeForMomentNode:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithController:(id)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)keyAssetCurationOptions;
-(void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(unsigned long long)arg3 ;
-(id)_lastSeasonPotentialMemory;
-(id)_seasonInHistoryPotentialMemories;
@end
