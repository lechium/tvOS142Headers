/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol _UIGestureStudyParticipating <NSObject>
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@required
-(double)duration;
-(double)movement;
-(NSString *)eventName;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;

@end
