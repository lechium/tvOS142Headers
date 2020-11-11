/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerAngleLimit;
	double _upperAngleLimit;
	double _frictionTorque;
	double _rotationSpeed;
	CGPoint _anchor;

}

@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableLimits;              //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerAngleLimit;               //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;               //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
@property (assign,nonatomic) double frictionTorque;                //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) double rotationSpeed;                 //@synthesize rotationSpeed=_rotationSpeed - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(BOOL)shouldEnableLimits;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(double)frictionTorque;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
-(CGPoint)anchor;
@end

