/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSNumber, NSArray;

@interface _DKSync3Policy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _syncDisabled;
	BOOL _isSingleDevice;
	BOOL _isOnPower;
	NSDictionary* _properties;
	NSNumber* _version;
	unsigned long long _triggeredSyncDelayInSeconds;
	long long _mask;
	NSArray* _sourceDevices;
	NSArray* _destinationDevices;
	NSArray* _transportPolicies;
	NSArray* _featurePolicies;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(id)productVersion;
+(id)userDefaults;
+(BOOL)cloudSyncDisabled;
+(BOOL)rapportSyncDisabled;
+(id)disabledPolicy;
+(id)configurationPlistForFilename:(id)arg1 ;
+(id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3 ;
+(void)overrideDictionary:(id)arg1 withOverrides:(id)arg2 ;
+(void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2 ;
+(void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
+(id)syncPolicyConfigPathForFilename:(id)arg1 ;
+(id)computedPolicyDictionary;
+(void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2 ;
+(void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3 ;
+(void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(BOOL)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(BOOL)arg3 ;
-(unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
@end

