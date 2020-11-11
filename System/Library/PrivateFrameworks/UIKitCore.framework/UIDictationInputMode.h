/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UISpecializedInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UISpecializedInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _currentInputModeForDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                       //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;              //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
+(BOOL)currentInputModeSupportsDictation;
-(void)dealloc;
-(Class)viewControllerClass;
-(BOOL)includeBarHeight;
-(UITouch *)triggeringTouch;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
@end
