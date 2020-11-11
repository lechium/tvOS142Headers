/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;

@interface PLPersistentHistoryChangeDistributor : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	PLCoreDataChangeMerger* _changeMerger;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSPersistentHistoryToken* _lastToken;
	PLChangeHandlingNotificationObserver* _notificationObserver;

}
-(void)dealloc;
-(void)invalidate;
-(void)stopObservingRemoteNotifications;
-(id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2 ;
-(void)startObservingRemoteNotifications;
-(void)_inq_startObservingRemoteNotifications;
-(void)handleRemoteNotificationOfType:(long long)arg1 withTransaction:(id)arg2 ;
-(void)distributeNewTransactionsSinceLastToken;
-(void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg1 xpcTransaction:(id)arg2 ;
-(id)fetchTransactionsSinceLastToken;
-(id)makeManagedObjectContext;
-(void)forceUserInterfaceReload;
-(void)distributeTransactions:(id)arg1 withXPCTransaction:(id)arg2 ;
-(id)localEventFromTransactions:(id)arg1 ;
@end

