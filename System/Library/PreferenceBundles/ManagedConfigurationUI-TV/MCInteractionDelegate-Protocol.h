//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCProfile, MCProfileConnection, NSArray, NSError, NSString;

@protocol MCInteractionDelegate <NSObject>
- (void)profileConnection:(MCProfileConnection *)arg1 didShowUserWarnings:(NSArray *)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(MCProfileConnection *)arg1;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishPreflightWithError:(NSError *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didFinishInstallationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestMAIDSignIn:(NSString *)arg2 personaID:(NSString *)arg3;
- (void)profileConnection:(MCProfileConnection *)arg1 didRequestUserInput:(NSArray *)arg2;

@optional
- (void)profileConnection:(MCProfileConnection *)arg1 didBeginInstallingNextProfile:(MCProfile *)arg2;
- (void)profileConnection:(MCProfileConnection *)arg1 didUpdateStatus:(NSString *)arg2;
@end

