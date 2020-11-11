/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIHyperregion;
@class NSString;

@interface _UIHyperrepeatedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	unsigned long long* __repetitions;
	double* __offset;
	double* __increment;
	double* __maximumIndices;
	SCD_Struct_UI30 _clean;
	unsigned long long __dimensions;
	id<_UIHyperregion> __region;
	double* __temp;

}

@property (nonatomic,readonly) double* _temp;                                            //@synthesize _temp=__temp - In the implementation block
@property (setter=_setRegion:,nonatomic,retain) id<_UIHyperregion> _region;              //@synthesize _region=__region - In the implementation block
@property (nonatomic,readonly) const unsigned long long* _repetitions; 
@property (nonatomic,readonly) const double* _offset; 
@property (nonatomic,readonly) const double* _increment; 
@property (nonatomic,readonly) unsigned long long _dimensions;                           //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(const double*)_offset;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_UIHyperregion>)_region;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(const unsigned long long*)_repetitions;
-(void)_setRegion:(id)arg1 ;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(BOOL)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2 ;
-(double*)_mutableMaximumIndices;
-(void)_indexOfClosestSubregion:(double*)arg1 toPoint:(const double*)arg2 ;
-(void)_mutateRepetitions:(/*^block*/id)arg1 ;
-(void)_mutateOffset:(/*^block*/id)arg1 ;
-(void)_mutateIncrement:(/*^block*/id)arg1 ;
-(const double*)_increment;
-(double*)_temp;
@end

