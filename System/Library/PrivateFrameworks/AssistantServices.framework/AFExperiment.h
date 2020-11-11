/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFExperimentForSiriVOXSounds.h>
#import <libobjc.A.dylib/AFExperimentForSiriVOXTapToSiriBehavior.h>
#import <libobjc.A.dylib/AFInvocationFeedbackExperiment.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment, NSCopying, NSSecureCoding> {

	NSString* _configurationIdentifier;
	NSString* _configurationVersion;
	NSString* _deploymentGroupIdentifier;
	NSDictionary* _deploymentGroupProperties;
	long long _deploymentReason;

}

@property (nonatomic,readonly) BOOL playsTwoShotSoundForSiriVOXSounds; 
@property (nonatomic,readonly) BOOL playsSessionInactiveSoundForSiriVOXSounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL playsSound; 
@property (nonatomic,readonly) unsigned long long featureGroups; 
@property (nonatomic,copy,readonly) NSString * configurationIdentifier;                     //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * configurationVersion;                        //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * deploymentGroupIdentifier;                   //@synthesize deploymentGroupIdentifier=_deploymentGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deploymentGroupProperties;               //@synthesize deploymentGroupProperties=_deploymentGroupProperties - In the implementation block
@property (nonatomic,readonly) long long deploymentReason;                                  //@synthesize deploymentReason=_deploymentReason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)configurationIdentifier;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDictionary *)deploymentGroupProperties;
-(BOOL)playsTwoShotSoundForSiriVOXSounds;
-(BOOL)playsSessionInactiveSoundForSiriVOXSounds;
-(void)logExperimentExposureForSiriVOXSounds;
-(long long)deploymentReason;
-(NSString *)configurationVersion;
-(NSString *)deploymentGroupIdentifier;
-(id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5 ;
-(BOOL)playsSound;
-(void)logExperimentExposureForTapToSiriBehavior;
-(unsigned long long)featureGroups;
-(void)logExperimentExposureForInvocationFeedbacks;
-(BOOL)isFeatureGroupOneEnabled;
-(BOOL)isFeatureGroupTwoEnabled;
-(BOOL)isFeatureGroupThreeEnabled;
-(BOOL)isFeatureGroupFourEnabled;
@end

