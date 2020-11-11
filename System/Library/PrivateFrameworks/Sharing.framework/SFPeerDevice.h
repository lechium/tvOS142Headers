/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFPeerDevice : NSObject <NSSecureCoding> {

	BOOL _defaultPairedDevice;
	BOOL _validKey;
	NSString* _uniqueID;
	NSString* _modelIdentifier;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _name;
	NSString* _deviceColor;
	NSString* _enclosureColor;
	long long _keyCounter;

}

@property (copy) NSString * uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (copy) NSString * modelIdentifier;                                    //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (copy) NSString * productName;                                        //@synthesize productName=_productName - In the implementation block
@property (copy) NSString * productVersion;                                     //@synthesize productVersion=_productVersion - In the implementation block
@property (copy) NSString * productBuildVersion;                                //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (copy) NSString * deviceColor;                                        //@synthesize deviceColor=_deviceColor - In the implementation block
@property (copy) NSString * enclosureColor;                                     //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (getter=isDefaultPairedDevice) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign) BOOL validKey;                                               //@synthesize validKey=_validKey - In the implementation block
@property (assign) long long keyCounter;                                        //@synthesize keyCounter=_keyCounter - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSString *)productName;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(BOOL)isDefaultPairedDevice;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(NSString *)modelIdentifier;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(BOOL)validKey;
-(void)setValidKey:(BOOL)arg1 ;
-(long long)keyCounter;
-(void)setKeyCounter:(long long)arg1 ;
@end

