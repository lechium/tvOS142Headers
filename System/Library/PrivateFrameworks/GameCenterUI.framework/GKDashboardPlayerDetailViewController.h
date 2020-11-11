/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class GKGameRecord, GKPlayer, NSDate, GKDashboardPlayerPhotoView, UILabel, UIButton;

@interface GKDashboardPlayerDetailViewController : UIViewController {

	GKGameRecord* _gameRecord;
	GKPlayer* _player;
	NSDate* _lastPlayedDate;
	GKDashboardPlayerPhotoView* _playerView;
	UILabel* _nameLabel;
	UILabel* _lastPlayedLabel;
	UIButton* _firstButton;
	UIButton* _secondButton;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                            //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSDate * lastPlayedDate;                              //@synthesize lastPlayedDate=_lastPlayedDate - In the implementation block
@property (assign,nonatomic) GKDashboardPlayerPhotoView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * lastPlayedLabel;                            //@synthesize lastPlayedLabel=_lastPlayedLabel - In the implementation block
@property (assign,nonatomic) UIButton * firstButton;                               //@synthesize firstButton=_firstButton - In the implementation block
@property (assign,nonatomic) UIButton * secondButton;                              //@synthesize secondButton=_secondButton - In the implementation block
-(void)dealloc;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)play:(id)arg1 ;
-(void)viewDidLoad;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(GKDashboardPlayerPhotoView *)playerView;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)challenge:(id)arg1 ;
-(UIButton *)firstButton;
-(void)setFirstButton:(UIButton *)arg1 ;
-(UIButton *)secondButton;
-(void)setSecondButton:(UIButton *)arg1 ;
-(id)initWithGameRecord:(id)arg1 player:(id)arg2 lastPlayedDate:(id)arg3 ;
-(void)friendRequest:(id)arg1 ;
-(UILabel *)lastPlayedLabel;
-(void)setLastPlayedLabel:(UILabel *)arg1 ;
@end

