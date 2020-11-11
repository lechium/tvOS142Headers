/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreDuetLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, NSUUID, NSString, HMDHome;

@interface HMDActionSetEvent : HMDLogEvent <HMDCoreDuetLogEvent, HMDAWDLogEvent> {

	unsigned _numAccessoriesModified;
	unsigned _numAccessoriesInHome;
	unsigned _numNonEmptyScenesInHome;
	unsigned long long _triggerSource;
	NSUUID* _actionSetUUID;
	NSString* _bundleId;
	NSUUID* _transactionId;
	NSString* _serializedIdentifier;
	NSString* _actionSetName;
	NSString* _actionSetType;
	HMDHome* _home;
	NSArray* _accessoryUUIDs;

}

@property (readonly) unsigned long long duetEventType; 
@property (copy,readonly) NSArray * eventDataToLog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long triggerSource;              //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) NSUUID * actionSetUUID;                        //@synthesize actionSetUUID=_actionSetUUID - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                        //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned numAccessoriesModified;               //@synthesize numAccessoriesModified=_numAccessoriesModified - In the implementation block
@property (nonatomic,readonly) unsigned numAccessoriesInHome;                 //@synthesize numAccessoriesInHome=_numAccessoriesInHome - In the implementation block
@property (nonatomic,readonly) unsigned numNonEmptyScenesInHome;              //@synthesize numNonEmptyScenesInHome=_numNonEmptyScenesInHome - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier;               //@synthesize serializedIdentifier=_serializedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * actionSetName;                      //@synthesize actionSetName=_actionSetName - In the implementation block
@property (nonatomic,readonly) NSString * actionSetType;                      //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home;                         //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessoryUUIDs;                 //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
+(id)uuid;
-(id)value;
-(id)metadata;
-(NSString *)bundleId;
-(NSUUID *)transactionId;
-(HMDHome *)home;
-(NSUUID *)actionSetUUID;
-(NSString *)actionSetName;
-(NSString *)actionSetType;
-(NSArray *)accessoryUUIDs;
-(id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned)arg3 bundleId:(id)arg4 transactionId:(id)arg5 ;
-(NSString *)serializedIdentifier;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)triggerSource;
-(unsigned)numAccessoriesModified;
-(unsigned)numAccessoriesInHome;
-(unsigned)numNonEmptyScenesInHome;
-(unsigned long long)duetEventType;
-(NSArray *)eventDataToLog;
@end

