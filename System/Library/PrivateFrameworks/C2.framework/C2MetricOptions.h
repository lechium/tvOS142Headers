/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSArray;

@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _anonymous;
	BOOL _pushTrigger;
	unsigned _reportFrequencyRandomValue;
	NSURL* _c2MetricsEndpoint;
	unsigned long long _reportFrequency;
	unsigned long long _reportFrequencyBase;
	unsigned long long _reportClientOperationFrequency;
	unsigned long long _reportClientOperationFrequencyBase;
	unsigned long long _reportOperationGroupFrequency;
	unsigned long long _reportOperationGroupFrequencyBase;
	NSString* _clientProcessVersion;
	NSString* _clientProcessBundleId;
	NSString* _container;
	NSString* _environment;
	NSString* _containerScopedUserIdentifier;
	NSString* _containerScopedDeviceIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSArray* _operationGroups;
	NSArray* _clientOperations;
	/*^block*/id _didCompleteWithError;
	/*^block*/id _testBehavior_reportMetric;

}

@property (assign,nonatomic) unsigned reportFrequencyRandomValue;                                            //@synthesize reportFrequencyRandomValue=_reportFrequencyRandomValue - In the implementation block
@property (nonatomic,readonly) NSString * headerValueForTriggers; 
@property (nonatomic,copy) id testBehavior_reportMetric;                                                     //@synthesize testBehavior_reportMetric=_testBehavior_reportMetric - In the implementation block
@property (nonatomic,copy) NSURL * c2MetricsEndpoint;                                                        //@synthesize c2MetricsEndpoint=_c2MetricsEndpoint - In the implementation block
@property (assign,nonatomic) unsigned long long reportFrequency;                                             //@synthesize reportFrequency=_reportFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long reportFrequencyBase;                                         //@synthesize reportFrequencyBase=_reportFrequencyBase - In the implementation block
@property (assign,nonatomic) unsigned long long reportClientOperationFrequency;                              //@synthesize reportClientOperationFrequency=_reportClientOperationFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long reportClientOperationFrequencyBase;                          //@synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase - In the implementation block
@property (assign,nonatomic) unsigned long long reportOperationGroupFrequency;                               //@synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency - In the implementation block
@property (assign,nonatomic) unsigned long long reportOperationGroupFrequencyBase;                           //@synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase - In the implementation block
@property (nonatomic,copy) NSString * clientProcessVersion;                                                  //@synthesize clientProcessVersion=_clientProcessVersion - In the implementation block
@property (nonatomic,copy) NSString * clientProcessBundleId;                                                 //@synthesize clientProcessBundleId=_clientProcessBundleId - In the implementation block
@property (nonatomic,copy) NSString * container;                                                             //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) NSString * environment;                                                           //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL anonymous;                                                                 //@synthesize anonymous=_anonymous - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserIdentifier;                                         //@synthesize containerScopedUserIdentifier=_containerScopedUserIdentifier - In the implementation block
@property (nonatomic,copy) NSString * containerScopedDeviceIdentifier;                                       //@synthesize containerScopedDeviceIdentifier=_containerScopedDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                 //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;              //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSArray * operationGroups;                                                        //@synthesize operationGroups=_operationGroups - In the implementation block
@property (nonatomic,copy) NSArray * clientOperations;                                                       //@synthesize clientOperations=_clientOperations - In the implementation block
@property (assign,nonatomic) BOOL pushTrigger;                                                               //@synthesize pushTrigger=_pushTrigger - In the implementation block
@property (nonatomic,copy) id didCompleteWithError;                                                          //@synthesize didCompleteWithError=_didCompleteWithError - In the implementation block
+(id)metricOptionsForNetworkRequest:(id)arg1 ;
+(id)metricOptionsForNetworkOperation:(id)arg1 ;
+(id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 proxy:(id)arg3 config:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)supportsSecureCoding;
-(void)_setupC2MetricsEndpointWithContext:(id)arg1 ;
-(void)_attributeCurrentProxy:(id)arg1 config:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)container;
-(void)setDidCompleteWithError:(id)arg1 ;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)didCompleteWithError;
-(void)setContainer:(NSString *)arg1 ;
-(BOOL)anonymous;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setAnonymous:(BOOL)arg1 ;
-(NSURL *)c2MetricsEndpoint;
-(void)setC2MetricsEndpoint:(NSURL *)arg1 ;
-(void)setClientProcessVersion:(NSString *)arg1 ;
-(void)setClientProcessBundleId:(NSString *)arg1 ;
-(void)setReportClientOperationFrequency:(unsigned long long)arg1 ;
-(void)setReportClientOperationFrequencyBase:(unsigned long long)arg1 ;
-(void)setReportOperationGroupFrequency:(unsigned long long)arg1 ;
-(void)setReportOperationGroupFrequencyBase:(unsigned long long)arg1 ;
-(void)setContainerScopedUserIdentifier:(NSString *)arg1 ;
-(NSString *)containerScopedUserIdentifier;
-(void)setContainerScopedDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)containerScopedDeviceIdentifier;
-(void)setReportFrequency:(unsigned long long)arg1 ;
-(void)setReportFrequencyBase:(unsigned long long)arg1 ;
-(void)setOperationGroups:(NSArray *)arg1 ;
-(void)setClientOperations:(NSArray *)arg1 ;
-(void)setPushTrigger:(BOOL)arg1 ;
-(unsigned long long)reportFrequency;
-(unsigned long long)reportFrequencyBase;
-(unsigned long long)reportClientOperationFrequency;
-(unsigned long long)reportClientOperationFrequencyBase;
-(unsigned long long)reportOperationGroupFrequency;
-(unsigned long long)reportOperationGroupFrequencyBase;
-(NSString *)clientProcessVersion;
-(NSString *)clientProcessBundleId;
-(NSArray *)operationGroups;
-(NSArray *)clientOperations;
-(BOOL)pushTrigger;
-(id)testBehavior_reportMetric;
-(void)setTestBehavior_reportMetric:(id)arg1 ;
-(unsigned)reportFrequencyRandomValue;
-(void)setReportFrequencyRandomValue:(unsigned)arg1 ;
-(BOOL)operationGroupTriggered:(id)arg1 ;
-(BOOL)clientOperationTriggered:(id)arg1 ;
-(int)generateTriggerWithResponseHeader:(unsigned char)arg1 ;
-(void)rollReportFrequencyRandomValue;
-(id)generateCloudKitInfo;
-(NSString *)headerValueForTriggers;
@end
