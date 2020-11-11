/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject {

	ACAccount* _account;
	NSDictionary* _authenticationResults;

}

@property (nonatomic,readonly) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * authenticationResults;              //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) unsigned long long credentialSource; 
+(id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 options:(id)arg3 ;
-(ACAccount *)account;
-(unsigned long long)credentialSource;
-(NSDictionary *)authenticationResults;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 options:(id)arg3 ;
-(id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4 ;
@end

