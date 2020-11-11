/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject {

	BOOL _attemptedVerificationStateReset;
	VSIdentityProviderRequest* _request;

}

@property (nonatomic,retain) VSIdentityProviderRequest * request;               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL attemptedVerificationStateReset;              //@synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset - In the implementation block
-(VSIdentityProviderRequest *)request;
-(void)setRequest:(VSIdentityProviderRequest *)arg1 ;
-(BOOL)attemptedVerificationStateReset;
-(void)setAttemptedVerificationStateReset:(BOOL)arg1 ;
@end

