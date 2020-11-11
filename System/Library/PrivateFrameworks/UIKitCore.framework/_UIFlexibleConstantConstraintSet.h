/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIConstantConstraintSet.h>

@class NSLayoutConstraint;

@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet {

	NSLayoutConstraint* _minConstraint;
	NSLayoutConstraint* _maxConstraint;
	NSLayoutConstraint* _equalityConstraint;
	BOOL _equalityConstraintPrefersMin;
	double _minConstant;
	double _maxConstant;
	double _equalityConstant;

}

@property (assign,nonatomic) double minConstant;                   //@synthesize minConstant=_minConstant - In the implementation block
@property (assign,nonatomic) double maxConstant;                   //@synthesize maxConstant=_maxConstant - In the implementation block
@property (assign,nonatomic) double equalityConstant;              //@synthesize equalityConstant=_equalityConstant - In the implementation block
+(id)constraintSetWithRequiredEqualityConstraint:(id)arg1 ;
+(id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 ;
-(id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(BOOL)arg3 ;
-(void)setMinConstant:(double)arg1 ;
-(void)setMaxConstant:(double)arg1 ;
-(void)setEqualityConstant:(double)arg1 ;
-(BOOL)_equalityConstraintIsRequired;
-(void)_updateInequalityConstants;
-(id)_preferredInequalityConstraint;
-(id)_otherInequalityConstraint;
-(double)minConstant;
-(double)maxConstant;
-(double)equalityConstant;
@end

