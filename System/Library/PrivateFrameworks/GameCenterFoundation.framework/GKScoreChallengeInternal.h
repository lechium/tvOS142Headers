/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(GKScoreInternal *)score;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(id)titleText;
-(GKLeaderboardInternal *)leaderboard;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end

