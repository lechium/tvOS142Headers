/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIEvent.h>

@interface UIMoveEvent : UIEvent {

	long long _moveDirection;
	unsigned long long _focusHeading;

}

@property (assign,setter=_setMoveDirection:,nonatomic) long long _moveDirection;                     //@synthesize moveDirection=_moveDirection - In the implementation block
@property (assign,setter=_setFocusHeading:,nonatomic) unsigned long long _focusHeading;              //@synthesize focusHeading=_focusHeading - In the implementation block
-(long long)type;
-(unsigned long long)_focusHeading;
-(void)_setFocusHeading:(unsigned long long)arg1 ;
-(void)_setMoveDirection:(long long)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(long long)_moveDirection;
@end

