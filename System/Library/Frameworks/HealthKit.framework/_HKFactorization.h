/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {

	NSMapTable* _factors;

}
+(BOOL)supportsSecureCoding;
+(id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2 ;
+(id)factorization;
+(id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2 ;
+(id)factorizationWithFactorsAndExponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)unitString;
-(unsigned long long)factorCount;
-(id)anyFactor;
-(long long)exponentForFactor:(id)arg1 ;
-(id)factorizationByRaisingToExponent:(long long)arg1 ;
-(void)enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2 ;
-(void)_enumerateFactorsWithHandler:(/*^block*/id)arg1 ;
-(void)_multiplyByFactorization:(id)arg1 ;
-(id)reciprocal;
-(id)factorizationByMultiplying:(id)arg1 ;
-(void)_raiseToExponent:(long long)arg1 ;
-(long long)_exponentForFactor:(id)arg1 ;
-(id)factorizationByDividing:(id)arg1 ;
@end

