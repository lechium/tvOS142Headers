/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject {

	long long _loginCancelledCount;
	ACAccountStore* _store;
	GKThreadsafeDictionary* _allCredentialsCache;

}

@property (nonatomic,retain) ACAccountStore * store;                                    //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * allCredentialsCache;              //@synthesize allCredentialsCache=_allCredentialsCache - In the implementation block
@property (assign) long long loginCancelledCount;                                       //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (readonly) BOOL loginDisabled; 
+(id)sharedController;
+(id)accessQueue;
+(void)migrateOldAccountInformation;
-(id)init;
-(void)dealloc;
-(void)setStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)store;
-(id)accessQueue;
-(BOOL)loginDisabled;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)accountStoreEmailDidChange:(id)arg1 ;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(GKThreadsafeDictionary *)allCredentialsCache;
-(void)invalidateCredentialCaches;
-(void)_transact:(/*^block*/id)arg1 complete:(/*^block*/id)arg2 ;
-(id)_transactAndWait:(/*^block*/id)arg1 ;
-(id)allCredentialsForEnvironment:(long long)arg1 ;
-(id)primaryCredentialForEnvironment:(long long)arg1 ;
-(long long)loginCancelledCount;
-(void)setCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)loginStatusForCredential:(id)arg1 ;
-(id)credentialForPlayer:(id)arg1 environment:(long long)arg2 ;
-(id)credentialForUsername:(id)arg1 environment:(long long)arg2 ;
-(id)credentialForAltDSID:(id)arg1 environment:(long long)arg2 ;
-(id)pushCredentialForEnvironment:(long long)arg1 ;
-(id)primaryCredentialForEnvironment:(long long)arg1 conformsToMultiUserRestrictions:(BOOL)arg2 ;
-(id)suggestedUsername;
-(void)setAllCredentialsCache:(GKThreadsafeDictionary *)arg1 ;
@end

