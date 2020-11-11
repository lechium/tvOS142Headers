/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest {

	NSString* _receiptServiceIdentifier;
	NSString* _receiptIdentifier;
	NSString* _cardNumberSuffix;

}

@property (nonatomic,readonly) NSString * receiptServiceIdentifier;              //@synthesize receiptServiceIdentifier=_receiptServiceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * receiptIdentifier;                     //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * cardNumberSuffix;                      //@synthesize cardNumberSuffix=_cardNumberSuffix - In the implementation block
-(NSString *)receiptIdentifier;
-(id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 cardNumberSuffix:(id)arg3 ;
-(void)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)receiptServiceIdentifier;
-(NSString *)cardNumberSuffix;
@end
