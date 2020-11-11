/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@protocol WFActionExtendedOperation;
@class WFSpeakTextActionOperation;

@interface WFSpeakTextAction : WFAction {

	id<WFActionExtendedOperation> _extendedOperation;
	WFSpeakTextActionOperation* _runningOperation;

}

@property (nonatomic,retain) WFSpeakTextActionOperation * runningOperation;              //@synthesize runningOperation=_runningOperation - In the implementation block
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)initializeParameters;
-(id)voicePickerParameter;
-(id)extendedOperation;
-(void)setExtendedOperation:(id)arg1 ;
-(WFSpeakTextActionOperation *)runningOperation;
-(void)setRunningOperation:(WFSpeakTextActionOperation *)arg1 ;
@end

