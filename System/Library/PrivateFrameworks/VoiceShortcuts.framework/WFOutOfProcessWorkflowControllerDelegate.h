/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFOutOfProcessWorkflowControllerDelegate <NSObject>
@optional
-(void)outOfProcessWorkflowController:(id)arg1 didStartFromWorkflowReference:(id)arg2 dialogAttribution:(id)arg3;
-(id)userInterfaceForOutOfProcessWorkflowController:(id)arg1;

@required
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5;

@end

