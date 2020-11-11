/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarStringView, UIVectorLabel, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarCellularNetworkTypeView : UIView <_UIStatusBarDisplayable> {

	BOOL _animatingUpdate;
	long long _type;
	_UIStatusBarStringView* _stringView;
	UIVectorLabel* _prefixLabel;
	UIVectorLabel* _accessoryLabel;

}

@property (assign,nonatomic) long long type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * stringView;                                    //@synthesize stringView=_stringView - In the implementation block
@property (nonatomic,retain) UIVectorLabel * prefixLabel;                                            //@synthesize prefixLabel=_prefixLabel - In the implementation block
@property (retain) UIVectorLabel * accessoryLabel;                                                   //@synthesize accessoryLabel=_accessoryLabel - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setAttributedText:(id)arg1 prefixLength:(long long)arg2 forType:(long long)arg3 animated:(BOOL)arg4 ;
-(void)setText:(id)arg1 prefixLength:(long long)arg2 withStyleAttributes:(id)arg3 forType:(long long)arg4 animated:(BOOL)arg5 ;
-(_UIStatusBarStringView *)stringView;
-(void)setStringView:(_UIStatusBarStringView *)arg1 ;
-(void)_animateUpdateToText:(id)arg1 prefixLength:(long long)arg2 styleAttributes:(id)arg3 attributedText:(id)arg4 type:(long long)arg5 ;
-(UIVectorLabel *)prefixLabel;
-(void)setPrefixLabel:(UIVectorLabel *)arg1 ;
-(UIVectorLabel *)accessoryLabel;
-(void)setAccessoryLabel:(UIVectorLabel *)arg1 ;
@end

