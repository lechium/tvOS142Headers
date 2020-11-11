/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIDelayedAction, UIResponder;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIDelayedAction* _secondDelayTimer;
	BOOL _secondDelayElapsed;
	UIResponder*<UITextInput> _textInput;
	double _secondDelay;
	id _userData;

}

@property (assign,nonatomic,__weak) UIResponder*<UITextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                                      //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) BOOL secondDelayElapsed;                               //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic,__weak) id userData;                                      //@synthesize userData=_userData - In the implementation block
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setUserData:(id)arg1 ;
-(id)userData;
-(void)_resetGestureRecognizer;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(void)startTimer;
-(void)clearTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(void)setSecondDelay:(double)arg1 ;
-(BOOL)secondDelayElapsed;
@end

