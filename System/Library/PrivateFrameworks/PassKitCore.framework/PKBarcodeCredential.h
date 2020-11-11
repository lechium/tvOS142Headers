/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKEncryptedDataObject;

@interface PKBarcodeCredential : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSDate* _expirationTimestamp;
	PKEncryptedDataObject* _value;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * expirationTimestamp;                 //@synthesize expirationTimestamp=_expirationTimestamp - In the implementation block
@property (nonatomic,retain) PKEncryptedDataObject * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(PKEncryptedDataObject *)value;
-(void)setValue:(PKEncryptedDataObject *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)asDictionary;
-(NSDate *)expirationTimestamp;
-(void)setExpirationTimestamp:(NSDate *)arg1 ;
@end

