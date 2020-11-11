/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	NSString* _accountName;
	NSString* _bundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _itemID;
	NSString* _itemName;
	NSNumber* _purchaserDSID;
	NSNumber* _storeFront;
	NSString* _vendorName;

}

@property (copy) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (copy) NSString * itemName;                               //@synthesize itemName=_itemName - In the implementation block
@property (copy) NSNumber * purchaserDSID;                          //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (copy) NSNumber * storeFront;                             //@synthesize storeFront=_storeFront - In the implementation block
@property (copy) NSString * vendorName;                             //@synthesize vendorName=_vendorName - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)vendorName;
-(NSNumber *)itemID;
-(NSNumber *)purchaserDSID;
-(NSString *)accountName;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(long long)metadataType;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)itemName;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(NSNumber *)storeFront;
-(id)initWithBundleID:(id)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
@end
