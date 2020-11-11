/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKProxyProvider.h>

@class NSUUID, NSURL, HKTaskConfiguration, NSString;

@interface HKTaskServerProxyProvider : HKProxyProvider {

	NSUUID* _taskUUID;
	NSURL* _pluginURL;
	HKTaskConfiguration* _taskConfiguration;

}

@property (nonatomic,copy,readonly) NSUUID * taskUUID;                      //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier; 
@property (nonatomic,copy) NSURL * pluginURL;                               //@synthesize pluginURL=_pluginURL - In the implementation block
@property (copy) HKTaskConfiguration * taskConfiguration;                   //@synthesize taskConfiguration=_taskConfiguration - In the implementation block
-(NSString *)taskIdentifier;
-(NSUUID *)taskUUID;
-(id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 taskUUID:(id)arg4 ;
-(void)setTaskConfiguration:(HKTaskConfiguration *)arg1 ;
-(HKTaskConfiguration *)taskConfiguration;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)initWithHealthStore:(id)arg1 taskIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5 taskUUID:(id)arg6 ;
-(NSURL *)pluginURL;
-(void)setPluginURL:(NSURL *)arg1 ;
@end
