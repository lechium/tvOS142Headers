/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation {

	BOOL _friendsOnly;
	NSArray* _participantStates;
	long long _startIndex;
	long long _count;

}

@property (nonatomic,retain) NSArray * participantStates;              //@synthesize participantStates=_participantStates - In the implementation block
@property (assign,nonatomic) BOOL friendsOnly;                         //@synthesize friendsOnly=_friendsOnly - In the implementation block
@property (assign,nonatomic) long long startIndex;                     //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long count;                          //@synthesize count=_count - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(void)setStartIndex:(long long)arg1 ;
-(long long)startIndex;
-(NSArray *)participantStates;
-(void)setParticipantStates:(NSArray *)arg1 ;
-(BOOL)friendsOnly;
-(void)setFriendsOnly:(BOOL)arg1 ;
@end

