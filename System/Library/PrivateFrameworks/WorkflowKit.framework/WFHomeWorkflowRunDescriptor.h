/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class WFHomeWorkflow;

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor {

	WFHomeWorkflow* _homeWorkflow;

}

@property (nonatomic,readonly) WFHomeWorkflow * homeWorkflow;              //@synthesize homeWorkflow=_homeWorkflow - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFHomeWorkflow *)homeWorkflow;
-(id)initWithHomeWorkflow:(id)arg1 ;
-(id)workflowRepresentationWithDatabase:(id)arg1 environment:(long long)arg2 error:(id*)arg3 ;
@end

