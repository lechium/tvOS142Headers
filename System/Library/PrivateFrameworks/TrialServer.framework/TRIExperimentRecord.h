/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRIExperimentDeployment, NSString, NSDate, NSArray;

@interface TRIExperimentRecord : NSObject <NSCopying, NSSecureCoding> {

	int _type;
	TRIExperimentDeployment* _experimentDeployment;
	NSString* _treatmentId;
	long long _status;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _namespaces;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experimentDeployment;              //@synthesize experimentDeployment=_experimentDeployment - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * namespaces;                                        //@synthesize namespaces=_namespaces - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)recordWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(long long)status;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)treatmentId;
-(NSArray *)namespaces;
-(id)copyWithReplacementType:(int)arg1 ;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(TRIExperimentDeployment *)experimentDeployment;
-(id)copyWithReplacementExperimentDeployment:(id)arg1 ;
-(id)copyWithReplacementTreatmentId:(id)arg1 ;
-(id)copyWithReplacementStatus:(long long)arg1 ;
-(id)copyWithReplacementStartDate:(id)arg1 ;
-(id)copyWithReplacementEndDate:(id)arg1 ;
-(id)copyWithReplacementNamespaces:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
-(BOOL)isExpiredExperiment;
@end

