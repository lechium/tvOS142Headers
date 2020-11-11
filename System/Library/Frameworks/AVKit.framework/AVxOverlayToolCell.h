/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel, UIImageView, AVControlItem, UIVisualEffectView, _UIFloatingContentView, UIView;

@interface AVxOverlayToolCell : UICollectionViewCell {

	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	double _lastInteractionNotificationTimeInterval;
	UILabel* _label;
	UIImageView* _imageView;
	AVControlItem* _controlItem;
	double _minimumWidth;
	double _scale;
	UIVisualEffectView* _visualEffectView;
	_UIFloatingContentView* _floatingView;
	UIView* _focusView;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIView * focusView;                                   //@synthesize focusView=_focusView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) AVControlItem * controlItem;                          //@synthesize controlItem=_controlItem - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                  //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double scale;                                         //@synthesize scale=_scale - In the implementation block
-(void)dealloc;
-(double)scale;
-(UILabel *)label;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)focusView;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(UIImageView *)imageView;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didHintFocusMovement:(id)arg1 ;
-(void)setControlItem:(AVControlItem *)arg1 ;
-(void)__postUXNotification;
-(void)_cancelPendingUXNotification;
-(void)_postUXNotificationAfterDelay;
-(void)updateFocusState:(id)arg1 ;
-(AVControlItem *)controlItem;
-(UIVisualEffectView *)visualEffectView;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)setFocusView:(UIView *)arg1 ;
@end

