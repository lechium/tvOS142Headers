/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell {

	UIButton* _leftLabel;
	UIButton* _rightLabel;

}

@property (nonatomic,readonly) UIButton * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(id)labelView;
-(double)minCellHeight;
-(id)standardButton;
-(UIButton *)leftLabel;
-(void)_setupButton:(id)arg1 forAction:(id)arg2 ;
-(UIButton *)rightLabel;
-(id)constantConstraints;
-(id)rightMostView;
@end

