/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontTextStyleCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	NSString* _textStyle;
	NSString* _contentSizeCategory;

}

@property (nonatomic,copy) NSString * textStyle;                        //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;                       //@synthesize textLegibility=_textLegibility - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)_hash;
-(void)setTextLegibility:(BOOL)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)textLegibility;
-(NSString *)textStyle;
-(NSString *)contentSizeCategory;
@end

