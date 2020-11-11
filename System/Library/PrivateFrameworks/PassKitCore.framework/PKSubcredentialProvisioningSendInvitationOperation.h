/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningSharingSessionOperation.h>

@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingInvitation, PKAppletSubcredential, PKPaymentWebService, PKAppletSubcredentialSharingInvitationReceipt;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {

	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredential* _credential;
	PKPaymentWebService* _localDeviceWebService;
	PKPaymentWebService* _remoteDeviceWebService;
	PKAppletSubcredentialSharingInvitationReceipt* _invitationReceipt;
	BOOL _hasFinished;

}
-(void)performOperation;
-(void)sendInvitation;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(id)userAuthDelegate;
-(void)sendInvitationWithAuth:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)initializeAccountAttestationIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)canAcceptInvitationWithCompletion:(/*^block*/id)arg1 ;
@end

