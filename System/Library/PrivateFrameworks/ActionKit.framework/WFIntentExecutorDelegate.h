/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFIntentExecutorDelegate <NSObject>
@optional
-(void)intentExecutorRequestsContinueInApp:(id)arg1;
-(void)intentExecutor:(id)arg1 showConfirmationForSlot:(id)arg2 item:(id)arg3 intent:(id)arg4 completion:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 showConfirmationForInteraction:(id)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveUpdate:(id)arg2;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveError:(id)arg2;

@end

