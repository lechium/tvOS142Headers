/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, NSMutableSet, NSCache, NSString, NSHashTable;

@interface TVSAccountsCache : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	ACAccountStore* _accountStore;
	NSMutableSet* _accountIdentifiers;
	NSCache* _accountsByIdentifier;
	NSString* _primaryAppleAccountIdentifier;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSMutableSet * accountIdentifiers;                     //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (nonatomic,retain) NSCache * accountsByIdentifier;                        //@synthesize accountsByIdentifier=_accountsByIdentifier - In the implementation block
@property (nonatomic,retain) NSString * primaryAppleAccountIdentifier;              //@synthesize primaryAppleAccountIdentifier=_primaryAppleAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)accountWithIdentifier:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)primaryAppleAccount;
-(NSMutableSet *)accountIdentifiers;
-(void)stashAccount:(id)arg1 ;
-(void)setAccountIdentifiers:(NSMutableSet *)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_workQueue_stashAccount:(id)arg1 ;
-(void)_workQueue_stashPrimaryAppleAccount:(id)arg1 ;
-(void)_workQueue_callObserversDidModifyPrimaryAppleAccountWithAccount:(id)arg1 ;
-(void)_workQueue_callObserversDidModifyAccountWithAccount:(id)arg1 ;
-(id)appleAccountWithAltDSID:(id)arg1 ;
-(NSCache *)accountsByIdentifier;
-(void)setAccountsByIdentifier:(NSCache *)arg1 ;
-(NSString *)primaryAppleAccountIdentifier;
-(void)setPrimaryAppleAccountIdentifier:(NSString *)arg1 ;
@end

