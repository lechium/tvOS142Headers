//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKGameStatService-Protocol.h"

@class NSString;

@interface GKGameStatService : GKService <GKGameStatService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010018aaf8
+ (Class)interfaceClass;	// IMP=0x000000010018aaec
- (oneway void)getLeaderboardSummaryForGameDescriptor:(id)arg1 localPlayer:(id)arg2 baseLeaderboardID:(id)arg3 leaderboardID:(id)arg4 timeScope:(long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a35cc
- (oneway void)deleteLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a35b4
- (oneway void)endLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a359c
- (oneway void)startLeaderboardWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a3584
- (oneway void)createLeaderboardBasedOnID:(id)arg1 recipients:(id)arg2 inviteMessage:(id)arg3 context:(id)arg4 duration:(double)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001001a3568
- (oneway void)submitInstanceScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardID:(id)arg3 forPlayer:(id)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a2ddc
- (oneway void)submitScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardIDs:(id)arg3 forPlayer:(id)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001001a24bc
- (oneway void)getEntriesForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 localPlayer:(id)arg3 playerScope:(long long)arg4 timeScope:(long long)arg5 range:(struct _NSRange)arg6 players:(id)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00000001001a15f8
- (id)timeScopeName:(long long)arg1;	// IMP=0x00000001001a15cc
- (id)playerScopeName:(long long)arg1;	// IMP=0x00000001001a15b0
- (void)loadEntriesForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 localPlayer:(id)arg3 playerScope:(long long)arg4 timeScope:(long long)arg5 range:(struct _NSRange)arg6 players:(id)arg7 context:(id)arg8 handler:(CDUnknownBlockType)arg9;	// IMP=0x00000001001a0898
- (void)generateEntriesFromServerResponse:(id)arg1 context:(id)arg2 leaderboard:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019fd50
- (void)updatePlayersForEntries:(id)arg1 localPlayerEntry:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019f89c
- (oneway void)getPreviousInstanceForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019e528
- (void)loadPreviousInstanceForLeaderboard:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 playerPlayedIn:(_Bool)arg4 context:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010019d8f0
- (void)fetchLeaderboardWithRecordID:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010019d758
- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 leaderboardIDs:(id)arg3 setIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010019b490
- (id)leaderboards:(id)arg1 filteredWithIDs:(id)arg2;	// IMP=0x000000010019b334
- (void)updateLeaderboardsWithIDs:(id)arg1 gameDescriptor:(id)arg2 player:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010019a5ac
- (oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100199a38
- (oneway void)getDefaultLeaderboardIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010019980c
- (oneway void)setDefaultLeaderboardID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001991ac
- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100197d8c
- (void)loadLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 bagKey:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100196d18
- (void)fetchLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010019699c
- (void)cleanUpLeaderboardTitles:(id)arg1 set:(id)arg2 context:(id)arg3;	// IMP=0x00000001001965bc
- (void)submitScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100195f90
- (oneway void)getLeaderboadForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001959a8
- (oneway void)resetAchievementsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001952a0
- (void)submitAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019462c
- (oneway void)getAchievementsForGameDescriptor:(id)arg1 players:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001938fc
- (void)loadAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100193818
- (void)achievementsForPlayersAndGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010019294c
- (void)fetchAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100191f5c
- (oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001914d0
- (void)loadAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100190a18
- (void)fetchAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100190854
- (oneway void)getRecentPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100190770
- (oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayer:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001906f0
- (void)getRecentGamesWithPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018fbe4
- (void)getRecentPlayersForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018eeb8
- (void)loadRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018dccc
- (void)loadRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018c85c
- (void)fetchRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018c4f4
- (void)fetchRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018c18c
- (oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018c130
- (oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018c0c0
- (oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010018c050
- (void)_getPlayersForGameDescriptor:(id)arg1 type:(int)arg2 reference:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010018ab00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
