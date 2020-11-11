/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKComparisonFilter.h>

@interface _HKMedicalRecordComparisonFilter : _HKComparisonFilter
+(long long)enumRepresentationForKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg1 ;
+(id)allowedValueClassesForKeyPath:(id)arg1 ;
+(BOOL)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)_acceptsRecordWithDate:(id)arg1 ;
-(BOOL)_acceptsRecordWithState:(unsigned long long)arg1 ;
@end

