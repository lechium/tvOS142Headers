/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {

	int _iOSLegacyIdentifier;
	NSString* _identifier;
	NSString* _externalIdentifierString;

}

@property (nonatomic,readonly) int iOSLegacyIdentifier;                               //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;              //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)os_log;
+(id)makeIdentifier;
+(id)identifierProvider;
+(id)makeIdentifierString;
+(BOOL)requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(id)localAccount;
+(BOOL)requestAccountSyncWithDefaultOptions;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(NSString *)externalIdentifierString;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3 ;
@end

