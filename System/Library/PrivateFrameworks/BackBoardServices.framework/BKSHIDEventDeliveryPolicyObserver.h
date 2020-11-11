/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventDeferringObserving.h>

@protocol BSInvalidatable;
@class BKSHIDEventObserver, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet, NSHashTable, NSString;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving> {

	BKSHIDEventObserver* _observer;
	id<BSInvalidatable> _observingAssertion;
	os_unfair_lock_s _lock;
	BKSHIDEventDisplay* _lock_display;
	BKSHIDEventDeferringEnvironment* _lock_environment;
	BKSHIDEventDeferringToken* _lock_token;
	NSSet* _lock_resolutions;
	BOOL _lock_canReceiveEvents;
	NSHashTable* _lock_observers;

}

@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringEnvironment * deferringEnvironment; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * deferringToken; 
@property (nonatomic,readonly) BOOL canReceiveEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(BOOL)_lock_canReceiveEvents;
-(void)deferringResolutionsChanged;
-(id)_initWithObserver:(id)arg1 ;
-(BKSHIDEventDisplay *)display;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setDeferringEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(BKSHIDEventDeferringToken *)deferringToken;
-(void)setDeferringToken:(BKSHIDEventDeferringToken *)arg1 ;
-(BOOL)canReceiveEvents;
-(id)_lock_updateStateWithBlock:(/*^block*/id)arg1 ;
@end
