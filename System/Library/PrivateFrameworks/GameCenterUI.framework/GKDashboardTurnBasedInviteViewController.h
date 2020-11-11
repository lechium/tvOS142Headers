/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKDashboardMultiplayerViewController.h>

@protocol GKDashboardTurnBasedInviteViewControllerDelegate;
@class NSMutableDictionary;

@interface GKDashboardTurnBasedInviteViewController : GKDashboardMultiplayerViewController {

	id<GKDashboardTurnBasedInviteViewControllerDelegate> _delegate;
	NSMutableDictionary* _inviteMessageDictionary;
	long long _mode;

}

@property (nonatomic,retain) NSMutableDictionary * inviteMessageDictionary;                                     //@synthesize inviteMessageDictionary=_inviteMessageDictionary - In the implementation block
@property (assign,nonatomic) long long mode;                                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardTurnBasedInviteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GKDashboardTurnBasedInviteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<GKDashboardTurnBasedInviteViewControllerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)cancel;
-(long long)mode;
-(void)finishWithError:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cleanupStateForCancelOrError;
-(void)finishWithMatchID:(id)arg1 ;
-(void)createGameWithPlayersToInvite:(id)arg1 ;
-(BOOL)canStartForcedAutomatch;
-(void)playNow;
-(void)invitePlayers:(id)arg1 ;
-(BOOL)isInSetupMode;
-(NSMutableDictionary *)inviteMessageDictionary;
-(void)setInviteMessageDictionary:(NSMutableDictionary *)arg1 ;
@end

