/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/THThreadNetworkCredentialsBackingStore.h>

@class NSString;

@interface THThreadNetworkCredentialsKeychainBackingStore : NSObject <THThreadNetworkCredentialsBackingStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBackingStore;
-(void)retrieveRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_doFetchRecords:(id)arg1 error:(id*)arg2 ;
-(void)errorout:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeRecord:(id)arg1 waitForSync:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeRecordAndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveAllRecordsForNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveAllRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)storeRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteRecordWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

