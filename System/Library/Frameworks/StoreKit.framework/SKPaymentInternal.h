/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject <NSCopying> {

	NSString* _applicationUsername;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	NSDictionary* _requestParameters;
	BOOL _simulatesAskToBuyInSandbox;
	BOOL _isStoreOriginated;
	SKPaymentDiscount* _paymentDiscount;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
@end

