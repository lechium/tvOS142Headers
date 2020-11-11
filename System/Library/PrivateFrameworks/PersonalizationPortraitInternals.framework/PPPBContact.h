/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPPBDateComponents, NSMutableArray, NSString;

@interface PPPBContact : PBCodable <NSCopying> {

	long long _createdAt;
	PPPBDateComponents* _birthday;
	int _displayNameOrder;
	NSMutableArray* _emailAddresses;
	NSString* _familyName;
	NSString* _givenName;
	NSString* _identifier;
	NSString* _middleName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickname;
	PPPBDateComponents* _nonGregorianBirthday;
	NSString* _organizationName;
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _postalAddresses;
	NSMutableArray* _socialProfiles;
	NSString* _sortingFamilyName;
	NSString* _sortingGivenName;
	SCD_Struct_PP2 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGivenName; 
@property (nonatomic,retain) NSString * givenName;                                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,retain) NSString * middleName;                                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyName; 
@property (nonatomic,retain) NSString * familyName;                                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname;                                    //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneNumbers;                          //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailAddresses;                        //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * postalAddresses;                       //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                            //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasBirthday; 
@property (nonatomic,retain) PPPBDateComponents * birthday;                          //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) BOOL hasNonGregorianBirthday; 
@property (nonatomic,retain) PPPBDateComponents * nonGregorianBirthday;              //@synthesize nonGregorianBirthday=_nonGregorianBirthday - In the implementation block
@property (nonatomic,retain) NSMutableArray * socialProfiles;                        //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) BOOL hasNamePrefix; 
@property (nonatomic,retain) NSString * namePrefix;                                  //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasNameSuffix; 
@property (nonatomic,retain) NSString * nameSuffix;                                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayNameOrder; 
@property (assign,nonatomic) int displayNameOrder;                                   //@synthesize displayNameOrder=_displayNameOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasSortingGivenName; 
@property (nonatomic,retain) NSString * sortingGivenName;                            //@synthesize sortingGivenName=_sortingGivenName - In the implementation block
@property (nonatomic,readonly) BOOL hasSortingFamilyName; 
@property (nonatomic,retain) NSString * sortingFamilyName;                           //@synthesize sortingFamilyName=_sortingFamilyName - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedAt; 
@property (assign,nonatomic) long long createdAt;                                    //@synthesize createdAt=_createdAt - In the implementation block
+(Class)emailAddressesType;
+(Class)phoneNumbersType;
+(Class)postalAddressesType;
+(Class)socialProfilesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(long long)createdAt;
-(void)setCreatedAt:(long long)arg1 ;
-(BOOL)hasCreatedAt;
-(BOOL)hasNickname;
-(NSMutableArray *)phoneNumbers;
-(NSMutableArray *)emailAddresses;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)hasMiddleName;
-(BOOL)hasNamePrefix;
-(BOOL)hasNameSuffix;
-(NSMutableArray *)postalAddresses;
-(PPPBDateComponents *)birthday;
-(void)clearEmailAddresses;
-(void)addEmailAddresses:(id)arg1 ;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(void)clearPhoneNumbers;
-(void)addPhoneNumbers:(id)arg1 ;
-(id)phoneNumbersAtIndex:(unsigned long long)arg1 ;
-(void)clearPostalAddresses;
-(void)addPostalAddresses:(id)arg1 ;
-(id)postalAddressesAtIndex:(unsigned long long)arg1 ;
-(void)setBirthday:(PPPBDateComponents *)arg1 ;
-(BOOL)hasBirthday;
-(unsigned long long)emailAddressesCount;
-(PPPBDateComponents *)nonGregorianBirthday;
-(void)setNonGregorianBirthday:(PPPBDateComponents *)arg1 ;
-(BOOL)hasNonGregorianBirthday;
-(unsigned long long)phoneNumbersCount;
-(void)setPostalAddresses:(NSMutableArray *)arg1 ;
-(unsigned long long)postalAddressesCount;
-(NSMutableArray *)socialProfiles;
-(void)setSocialProfiles:(NSMutableArray *)arg1 ;
-(int)displayNameOrder;
-(void)setDisplayNameOrder:(int)arg1 ;
-(NSString *)sortingGivenName;
-(NSString *)sortingFamilyName;
-(BOOL)hasGivenName;
-(BOOL)hasFamilyName;
-(void)clearSocialProfiles;
-(void)addSocialProfiles:(id)arg1 ;
-(unsigned long long)socialProfilesCount;
-(id)socialProfilesAtIndex:(unsigned long long)arg1 ;
-(void)setHasDisplayNameOrder:(BOOL)arg1 ;
-(BOOL)hasDisplayNameOrder;
-(BOOL)hasSortingGivenName;
-(BOOL)hasSortingFamilyName;
-(void)setHasCreatedAt:(BOOL)arg1 ;
-(void)setSortingGivenName:(NSString *)arg1 ;
-(void)setSortingFamilyName:(NSString *)arg1 ;
@end

