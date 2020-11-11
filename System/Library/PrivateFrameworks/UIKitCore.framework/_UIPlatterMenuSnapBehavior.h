/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _spring1;
	UIAttachmentBehavior* _spring2;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) CGPoint anchorPoint; 
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
@end

