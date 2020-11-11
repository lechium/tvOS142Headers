/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSData, NSString, HKQuantity, NSNumber, NSArray, NSDateComponents;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDisabled;
	BOOL _shareDuringEmergency;
	NSDate* _isDisabledModifiedDate;
	NSDate* _shareDuringEmergencyModifiedDate;
	NSData* _pictureData;
	NSDate* _pictureDataModifiedDate;
	NSString* _name;
	NSDate* _nameModifiedDate;
	NSDate* _gmtBirthdate;
	NSDate* _gregorianBirthdayModifiedDate;
	NSString* _primaryLanguageCode;
	NSDate* _primaryLanguageCodeModifiedDate;
	HKQuantity* _height;
	NSDate* _heightModifiedDate;
	HKQuantity* _weight;
	NSDate* _weightModifiedDate;
	long long _bloodType;
	NSDate* _bloodTypeModifiedDate;
	NSNumber* _isOrganDonor;
	NSDate* _isOrganDonorModifiedDate;
	NSArray* _emergencyContacts;
	NSDate* _emergencyContactsModifiedDate;
	NSArray* _clinicalContacts;
	NSDate* _clinicalContactsModifiedDate;
	NSString* _medicalConditions;
	NSDate* _medicalConditionsModifiedDate;
	NSString* _medicalNotes;
	NSDate* _medicalNotesModifiedDate;
	NSString* _allergyInfo;
	NSDate* _allergyInfoModifiedDate;
	NSString* _medicationInfo;
	NSDate* _medicationInfoModifiedDate;
	NSDate* _birthdate;
	NSDate* _legacyDateSaved;
	long long _schemaVersion;

}

