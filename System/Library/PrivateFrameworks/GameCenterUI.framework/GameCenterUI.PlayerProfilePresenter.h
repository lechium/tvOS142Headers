/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter, _TtC12GameCenterUI17NicknamePresenter;

@interface GameCenterUI.PlayerProfilePresenter : NSObject {

	 playerId;
	 objectGraph;
	 requiredDataPresenter;
	 authenticationPresenter;
	 nicknamePresenter;
	 isUpdating;
	 sections;
	 requiredData;
	 onApplySnapshot;
	 onUpdatePhaseChange;
	 onShowAvatarEditor;
	 onNicknameChanged;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) BOOL isSignedIn; 
@property (readonly,nonatomic) _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter * authenticationPresenter; 
@property (retain,nonatomic) _TtC12GameCenterUI17NicknamePresenter * nicknamePresenter; 
@property (assign,nonatomic) BOOL isUpdating; 
-(id)init;
-(NSString *)title;
-(BOOL)isUpdating;
-(BOOL)isSignedIn;
-(void)setIsUpdating:(BOOL)arg1 ;
-(id)initWithPlayerId:(id)arg1 ;
-(_TtC12GameCenterUI34LocalPlayerAuthenticationPresenter *)authenticationPresenter;
-(_TtC12GameCenterUI17NicknamePresenter *)nicknamePresenter;
-(void)setNicknamePresenter:(_TtC12GameCenterUI17NicknamePresenter *)arg1 ;
-(void)updateSnapshot;
-(void)setAllowsNearByMultiplayerInvites:(BOOL)arg1 ;
-(void)signIntoGameCenter;
-(void)showAvatarEditor;
-(void)didSignOut;
@end
