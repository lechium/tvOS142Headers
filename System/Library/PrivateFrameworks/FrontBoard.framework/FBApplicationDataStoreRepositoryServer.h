/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSServiceFacility.h>
#import <libobjc.A.dylib/FBApplicationDataStoreRepositoryServerClientContextDelegate.h>

@protocol FBApplicationDataStoreRepository;
@class FBServiceClientAuthenticator, NSString;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate> {

	id<FBApplicationDataStoreRepository> _dataStore;
	FBServiceClientAuthenticator* _connectionAuthenticator;

}

@property (nonatomic,retain) id<FBApplicationDataStoreRepository> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_prerequisiteMilestones;
-(id<FBApplicationDataStoreRepository>)dataStore;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
-(void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4 ;
-(void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2 ;
-(void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2 ;
-(void)_handleSetChangesInterest:(id)arg1 context:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 context:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
@end
