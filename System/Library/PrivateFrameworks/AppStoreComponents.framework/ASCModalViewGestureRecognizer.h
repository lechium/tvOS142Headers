/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIView, NSMutableSet;

@interface ASCModalViewGestureRecognizer : UIGestureRecognizer {

	UIView* _targetView;
	NSMutableSet* _activeTouches;

}

@property (nonatomic,readonly) NSMutableSet * activeTouches;              //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,readonly) UIView * targetView;                       //@synthesize targetView=_targetView - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(UIView *)targetView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSMutableSet *)activeTouches;
-(BOOL)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3 ;
-(id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

