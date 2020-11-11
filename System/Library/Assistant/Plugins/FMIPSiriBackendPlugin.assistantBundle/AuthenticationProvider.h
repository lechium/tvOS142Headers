/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMIPSiriBackendPlugin/FMClient.AuthenticationProviding.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AuthenticationProvider : NSObject <FMClient.AuthenticationProviding> {

	unsigned long long _autoRenewalLimit;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign,nonatomic) unsigned long long autoRenewalLimit;                   //@synthesize autoRenewalLimit=_autoRenewalLimit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)credentialWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutoRenewalLimit:(unsigned long long)arg1 ;
-(void)retryRenewCredentialsIfPossibleWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canAutoRenewCredentials;
-(unsigned long long)autoRenewalLimit;
-(void)renewCredentialsWithForce:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isManagedAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialDidFail:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

