/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSObject;

@interface TIFieldDescriptor : NSObject {

	NSString* _fieldName;
	NSString* _fieldDescription;
	NSString* _metricName;
	NSString* _metricType;
	NSObject* _inactiveValue;

}

@property (nonatomic,readonly) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldDescription;              //@synthesize fieldDescription=_fieldDescription - In the implementation block
@property (nonatomic,readonly) NSString * metricName;                    //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,readonly) NSString * metricType;                    //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) NSObject * inactiveValue;                 //@synthesize inactiveValue=_inactiveValue - In the implementation block
+(id)fieldDescriptorWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)metricType;
-(NSString *)fieldName;
-(NSString *)metricName;
-(id)initWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)fieldDescription;
-(NSObject *)inactiveValue;
@end

