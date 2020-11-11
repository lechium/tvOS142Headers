/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSmartPropertyFetcher.h>

@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {

	BOOL _ignoresNickname;
	BOOL _ignoresOrganization;
	NSSet* _mandatoryNameProperties;
	NSDictionary* _fallBackNamePropertyByNameKey;

}

@property (assign,nonatomic) BOOL ignoresNickname;                  //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) BOOL ignoresOrganization;              //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(BOOL)ignoresNickname;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(BOOL)ignoresOrganization;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
@end

