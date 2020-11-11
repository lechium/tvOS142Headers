/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet, NSDictionary;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _codings;

}

@property (nonatomic,copy,readonly) NSArray * codings;                           //@synthesize codings=_codings - In the implementation block
@property (nonatomic,copy,readonly) NSSet * uniqueCodings; 
@property (nonatomic,copy,readonly) NSDictionary * codingsBySystem; 
+(BOOL)supportsSecureCoding;
+(id)collectionWithCodings:(id)arg1 ;
+(id)collectionWithCoding:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)codings;
-(id)initWithCodings:(id)arg1 ;
-(NSSet *)uniqueCodings;
-(id)codingsForCodingSystem:(id)arg1 ;
-(NSDictionary *)codingsBySystem;
@end

