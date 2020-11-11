/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTIInputSystemSessionDelegate <NSObject>
@optional
-(void)inputSessionDidBegin:(id)arg1;
-(void)inputSessionDidEnd:(id)arg1;
-(void)inputSessionDidDie:(id)arg1;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@end

