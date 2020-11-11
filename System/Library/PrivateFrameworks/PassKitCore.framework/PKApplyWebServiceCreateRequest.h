/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest {

	NSURL* _applyServiceURL;
	unsigned long long _featureIdentifier;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) NSURL * applyServiceURL;                                                   //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                      //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSURL *)applyServiceURL;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
@end

