/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {

	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIButton* _secondaryActionButton;
	double _topPadding;
	double _secondaryActionTopPadding;
	double _bottomPadding;

}

@property (nonatomic,retain,readonly) UILabel * descriptionLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIButton * secondaryActionButton; 
@property (assign,nonatomic) double topPadding;                                      //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double secondaryActionTopPadding;                       //@synthesize secondaryActionTopPadding=_secondaryActionTopPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                   //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)actionButton;
-(void)layoutSubviews;
-(UILabel *)descriptionLabel;
-(double)topPadding;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(UIButton *)secondaryActionButton;
-(void)sizeToFitForTableView:(id)arg1 ;
-(double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(double)arg1 ;
-(double)secondaryActionTopPadding;
-(double)bottomPadding;
@end
