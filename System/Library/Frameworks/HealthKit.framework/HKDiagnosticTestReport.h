/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingCollection, NSString, NSArray, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKDiagnosticTestReportType;

@interface HKDiagnosticTestReport : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	HKMedicalCodingCollection* _diagnosticTestCodingCollection;
	NSString* _panelName;
	NSArray* _results;
	HKMedicalDate* _effectiveStartDate;
	HKMedicalCoding* _statusCoding;
	HKMedicalDate* _effectiveEndDate;
	HKMedicalDate* _issueDate;
	HKConcept* _diagnosticTest;
	HKConcept* _status;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKDiagnosticTestReportType * diagnosticTestReportType; 
@property (copy,readonly) HKConcept * diagnosticTest; 
@property (copy,readonly) HKMedicalCodingCollection * diagnosticTestCodingCollection; 
@property (copy,readonly) HKMedicalDate * effectiveEndDate; 
@property (copy,readonly) HKMedicalDate * effectiveStartDate; 
@property (copy,readonly) HKMedicalDate * issueDate; 
@property (copy,readonly) NSString * panelName; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 panelName:(id)arg14 results:(id)arg15 effectiveStartDate:(id)arg16 statusCoding:(id)arg17 effectiveEndDate:(id)arg18 issueDate:(id)arg19 ;
+(id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodingCollection:(id)arg12 panelName:(id)arg13 results:(id)arg14 effectiveStartDate:(id)arg15 statusCoding:(id)arg16 effectiveEndDate:(id)arg17 issueDate:(id)arg18 ;
+(id)defaultDisplayString;
+(id)_newDiagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodingCollection:(id)arg13 panelName:(id)arg14 results:(id)arg15 effectiveStartDate:(id)arg16 statusCoding:(id)arg17 effectiveEndDate:(id)arg18 issueDate:(id)arg19 config:(/*^block*/id)arg20 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)results;
-(HKConcept *)status;
-(void)_setResults:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(HKMedicalCoding *)statusCoding;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(HKMedicalCodingCollection *)diagnosticTestCodingCollection;
-(void)_setDiagnosticTest:(id)arg1 ;
-(id)medicalRecordCodings;
-(HKDiagnosticTestReportType *)diagnosticTestReportType;
-(HKMedicalDate *)effectiveStartDate;
-(HKMedicalDate *)issueDate;
-(HKMedicalDate *)effectiveEndDate;
-(HKConcept *)diagnosticTest;
-(void)_setEffectiveStartDate:(id)arg1 ;
-(void)_setIssueDate:(id)arg1 ;
-(void)_setEffectiveEndDate:(id)arg1 ;
-(NSString *)panelName;
-(void)_setDiagnosticTestCodingCollection:(id)arg1 ;
-(void)_setPanelName:(id)arg1 ;
@end

