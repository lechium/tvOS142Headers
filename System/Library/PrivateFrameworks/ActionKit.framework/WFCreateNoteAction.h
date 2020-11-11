/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFCreateNoteAction : WFHandleSystemIntentAction
+(id)userInterfaceProtocol;
+(void)getNoteContentFromInput:(id)arg1 includingImages:(BOOL)arg2 actionName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)requiresRemoteExecution;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)targetContentAttribution;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)initializeParameters;
-(id)inputContentClasses;
-(id)localizedKeyParameterDisplayName;
-(id)prioritizedParameterKeysForRemoteExecution;
-(BOOL)inputPassthrough;
-(id)groupParameter;
-(void)selectedAppDidChange;
@end

