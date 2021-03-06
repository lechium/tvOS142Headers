/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@interface WFExtensionInputVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}
-(id)name;
-(id)icon;
-(BOOL)isAvailable;
-(id)initWithVariableProvider:(id)arg1 aggrandizements:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
@end

