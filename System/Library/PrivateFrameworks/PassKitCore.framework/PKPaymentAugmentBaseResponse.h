/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse {

	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;

}

@property (nonatomic,copy,readonly) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (nonatomic,readonly) long long cryptogramType;                             //@synthesize cryptogramType=_cryptogramType - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)cryptogramType;
-(NSData *)networkMerchantIdentifier;
@end

