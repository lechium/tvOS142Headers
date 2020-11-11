/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString, UIColor;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _disclosureView;
	BOOL _hideDisclosure;
	NSString* _title;
	NSString* _subtitle;
	UIColor* _titleColor;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;              //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) BOOL hideDisclosure;               //@synthesize hideDisclosure=_hideDisclosure - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setHideDisclosure:(BOOL)arg1 ;
-(double)_maxWidthForTransactionCellInWidth:(double)arg1 ;
-(BOOL)hideDisclosure;
@end

