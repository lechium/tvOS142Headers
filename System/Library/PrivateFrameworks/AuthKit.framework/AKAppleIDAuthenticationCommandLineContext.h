/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AKAppleIDAuthenticationContext.h>
#import <libobjc.A.dylib/AKAppleIDServerAuthenticationUIProvider.h>

@class NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider> {

	NSNumber* _secondFactorCode;
	long long _verificationType;

}

@property (assign,nonatomic) long long verificationType;              //@synthesize verificationType=_verificationType - In the implementation block
@property (nonatomic,copy) NSNumber * secondFactorCode;               //@synthesize secondFactorCode=_secondFactorCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)_capabilityForUIDisplay;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithVerificationType:(long long)arg1 ;
-(NSNumber *)secondFactorCode;
-(void)setSecondFactorCode:(NSNumber *)arg1 ;
-(void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_mutableJSONRequestForPath:(id)arg1 ;
-(void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_parseHeaderTitleForPasscodeView:(id)arg1 ;
-(id)_promptForVerificationCodeWithSecureEntry:(BOOL)arg1 ;
-(id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2 ;
-(void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_promptUserForSelectionWithTrustedNumbers:(id)arg1 ;
-(id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2 ;
-(long long)verificationType;
-(id)_jsonDictionaryForData:(id)arg1 error:(id)arg2 ;
-(void)_handleServerUISMSSecondFactorWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mutableJSONRequestForURL:(id)arg1 ;
-(id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2 ;
-(void)setVerificationType:(long long)arg1 ;
@end

