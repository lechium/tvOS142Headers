/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKSessionDelegate.h>

@class GKTurnBasedMatchInternal, NSArray, NSDate, GKTurnBasedParticipant, GKPlayer, NSString, GKGame, NSData;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {

	unsigned _state;
	GKTurnBasedMatchInternal* _internal;
	NSArray* _participants;
	NSArray* _exchanges;

}

@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,readonly) long long turnNumber; 
@property (nonatomic,readonly) NSDate * dateSortKey; 
@property (nonatomic,retain) GKTurnBasedParticipant * currentParticipant; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipant; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * localPlayerParticipant; 
@property (nonatomic,readonly) GKPlayer * showcasePlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser; 
@property (assign,nonatomic) unsigned long long matchDataMaximumSize; 
@property (nonatomic,readonly) GKPlayer * currentPlayer; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (nonatomic,retain) NSString * shortBundleVersion; 
@property (nonatomic,readonly) long long platform; 
@property (assign,nonatomic) unsigned state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isMyTurn; 
@property (nonatomic,readonly) BOOL localPlayerHasRecentTurn; 
@property (nonatomic,readonly) GKGame * game; 
@property (retain) GKTurnBasedMatchInternal * internal;                                                        //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * matchID; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSArray * participants;                                                         //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSData * matchData; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) NSArray * exchanges;                                                            //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,readonly) NSArray * activeExchanges; 
@property (nonatomic,readonly) NSArray * completedExchanges; 
@property (nonatomic,readonly) unsigned long long exchangeDataMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)getTurnBasedBadgeCountWithHandler:(/*^block*/id)arg1 ;
+(void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)matchesWithInternalRepresentations:(id)arg1 ;
+(void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3 ;
+(void)loadMatchesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadTurnBasedMatchSummaries:(/*^block*/id)arg1 ;
+(void)loadMatchWithID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(long long)compare:(id)arg1 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(long long)status;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTurnBasedMatchInternal *)internal;
-(NSArray *)participants;
-(void)setInternal:(GKTurnBasedMatchInternal *)arg1 ;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKGame *)game;
-(unsigned long long)exchangeDataMaximumSize;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)rematchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)exchangeForID:(id)arg1 ;
-(void)_updateWithInternal:(id)arg1 ;
-(id)_participantsForInternalRepresentation:(id)arg1 ;
-(id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2 ;
-(NSArray *)exchanges;
-(GKPlayer *)currentPlayer;
-(void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2 ;
-(NSArray *)activeExchanges;
-(GKTurnBasedParticipant *)currentParticipant;
-(GKTurnBasedParticipant *)localPlayerParticipant;
-(unsigned long long)matchDataMaximumSize;
-(NSDate *)dateSortKey;
-(void)setCurrentParticipant:(GKTurnBasedParticipant *)arg1 ;
-(GKTurnBasedParticipant *)previousParticipant;
-(GKTurnBasedParticipant *)firstWinnerOrTiedOrLastLoser;
-(GKTurnBasedParticipant *)previousParticipantOrFirstKnownPlayer;
-(GKTurnBasedParticipant *)playingWithParticipantOrFirstKnownPlayer;
-(void)declineInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)indexesForParticipants:(id)arg1 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isMyTurn;
-(BOOL)localPlayerHasRecentTurn;
-(GKPlayer *)showcasePlayer;
-(NSArray *)completedExchanges;
-(void)removeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadMatchDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadURLWithMatchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 leaderboardScores:(id)arg2 achievements:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

