/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class NSData, NSArray, NSString;

@interface HKAudiogramSample : HKSample <_HKBinarySample> {

	NSData* _encodedSensitivityPoints;

}

@property (nonatomic,retain) NSData * encodedSensitivityPoints;              //@synthesize encodedSensitivityPoints=_encodedSensitivityPoints - In the implementation block
@property (copy,readonly) NSArray * sensitivityPoints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)_encodeSensitivityPoints:(id)arg1 ;
+(id)_decodeSensitivityData:(id)arg1 ;
+(id)audiogramSampleWithSensitivityPoints:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)payload;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setPayload:(id)arg1 ;
-(id)_validateSensitivityPointsOrderedAscending;
-(NSArray *)sensitivityPoints;
-(NSData *)encodedSensitivityPoints;
-(void)setEncodedSensitivityPoints:(NSData *)arg1 ;
-(id)_pureToneAverageForDiagnosticSensitivityPoints:(id)arg1 ;
-(id)averageLeftEarSensitivity;
-(unsigned long long)_diagnosticForSensitivity:(id)arg1 ;
-(id)averageRightEarSensitivity;
-(id)_leftDiagnosticSensitivityPoints;
-(id)_averageEarSensitivityForDiagnosticSensitivityPoints:(id)arg1 ;
-(id)_rightDiagnosticSensitivityPoints;
-(id)_leftSensitivityPoints;
-(id)_rightSensitivityPoints;
-(unsigned long long)diagnostic;
-(id)minimumSensitivity;
-(id)maximumSensitivity;
@end

