/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwipeActionPullViewDelegate;
@class UIView, NSMutableArray, NSArray, UISwipeActionButton, UIColor, UIContextualAction;

@interface UISwipeActionPullView : UIView {

	UIView* _clippingView;
	NSMutableArray* _buttons;
	NSArray* _actions;
	UISwipeActionButton* _pressedButton;
	BOOL _swipeActionsDidChange;
	BOOL _isTentative;
	double _openThreshold;
	double _confirmationThreshold;
	double _minimumOffset;
	unsigned long long _style;
	BOOL _buttonsUnderlapSwipedView;
	BOOL _autosizesButtons;
	unsigned long long _cellEdge;
	double _currentOffset;
	id<UISwipeActionPullViewDelegate> _delegate;
	UIColor* _backgroundPullColor;
	unsigned long long _state;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<UISwipeActionPullViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long cellEdge;                                  //@synthesize cellEdge=_cellEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) UIColor * backgroundPullColor;                                    //@synthesize backgroundPullColor=_backgroundPullColor - In the implementation block
@property (nonatomic,readonly) UIContextualAction * primarySwipeAction; 
@property (nonatomic,readonly) double currentOffset;                                         //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) double openThreshold; 
@property (nonatomic,readonly) double confirmationThreshold; 
@property (nonatomic,readonly) UIColor * primaryActionColor; 
@property (nonatomic,readonly) BOOL primaryActionIsDestructive; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (assign,nonatomic) BOOL buttonsUnderlapSwipedView;                                 //@synthesize buttonsUnderlapSwipedView=_buttonsUnderlapSwipedView - In the implementation block
@property (assign,nonatomic) BOOL autosizesButtons;                                          //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
-(id)description;
-(id<UISwipeActionPullViewDelegate>)delegate;
-(void)setDelegate:(id<UISwipeActionPullViewDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)freeze;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)currentOffset;
-(UIEdgeInsets)contentInsets;
-(void)layoutSubviews;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)hasActions;
-(void)_setWidth:(double)arg1 ;
-(void)setAutosizesButtons:(BOOL)arg1 ;
-(void)configureWithSwipeActions:(id)arg1 ;
-(UIContextualAction *)primarySwipeAction;
-(double)openThreshold;
-(double)confirmationThreshold;
-(void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5 ;
-(void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3 ;
-(id)sourceViewForAction:(id)arg1 ;
-(BOOL)buttonsUnderlapSwipedView;
-(id)initWithFrame:(CGRect)arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(void)setBackgroundPullColor:(UIColor *)arg1 ;
-(void)setButtonsUnderlapSwipedView:(BOOL)arg1 ;
-(unsigned long long)cellEdge;
-(void)resetView;
-(BOOL)primaryActionIsDestructive;
-(unsigned long long)_swipeActionCount;
-(Class)_buttonClass;
-(double)_paddingToSwipedView;
-(double)_totalInterButtonPadding;
-(double)_directionalMultiplier;
-(double)_interButtonPadding;
-(void)_setupClippingViewIfNeeded;
-(void)_tappedButton:(id)arg1 ;
-(void)_pressedButton:(id)arg1 ;
-(void)_unpressedButton:(id)arg1 ;
-(BOOL)autosizesButtons;
-(void)_rebuildButtons;
-(void)_layoutClippingLayer;
-(void)_setLayerBounds:(CGRect)arg1 ;
-(UIColor *)primaryActionColor;
-(UIColor *)backgroundPullColor;
@end

