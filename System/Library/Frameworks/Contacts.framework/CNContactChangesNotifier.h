/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNScheduler;
@class CNContactStore, CNMutableMultiDictionary;

@interface CNContactChangesNotifier : NSObject {

	BOOL _observingNotification;
	id<CNScheduler> _resourceLock;
	id<CNScheduler> _workQueue;
	id<CNScheduler> _downstream;
	CNContactStore* _contactStore;
	CNMutableMultiDictionary* _registeredObservers;

}
+(id)sharedNotifier;
+(id)workQueue_createFetchersFromRegisteredObservers:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 ;
@end

