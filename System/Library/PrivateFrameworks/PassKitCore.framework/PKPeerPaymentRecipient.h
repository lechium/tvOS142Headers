/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSDate;

@interface PKPeerPaymentRecipient : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsFormalPaymentRequests;
	NSString* _identifier;
	unsigned long long _status;
	unsigned long long _statusReason;
	unsigned long long _receiveMethod;
	NSString* _receiveCurrency;
	NSDecimalNumber* _minimumReceiveAmount;
	NSDecimalNumber* _maximumReceiveAmount;
	NSDate* _cacheUntil;
	NSString* _phoneOrEmail;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long statusReason;                   //@synthesize statusReason=_statusReason - In the implementation block
@property (assign,nonatomic) unsigned long long receiveMethod;                  //@synthesize receiveMethod=_receiveMethod - In the implementation block
@property (nonatomic,copy) NSString * receiveCurrency;                          //@synthesize receiveCurrency=_receiveCurrency - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumReceiveAmount;              //@synthesize minimumReceiveAmount=_minimumReceiveAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumReceiveAmount;              //@synthesize maximumReceiveAmount=_maximumReceiveAmount - In the implementation block
@property (assign,nonatomic) BOOL allowsFormalPaymentRequests;                  //@synthesize allowsFormalPaymentRequests=_allowsFormalPaymentRequests - In the implementation block
@property (nonatomic,copy) NSDate * cacheUntil;                                 //@synthesize cacheUntil=_cacheUntil - In the implementation block
@property (nonatomic,copy) NSString * phoneOrEmail;                             //@synthesize phoneOrEmail=_phoneOrEmail - In the implementation block
@property (nonatomic,copy) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recipientWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)status;
-(NSString *)displayName;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setReceiveCurrency:(NSString *)arg1 ;
-(void)setPhoneOrEmail:(NSString *)arg1 ;
-(void)setAllowsFormalPaymentRequests:(BOOL)arg1 ;
-(NSString *)phoneOrEmail;
-(id)cacheableCopy;
-(unsigned long long)statusReason;
-(void)setStatusReason:(unsigned long long)arg1 ;
-(unsigned long long)receiveMethod;
-(void)setReceiveMethod:(unsigned long long)arg1 ;
-(NSString *)receiveCurrency;
-(NSDecimalNumber *)minimumReceiveAmount;
-(void)setMinimumReceiveAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)maximumReceiveAmount;
-(void)setMaximumReceiveAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)allowsFormalPaymentRequests;
-(NSDate *)cacheUntil;
-(void)setCacheUntil:(NSDate *)arg1 ;
@end

