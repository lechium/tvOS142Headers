/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface TVCollectionViewFullScreenCell : UICollectionViewCell {

	BOOL _containsFocus;
	BOOL _contentAvailable;
	double _cornerRadius;
	double _parallaxOffset;
	double _normalizedPosition;
	double _maskAmount;
	UIView* _maskedBackgroundView;
	UIView* _maskedContentView;
	UIView* _unmaskedContentView;
	UIView* _unmaskContainerView;
	UIView* _maskContainerView;
	CGSize _preferredUnmaskedContentSize;
	CGSize _preferredMaskedContentSize;
	UIEdgeInsets _contentBleed;

}

@property (nonatomic,readonly) UIView * unmaskedContentView;                                                                                                 //@synthesize unmaskedContentView=_unmaskedContentView - In the implementation block
@property (nonatomic,readonly) UIView * unmaskContainerView;                                                                                                 //@synthesize unmaskContainerView=_unmaskContainerView - In the implementation block
@property (nonatomic,readonly) UIView * maskContainerView;                                                                                                   //@synthesize maskContainerView=_maskContainerView - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentBleed;                                                                                                      //@synthesize contentBleed=_contentBleed - In the implementation block
@property (assign,nonatomic) double parallaxOffset;                                                                                                          //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) double normalizedPosition;                                                                                                      //@synthesize normalizedPosition=_normalizedPosition - In the implementation block
@property (assign,nonatomic) double maskAmount;                                                                                                              //@synthesize maskAmount=_maskAmount - In the implementation block
@property (assign,setter=_setPreferredUnmaskedContentSize:,getter=_preferredUnmaskedContentSize,nonatomic) CGSize preferredUnmaskedContentSize;              //@synthesize preferredUnmaskedContentSize=_preferredUnmaskedContentSize - In the implementation block
@property (assign,setter=_setPreferredMaskedContentSize:,getter=_preferredMaskedContentSize,nonatomic) CGSize preferredMaskedContentSize;                    //@synthesize preferredMaskedContentSize=_preferredMaskedContentSize - In the implementation block
@property (nonatomic,readonly) UIView * maskedBackgroundView;                                                                                                //@synthesize maskedBackgroundView=_maskedBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * maskedContentView;                                                                                                   //@synthesize maskedContentView=_maskedContentView - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(BOOL)_isContentAvailable;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(UIView *)unmaskedContentView;
-(UIView *)maskedBackgroundView;
-(UIView *)maskContainerView;
-(UIView *)maskedContentView;
-(double)maskAmount;
-(double)normalizedPosition;
-(void)normalizedPositionDidChange;
-(void)setMaskAmount:(double)arg1 ;
-(UIEdgeInsets)contentBleed;
-(void)setContentBleed:(UIEdgeInsets)arg1 ;
-(double)parallaxOffset;
-(void)setParallaxOffset:(double)arg1 ;
-(void)setNormalizedPosition:(double)arg1 ;
-(void)normalizedPositionWillChange:(double)arg1 ;
-(void)maskAmountWillChange:(double)arg1 ;
-(void)maskAmountDidChange;
-(void)_setPreferredUnmaskedContentSize:(CGSize)arg1 ;
-(void)_setPreferredMaskedContentSize:(CGSize)arg1 ;
-(UIView *)unmaskContainerView;
-(BOOL)_showingMaskedContent;
-(void)_layoutUnmaskedContent;
-(void)_layoutMaskedContent;
-(CGSize)_preferredUnmaskedContentSize;
-(CGSize)_preferredMaskedContentSize;
-(void)_setContentAvailable:(BOOL)arg1 ;
@end

