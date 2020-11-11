/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMRotationRateData.h>

@class NSDate;

@interface CMRecordedRotationRateData : CMRotationRateData {

	double _startDateValue;
	SCD_Struct_CM9 _rotationRate;
	double _timestampValue;

}

@property (readonly) NSDate * startDate; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(NSDate *)startDate;
-(SCD_Struct_CM9)rotationRate;
-(id)initWithData:(CMGyro200*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 ;
@end