@property (nonatomic,retain) NSDate * birthdate;                                     //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,retain) NSDate * gmtBirthdate;                                  //@synthesize gmtBirthdate=_gmtBirthdate - In the implementation block
@property (nonatomic,retain) NSDate * legacyDateSaved;                               //@synthesize legacyDateSaved=_legacyDateSaved - In the implementation block
@property (assign,nonatomic) long long schemaVersion;                                //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSDate * isDisabledModifiedDate;                        //@synthesize isDisabledModifiedDate=_isDisabledModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * shareDuringEmergencyModifiedDate;              //@synthesize shareDuringEmergencyModifiedDate=_shareDuringEmergencyModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * pictureDataModifiedDate;                       //@synthesize pictureDataModifiedDate=_pictureDataModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * nameModifiedDate;                              //@synthesize nameModifiedDate=_nameModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * gregorianBirthdayModifiedDate;                 //@synthesize gregorianBirthdayModifiedDate=_gregorianBirthdayModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * primaryLanguageCodeModifiedDate;               //@synthesize primaryLanguageCodeModifiedDate=_primaryLanguageCodeModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * heightModifiedDate;                            //@synthesize heightModifiedDate=_heightModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * weightModifiedDate;                            //@synthesize weightModifiedDate=_weightModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * bloodTypeModifiedDate;                         //@synthesize bloodTypeModifiedDate=_bloodTypeModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * isOrganDonorModifiedDate;                      //@synthesize isOrganDonorModifiedDate=_isOrganDonorModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * emergencyContactsModifiedDate;                 //@synthesize emergencyContactsModifiedDate=_emergencyContactsModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * clinicalContactsModifiedDate;                  //@synthesize clinicalContactsModifiedDate=_clinicalContactsModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * medicalConditionsModifiedDate;                 //@synthesize medicalConditionsModifiedDate=_medicalConditionsModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * medicalNotesModifiedDate;                      //@synthesize medicalNotesModifiedDate=_medicalNotesModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * allergyInfoModifiedDate;                       //@synthesize allergyInfoModifiedDate=_allergyInfoModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * medicationInfoModifiedDate;                    //@synthesize medicationInfoModifiedDate=_medicationInfoModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved; 
@property (assign,nonatomic) BOOL isDisabled;                                        //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic) BOOL shareDuringEmergency;                              //@synthesize shareDuringEmergency=_shareDuringEmergency - In the implementation block
@property (nonatomic,copy) NSData * pictureData;                                     //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDateComponents * gregorianBirthday; 
@property (nonatomic,copy) NSString * primaryLanguageCode;                           //@synthesize primaryLanguageCode=_primaryLanguageCode - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                                    //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long bloodType;                                    //@synthesize bloodType=_bloodType - In the implementation block
@property (nonatomic,retain) NSNumber * isOrganDonor;                                //@synthesize isOrganDonor=_isOrganDonor - In the implementation block
@property (nonatomic,copy) NSArray * emergencyContacts;                              //@synthesize emergencyContacts=_emergencyContacts - In the implementation block
@property (nonatomic,copy) NSArray * clinicalContacts;                               //@synthesize clinicalContacts=_clinicalContacts - In the implementation block
@property (nonatomic,copy) NSString * medicalConditions;                             //@synthesize medicalConditions=_medicalConditions - In the implementation block
@property (nonatomic,copy) NSString * medicalNotes;                                  //@synthesize medicalNotes=_medicalNotes - In the implementation block
@property (nonatomic,copy) NSString * allergyInfo;                                   //@synthesize allergyInfo=_allergyInfo - In the implementation block
@property (nonatomic,copy) NSString * medicationInfo;                                //@synthesize medicationInfo=_medicationInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)schemaVersion;
-(HKQuantity *)weight;
-(void)setWeight:(HKQuantity *)arg1 ;
-(HKQuantity *)height;
-(void)setHeight:(HKQuantity *)arg1 ;
-(void)setSchemaVersion:(long long)arg1 ;
-(id)merge:(id)arg1 ;
-(BOOL)isDisabled;
-(void)setIsDisabled:(BOOL)arg1 ;
-(void)setPrimaryLanguageCode:(NSString *)arg1 ;
-(NSString *)primaryLanguageCode;
-(long long)bloodType;
-(void)setModificationDatesForUpdatedFieldsWithMedicalIDData:(id)arg1 ;
-(void)setDateSaved:(NSDate *)arg1 ;
-(void)setIsDisabledModifiedDate:(NSDate *)arg1 ;
-(void)setShareDuringEmergency:(BOOL)arg1 ;
-(void)setShareDuringEmergencyModifiedDate:(NSDate *)arg1 ;
-(void)setPictureData:(NSData *)arg1 ;
-(void)setPictureDataModifiedDate:(NSDate *)arg1 ;
-(void)setNameModifiedDate:(NSDate *)arg1 ;
-(void)setBirthdate:(NSDate *)arg1 ;
-(void)setGmtBirthdate:(NSDate *)arg1 ;
-(void)setGregorianBirthdayModifiedDate:(NSDate *)arg1 ;
-(void)setPrimaryLanguageCodeModifiedDate:(NSDate *)arg1 ;
-(void)setHeightModifiedDate:(NSDate *)arg1 ;
-(void)setWeightModifiedDate:(NSDate *)arg1 ;
-(void)setBloodType:(long long)arg1 ;
-(void)setBloodTypeModifiedDate:(NSDate *)arg1 ;
-(void)setIsOrganDonor:(NSNumber *)arg1 ;
-(void)setIsOrganDonorModifiedDate:(NSDate *)arg1 ;
-(void)setEmergencyContacts:(NSArray *)arg1 ;
-(void)setEmergencyContactsModifiedDate:(NSDate *)arg1 ;
-(void)setClinicalContacts:(NSArray *)arg1 ;
-(void)setClinicalContactsModifiedDate:(NSDate *)arg1 ;
-(void)setMedicalConditions:(NSString *)arg1 ;
-(void)setMedicalConditionsModifiedDate:(NSDate *)arg1 ;
-(void)setMedicalNotes:(NSString *)arg1 ;
-(void)setMedicalNotesModifiedDate:(NSDate *)arg1 ;
-(void)setAllergyInfo:(NSString *)arg1 ;
-(void)setAllergyInfoModifiedDate:(NSDate *)arg1 ;
-(void)setMedicationInfo:(NSString *)arg1 ;
-(void)setMedicationInfoModifiedDate:(NSDate *)arg1 ;
-(NSDate *)dateSaved;
-(NSDate *)isDisabledModifiedDate;
-(BOOL)shareDuringEmergency;
-(NSDate *)shareDuringEmergencyModifiedDate;
-(NSData *)pictureData;
-(NSDate *)pictureDataModifiedDate;
-(NSDate *)nameModifiedDate;
-(NSDate *)birthdate;
-(NSDate *)gmtBirthdate;
-(NSDateComponents *)gregorianBirthday;
-(NSDate *)gregorianBirthdayModifiedDate;
-(NSDate *)primaryLanguageCodeModifiedDate;
-(NSDate *)heightModifiedDate;
-(NSDate *)weightModifiedDate;
-(NSDate *)bloodTypeModifiedDate;
-(NSNumber *)isOrganDonor;
-(NSDate *)isOrganDonorModifiedDate;
-(NSArray *)emergencyContacts;
-(NSDate *)emergencyContactsModifiedDate;
-(NSArray *)clinicalContacts;
-(NSDate *)clinicalContactsModifiedDate;
-(NSString *)medicalConditions;
-(NSDate *)medicalConditionsModifiedDate;
-(NSString *)medicalNotes;
-(NSDate *)medicalNotesModifiedDate;
-(NSString *)allergyInfo;
-(NSDate *)allergyInfoModifiedDate;
-(NSString *)medicationInfo;
-(NSDate *)medicationInfoModifiedDate;
-(void)setGregorianBirthday:(NSDateComponents *)arg1 ;
-(id)_gregorianUtcCalendar;
-(BOOL)hasAnyModificationDate;
-(BOOL)isEqualToSyncedData:(id)arg1 ;
-(BOOL)hasAnyData;
-(void)setModificationDatesToCurrentDate;
-(NSDate *)legacyDateSaved;
-(void)setLegacyDateSaved:(NSDate *)arg1 ;
@end

