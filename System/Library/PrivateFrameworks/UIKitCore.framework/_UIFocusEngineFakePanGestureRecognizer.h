/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject {

	long long _state;
	CGPoint _digitizerLocation;
	CGPoint _velocity;

}

@property (assign,nonatomic) long long state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                       //@synthesize velocity=_velocity - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(CGPoint)digitizerLocation;
-(void)setDigitizerLocation:(CGPoint)arg1 ;
@end

