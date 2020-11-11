/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@class UIColor, NSString;

@interface TVViewLayout : NSObject {

	BOOL _acceptsFocus;
	BOOL _centerGrowth;
	UIColor* _tintColor;
	UIColor* _darkTintColor;
	UIColor* _backgroundColor;
	UIColor* _darkBackgroundColor;
	double _height;
	double _maxHeight;
	double _maxWidth;
	double _minHeight;
	double _minWidth;
	double _width;
	double _focusSizeIncrease;
	NSString* _focusAlign;
	double _lineSpacing;
	long long _alignment;
	long long _contentAlignment;
	UIColor* _highlightColor;
	long long _position;
	NSString* _highlightStyle;
	double _interitemSpacing;
	NSString* _progressStyle;
	NSString* _group;
	UIEdgeInsets _margin;
	UIEdgeInsets _padding;
	UIEdgeInsets _focusMargin;
	CGAffineTransform _focusTransform;

}

@property (assign,nonatomic) double interitemSpacing;                       //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,copy) NSString * progressStyle;                        //@synthesize progressStyle=_progressStyle - In the implementation block
@property (nonatomic,copy) NSString * group;                                //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                          //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                           //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * darkTintColor;                       //@synthesize darkTintColor=_darkTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * darkBackgroundColor;                 //@synthesize darkBackgroundColor=_darkBackgroundColor - In the implementation block
@property (assign,nonatomic) double height;                                 //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets focusMargin;                      //@synthesize focusMargin=_focusMargin - In the implementation block
@property (assign,nonatomic) double maxHeight;                              //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double maxWidth;                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) double minHeight;                              //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double minWidth;                               //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) double width;                                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                      //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,copy) NSString * focusAlign;                           //@synthesize focusAlign=_focusAlign - In the implementation block
@property (assign,nonatomic) double lineSpacing;                            //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) long long alignment;                           //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long contentAlignment;                    //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                      //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) long long position;                            //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL acceptsFocus;                             //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                             //@synthesize centerGrowth=_centerGrowth - In the implementation block
@property (nonatomic,copy) NSString * highlightStyle;                       //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,nonatomic) CGAffineTransform focusTransform;              //@synthesize focusTransform=_focusTransform - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(Class)layoutClassForElement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setGroup:(NSString *)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(NSString *)group;
-(double)width;
-(double)height;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)minWidth;
-(void)setMinWidth:(double)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(UIEdgeInsets)margin;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(BOOL)acceptsFocus;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(NSString *)highlightStyle;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(BOOL)centerGrowth;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(CGAffineTransform)focusTransform;
-(UIColor *)darkTintColor;
-(void)setHighlightStyle:(NSString *)arg1 ;
-(UIEdgeInsets)focusMargin;
-(void)setFocusMargin:(UIEdgeInsets)arg1 ;
-(void)setFocusAlign:(NSString *)arg1 ;
-(void)setProgressStyle:(NSString *)arg1 ;
-(NSString *)focusAlign;
-(NSString *)progressStyle;
-(/*^block*/id)tv_layoutPropertySetterForStyle:(id)arg1 ;
-(/*^block*/id)tv_layoutPropertyGetterForStyle:(id)arg1 ;
-(void)setDarkTintColor:(UIColor *)arg1 ;
-(void)setDarkBackgroundColor:(UIColor *)arg1 ;
-(void)setFocusTransform:(CGAffineTransform)arg1 ;
-(double)defaultFocusSizeIncrease;
-(UIColor *)darkBackgroundColor;
@end

