/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSDictionary, UIColor, NSArray;

@interface SiriTVUIButtonTemplateItem : SiriTVUITemplateItem {

	NSDictionary* _titles;
	NSDictionary* _highlightedTitles;
	NSDictionary* _backgroundColors;
	NSDictionary* _backgroundImages;
	unsigned long long _backgroundImageStyle;
	UIColor* _backgroundImageDividerColor;
	NSArray* _commands;
	CGSize _backgroundImagePointSize;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,copy) NSDictionary * backgroundImages;                        //@synthesize backgroundImages=_backgroundImages - In the implementation block
@property (assign,nonatomic) CGSize backgroundImagePointSize;                      //@synthesize backgroundImagePointSize=_backgroundImagePointSize - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundImageStyle;              //@synthesize backgroundImageStyle=_backgroundImageStyle - In the implementation block
@property (nonatomic,retain) UIColor * backgroundImageDividerColor;                //@synthesize backgroundImageDividerColor=_backgroundImageDividerColor - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                     //@synthesize commands=_commands - In the implementation block
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id)backgroundColorForUserInterfaceStyle:(long long)arg1 ;
-(unsigned long long)backgroundImageStyle;
-(void)setBackgroundImageStyle:(unsigned long long)arg1 ;
-(id)initWithTitles:(id)arg1 highlightedTitles:(id)arg2 backgroundColors:(id)arg3 commands:(id)arg4 ;
-(id)titleForUserInterfaceStyle:(long long)arg1 ;
-(id)highlightedTitleForUserInterfaceStyle:(long long)arg1 ;
-(NSDictionary *)backgroundImages;
-(void)setBackgroundImages:(NSDictionary *)arg1 ;
-(CGSize)backgroundImagePointSize;
-(void)setBackgroundImagePointSize:(CGSize)arg1 ;
-(UIColor *)backgroundImageDividerColor;
-(void)setBackgroundImageDividerColor:(UIColor *)arg1 ;
@end

