//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAccountService-Protocol.h"
#import "GKAccountServicePrivate-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate>
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x0000000100095c40
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100095b68
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x0000000100095ad8
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100099e70
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000100099d74
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100099af4
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010009983c
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100099110
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100098bdc
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098ab0
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x0000000100098984
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098858
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x000000010009872c
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098600
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00000001000984d4
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000983a8
- (oneway void)authenticationCancelled;	// IMP=0x0000000100098298
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098178
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098058
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100097ed8
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100097d9c
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100097c74
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100097b10
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000979ac
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 usingFastPath:(_Bool)arg4 displayAuthUI:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100097844
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100097810
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 displayAuthUI:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100096d38
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100096d08
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100096a88
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009662c
- (oneway void)authenticationWasCancelled;	// IMP=0x000000010009651c
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x00000001000961d4
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100095e8c
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100095d18
- (void)dealloc;	// IMP=0x0000000100095a68
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x000000010009594c
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x00000001000957d8
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100095700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

