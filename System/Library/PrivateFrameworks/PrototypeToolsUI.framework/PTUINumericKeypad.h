/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeToolsUI/PrototypeToolsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_KeypadButtonTarget.h>

@protocol PTUINumericKeypadDelegate;
@class UILabel, NSArray, _KeypadButton, _KeypadDismissButton, UIView, NSMutableArray, NSNumber, NSString;

@interface PTUINumericKeypad : UIView <_KeypadButtonTarget> {

	id<PTUINumericKeypadDelegate> _delegate;
	BOOL _showing;
	UILabel* _valueLabel;
	NSArray* _digitButtons;
	_KeypadButton* _dotButton;
	_KeypadButton* _signButton;
	_KeypadButton* _clearButton;
	_KeypadButton* _backspaceButton;
	_KeypadDismissButton* _dismissButton;
	UIView* _backgroundView;
	NSMutableArray* _digitsBeforeDot;
	NSMutableArray* _digitsAfterDot;
	BOOL _negative;
	BOOL _hasDot;
	NSNumber* _cachedNumberValue;
	NSString* _cachedStringValue;

}

@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,retain) NSString * stringValue; 
+(id)sharedKeypad;
-(id)init;
-(double)doubleValue;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)_backspace;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_flash;
-(void)layoutSubviews;
-(void)_clear;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)keyPress:(id)arg1 ;
-(void)_dismissButtonPress;
-(unsigned long long)_remainingAllowedDigits;
-(void)_updateDisplayedValue;
-(double)_layoutButtonRow:(id)arg1 atY:(double)arg2 ;
-(double)_layoutButtonRow:(id)arg1 atY:(double)arg2 stretch:(BOOL)arg3 ;
-(void)_appendDigit:(unsigned long long)arg1 ;
-(void)_appendDot;
-(void)_changeSign;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 forDelegate:(id)arg2 ;
@end

