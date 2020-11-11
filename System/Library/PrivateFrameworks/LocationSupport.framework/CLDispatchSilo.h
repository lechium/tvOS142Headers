/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	double _currentLatchedAbsoluteTimestamp;
	BOOL _useCLPermissiveTimer;
	BOOL _isQueueSuspended;

}
-(id)debugDescription;
-(void)resume;
-(void)suspend;
-(id)operationQueue;
-(id)queue;
-(BOOL)isSuspended;
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(id)initWithUnderlyingQueue:(id)arg1 bePermissive:(BOOL)arg2 ;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(BOOL)inPermissiveMode;
-(void)updateLatchedAbsoluteTimestamp;
-(id)getTimeCoercibleVariantInstance;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initMain;
-(void)_setLatchedAbsoluteTimestamp:(double)arg1 ;
@end

