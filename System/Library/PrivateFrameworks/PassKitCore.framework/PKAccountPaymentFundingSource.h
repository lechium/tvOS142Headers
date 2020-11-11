/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;
	NSString* _accountSuffix;
	PKAccountPaymentFundingDetails* _fundingDetails;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountSuffix;                                     //@synthesize accountSuffix=_accountSuffix - In the implementation block
@property (nonatomic,copy) PKAccountPaymentFundingDetails * fundingDetails;              //@synthesize fundingDetails=_fundingDetails - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)fundingDetailsClassForFundingSourceType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)jsonString;
-(id)jsonDictionaryRepresentation;
-(id)bankAccountRepresentation;
-(void)setAccountSuffix:(NSString *)arg1 ;
-(PKAccountPaymentFundingDetails *)fundingDetails;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)displayDescription;
-(NSString *)accountSuffix;
-(void)setFundingDetails:(PKAccountPaymentFundingDetails *)arg1 ;
@end

