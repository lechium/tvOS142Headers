/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedSize : NSObject <UIVectorOperatable> {

	CGSize _size;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zero;
+(id)epsilon;
+(id)valueWithCGSize:(CGSize)arg1 ;
+(id)valueWithCGSize:(CGSize)arg1 epsilon:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isUndefined;
-(id)addVector:(id)arg1 ;
-(id)getValue;
-(id)multiplyByScalar:(double)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI143)arg5 state:(SCD_Struct_UI144)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(void)reinitWithVector:(id)arg1 ;
-(id)getNSValue;
-(id)multiplyByVector:(id)arg1 ;
@end

