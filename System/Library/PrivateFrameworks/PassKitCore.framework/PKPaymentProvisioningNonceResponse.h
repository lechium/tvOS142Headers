/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentProvisioningNonceResponse : PKPaymentWebServiceResponse {

	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)nonce;
@end

