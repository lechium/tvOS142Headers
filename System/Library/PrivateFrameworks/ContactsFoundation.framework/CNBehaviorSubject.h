/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, CNObservableEvent, CNObservableContractEnforcement, NSString;

@interface CNBehaviorSubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	CNObservableEvent* _mostRecentEvent;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,retain) NSMutableArray * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CNObservableEvent * mostRecentEvent;                          //@synthesize mostRecentEvent=_mostRecentEvent - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                               //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeObserver:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id<CNScheduler>)resourceLock;
-(id)_addObserver:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(CNObservableEvent *)mostRecentEvent;
-(NSMutableArray *)observers;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)setMostRecentEvent:(CNObservableEvent *)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithSeed:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)subscribe:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
@end

