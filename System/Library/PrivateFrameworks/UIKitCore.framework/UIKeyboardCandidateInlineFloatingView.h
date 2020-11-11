/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface UIKeyboardCandidateInlineFloatingView : UIView {

	BOOL _reducedWidth;
	BOOL _inlineRectIsVertical;
	int _position;
	int _adjustMode;
	NSString* _inlineText;
	double _maxX;
	double _extendedStateAdditionalHeight;
	CGSize _preferredSize;
	CGRect _inlineRect;
	CGRect _previousCollapsedFrame;
	UIEdgeInsets _extraInsets;
	UIEdgeInsets _cellPadding;

}

@property (nonatomic,copy) NSString * inlineText;                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                      //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) BOOL inlineRectIsVertical;                              //@synthesize inlineRectIsVertical=_inlineRectIsVertical - In the implementation block
@property (assign,nonatomic) double maxX;                                            //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) double extendedStateAdditionalHeight;                   //@synthesize extendedStateAdditionalHeight=_extendedStateAdditionalHeight - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                   //@synthesize preferredSize=_preferredSize - In the implementation block
@property (getter=isReducedWidth,nonatomic,readonly) BOOL reducedWidth;              //@synthesize reducedWidth=_reducedWidth - In the implementation block
@property (assign,nonatomic) int position;                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect previousCollapsedFrame;                          //@synthesize previousCollapsedFrame=_previousCollapsedFrame - In the implementation block
@property (assign,nonatomic) int adjustMode;                                         //@synthesize adjustMode=_adjustMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                               //@synthesize extraInsets=_extraInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;                               //@synthesize cellPadding=_cellPadding - In the implementation block
-(int)position;
-(void)setPosition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(double)maxX;
-(UIEdgeInsets)cellPadding;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(CGSize)preferredSize;
-(void)layoutSubviews;
-(id)traitCollection;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)setInlineText:(NSString *)arg1 ;
-(NSString *)inlineText;
-(BOOL)inlineRectIsVertical;
-(CGRect)inlineRect;
-(void)setExtendedStateAdditionalHeight:(double)arg1 ;
-(void)setAdjustMode:(int)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(BOOL)shouldExtendUpwards;
-(void)setInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 layout:(BOOL)arg4 ;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setInlineRectIsVertical:(BOOL)arg1 ;
-(CGRect)convertFromInputDelegateRect:(CGRect)arg1 ;
-(UIEdgeInsets)extraInsets;
-(double)extendedStateAdditionalHeight;
-(BOOL)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(int)adjustMode;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textWidth:(double)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(double)arg2 ;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 ;
-(BOOL)isReducedWidth;
-(CGRect)previousCollapsedFrame;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
@end

