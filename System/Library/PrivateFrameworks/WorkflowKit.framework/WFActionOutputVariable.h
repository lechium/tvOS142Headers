/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class WFAction, NSString;

@interface WFActionOutputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;
	WFAction* _action;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * outputUUID; 
@property (nonatomic,__weak,readonly) WFAction * action;              //@synthesize action=_action - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(WFAction *)action;
-(id)icon;
-(BOOL)isAvailable;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4 ;
-(NSString *)outputUUID;
@end

