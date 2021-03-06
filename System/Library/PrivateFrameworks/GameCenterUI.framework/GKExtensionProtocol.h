/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GKGame;


@protocol GKExtensionProtocol <NSObject>
@property (nonatomic,retain) GKGame * game; 
@optional
-(void)remoteViewControllerDidCancel;
-(void)tearDownExtensionWithReply:(/*^block*/id)arg1;
-(void)remoteViewControllerDidFinish;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)nudge;
-(void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(/*^block*/id)arg3;

@required
-(GKGame *)game;
-(void)setGame:(id)arg1;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)messageFromClient:(id)arg1;

@end

