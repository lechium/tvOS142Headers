/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContactFieldConfiguration;

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding> {

	PKContactFieldConfiguration* _givenNameFieldConfiguration;
	PKContactFieldConfiguration* _familyNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticGivenNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticFamilyNameFieldConfiguration;

}

@property (nonatomic,readonly) PKContactFieldConfiguration * givenNameFieldConfiguration;                       //@synthesize givenNameFieldConfiguration=_givenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * familyNameFieldConfiguration;                      //@synthesize familyNameFieldConfiguration=_familyNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticGivenNameFieldConfiguration;               //@synthesize phoneticGivenNameFieldConfiguration=_phoneticGivenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticFamilyNameFieldConfiguration;              //@synthesize phoneticFamilyNameFieldConfiguration=_phoneticFamilyNameFieldConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKContactFieldConfiguration *)givenNameFieldConfiguration;
-(PKContactFieldConfiguration *)familyNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticGivenNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticFamilyNameFieldConfiguration;
@end

