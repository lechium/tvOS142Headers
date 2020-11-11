/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITableViewContainerView.h>

@class NSArray;

@interface _UITableViewDropAnimationContainerView : _UITableViewContainerView {

	long long _activeDropAnimationCount;
	double _originalTargetCenterY;
	CGPoint __tableViewContainerOffsetFromTargetCenter;

}

@property (assign,nonatomic) long long activeDropAnimationCount;                             //@synthesize activeDropAnimationCount=_activeDropAnimationCount - In the implementation block
@property (assign,nonatomic) double originalTargetCenterY;                                   //@synthesize originalTargetCenterY=_originalTargetCenterY - In the implementation block
@property (nonatomic,readonly) NSArray * cells; 
@property (nonatomic,readonly) BOOL hasCompletedAllDropAnimations; 
@property (assign,nonatomic) CGPoint _tableViewContainerOffsetFromTargetCenter;              //@synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter - In the implementation block
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(NSArray *)cells;
-(void)setOriginalTargetCenterY:(double)arg1 ;
-(double)originalTargetCenterY;
-(void)set_tableViewContainerOffsetFromTargetCenter:(CGPoint)arg1 ;
-(void)updateOffsetFromTargetCenterIfNeeded;
-(long long)activeDropAnimationCount;
-(void)setActiveDropAnimationCount:(long long)arg1 ;
-(void)beginDropAnimation;
-(void)endDropAnimation;
-(BOOL)hasCompletedAllDropAnimations;
-(CGPoint)_tableViewContainerOffsetFromTargetCenter;
@end

