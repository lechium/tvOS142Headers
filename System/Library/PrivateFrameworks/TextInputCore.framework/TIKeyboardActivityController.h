/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityControlling.h>
#import <libobjc.A.dylib/TIKeyboardApplicationStateResponses.h>

@protocol OS_dispatch_source, OS_os_transaction;
@class NSObject, NSTimer, NSHashTable, NSString;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {

	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	BOOL _isDirty;
	NSObject*<OS_os_transaction> _isDirtyTransaction;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;

}

@property (assign,nonatomic) BOOL isDirty;                                                 //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> isDirtyTransaction;              //@synthesize isDirtyTransaction=_isDirtyTransaction - In the implementation block
@property (nonatomic,retain) NSTimer * inactivityTimer;                                    //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long activityState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)singletonInstance;
+(double)keyboardIdleTimeoutInterval;
+(double)defaultKeyboardIdleTimeoutInterval;
+(void)setSharedController:(id)arg1 ;
+(void)setKeyboardIdleTimeoutInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isDirty;
-(NSHashTable *)observers;
-(void)releaseInputManagers;
-(void)addActivityObserver:(id)arg1 ;
-(void)removeActivityObserver:(id)arg1 ;
-(unsigned long long)activityState;
-(void)keyboardAssertionsDidChange;
-(void)backgroundActivityAssertionsDidChange;
-(void)notifyTransitionWithContext:(id)arg1 ;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(id)createMemoryPressureSource;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(unsigned long long)getExcessMemoryInBytes;
-(void)updateActivityState;
-(BOOL)atexitHandler;
-(void)touchInactivityTimer;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setKeyboardDirtyIfNecessaryWithReason:(id)arg1 ;
-(BOOL)shouldBecomeDirty;
-(void)setKeyboardCleanIfNecessary;
-(BOOL)canGoEarlyClean;
-(BOOL)shouldBecomeClean;
-(void)setIsDirty:(BOOL)arg1 ;
-(NSObject*<OS_os_transaction>)isDirtyTransaction;
-(void)setIsDirtyTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSTimer *)inactivityTimer;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
@end
