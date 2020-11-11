/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationPalette.h>

@class UIView, UINavigationController, UINavigationItem, NSString;

@interface _UINavigationBarPalette : UIView <_UINavigationPalette> {

	BOOL _didSetMinimumHeight;
	BOOL _transitioning;
	BOOL _pinned;
	BOOL __displaysWhenSearchActive;
	UIView* _contentView;
	double _preferredHeight;
	double _minimumHeight;
	UIView* _temporaryBackgroundView;
	UINavigationItem* _owningNavigationItem;
	unsigned long long __contentViewMarginType;
	long long __layoutPriority;

}

@property (nonatomic,retain) UIView * temporaryBackgroundView;                                                         //@synthesize temporaryBackgroundView=_temporaryBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL didSetMinimumHeight;                                                                 //@synthesize didSetMinimumHeight=_didSetMinimumHeight - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                                       //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                                                              //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * owningNavigationItem;                                           //@synthesize owningNavigationItem=_owningNavigationItem - In the implementation block
@property (assign,setter=_setContentViewMarginType:,nonatomic) unsigned long long _contentViewMarginType;              //@synthesize _contentViewMarginType=__contentViewMarginType - In the implementation block
@property (assign,setter=_setDisplaysWhenSearchActive:,nonatomic) BOOL _displaysWhenSearchActive;                      //@synthesize _displaysWhenSearchActive=__displaysWhenSearchActive - In the implementation block
@property (assign,setter=_setLayoutPriority:,nonatomic) long long _layoutPriority;                                     //@synthesize _layoutPriority=__layoutPriority - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                                                   //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) double minimumHeight;                                                                     //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar; 
@property (nonatomic,readonly) UINavigationController * navController; 
@property (nonatomic,readonly) unsigned long long boundaryEdge; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden; 
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContentViewWithFrame:(CGRect)arg1 ;
-(BOOL)isPinned;
-(UIView *)contentView;
-(void)addSubview:(id)arg1 ;
-(double)preferredHeight;
-(void)setPinned:(BOOL)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)transitioning;
-(void)setTransitioning:(BOOL)arg1 ;
-(UIView *)_backgroundView;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(void)_updateBackgroundView;
-(void)_setSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(UINavigationController *)navController;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)paletteShadowIsHidden;
-(void)setOwningNavigationItem:(UINavigationItem *)arg1 ;
-(long long)_layoutPriority;
-(UINavigationItem *)owningNavigationItem;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(unsigned long long)boundaryEdge;
-(BOOL)pinningBarShadowWasHidden;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1 ;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(void)resetBackgroundConstraints;
-(id)_attachedPinningTopBar;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(BOOL)_shouldUpdateBackground;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetConstraintConstants:(double)arg1 ;
-(void)_resetHeightConstraintConstant;
-(void)_setupBackgroundViewIfNecessary;
-(UIView *)temporaryBackgroundView;
-(void)setTemporaryBackgroundView:(UIView *)arg1 ;
-(BOOL)didSetMinimumHeight;
-(void)setDidSetMinimumHeight:(BOOL)arg1 ;
-(unsigned long long)_contentViewMarginType;
-(void)_setContentViewMarginType:(unsigned long long)arg1 ;
-(BOOL)_displaysWhenSearchActive;
-(void)_setDisplaysWhenSearchActive:(BOOL)arg1 ;
-(void)_setLayoutPriority:(long long)arg1 ;
@end
