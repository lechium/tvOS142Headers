/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, HMDAccessorySettingMergeStrategy, NSArray;

@interface HMDAccessorySettingMetadata : HMFObject <HMFObject> {

	NSString* _name;
	NSString* _keyPath;
	long long _type;
	unsigned long long _properties;
	HMDAccessorySettingMergeStrategy* _mergeStrategy;
	NSArray* _constraints;
	id _value;

}

@property (copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * keyPath;                                       //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) long long type;                                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long properties;                                 //@synthesize properties=_properties - In the implementation block
@property (readonly) HMDAccessorySettingMergeStrategy * mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (copy,readonly) NSArray * constraints;                                    //@synthesize constraints=_constraints - In the implementation block
@property (readonly) id value;                                                      //@synthesize value=_value - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsWithArrayRepresenation:(id)arg1 parentKeyPath:(id)arg2 ;
+(id)settingWithDictonaryRepresentation:(id)arg1 parentKeyPath:(id)arg2 ;
+(id)valueWithType:(long long)arg1 constraints:(id)arg2 representation:(id)arg3 ;
-(NSString *)name;
-(long long)type;
-(id)value;
-(unsigned long long)properties;
-(NSString *)keyPath;
-(NSString *)propertyDescription;
-(NSArray *)constraints;
-(HMDAccessorySettingMergeStrategy *)mergeStrategy;
-(id)modelsWithParentIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 properties:(unsigned long long)arg3 constraints:(id)arg4 mergeStrategy:(id)arg5 value:(id)arg6 parentKeyPath:(id)arg7 ;
-(id)modelWithParentIdentifier:(id)arg1 ;
@end

