/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputParameterMigration : WFWorkflowMigration
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
-(void)migrateWorkflow;
-(id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(BOOL*)arg3 inputActionIndex:(unsigned long long*)arg4 ;
-(id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2 ;
@end

