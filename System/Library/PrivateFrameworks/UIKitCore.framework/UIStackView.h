/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, _UIOrderedLayoutArrangement, _UIAlignedLayoutArrangement, NSArray;

@interface UIStackView : UIView {

	NSMutableArray* _mutableLayoutArrangements;
	_UIOrderedLayoutArrangement* _distributionArrangement;
	_UIAlignedLayoutArrangement* _alignmentArrangement;
	BOOL _didRequestTallestBaselineViewForFirst;
	BOOL _didRequestTallestBaselineViewForLast;
	BOOL _viewForFirstBaselineLayoutDidChange;
	BOOL _viewForLastBaselineLayoutDidChange;
	BOOL _layoutMarginsRelativeArrangement;

}

@property (assign,nonatomic) long long _mk_axis; 
@property (nonatomic,copy,readonly) NSArray * arrangedSubviews; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) long long distribution; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
+(Class)layerClass;
-(void)_mapkit_removeArrangedSubview:(id)arg1 ;
-(void)_mapkit_setArrangedSubviews:(id)arg1 ;
-(void)set_mk_axis:(long long)arg1 ;
-(long long)_mk_axis;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(long long)distribution;
-(void)setDistribution:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)addArrangedSubview:(id)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)arrangedSubviews;
-(void)removeArrangedSubview:(id)arg1 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)setArrangedSubviews:(NSArray *)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(double)customSpacingAfterView:(id)arg1 ;
-(double)_calculatedIntrinsicHeight;
-(BOOL)_hasLayoutArrangements;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(BOOL*)arg4 ;
-(void)_vendedBaselineViewParametersDidChange;
-(id)_mutableLayoutArrangements;
-(void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg1 ;
-(double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1 ;
-(BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg1 ;
-(id)_baselineViewForFirst:(BOOL)arg1 ;
-(BOOL)_recordBaselineLoweringInfo;
@end

