/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBStateCaptureManaging <NSObject>
@required
-(void)removeItem:(id)arg1;
-(void)addItem:(id)arg1;
-(id)identifiers;
-(id)stateForSubsystem:(id)arg1;
-(void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3;
-(void)removeItemWithIdentifier:(id)arg1;
-(void)addItem:(id)arg1 withIdentifier:(id)arg2;

@end

