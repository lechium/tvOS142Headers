/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class TVButtonContent, UIColor, IKViewElement, _UIFloatingContentView, UIView, _TVImageView, UILabel;

@interface TVButton : UIControl {

	TVButtonContent* _buttonContent;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;
	/*^block*/id _selectActionHandler;
	/*^block*/id _playActionHandler;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingView; 
@property (nonatomic,readonly) UIView * overlayView; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) BOOL blurEnabled; 
@property (nonatomic,readonly) TVButtonContent * buttonContent;                    //@synthesize buttonContent=_buttonContent - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,retain) _TVImageView * imageView; 
@property (nonatomic,retain) UILabel * textContentView; 
@property (nonatomic,retain) _TVImageView * accessoryView; 
@property (nonatomic,copy) UIColor * highlightColor;                               //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) id selectActionHandler;                                 //@synthesize selectActionHandler=_selectActionHandler - In the implementation block
@property (nonatomic,copy) id playActionHandler;                                   //@synthesize playActionHandler=_playActionHandler - In the implementation block
+(id)_buttonContentWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isDisabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(_TVImageView *)accessoryView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(BOOL)canBecomeFocused;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(IKViewElement *)viewElement;
-(_UIFloatingContentView *)floatingView;
-(long long)backdropStyle;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)tv_setLayout:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(TVButtonContent *)buttonContent;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)setTextContentView:(UILabel *)arg1 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(BOOL)blurEnabled;
-(UILabel *)textContentView;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(id)selectActionHandler;
-(id)playActionHandler;
-(void)setSelectActionHandler:(id)arg1 ;
-(void)setPlayActionHandler:(id)arg1 ;
@end

