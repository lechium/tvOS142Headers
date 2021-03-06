/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@class NSLayoutConstraint, NSArray, UIView, NSString, VUIAnimatedLabel;

@interface VUIStackingPosterView : UIView <VUIAuxiliaryViewSelecting> {

	BOOL _requiresReconfiguration;
	NSLayoutConstraint* _topAnchorConstraint;
	NSLayoutConstraint* _bottomAnchorConstraint;
	NSLayoutConstraint* _topImageConstraint;
	NSLayoutConstraint* _bottomImageConstraint;
	double _topAnchorConstant;
	double _bottomAnchorConstant;
	double _topImageConstant;
	double _bottomImageConstant;
	double _labelWidthExpansionAmount;
	NSArray* _labelWidthConstraints;
	BOOL _configuresForCollectionViewCell;
	UIView* _mainImageComponent;
	NSArray* _components;
	UIView* _overlayView;
	double _mainImageFocusSizeIncrease;
	NSString* _mainImageFocusAlign;
	NSArray* _filteredComponents;
	VUIAnimatedLabel* _animatedLabel;
	NSArray* _marqueeLabels;
	NSArray* _visibleLabelWidths;
	CGSize _maxBoundsSize;
	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;                          //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (nonatomic,copy) NSArray * filteredComponents;                         //@synthesize filteredComponents=_filteredComponents - In the implementation block
@property (nonatomic,retain) UIView * mainImageComponent;                        //@synthesize mainImageComponent=_mainImageComponent - In the implementation block
@property (nonatomic,retain) VUIAnimatedLabel * animatedLabel;                   //@synthesize animatedLabel=_animatedLabel - In the implementation block
@property (nonatomic,copy) NSArray * marqueeLabels;                              //@synthesize marqueeLabels=_marqueeLabels - In the implementation block
@property (nonatomic,copy) NSArray * visibleLabelWidths;                         //@synthesize visibleLabelWidths=_visibleLabelWidths - In the implementation block
@property (assign,nonatomic) CGSize maxBoundsSize;                               //@synthesize maxBoundsSize=_maxBoundsSize - In the implementation block
@property (nonatomic,copy) NSArray * components;                                 //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL configuresForCollectionViewCell;               //@synthesize configuresForCollectionViewCell=_configuresForCollectionViewCell - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
@property (assign,nonatomic) double mainImageFocusSizeIncrease;                  //@synthesize mainImageFocusSizeIncrease=_mainImageFocusSizeIncrease - In the implementation block
@property (nonatomic,copy) NSString * mainImageFocusAlign;                       //@synthesize mainImageFocusAlign=_mainImageFocusAlign - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setComponents:(NSArray *)arg1 ;
-(void)_commonInit;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(id)preferredFocusEnvironments;
-(TVCellMetrics)cellMetrics;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)_resetSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4 ;
-(NSArray *)filteredComponents;
-(void)_updateShadowForLabel:(id)arg1 inFocus:(BOOL)arg2 ;
-(void)_applicationWillEnterIdleMode:(id)arg1 ;
-(void)_applicationWillExitIdleMode:(id)arg1 ;
-(void)setComponents:(id)arg1 mainImageComponent:(id)arg2 ;
-(void)setFilteredComponents:(NSArray *)arg1 ;
-(void)setMainImageComponent:(UIView *)arg1 ;
-(void)_updateFocusSizeIncrease;
-(void)setAnimatedLabel:(VUIAnimatedLabel *)arg1 ;
-(void)setMarqueeLabels:(NSArray *)arg1 ;
-(CGSize)maxBoundsSize;
-(TVCellMetrics)_cellMetricsForMaxSize:(CGSize)arg1 ;
-(NSArray *)marqueeLabels;
-(VUIAnimatedLabel *)animatedLabel;
-(void)setNeedsUpdateComponentLayout;
-(void)_updateComponentConstraints;
-(UIView *)mainImageComponent;
-(void)_configureSubviews;
-(BOOL)configuresForCollectionViewCell;
-(NSArray *)visibleLabelWidths;
-(double)_labelOffsetForIdleMode;
-(void)_moveAllComponentsByOffset:(double)arg1 ;
-(UIEdgeInsets)_mainImageComponentAspectFitMarginsForCellMetrics:(TVCellMetrics)arg1 ;
-(void)_updateSubviewHeirarchyWithComponents:(id)arg1 ;
-(double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3 ;
-(void)setVisibleLabelWidths:(NSArray *)arg1 ;
-(void)setMaxBoundsSize:(CGSize)arg1 ;
-(void)setConfiguresForCollectionViewCell:(BOOL)arg1 ;
-(void)updateComponentLayout;
-(NSString *)mainImageFocusAlign;
-(BOOL)_isShowOnHighlightStyle:(id)arg1 ;
-(BOOL)_isMarqueeOnHighlightStyle:(id)arg1 ;
-(BOOL)_isMarqueeAndShowOnHighlightStyleOnly:(id)arg1 ;
-(double)mainImageFocusSizeIncrease;
-(id)_tvViewLayoutFromTextLayout:(id)arg1 ;
-(void)setMainImageFocusSizeIncrease:(double)arg1 ;
-(void)setMainImageFocusAlign:(NSString *)arg1 ;
@end

