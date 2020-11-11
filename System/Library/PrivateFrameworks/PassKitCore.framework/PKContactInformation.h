/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding> {

	NSArray* _postalAddresses;
	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;

}

@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;                 //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_keychainWrapper;
+(id)contactInformationFromKeychain;
+(void)saveContactInformationToKeychain:(id)arg1 ;
+(void)deleteContactInformationFromKeychain;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(NSArray *)postalAddresses;
-(id)keychainData;
-(id)initWithKeychainData:(id)arg1 ;
-(id)initWithPostalAddresses:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 ;
@end

