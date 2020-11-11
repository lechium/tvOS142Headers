/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITextSelectionForceGesture.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@protocol _UINonEditableTextSelectionForceGestureDelegate;
@class _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController, UIKeyboardTaskQueue, NSString;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate> {

	id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardTextSelectionGestureController* _gestureController;

}

@property (nonatomic,retain) _UIKeyboardTextSelectionController * textSelectionController;                          //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,retain) _UIKeyboardTextSelectionGestureController * gestureController;                         //@synthesize gestureController=_gestureController - In the implementation block
@property (assign,nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIKeyboardTaskQueue *)taskQueue;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(id)initWithTextInput:(id)arg1 ;
-(void)setTextSelectionController:(_UIKeyboardTextSelectionController *)arg1 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(id<_UINonEditableTextSelectionForceGestureDelegate>)forceGestureDelegate;
-(void)setForceGestureDelegate:(id<_UINonEditableTextSelectionForceGestureDelegate>)arg1 ;
-(_UIKeyboardTextSelectionGestureController *)gestureController;
-(void)setGestureController:(_UIKeyboardTextSelectionGestureController *)arg1 ;
@end

