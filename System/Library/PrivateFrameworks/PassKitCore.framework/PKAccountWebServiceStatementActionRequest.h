/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceStatementActionRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _statementIdentifier;
	long long _action;

}

@property (nonatomic,copy) NSString * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * statementIdentifier;              //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (assign,nonatomic) long long action;                          //@synthesize action=_action - In the implementation block
-(NSURL *)baseURL;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
@end

