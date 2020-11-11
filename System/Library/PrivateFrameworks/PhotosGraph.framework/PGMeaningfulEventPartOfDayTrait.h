/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {

	unsigned long long _value;
	unsigned long long _forbiddenValue;

}

@property (nonatomic,readonly) unsigned long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenValue;              //@synthesize forbiddenValue=_forbiddenValue - In the implementation block
-(unsigned long long)value;
-(BOOL)isActive;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2 ;
-(unsigned long long)forbiddenValue;
@end

