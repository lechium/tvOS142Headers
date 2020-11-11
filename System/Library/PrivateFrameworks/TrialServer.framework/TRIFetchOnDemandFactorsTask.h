/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@protocol TRITaskAttributing;
@class NSDictionary, NSString, NSMutableArray, NSArray, NSDate;

@interface TRIFetchOnDemandFactorsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {

	NSDictionary* _assetIndexesByTreatment;
	NSString* _namespaceName;
	id<TRITaskAttributing> _taskAttributing;
	int _retryCount;
	NSString* _notificationKey;
	NSMutableArray* _metrics;

}

@property (assign,nonatomic) int retryCount; 
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg1 ;
+(id)taskWithAssetIndexesByTreatment:(id)arg1 namespaceName:(id)arg2 taskAttributing:(id)arg3 notificationKey:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)retryCount;
-(void)setRetryCount:(int)arg1 ;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(id)metrics;
-(id)dimensions;
-(id)serialize;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(id)initWithAssetIndexesByTreatment:(id)arg1 namespaceName:(id)arg2 taskAttributing:(id)arg3 notificationKey:(id)arg4 ;
-(int)_processTreatmentArtifact:(id)arg1 treatmentId:(id)arg2 paths:(id)arg3 ;
-(void)_addMetric:(id)arg1 ;
@end

