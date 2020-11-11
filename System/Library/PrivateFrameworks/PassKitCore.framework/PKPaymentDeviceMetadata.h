/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, CLLocation;

@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding> {

	NSString* _deviceName;
	NSNumber* _primaryJSBLSequenceCounter;
	NSString* _secureElementIdentifier;
	NSString* _uniqueDeviceIdentifier;
	NSNumber* _uniqueChipIdentifier;
	NSString* _serialNumber;
	NSString* _phoneNumber;
	NSString* _signedPhoneNumber;
	NSString* _signedPhoneNumberVersion;
	CLLocation* _location;

}

@property (nonatomic,copy) NSString * deviceName;                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSNumber * primaryJSBLSequenceCounter;                 //@synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                    //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueDeviceIdentifier;                     //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * uniqueChipIdentifier;                       //@synthesize uniqueChipIdentifier=_uniqueChipIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                               //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * signedPhoneNumber;                          //@synthesize signedPhoneNumber=_signedPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * signedPhoneNumberVersion;                   //@synthesize signedPhoneNumberVersion=_signedPhoneNumberVersion - In the implementation block
@property (nonatomic,copy) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (nonatomic,__weak,readonly) NSString * extensiveLatitude; 
@property (nonatomic,__weak,readonly) NSString * extensiveLongitude; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)deviceName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(NSNumber *)uniqueChipIdentifier;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)secureElementIdentifier;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)setPrimaryJSBLSequenceCounter:(NSNumber *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(NSString *)extensiveLatitude;
-(NSString *)extensiveLongitude;
-(BOOL)isEqualToPaymentDeviceMetadata:(id)arg1 ;
-(void)setUniqueChipIdentifier:(NSNumber *)arg1 ;
-(NSString *)signedPhoneNumber;
-(void)setSignedPhoneNumber:(NSString *)arg1 ;
-(NSString *)signedPhoneNumberVersion;
-(void)setSignedPhoneNumberVersion:(NSString *)arg1 ;
@end

