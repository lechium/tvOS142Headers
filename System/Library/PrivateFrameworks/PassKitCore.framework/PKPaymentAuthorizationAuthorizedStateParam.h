/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPaymentToken, PKPayment, PKServiceProviderPurchase, NSString, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKApplePayTrustSignature;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {

	PKPaymentToken* _paymentToken;
	PKPayment* _payment;
	PKServiceProviderPurchase* _purchase;
	NSString* _purchaseTransactionIdentifier;
	PKAuthorizedPeerPaymentQuote* _authorizedPeerPaymentQuote;
	PKDisbursementVoucher* _disbursementVoucher;
	PKApplePayTrustSignature* _applePayTrustSignature;
	NSString* _installmentAuthorizationToken;

}

@property (nonatomic,retain) PKPaymentToken * paymentToken;                                            //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                                      //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;                                     //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSString * purchaseTransactionIdentifier;                                   //@synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier - In the implementation block
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote;              //@synthesize authorizedPeerPaymentQuote=_authorizedPeerPaymentQuote - In the implementation block
@property (nonatomic,readonly) PKDisbursementVoucher * disbursementVoucher;                            //@synthesize disbursementVoucher=_disbursementVoucher - In the implementation block
@property (nonatomic,readonly) PKApplePayTrustSignature * applePayTrustSignature;                      //@synthesize applePayTrustSignature=_applePayTrustSignature - In the implementation block
@property (nonatomic,copy,readonly) NSString * installmentAuthorizationToken;                          //@synthesize installmentAuthorizationToken=_installmentAuthorizationToken - In the implementation block
+(id)paramWithPayment:(id)arg1 ;
+(id)paramWithPaymentToken:(id)arg1 ;
+(id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2 ;
+(id)paramWithDisbursementVoucher:(id)arg1 ;
+(id)paramWithAuthorizedPeerPaymentQuote:(id)arg1 ;
+(id)paramWithInstallmentAuthorizationToken:(id)arg1 ;
+(id)paramWithApplePayTrustSignature:(id)arg1 ;
-(id)description;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(PKPayment *)payment;
-(void)setPayment:(PKPayment *)arg1 ;
-(NSString *)purchaseTransactionIdentifier;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(NSString *)installmentAuthorizationToken;
-(PKPaymentToken *)paymentToken;
-(void)setPaymentToken:(PKPaymentToken *)arg1 ;
-(void)setPurchaseTransactionIdentifier:(NSString *)arg1 ;
@end

