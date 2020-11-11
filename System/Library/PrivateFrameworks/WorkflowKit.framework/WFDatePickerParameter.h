/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSDate, NSString;

@interface WFDatePickerParameter : WFParameter <WFParameterDialogProvider> {

	long long _datePickerMode;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (assign,nonatomic) long long datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                  //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                  //@synthesize maximumDate=_maximumDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(long long)datePickerMode;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
@end

