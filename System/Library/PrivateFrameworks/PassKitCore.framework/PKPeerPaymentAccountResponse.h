/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentAccount* _account;

}

@property (nonatomic,readonly) PKPeerPaymentAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentAccount *)account;
@end
