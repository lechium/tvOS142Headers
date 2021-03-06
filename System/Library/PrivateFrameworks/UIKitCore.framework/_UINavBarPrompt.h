/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UINavigationBar, NSString;

@interface _UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}

@property (nonatomic,copy) NSString * prompt; 
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGRect)_labelFrame;
-(CGRect)promptBounds;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(id)initWithNavBar:(id)arg1 ;
@end

