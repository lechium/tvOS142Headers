/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIVelocityIntegratorDataSample : NSObject {

	double _timestamp;
	CGVector _translation;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(double)timestamp;
-(CGPoint)point;
-(void)setTimestamp:(double)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(CGVector)translation;
-(void)setTranslation:(CGVector)arg1 ;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2 ;
-(void)updateTimeToNow;
@end

