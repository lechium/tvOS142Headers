/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didFailWithError:(id)arg2;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned)arg3;
-(void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
-(void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;

@end

