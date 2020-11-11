/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol _TVListViewCellDelegate;
@class UIColor, UIVisualEffectView, _UIFloatingContentView;

@interface _TVListViewCell : UICollectionViewCell {

	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIVisualEffectView* _backgroundVisualEffectView;
	BOOL _visualEffectViewBackgroundEnabled;
	BOOL _disabled;
	BOOL _shouldAppearSelected;
	_UIFloatingContentView* _floatingView;
	id<_TVListViewCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL visualEffectViewBackgroundEnabled;                   //@synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                    //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVListViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(id<_TVListViewCellDelegate>)delegate;
-(void)setDelegate:(id<_TVListViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(BOOL)isDisabled;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)_updateSelectedBackgroundColor;
-(unsigned long long)_floatingViewControlState;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1 ;
-(void)setVisualEffectViewBackgroundEnabled:(BOOL)arg1 ;
-(BOOL)_descendantsShouldHighlight;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)visualEffectViewBackgroundEnabled;
-(BOOL)shouldAppearSelected;
@end

