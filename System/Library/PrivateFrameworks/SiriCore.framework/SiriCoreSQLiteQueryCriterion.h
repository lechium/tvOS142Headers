/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SiriCoreSQLiteValue;
@class NSString, NSArray;

@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying> {

	NSString* _columnName;
	long long _comparisonOperator;
	long long _logicalOperator;
	id<SiriCoreSQLiteValue> _value;
	NSArray* _values;
	NSArray* _subcriteria;

}

@property (nonatomic,copy,readonly) NSString * columnName;                      //@synthesize columnName=_columnName - In the implementation block
@property (nonatomic,readonly) long long comparisonOperator;                    //@synthesize comparisonOperator=_comparisonOperator - In the implementation block
@property (nonatomic,readonly) long long logicalOperator;                       //@synthesize logicalOperator=_logicalOperator - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                           //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subcriteria;                      //@synthesize subcriteria=_subcriteria - In the implementation block
+(id)equalToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)greaterThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)lessThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)notEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 ;
+(id)andQueryCriterionWithSubcriteria:(id)arg1 ;
+(id)andQueryCriterionWithSubcriteriaProvider:(/*^block*/id)arg1 ;
+(id)orQueryCriterionWithSubcriteria:(id)arg1 ;
+(id)orQueryCriterionWithSubcriteriaProvider:(/*^block*/id)arg1 ;
+(id)betweenQueryCriterionWithColumnName:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 negation:(BOOL)arg4 ;
+(id)inQueryCriterionWithColumnName:(id)arg1 values:(id)arg2 negation:(BOOL)arg3 ;
+(id)isQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(BOOL)arg3 ;
+(id)isNullQueryCriterionWithColumnName:(id)arg1 negation:(BOOL)arg2 ;
+(id)likeQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)values;
-(id<SiriCoreSQLiteValue>)value;
-(NSString *)columnName;
-(id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteria:(id)arg6 ;
-(id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteriaProvider:(/*^block*/id)arg6 ;
-(long long)comparisonOperator;
-(long long)logicalOperator;
-(NSArray *)subcriteria;
@end

