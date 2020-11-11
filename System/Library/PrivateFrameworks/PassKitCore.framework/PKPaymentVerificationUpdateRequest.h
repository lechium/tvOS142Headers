/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest {

	NSString* _stepIdentifier;
	PKPaymentPass* _pass;
	PKVerificationChannel* _channel;

}

@property (nonatomic,copy) NSString * stepIdentifier;                      //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                         //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKVerificationChannel * channel;              //@synthesize channel=_channel - In the implementation block
-(PKVerificationChannel *)channel;
-(void)setChannel:(PKVerificationChannel *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 deviceData:(id)arg4 webService:(id)arg5 certChain:(id)arg6 devSigned:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
@end
