//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VSAccount, VSApplicationController, VSFailable, VSIdentityProvider, VSIdentityProviderAlert, VSIdentityProviderRequest, VSIdentityProviderRequestManager;

@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional
- (_Bool)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 requestsAlert:(VSIdentityProviderAlert *)arg2;
- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
@end

