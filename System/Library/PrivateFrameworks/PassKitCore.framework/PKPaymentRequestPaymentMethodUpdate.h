/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, PKPeerPaymentQuote, NSString;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _errors;
	PKPeerPaymentQuote* _peerPaymentQuote;
	NSString* _installmentGroupIdentifier;

}

@property (nonatomic,retain) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,copy) NSString * installmentGroupIdentifier;                //@synthesize installmentGroupIdentifier=_installmentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * errors;                                     //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSString *)installmentGroupIdentifier;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 ;
@end

