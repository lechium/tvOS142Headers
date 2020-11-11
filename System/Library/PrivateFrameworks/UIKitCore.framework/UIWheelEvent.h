/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIEvent {

	long long _recentScrollDistance;
	NSMutableArray* _recentScrollEvents;
	long long lastSubtype;

}
-(long long)type;
-(long long)subtype;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_canHaveVelocity;
-(double)_wheelVelocity;
@end
