//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SFAuthenticateAccountInfo, SFAuthenticateAccountsService;

@protocol SFAuthenticateAccountsServiceDelegate <NSObject>

@optional
- (void)authenticateAccountsService:(SFAuthenticateAccountsService *)arg1 didAuthenticateWithAccountInfo:(SFAuthenticateAccountInfo *)arg2;
- (void)authenticateAccountsService:(SFAuthenticateAccountsService *)arg1 didAttemptSignInWithAccountType:(unsigned int)arg2;
- (void)authenticateAccountsService:(SFAuthenticateAccountsService *)arg1 willAttemptSignInWithAccountType:(unsigned int)arg2;
- (_Bool)authenticateAccountsService:(SFAuthenticateAccountsService *)arg1 shouldSignInAccounts:(NSArray *)arg2;
@end
