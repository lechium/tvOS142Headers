/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHistogram.h>

@class RETaggedFeatureValueCountedSet;

@interface _RECategoricalHistogram : REHistogram {

	RETaggedFeatureValueCountedSet* _values;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)addValue:(unsigned long long)arg1 ;
-(void)removeValue:(unsigned long long)arg1 ;
-(unsigned long long)mean;
-(unsigned long long)standardDeviation;
-(unsigned long long)countForValue:(unsigned long long)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 ;
@end

