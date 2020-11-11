/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BFFPaneHeaderView, UILabel, UIView;

@interface CDPPaneHeaderView : UIView {

	BFFPaneHeaderView* _header;

}

@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * subLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * _header; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)setTitleText:(id)arg1 ;
-(UIView *)_header;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)makeAllTheTextFits;
-(UILabel *)subLabel;
-(double)innerHeaderMaxY;
@end
