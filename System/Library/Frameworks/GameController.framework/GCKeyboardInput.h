/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {

	NSArray* _keys;
	NSSet* _allCodes;
	BOOL _isActive;
	int _numberOfKeysPressed;
	/*^block*/id _keyChangedHandler;

}

@property (nonatomic,copy) id keyChangedHandler;                                       //@synthesize keyChangedHandler=_keyChangedHandler - In the implementation block
@property (getter=isAnyKeyPressed,nonatomic,readonly) BOOL anyKeyPressed; 
-(id)name;
-(id)init;
-(void)commonInit;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(id)handlerQueue;
-(id)initWithController:(id)arg1 ;
-(id)productCategory;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(BOOL)hasButton:(long long)arg1 ;
-(id)buttonForKeyCode:(long long)arg1 ;
-(id)setElementValuesFromKeyboardInput:(id)arg1 ;
-(BOOL)shouldFilterInternalEvent:(IOHIDEventRef)arg1 ;
-(void)setKeyValue:(long long)arg1 down:(BOOL)arg2 ;
-(BOOL)isAnyKeyPressed;
-(void)setStateFromKeyboardInput:(id)arg1 ;
-(id)keyChangedHandler;
-(void)setKeyChangedHandler:(id)arg1 ;
@end

