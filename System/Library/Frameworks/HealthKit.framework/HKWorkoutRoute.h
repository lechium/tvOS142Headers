/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSeriesSample.h>

@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample {

	HDCodableLocationSeries* __codableWorkoutRoute;

}

@property (setter=_setCodableWorkoutRoute:,nonatomic,retain) HDCodableLocationSeries * _codableWorkoutRoute;              //@synthesize _codableWorkoutRoute=__codableWorkoutRoute - In the implementation block
+(BOOL)_isConcreteObjectClass;
+(id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2 ;
-(id)_valueDescription;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)_validateSample;
-(BOOL)_isSmoothed;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(HDCodableLocationSeries *)_codableWorkoutRoute;
-(void)_setCodableWorkoutRoute:(id)arg1 ;
@end
