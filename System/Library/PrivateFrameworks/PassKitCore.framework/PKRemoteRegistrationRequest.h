/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding> {

	BOOL _registerBroker;
	BOOL _registerPeerPayment;

}

@property (assign,nonatomic) BOOL registerBroker;                   //@synthesize registerBroker=_registerBroker - In the implementation block
@property (assign,nonatomic) BOOL registerPeerPayment;              //@synthesize registerPeerPayment=_registerPeerPayment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)remoteRegistrationRequestWithProtobuf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)protobuf;
-(BOOL)registerBroker;
-(void)setRegisterBroker:(BOOL)arg1 ;
-(BOOL)registerPeerPayment;
-(void)setRegisterPeerPayment:(BOOL)arg1 ;
-(BOOL)isEqualToRemoteRegistrationRequest:(id)arg1 ;
@end

