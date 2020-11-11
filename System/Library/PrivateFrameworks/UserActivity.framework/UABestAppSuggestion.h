/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSString, NSDate;

@interface UABestAppSuggestion : NSObject <NSSecureCoding> {

	BOOL _isActive;
	unsigned long long _type;
	NSUUID* _uniqueIdentifier;
	NSDictionary* _options;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	NSString* _dynamicIdentifier;
	NSDate* _lastUpdateTime;
	double _confidence;
	NSString* _originatingDeviceIdentifier;
	NSString* _originatingDeviceName;
	NSString* _originatingDeviceType;
	NSDate* _lastActiveTime;

}

@property (copy,readonly) NSString * userActivityTypeIdentifier; 
@property (copy) NSUUID * uniqueIdentifier;                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSString * dynamicIdentifier;                        //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy,readonly) NSDate * lastUpdateTime;                             //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (copy,readonly) NSDate * lastActiveTime;                             //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (copy,readonly) NSDate * when; 
@property (copy,readonly) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (readonly) double confidence;                                        //@synthesize confidence=_confidence - In the implementation block
@property (copy,readonly) NSString * originatingDeviceIdentifier;              //@synthesize originatingDeviceIdentifier=_originatingDeviceIdentifier - In the implementation block
@property (copy,readonly) NSString * originatingDeviceName;                    //@synthesize originatingDeviceName=_originatingDeviceName - In the implementation block
@property (copy,readonly) NSString * originatingDeviceType;                    //@synthesize originatingDeviceType=_originatingDeviceType - In the implementation block
@property (readonly) BOOL isActive;                                            //@synthesize isActive=_isActive - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSUUID *)uniqueIdentifier;
-(NSString *)bundleIdentifier;
-(NSDictionary *)options;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(double)confidence;
-(NSString *)activityType;
-(BOOL)isActive;
-(void)setActivityType:(NSString *)arg1 ;
-(NSDate *)lastUpdateTime;
-(NSDate *)when;
-(NSString *)dynamicIdentifier;
-(NSString *)originatingDeviceIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 uuid:(id)arg2 activityType:(id)arg3 dynamicIdentifier:(id)arg4 lastUpdateTime:(id)arg5 lastActiveTime:(id)arg6 type:(unsigned long long)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10 options:(id)arg11 isActive:(BOOL)arg12 ;
-(NSDate *)lastActiveTime;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceType;
-(NSString *)userActivityTypeIdentifier;
@end

