/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentDocumentSubmissionController.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@class PKPeerPaymentWebService, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentAccountResolutionController, NSString;

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController <PKPeerPaymentAccountResolutionControllerDelegate> {

	PKPeerPaymentWebService* _webService;
	PKPeerPaymentIdentityVerificationResponse* _identityVerificationResponse;
	PKPeerPaymentAccountResolutionController* _accountResolutionController;

}

@property (nonatomic,retain) PKPeerPaymentWebService * webService;                                                  //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentIdentityVerificationResponse * identityVerificationResponse;              //@synthesize identityVerificationResponse=_identityVerificationResponse - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccountResolutionController * accountResolutionController;                //@synthesize accountResolutionController=_accountResolutionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPeerPaymentWebService *)webService;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)setWebService:(PKPeerPaymentWebService *)arg1 ;
-(id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 ;
-(void)uploadID;
-(void)contactApplePressed;
-(PKPeerPaymentIdentityVerificationResponse *)identityVerificationResponse;
-(void)setIdentityVerificationResponse:(PKPeerPaymentIdentityVerificationResponse *)arg1 ;
-(PKPeerPaymentAccountResolutionController *)accountResolutionController;
-(void)setAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 ;
@end

