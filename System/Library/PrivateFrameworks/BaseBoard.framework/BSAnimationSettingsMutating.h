/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CAMediaTimingFunction;


@protocol BSAnimationSettingsMutating <NSObject>
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
@required
-(double)delay;
-(void)setDelay:(double)arg1;
-(void)setSpeed:(float)arg1;
-(void)setTimingFunction:(id)arg1;
-(void)setFrameInterval:(double)arg1;
-(CAMediaTimingFunction *)timingFunction;
-(double)frameInterval;
-(float)speed;

@end
