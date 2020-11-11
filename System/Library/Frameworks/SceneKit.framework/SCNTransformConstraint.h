/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNTransformConstraint : SCNConstraint
+(BOOL)supportsSecureCoding;
+(id)transformConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)positionConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)orientationConstraintInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initTransformInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initPositionInWorld:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initOrientationInWorldSpace:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
@end

