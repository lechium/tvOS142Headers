/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {

	BOOL _ignoreCache;
	NSString* _preferredLanguage;

}

@property (nonatomic,copy,readonly) NSString * preferredLanguage;              //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;                                 //@synthesize ignoreCache=_ignoreCache - In the implementation block
-(NSString *)preferredLanguage;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPreferredLanguage:(id)arg1 ;
-(BOOL)ignoreCache;
-(void)setIgnoreCache:(BOOL)arg1 ;
@end

