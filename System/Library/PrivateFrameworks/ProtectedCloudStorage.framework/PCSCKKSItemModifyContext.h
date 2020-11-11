/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@class NSString, NSData, NSDate, PCSMTT, NSObject, PCSLockAssertion;

@interface PCSCKKSItemModifyContext : NSObject {

	CFDictionaryRef _rollAttributes;
	BOOL _sync;
	BOOL _roll;
	BOOL _returnedExistingIdentity;
	int _retryLeftCount;
	PCSIdentitySetDataRef _set;
	PCSLogContextRef _log;
	long long _timeoutValue;
	NSString* _dsid;
	NSString* _service;
	PCSIdentityDataRef _currentIdentity;
	NSData* _currentItemReference;
	NSData* _existingItemReference;
	NSData* _existingItemSHA1;
	PCSIdentityDataRef _rollIdentity;
	NSData* _rollItemReference;
	NSData* _rollItemSHA1;
	NSDate* _server_NextRollDate;
	PCSMTT* _mtt;
	NSObject*<OS_os_transaction> _transaction;
	PCSLockAssertion* _lockAssertion;
	id _activityAssertion;

}

@property (retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (retain) PCSLockAssertion * lockAssertion;                      //@synthesize lockAssertion=_lockAssertion - In the implementation block
@property (retain) id activityAssertion;                                  //@synthesize activityAssertion=_activityAssertion - In the implementation block
@property (assign) PCSIdentitySetDataRef set;                             //@synthesize set=_set - In the implementation block
@property (assign) PCSLogContextRef log;                                  //@synthesize log=_log - In the implementation block
@property (assign) long long timeoutValue;                                //@synthesize timeoutValue=_timeoutValue - In the implementation block
@property (retain) NSString * dsid;                                       //@synthesize dsid=_dsid - In the implementation block
@property (retain) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (assign) PCSIdentityDataRef currentIdentity;                    //@synthesize currentIdentity=_currentIdentity - In the implementation block
@property (retain) NSData * currentItemReference;                         //@synthesize currentItemReference=_currentItemReference - In the implementation block
@property (retain) NSData * existingItemReference;                        //@synthesize existingItemReference=_existingItemReference - In the implementation block
@property (retain) NSData * existingItemSHA1;                             //@synthesize existingItemSHA1=_existingItemSHA1 - In the implementation block
@property (assign) PCSIdentityDataRef rollIdentity;                       //@synthesize rollIdentity=_rollIdentity - In the implementation block
@property (retain) NSData * rollItemReference;                            //@synthesize rollItemReference=_rollItemReference - In the implementation block
@property (retain) NSData * rollItemSHA1;                                 //@synthesize rollItemSHA1=_rollItemSHA1 - In the implementation block
@property (retain) NSDate * server_NextRollDate;                          //@synthesize server_NextRollDate=_server_NextRollDate - In the implementation block
@property (assign) BOOL sync;                                             //@synthesize sync=_sync - In the implementation block
@property (assign) BOOL roll;                                             //@synthesize roll=_roll - In the implementation block
@property (assign) int retryLeftCount;                                    //@synthesize retryLeftCount=_retryLeftCount - In the implementation block
@property (readonly) PCSMTT * mtt;                                        //@synthesize mtt=_mtt - In the implementation block
@property (assign) BOOL returnedExistingIdentity;                         //@synthesize returnedExistingIdentity=_returnedExistingIdentity - In the implementation block
-(id)init;
-(void)dealloc;
-(PCSIdentitySetDataRef)set;
-(void)setSet:(PCSIdentitySetDataRef)arg1 ;
-(BOOL)sync;
-(void)setSync:(BOOL)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(PCSLogContextRef)log;
-(void)setLog:(PCSLogContextRef)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(BOOL)roll;
-(void)setRoll:(BOOL)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSData *)existingItemReference;
-(PCSIdentityDataRef)currentIdentity;
-(void)setReturnedExistingIdentity:(BOOL)arg1 ;
-(NSDate *)server_NextRollDate;
-(void)resetIdentities;
-(PCSMTT *)mtt;
-(long long)timeoutValue;
-(void)setRollItemReference:(NSData *)arg1 ;
-(void)setRollItemSHA1:(NSData *)arg1 ;
-(void)setRollIdentity:(PCSIdentityDataRef)arg1 ;
-(NSData *)rollItemReference;
-(NSData *)rollItemSHA1;
-(NSData *)existingItemSHA1;
-(void)setCurrentItemReference:(NSData *)arg1 ;
-(void)setCurrentIdentity:(PCSIdentityDataRef)arg1 ;
-(PCSIdentityDataRef)rollIdentity;
-(NSData *)currentItemReference;
-(void)setTimeoutValue:(long long)arg1 ;
-(void)setExistingItemReference:(NSData *)arg1 ;
-(void)setExistingItemSHA1:(NSData *)arg1 ;
-(void)setServer_NextRollDate:(NSDate *)arg1 ;
-(int)retryLeftCount;
-(void)setRetryLeftCount:(int)arg1 ;
-(BOOL)returnedExistingIdentity;
-(PCSLockAssertion *)lockAssertion;
-(void)setLockAssertion:(PCSLockAssertion *)arg1 ;
-(id)activityAssertion;
-(void)setActivityAssertion:(id)arg1 ;
@end

