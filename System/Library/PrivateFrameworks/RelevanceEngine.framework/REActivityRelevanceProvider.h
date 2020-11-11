/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REActivityRelevanceProvider : RERelevanceProvider {

	BOOL _closedActiveEngergy;
	BOOL _closedExerciseTime;
	BOOL _closedStandHour;

}

@property (nonatomic,readonly) BOOL closedActiveEngergy;              //@synthesize closedActiveEngergy=_closedActiveEngergy - In the implementation block
@property (nonatomic,readonly) BOOL closedExerciseTime;               //@synthesize closedExerciseTime=_closedExerciseTime - In the implementation block
@property (nonatomic,readonly) BOOL closedStandHour;                  //@synthesize closedStandHour=_closedStandHour - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(BOOL)closedActiveEngergy;
-(BOOL)closedExerciseTime;
-(BOOL)closedStandHour;
-(id)initWithActiveEnergyState:(BOOL)arg1 exerciseTimeState:(BOOL)arg2 standHourState:(BOOL)arg3 ;
@end

