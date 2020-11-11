/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIColor;

@interface VUIMonogramImageConfiguration : NSObject <NSCopying> {

	long long _style;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	UIFont* _font;
	UIColor* _bgColor;
	double _diameter;
	double _focusedSizeIncrease;
	UIColor* _textColor;

}

@property (nonatomic,readonly) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                           //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * bgColor;                       //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) double diameter;                         //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
-(void)setBgColor:(UIColor *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(double)focusedSizeIncrease;
@end

