/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFHandleIntentAction, NSString;

@interface WFIntentHandlerResource : WFResource <WFActionEventObserver> {

	BOOL _requiresIntentSupport;
	WFHandleIntentAction* _action;

}

@property (assign,nonatomic,__weak) WFHandleIntentAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL requiresIntentSupport;                      //@synthesize requiresIntentSupport=_requiresIntentSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFHandleIntentAction *)action;
-(void)setAction:(WFHandleIntentAction *)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)refreshAvailability;
-(void)setupWithAction:(id)arg1 ;
-(BOOL)requiresIntentSupport;
@end

