/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal;

@interface GKTournamentParticipantInternal : GKInternalRepresentation {

	BOOL _cheatingIndicator;
	NSString* _tournamentID;
	GKPlayerInternal* _player;
	long long _score;
	long long _playerGroup;
	long long _replayCount;
	long long _participantState;

}

@property (nonatomic,retain) NSString * tournamentID;                 //@synthesize tournamentID=_tournamentID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long playerGroup;                   //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) long long replayCount;                   //@synthesize replayCount=_replayCount - In the implementation block
@property (assign,nonatomic) long long participantState;              //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) BOOL cheatingIndicator;                  //@synthesize cheatingIndicator=_cheatingIndicator - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)score;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setScore:(long long)arg1 ;
-(long long)replayCount;
-(NSString *)tournamentID;
-(void)setTournamentID:(NSString *)arg1 ;
-(long long)playerGroup;
-(void)setPlayerGroup:(long long)arg1 ;
-(void)setReplayCount:(long long)arg1 ;
-(long long)participantState;
-(void)setParticipantState:(long long)arg1 ;
-(BOOL)cheatingIndicator;
-(void)setCheatingIndicator:(BOOL)arg1 ;
@end

