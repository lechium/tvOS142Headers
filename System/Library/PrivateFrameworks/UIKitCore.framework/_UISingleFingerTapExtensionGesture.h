/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSMutableSet;

@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer {

	NSMutableSet* _trackedEvents;

}
-(long long)_modifierFlags;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(BOOL)_gestureCanBeginWithEvent:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
@end

