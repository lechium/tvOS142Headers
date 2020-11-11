/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFEvernoteAccessResource* _evernoteAccessResource;

}

@property (nonatomic,readonly) NSArray * possibleStates;                                     //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFEvernoteAccessResource * evernoteAccessResource;              //@synthesize evernoteAccessResource=_evernoteAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)setActionResources:(id)arg1 ;
-(void)setEvernoteAccessResource:(WFEvernoteAccessResource *)arg1 ;
-(WFEvernoteAccessResource *)evernoteAccessResource;
-(void)updateNotebooks;
@end

