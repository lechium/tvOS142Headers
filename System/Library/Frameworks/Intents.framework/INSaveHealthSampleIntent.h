/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveHealthSampleIntentExport.h>

@class INDateComponentsRange, NSArray, HKUnit, NSString;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (nonatomic,copy,readonly) INDateComponentsRange * recordDate; 
@property (nonatomic,readonly) long long objectType; 
@property (nonatomic,copy,readonly) NSArray * values; 
@property (nonatomic,copy,readonly) HKUnit * unit; 
@property (nonatomic,copy,readonly) NSArray * sampleMetadatas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(NSArray *)values;
-(void)setDomain:(id)arg1 ;
-(HKUnit *)unit;
-(id)_metadata;
-(void)setValues:(NSArray *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(INDateComponentsRange *)arg1 ;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(NSArray *)arg1 ;
-(id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5 ;
@end

