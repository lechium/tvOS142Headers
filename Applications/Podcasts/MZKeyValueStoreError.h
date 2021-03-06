//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface MZKeyValueStoreError : NSError
{
    NSString *_transactionDescription;	// 40 = 0x28
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100062bf8
+ (id)clientClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100062a64
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x00000001000628d0
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062868
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062800
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100062798
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x00000001000626ec
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006264c
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000625ac
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006250c
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006246c
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000623cc
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006232c
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006225c
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006218c
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x0000000100061fec
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0000000100061e84
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100061de4
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100061d44
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010006142c
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100061314
+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00000001000610e8
- (void).cxx_destruct;	// IMP=0x0000000100062da8
@property(copy, nonatomic) NSString *transactionDescription; // @synthesize transactionDescription=_transactionDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100061068
- (double)retrySeconds;	// IMP=0x0000000100060fe8
- (id)currentStoreAccountKey;	// IMP=0x0000000100060f8c
- (id)previousStoreAccountKey;	// IMP=0x0000000100060f30
- (_Bool)isTransactionMissingInformationError;	// IMP=0x0000000100060f08
- (_Bool)isTransactionCancelledError;	// IMP=0x0000000100060ee0
- (_Bool)isClampError;	// IMP=0x0000000100060ea4
- (_Bool)isRecoverableError;	// IMP=0x0000000100060e44
- (_Bool)isAccountsChangedError;	// IMP=0x0000000100060e10
- (_Bool)isAuthenticationError;	// IMP=0x0000000100060de8
- (id)description;	// IMP=0x0000000100060c9c

@end

