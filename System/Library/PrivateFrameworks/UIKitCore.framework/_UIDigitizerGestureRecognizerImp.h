/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIDigitizerGestureRecognizerImpDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSTimer;

@interface _UIDigitizerGestureRecognizerImp : NSObject {

	id<_UIDigitizerGestureRecognizerImpDelegate> _delegate;
	double _minimumPressDuration;
	double _maximumPressDuration;
	long long _numberOfActiveTouches;
	double _pressEndToTouchBeginDuration;
	double _touchEndToPressEndDuration;
	double _touchEndTime;
	double _pressBeginTime;
	double _pressEndTime;
	double _lastRecognitionTime;
	NSTimer* _shortTimer;
	CGPoint _digitizerLocation;

}

@property (assign,nonatomic,__weak) id<_UIDigitizerGestureRecognizerImpDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                                               //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double maximumPressDuration;                                               //@synthesize maximumPressDuration=_maximumPressDuration - In the implementation block
@property (assign,nonatomic) CGPoint digitizerLocation;                                                 //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) long long numberOfActiveTouches;                                           //@synthesize numberOfActiveTouches=_numberOfActiveTouches - In the implementation block
@property (assign,nonatomic) double pressEndToTouchBeginDuration;                                       //@synthesize pressEndToTouchBeginDuration=_pressEndToTouchBeginDuration - In the implementation block
@property (assign,nonatomic) double touchEndToPressEndDuration;                                         //@synthesize touchEndToPressEndDuration=_touchEndToPressEndDuration - In the implementation block
@property (assign,nonatomic) double touchEndTime;                                                       //@synthesize touchEndTime=_touchEndTime - In the implementation block
@property (assign,nonatomic) double pressBeginTime;                                                     //@synthesize pressBeginTime=_pressBeginTime - In the implementation block
@property (assign,nonatomic) double pressEndTime;                                                       //@synthesize pressEndTime=_pressEndTime - In the implementation block
@property (assign,nonatomic) double lastRecognitionTime;                                                //@synthesize lastRecognitionTime=_lastRecognitionTime - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * shortTimer;                                               //@synthesize shortTimer=_shortTimer - In the implementation block
-(id<_UIDigitizerGestureRecognizerImpDelegate>)delegate;
-(void)setDelegate:(id<_UIDigitizerGestureRecognizerImpDelegate>)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)digitizerLocation;
-(void)setMaximumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(void)setDigitizerLocation:(CGPoint)arg1 ;
-(CGPoint)defaultDigitizerLocation;
-(void)_shortTimerFired:(id)arg1 ;
-(BOOL)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_senderOfPressesIsSoftwareRemoteWithEvent:(id)arg1 ;
-(double)maximumPressDuration;
-(long long)numberOfActiveTouches;
-(void)setNumberOfActiveTouches:(long long)arg1 ;
-(double)pressEndToTouchBeginDuration;
-(void)setPressEndToTouchBeginDuration:(double)arg1 ;
-(double)touchEndToPressEndDuration;
-(void)setTouchEndToPressEndDuration:(double)arg1 ;
-(double)touchEndTime;
-(void)setTouchEndTime:(double)arg1 ;
-(double)pressBeginTime;
-(void)setPressBeginTime:(double)arg1 ;
-(double)pressEndTime;
-(void)setPressEndTime:(double)arg1 ;
-(double)lastRecognitionTime;
-(void)setLastRecognitionTime:(double)arg1 ;
-(NSTimer *)shortTimer;
-(void)setShortTimer:(NSTimer *)arg1 ;
@end

