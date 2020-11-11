/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiter.h>

@protocol OS_dispatch_source;
@class NSHashTable, NSObject, NSString;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter> {

	BOOL _foreground;
	BOOL _enteringForeground;
	BOOL _enteringForegroundExpired;
	BOOL _active;
	SCD_Struct_PK5 _foregroundActiveState;
	unsigned _deactivationReasons;
	NSHashTable* _observers;
	NSHashTable* _deactivationObservers;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_source> _enteringForegroundTimeout;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(SCD_Struct_PK5)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)willResignActive;
-(void)didEnterBackground;
-(void)didBecomeActive;
-(void)_willAddDeactivationReasonNotification:(id)arg1 ;
-(void)_didRemoveDeactivationReasonNotification:(id)arg1 ;
-(void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1 ;
-(void)_beginEnteringForegroundTimer;
-(void)willEnterForegroundPrelude;
-(void)willEnterForegroundPostlude;
-(void)willTerminate;
-(unsigned)registerDeactivationObserver:(id)arg1 ;
-(void)unregisterDeactivationObserver:(id)arg1 ;
@end

