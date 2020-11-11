/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIFocusEnginePanGestureRecognizerDelegate.h>
#import <UIKitCore/_UIFocusFastScrollingRecognizerDelegate.h>

@protocol _UIFocusEventRecognizerDelegate;
@class _UIFocusEnginePanGestureRecognizer, UITapGestureRecognizer, _UIFocusPressGestureRecognizer, _UIFocusFastScrollingRecognizer, CADisplayLink, NSArray, _UIFocusEngineJoystickGestureRecognizer, NSTimer, _UIFocusMovementInfo, UIScrollView, UIView, UIMoveEvent, _UIFocusEffectsController, NSString;

@interface _UIFocusEventRecognizer : NSObject <UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate> {

	_UIFocusEnginePanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	_UIFocusPressGestureRecognizer* _selectGestureRecognizer;
	CGPoint _touchBeganPoint;
	CGPoint _lastKnownTouchPoint;
	CGPoint _previousPoints[5];
	int _numFrames;
	CGVector _progressAccumulator;
	CGVector _unlockedAccumulator;
	unsigned long long _failedPanGestureHeading;
	_UIFocusFastScrollingRecognizer* _fastScrollingRecognizer;
	CGPoint _firstMomentumTouchPoint;
	CGPoint _lastMomentumTouchPoint;
	CGPoint _momentumVelocity;
	double _momentumFriction;
	unsigned long long _focusUpdateCountSinceLastPanBegan;
	CADisplayLink* _momentumDisplayLink;
	NSArray* _remoteGestures;
	_UIFocusEngineJoystickGestureRecognizer* _joystickGestureRecognizer;
	NSTimer* _joystickModeExitTimer;
	NSTimer* _joystickModeRepeatTimer;
	double _previousJoystickFocusMovementTime;
	double _previousJoystickRegionEntryTime;
	unsigned long long _joystickRepeatingHeading;
	CADisplayLink* _joystickFocusDirectionDisplayLink;
	_UIFocusMovementInfo* _previousJoystickFocusMovementInfo;
	long long _joystickRepeatCount;
	UIScrollView* _lastScrolledScroll;
	double _lastEdgeScrollEdgeValue;
	unsigned long long _inputType;
	struct {
		unsigned isEligibleToCrossSpeedBump : 1;
		unsigned isContinuingTouchWithMomentum : 1;
		unsigned isPerformingJoystickRollback : 1;
		unsigned isJoystickInRepeatMode : 1;
		unsigned isPendingJoystickRepeat : 1;
		unsigned isFastScrolling : 1;
		unsigned shouldApplyAcceleration : 1;
	}  _flags;
	BOOL _enabled;
	BOOL _supportsFastScrolling;
	UIView* _owningView;
	id<_UIFocusEventRecognizerDelegate> _delegate;
	UIView* _viewForTouchDeferredFocus;
	UIMoveEvent* _moveEvent;
	_UIFocusEffectsController* _motionEffectsController;

}

