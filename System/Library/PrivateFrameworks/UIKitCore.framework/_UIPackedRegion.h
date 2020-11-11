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

@class NSArray, NSString;

@interface _UIPackedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;
	NSArray* __regions;

}

@property (setter=_setRegions:,nonatomic,copy) NSArray * _regions;              //@synthesize _regions=__regions - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;                  //@synthesize _dimensions=__dimensions - In the implementation block
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)_regions;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(void)_setRegions:(id)arg1 ;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(BOOL)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2 ;
@end

