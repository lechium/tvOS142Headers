/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFWorkflowReferencing.h>

@class WFWorkflow, NSArray, NSString;

@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing> {

	NSArray* _possibleStates;
	WFWorkflow* _workflow;

}

@property (assign,nonatomic,__weak) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(Class)singleStateClass;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(id)workflowForState:(id)arg1 ;
@end