@property (setter=_setMoveEvent:,getter=_moveEvent,nonatomic,retain) UIMoveEvent * moveEvent;                                    //@synthesize moveEvent=_moveEvent - In the implementation block
@property (getter=_motionEffectsController,nonatomic,readonly) _UIFocusEffectsController * motionEffectsController;              //@synthesize motionEffectsController=_motionEffectsController - In the implementation block
@property (nonatomic,__weak,readonly) UIView * owningView;                                                                       //@synthesize owningView=_owningView - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (assign,nonatomic) BOOL supportsFastScrolling;                                                                         //@synthesize supportsFastScrolling=_supportsFastScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusEventRecognizerDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForTouchDeferredFocus;                                                          //@synthesize viewForTouchDeferredFocus=_viewForTouchDeferredFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canSupportFastScrolling;
-(id)init;
-(void)dealloc;
-(id<_UIFocusEventRecognizerDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusEventRecognizerDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(BOOL)isEnabled;
-(NSArray *)keyCommands;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIView *)owningView;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(BOOL)_moveInDirection:(unsigned long long)arg1 withSearchInfo:(id)arg2 ;
-(BOOL)_moveInDirection:(unsigned long long)arg1 ;
-(BOOL)_moveWithEvent:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id)_focusSystemSceneComponent;
-(void)_addGestureRecognizers;
-(id)_moveEvent;
-(id)_uiktest_panGestureRecognizer;
-(void)_uiktest_setPanGestureRecognizer:(id)arg1 ;
-(void)_uiktest_handlePanGesture:(id)arg1 ;
-(BOOL)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)arg1 ;
-(void)_focusSystemEnabledStateDidChange:(id)arg1 ;
-(void)_removeGestureRecognizers;
-(void)_resetMomentum;
-(void)_resetJoystick;
-(void)_resetProgressAccumulator;
-(void)_resetFailedMovementHeading;
-(void)_createFastScrollingRecognizerIfNeeded;
-(void)_handleSelectGesture:(id)arg1 ;
-(void)_handleJoystickGesture:(id)arg1 ;
-(void)_handleButtonGesture:(id)arg1 ;
-(void)_resetPanGestureState;
-(void)_nextFocusContainer:(id)arg1 ;
-(void)_previousFocusContainer:(id)arg1 ;
-(void)_moveFocusContainerWithHeading:(unsigned long long)arg1 ;
-(id)_focusMovementSystem;
-(BOOL)_didRecognizeFocusMovementRequest:(id)arg1 ;
-(BOOL)_shouldAcceptInputType:(unsigned long long)arg1 ;
-(void)_setMoveEvent:(id)arg1 ;
-(void)_panGestureStart:(id)arg1 ;
-(void)_updatePanLocation:(CGPoint)arg1 reportedVelocity:(CGVector)arg2 ;
-(void)_panGestureEnd:(id)arg1 ;
-(int)_touchRegionForDigitizerLocation:(CGPoint)arg1 ;
-(void)_joystickGestureBegan:(id)arg1 ;
-(void)_joystickGestureUpdated:(id)arg1 ;
-(void)_joystickGestureEnded:(id)arg1 ;
-(id)_globalCoordinateSpace;
-(CGSize)_momentumReferenceSize;
-(void)_sendGestureBeginNotification;
-(CGSize)_touchSensitivityForItem:(id)arg1 ;
-(void)_recordMomentumForPoint:(CGPoint)arg1 ;
-(BOOL)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
-(void)_resetProgressAccumulatorWithRequest:(id)arg1 ;
-(void)_stopMomentumAndPerformRollback;
-(void)_continueTouchWithMomentum;
-(void)_joystickDisplayLinkHeartbeat:(id)arg1 ;
-(void)_handleJoystickRepeatMode:(id)arg1 ;
-(void)_handleJoystickTiltMode:(id)arg1 ;
-(void)_exitJoystickModeForReal:(id)arg1 ;
-(id)_focusMovementForJoystickPosition:(CGPoint)arg1 usingMinimumRadius:(double)arg2 focusMovementStyle:(long long)arg3 ;
-(BOOL)_joystickFocusMovement:(id)arg1 shouldBeConsideredEqualToFocusMovement:(id)arg2 ;
-(double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1 ;
-(BOOL)_joystickAttemptFocusMovementWithRequest:(id)arg1 ;
-(void)_joystickPerformRepeat:(id)arg1 ;
-(unsigned long long)_headingForJoystickPosition:(CGPoint)arg1 usingMinimumRadius:(double)arg2 ;
-(CGVector)_joystickVelocityForHeading:(unsigned long long)arg1 ;
-(void)_sendMomentumEndNotificationsAndAnimateRollback:(BOOL)arg1 ;
-(void)_momentumHeartbeat:(id)arg1 ;
-(void)_fastScrollingBeganInScrollView:(id)arg1 ;
-(void)_fastScrollingEnded;
-(void)fastScrollingRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2 ;
-(id)initWithOwningView:(id)arg1 ;
-(BOOL)_moveInDirection:(unsigned long long)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)_resetMotionEffects;
-(void)_setSupportsFastScrolling:(BOOL)arg1 ;
-(BOOL)supportsFastScrolling;
-(void)setSupportsFastScrolling:(BOOL)arg1 ;
-(UIView *)viewForTouchDeferredFocus;
-(void)setViewForTouchDeferredFocus:(UIView *)arg1 ;
-(id)_motionEffectsController;
@end

