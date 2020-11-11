/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <UIKitCore/_UIHyperregion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperpoint : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying> {

	double* __value;
	unsigned long long __dimensions;

}

@property (nonatomic,readonly) const double* _value; 
@property (nonatomic,readonly) unsigned long long _dimensions;              //@synthesize _dimensions=__dimensions - In the implementation block
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const double*)_value;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(void)_mutateValue:(/*^block*/id)arg1 ;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(id)initWithValue:(const double*)arg1 dimensions:(unsigned long long)arg2 ;
-(id)initWithValue:(const double*)arg1 objCType:(const char*)arg2 ;
@end

