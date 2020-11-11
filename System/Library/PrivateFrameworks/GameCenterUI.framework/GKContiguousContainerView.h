/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface GKContiguousContainerView : UIView {

	BOOL _vertical;
	BOOL _applyOrthogonalConstraints;
	UIView* _baselineView;
	double _overlap;
	NSArray* _replaceableConstraints;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) BOOL vertical;                                 //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) BOOL applyOrthogonalConstraints;               //@synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;              //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) UIView * baselineView;                         //@synthesize baselineView=_baselineView - In the implementation block
@property (assign,nonatomic) double overlap;                                //@synthesize overlap=_overlap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                           //@synthesize insets=_insets - In the implementation block
+(id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3 ;
+(id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2 ;
+(id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3 applyOrthogonalConstraints:(BOOL)arg4 ;
-(void)dealloc;
-(void)setOverlap:(double)arg1 ;
-(double)overlap;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)insets;
-(void)replaceSubviews:(id)arg1 ;
-(NSArray *)replaceableConstraints;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
-(id)viewForBaselineLayout;
-(void)setApplyOrthogonalConstraints:(BOOL)arg1 ;
-(void)setVertical:(BOOL)arg1 ;
-(void)_addContiguousSubviews:(id)arg1 ;
-(BOOL)vertical;
-(UIView *)baselineView;
-(void)setBaselineView:(UIView *)arg1 ;
-(BOOL)applyOrthogonalConstraints;
@end

