/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

@interface _UIDynamicCaretInput : UIView {

	CGContextRef _bitmapContext;
	long long _fadeCount;
	CGPoint _lastViewLoc;
	CGRect _inkedAreaOfBitmapContext;
	NSTimer* _fadeTimer;
	TIHandwritingStrokes* _accumulatedStrokes;
	UIDelayedAction* _committedAction;
	_UIDynamicCaretDot* _dotView;

}

@property (nonatomic,retain) NSTimer * fadeTimer;                                    //@synthesize fadeTimer=_fadeTimer - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * accumulatedStrokes;              //@synthesize accumulatedStrokes=_accumulatedStrokes - In the implementation block
@property (nonatomic,retain) UIDelayedAction * committedAction;                      //@synthesize committedAction=_committedAction - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretDot * dotView;                           //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,readonly) BOOL hasInk; 
@property (nonatomic,readonly) BOOL isInking; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)send;
-(void)log;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSTimer *)fadeTimer;
-(void)setFadeTimer:(NSTimer *)arg1 ;
-(double)inkWidth;
-(void)clearAndNotify:(BOOL)arg1 ;
-(void)committedStrokes;
-(void)setCommittedAction:(UIDelayedAction *)arg1 ;
-(void)setDotView:(_UIDynamicCaretDot *)arg1 ;
-(_UIDynamicCaretDot *)dotView;
-(TIHandwritingStrokes *)accumulatedStrokes;
-(void)clearFadeTimer;
-(void)setAccumulatedStrokes:(TIHandwritingStrokes *)arg1 ;
-(void)drawPoint:(CGPoint)arg1 ;
-(UIDelayedAction *)committedAction;
-(void)addInkPoint:(CGPoint)arg1 fromLastPoint:(BOOL)arg2 ;
-(void)_fadeInk;
-(void)endTouchAtPoint:(CGPoint)arg1 ;
-(BOOL)hasInk;
-(BOOL)isInking;
-(void)startTouchAtPoint:(CGPoint)arg1 ;
-(void)addTouchAtPoint:(CGPoint)arg1 ;
-(void)cancelTouchAtPoint:(CGPoint)arg1 ;
@end

