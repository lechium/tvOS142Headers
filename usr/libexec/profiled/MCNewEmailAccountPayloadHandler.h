//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class DeliveryAccount, MailAccount, NSConditionLock, NSDictionary, NSError, NSString, NSThread;

@interface MCNewEmailAccountPayloadHandler : MCNewPayloadHandler
{
    NSConditionLock *_validationLock;	// 32 = 0x20
    NSThread *_validationThread;	// 40 = 0x28
    NSDictionary *_setAsideAccountInfo;	// 48 = 0x30
    _Bool _wasInstalledByMDM;	// 56 = 0x38
    NSString *_personaID;	// 64 = 0x40
    MailAccount *_incomingAccount;	// 72 = 0x48
    _Bool _incomingAccountUsesSSL;	// 80 = 0x50
    DeliveryAccount *_outgoingAccount;	// 88 = 0x58
    _Bool _outgoingAccountUsesSSL;	// 96 = 0x60
    _Bool _validationDone;	// 97 = 0x61
    _Bool _validationResult;	// 98 = 0x62
    NSError *_validationError;	// 104 = 0x68
    NSString *_incomingACAccountIdentifier;	// 112 = 0x70
    NSString *_outgoingACAccountIdentifier;	// 120 = 0x78
}

+ (id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;	// IMP=0x000000010002133c
+ (id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1;	// IMP=0x0000000100021254
+ (id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1;	// IMP=0x0000000100021144
- (void).cxx_destruct;	// IMP=0x00000001000259c0
@property(retain, nonatomic) NSString *outgoingACAccountIdentifier; // @synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier;
@property(retain, nonatomic) NSString *incomingACAccountIdentifier; // @synthesize incomingACAccountIdentifier=_incomingACAccountIdentifier;
- (void)unsetAside;	// IMP=0x00000001000258a0
- (void)setAside;	// IMP=0x00000001000254c0
- (void)remove;	// IMP=0x0000000100025410
- (void)_remove;	// IMP=0x00000001000251f4
- (id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id *)arg3;	// IMP=0x0000000100024fec
- (_Bool)isInstalled;	// IMP=0x0000000100024e0c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100024a70
- (id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(_Bool)arg3 personaID:(id)arg4;	// IMP=0x0000000100024110
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100023a78
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;	// IMP=0x00000001000237a0
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0000000100023560
- (void)_validateIncomingAccountOnThread;	// IMP=0x00000001000233ec
- (id)_outgoingAccountWithAccountInfo:(id)arg1;	// IMP=0x0000000100022f28
- (id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1;	// IMP=0x0000000100022954
- (id)_incomingAccountWithAccountInfo:(id)arg1;	// IMP=0x0000000100022314
- (id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x0000000100021428
- (id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100020e6c
- (id)_authSchemeForAuthenticationMethod:(id)arg1;	// IMP=0x0000000100020dac
- (id)userInputFields;	// IMP=0x0000000100020420
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x0000000100020378

@end

