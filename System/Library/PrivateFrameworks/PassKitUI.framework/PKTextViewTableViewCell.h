/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UITextView;

@interface PKTextViewTableViewCell : UITableViewCell {

	UITextView* _textView;

}

@property (nonatomic,readonly) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITextView *)textView;
-(void)layoutSubviews;
@end

