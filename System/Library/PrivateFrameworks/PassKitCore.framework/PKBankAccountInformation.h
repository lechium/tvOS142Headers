/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _accountNumber;
	NSString* _routingNumber;
	NSString* _bankName;
	NSString* _identifier;
	long long _type;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;              //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;              //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * bankName;                   //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)_classForType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(NSString *)bankName;
-(void)setBankName:(NSString *)arg1 ;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(void)deleteAllLocalBankInformation;
-(void)_commonDeleteAllBankInformation;
-(id)accountSuffix;
-(id)maskedAccountNumber;
@end

