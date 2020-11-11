//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

#import "GKCacheObjectImageProtocol-Protocol.h"

@class GKAchievementPointsListCacheObject, GKChallengeListCacheObject, GKFriendListCacheObject, GKFriendRecommendationListCacheObject, GKFriendRequestListCacheObject, GKGameListCacheObject, GKGameRecommendationListCacheObject, NSDate, NSNumber, NSOrderedSet, NSSet, NSString;

@interface GKPlayerProfileCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;	// IMP=0x000000010004c070
+ (id)playerProfilesWithPlayerIDs:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000010004aa08
+ (id)playerProfilesWithPlayers:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000010004a9a8
+ (id)profileForPlayer:(id)arg1 context:(id)arg2;	// IMP=0x000000010004a920
+ (id)playerProfileWithPlayerID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000010004a71c
+ (id)localPlayerInManagedObjectContext:(id)arg1;	// IMP=0x000000010004a55c
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100049bd8
+ (id)uniqueAttributeName;	// IMP=0x0000000100049bcc
+ (id)filterPlayerIDs:(id)arg1 familiarity:(int)arg2 includeSelf:(_Bool)arg3;	// IMP=0x000000010004d0f4
+ (unsigned char)piecesToLoadForFamiliarity:(int)arg1;	// IMP=0x000000010004d0c4
+ (id)playersByFamiliarity:(id)arg1;	// IMP=0x000000010004cc64
+ (void)setFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;	// IMP=0x000000010004cac8
+ (void)removeFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;	// IMP=0x000000010004c768
+ (void)addFamiliarPlayerIDs:(id)arg1 familiarity:(int)arg2;	// IMP=0x000000010004c5f4
+ (int)familiarityForPlayerID:(id)arg1;	// IMP=0x000000010004c4bc
+ (id)selfPlayerID;	// IMP=0x000000010004c490
+ (void)buildFamiliarilyLookupForProfile:(id)arg1;	// IMP=0x000000010004c2ec
+ (id)_familiarityLookup;	// IMP=0x000000010004c190
- (void)expireRecentMatchesWithGame:(id)arg1;	// IMP=0x000000010004c07c
- (id)internalRepresentation;	// IMP=0x000000010004bf38
- (id)internalRepresentationWithPieces:(unsigned char)arg1;	// IMP=0x000000010004bd34
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 pieces:(unsigned char)arg3;	// IMP=0x000000010004b050
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x000000010004acb8
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004aca8
- (void)deleteCachedImage:(id)arg1;	// IMP=0x000000010004a1b0
- (void)deleteCachedAvatars;	// IMP=0x0000000100049fa4
- (void)clearImages;	// IMP=0x0000000100049d3c
@property(nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;
- (void)invalidate;	// IMP=0x0000000100049c5c
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) _Bool isLocalPlayer; // @dynamic isLocalPlayer;
@property(readonly, nonatomic) int familiarity; // @dynamic familiarity;

// Remaining properties
@property(retain, nonatomic) NSNumber *acceptedGameInviteFromThisFriend; // @dynamic acceptedGameInviteFromThisFriend;
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(retain, nonatomic) NSSet *achievementLists; // @dynamic achievementLists;
@property(retain, nonatomic) GKAchievementPointsListCacheObject *achievementPointsList; // @dynamic achievementPointsList;
@property(nonatomic) int achievementsVisibility; // @dynamic achievementsVisibility;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSNumber *automatchedTogether; // @dynamic automatchedTogether;
@property(nonatomic) int availablePieces; // @dynamic availablePieces;
@property(retain, nonatomic) NSNumber *avatarType; // @dynamic avatarType;
@property(retain, nonatomic) GKChallengeListCacheObject *challengeList; // @dynamic challengeList;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool defaultNickname; // @dynamic defaultNickname;
@property(nonatomic) _Bool defaultPrivacyVisibility; // @dynamic defaultPrivacyVisibility;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSNumber *friendBiDirectional; // @dynamic friendBiDirectional;
@property(retain, nonatomic) NSSet *friendLeaderboards; // @dynamic friendLeaderboards;
@property(retain, nonatomic) NSNumber *friendLevel; // @dynamic friendLevel;
@property(retain, nonatomic) GKFriendListCacheObject *friendList; // @dynamic friendList;
@property(retain, nonatomic) NSNumber *friendPlayedNearby; // @dynamic friendPlayedNearby;
@property(retain, nonatomic) NSNumber *friendPlayedWith; // @dynamic friendPlayedWith;
@property(retain, nonatomic) GKFriendRecommendationListCacheObject *friendRecommendationList; // @dynamic friendRecommendationList;
@property(retain, nonatomic) GKFriendRequestListCacheObject *friendRequestList; // @dynamic friendRequestList;
@property(nonatomic) int friendsVisibility; // @dynamic friendsVisibility;
@property(retain, nonatomic) GKGameListCacheObject *gameList; // @dynamic gameList;
@property(retain, nonatomic) NSString *gamePlayerID; // @dynamic gamePlayerID;
@property(retain, nonatomic) GKGameRecommendationListCacheObject *gameRecommendationList; // @dynamic gameRecommendationList;
@property(retain, nonatomic) NSSet *gameRecords; // @dynamic gameRecords;
@property(nonatomic) int gamesPlayedVisibility; // @dynamic gamesPlayedVisibility;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSNumber *initiatedGameInviteToThisFriend; // @dynamic initiatedGameInviteToThisFriend;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(retain, nonatomic) NSString *lastPlayedGame; // @dynamic lastPlayedGame;
@property(retain, nonatomic) NSSet *leaderboardLists; // @dynamic leaderboardLists;
@property(nonatomic) int numberOfAchievementPoints; // @dynamic numberOfAchievementPoints;
@property(nonatomic) int numberOfAchievements; // @dynamic numberOfAchievements;
@property(nonatomic) int numberOfFriends; // @dynamic numberOfFriends;
@property(nonatomic) int numberOfFriendsInCommon; // @dynamic numberOfFriendsInCommon;
@property(nonatomic) int numberOfGames; // @dynamic numberOfGames;
@property(nonatomic) int numberOfGamesInCommon; // @dynamic numberOfGamesInCommon;
@property(nonatomic) int numberOfTurns; // @dynamic numberOfTurns;
@property(retain, nonatomic) NSOrderedSet *orderedEmailAddresses; // @dynamic orderedEmailAddresses;
@property(retain, nonatomic) NSSet *otherRecentGameLists; // @dynamic otherRecentGameLists;
@property(retain, nonatomic) NSSet *ownedRecentGameLists; // @dynamic ownedRecentGameLists;
@property(nonatomic) _Bool photoPending; // @dynamic photoPending;
@property(retain, nonatomic) NSDate *photoPendingExpirationDate; // @dynamic photoPendingExpirationDate;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(nonatomic) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(retain, nonatomic) NSSet *recentPlayerLists; // @dynamic recentPlayerLists;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *teamPlayerID; // @dynamic teamPlayerID;

@end
