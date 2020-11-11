/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMPose : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM9 translation; 
@property (nonatomic,readonly) double consumedAuxTimestamp; 
@property (nonatomic,readonly) double receivedAuxTimestamp; 
@property (nonatomic,readonly) double machAbsTimestamp; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CMAttitude *)attitude;
-(BOOL)isEqualToPose:(id)arg1 ;
-(id)initWithPose:(SCD_Struct_CM44)arg1 timestamp:(double)arg2 ;
-(SCD_Struct_CM9)translation;
-(double)consumedAuxTimestamp;
-(double)receivedAuxTimestamp;
-(double)machAbsTimestamp;
@end

