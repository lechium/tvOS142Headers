/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class NSString, VUILabel, VUITextLayout, UIImageView, VUISeparatorView, UIImage;

@interface VUIDebugMetricsEventCell : UITableViewCell {

	NSString* _eventTypeLabelStr;
	NSString* _subhead1LabelStr;
	NSString* _subhead2LabelStr;
	NSString* _subhead3LabelStr;
	NSString* _tabName;
	VUILabel* _eventTypeLabel;
	VUITextLayout* _eventTypeLabelLayout;
	VUILabel* _subhead1Label;
	VUITextLayout* _subhead1LabelLayout;
	VUILabel* _subhead2Label;
	VUITextLayout* _subhead2LabelLayout;
	VUILabel* _subhead3Label;
	VUITextLayout* _subhead3LabelLayout;
	VUILabel* _tabNameLabel;
	VUITextLayout* _tabNameLabelLayout;
	UIImageView* _tabImageView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUILabel * eventTypeLabel;                         //@synthesize eventTypeLabel=_eventTypeLabel - In the implementation block
@property (nonatomic,retain) VUITextLayout * eventTypeLabelLayout;              //@synthesize eventTypeLabelLayout=_eventTypeLabelLayout - In the implementation block
@property (nonatomic,retain) VUILabel * subhead1Label;                          //@synthesize subhead1Label=_subhead1Label - In the implementation block
@property (nonatomic,retain) VUITextLayout * subhead1LabelLayout;               //@synthesize subhead1LabelLayout=_subhead1LabelLayout - In the implementation block
@property (nonatomic,retain) VUILabel * subhead2Label;                          //@synthesize subhead2Label=_subhead2Label - In the implementation block
@property (nonatomic,retain) VUITextLayout * subhead2LabelLayout;               //@synthesize subhead2LabelLayout=_subhead2LabelLayout - In the implementation block
@property (nonatomic,retain) VUILabel * subhead3Label;                          //@synthesize subhead3Label=_subhead3Label - In the implementation block
@property (nonatomic,retain) VUITextLayout * subhead3LabelLayout;               //@synthesize subhead3LabelLayout=_subhead3LabelLayout - In the implementation block
@property (nonatomic,retain) VUILabel * tabNameLabel;                           //@synthesize tabNameLabel=_tabNameLabel - In the implementation block
@property (nonatomic,retain) VUITextLayout * tabNameLabelLayout;                //@synthesize tabNameLabelLayout=_tabNameLabelLayout - In the implementation block
@property (nonatomic,retain) UIImageView * tabImageView;                        //@synthesize tabImageView=_tabImageView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                  //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy) NSString * eventTypeLabelStr;                        //@synthesize eventTypeLabelStr=_eventTypeLabelStr - In the implementation block
@property (nonatomic,copy) NSString * subhead1LabelStr;                         //@synthesize subhead1LabelStr=_subhead1LabelStr - In the implementation block
@property (nonatomic,copy) NSString * subhead2LabelStr;                         //@synthesize subhead2LabelStr=_subhead2LabelStr - In the implementation block
@property (nonatomic,copy) NSString * subhead3LabelStr;                         //@synthesize subhead3LabelStr=_subhead3LabelStr - In the implementation block
@property (nonatomic,copy) UIImage * tabImage; 
@property (nonatomic,copy) NSString * tabName;                                  //@synthesize tabName=_tabName - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(VUILabel *)eventTypeLabel;
-(void)setEventTypeLabelStr:(NSString *)arg1 ;
-(void)setSubhead1LabelStr:(NSString *)arg1 ;
-(void)setSubhead2LabelStr:(NSString *)arg1 ;
-(void)setSubhead3LabelStr:(NSString *)arg1 ;
-(void)setSubhead1LabelColor:(id)arg1 ;
-(void)setSubhead2LabelColor:(id)arg1 ;
-(void)setSubhead3LabelColor:(id)arg1 ;
-(void)setTabName:(NSString *)arg1 ;
-(UIImage *)tabImage;
-(void)setTabImage:(UIImage *)arg1 ;
-(NSString *)eventTypeLabelStr;
-(NSString *)subhead1LabelStr;
-(NSString *)subhead2LabelStr;
-(NSString *)subhead3LabelStr;
-(NSString *)tabName;
-(void)setEventTypeLabel:(VUILabel *)arg1 ;
-(VUITextLayout *)eventTypeLabelLayout;
-(void)setEventTypeLabelLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)subhead1Label;
-(void)setSubhead1Label:(VUILabel *)arg1 ;
-(VUITextLayout *)subhead1LabelLayout;
-(void)setSubhead1LabelLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)subhead2Label;
-(void)setSubhead2Label:(VUILabel *)arg1 ;
-(VUITextLayout *)subhead2LabelLayout;
-(void)setSubhead2LabelLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)subhead3Label;
-(void)setSubhead3Label:(VUILabel *)arg1 ;
-(VUITextLayout *)subhead3LabelLayout;
-(void)setSubhead3LabelLayout:(VUITextLayout *)arg1 ;
-(VUILabel *)tabNameLabel;
-(void)setTabNameLabel:(VUILabel *)arg1 ;
-(VUITextLayout *)tabNameLabelLayout;
-(void)setTabNameLabelLayout:(VUITextLayout *)arg1 ;
-(UIImageView *)tabImageView;
-(void)setTabImageView:(UIImageView *)arg1 ;
@end

