/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKObjectType.h>

@interface HKCharacteristicType : HKObjectType
-(BOOL)_validateCharacteristic:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateDateOfBirth:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateBiologicalSex:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateBloodType:(id)arg1 error:(id*)arg2 ;
-(id)_canoncialUnit;
-(BOOL)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateWheelchairUse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateCardioFitnessMedicationsUse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateActivityMoveMode:(id)arg1 error:(id*)arg2 ;
-(id)_relatedQuantityType;
-(id)_relatedCategoryType;
-(id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1 ;
@end

