/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount, PKAccountPaymentFundingSource;

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding> {

	PKCurrencyAmount* _currencyAmount;
	PKAccountPaymentFundingSource* _fundingSource;

}

@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                          //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;              //@synthesize fundingSource=_fundingSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2 ;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
@end

