/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKPaymentMethod, PKShippingMethod, PKPayment, PKServiceProviderPurchase, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKApplePayTrustSignature, PKAccountServicePaymentMethod;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam {

	long long _kind;
	id _object;

}

@property (nonatomic,retain) id object;                                                                  //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) long long kind;                                                             //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) CNContact * shippingContact; 
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod; 
@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
@property (nonatomic,readonly) PKPayment * payment; 
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase; 
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote; 
@property (nonatomic,readonly) PKDisbursementVoucher * disbursementVoucher; 
@property (nonatomic,readonly) PKApplePayTrustSignature * applePayTrustSignature; 
@property (nonatomic,readonly) PKAccountServicePaymentMethod * accountServicePaymentMethod; 
+(id)paramWithCallbackKind:(long long)arg1 object:(id)arg2 ;
-(id)description;
-(void)setObject:(id)arg1 ;
-(id)object;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(PKPaymentMethod *)paymentMethod;
-(PKServiceProviderPurchase *)purchase;
-(CNContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(PKPayment *)payment;
-(PKDisbursementVoucher *)disbursementVoucher;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
-(PKApplePayTrustSignature *)applePayTrustSignature;
-(PKAccountServicePaymentMethod *)accountServicePaymentMethod;
@end

