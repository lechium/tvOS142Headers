/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol _UITrackingGestureRecognizerDelegate;
@interface _UITrackingGestureRecognizer : UIGestureRecognizer {

	SCD_Struct_UI32 _flags;
	id<_UITrackingGestureRecognizerDelegate> _trackingDelegate;

}

@property (assign,nonatomic,__weak) id<_UITrackingGestureRecognizerDelegate> trackingDelegate;              //@synthesize trackingDelegate=_trackingDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_UITrackingGestureRecognizerDelegate>)trackingDelegate;
-(void)sendControlEvent:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)setTrackingDelegate:(id<_UITrackingGestureRecognizerDelegate>)arg1 ;
@end
