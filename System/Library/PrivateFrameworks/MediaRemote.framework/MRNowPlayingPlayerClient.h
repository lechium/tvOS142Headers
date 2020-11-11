/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MRNowPlayingClientState.h>
#import <libobjc.A.dylib/MRTransactionSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MRPlaybackQueue, NSArray, NSDictionary, MRNowPlayingArtwork, NSDate, NSMutableDictionary, NSMutableArray, MRPlayerPath, MRPlaybackQueueSubscriptionController, MRNowPlayingPlayerClientCallbacks, MRContentItem;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRPlaybackQueue* _playbackQueue;
	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;
	NSDate* _playbackStateDate;
	unsigned long long _capabilities;
	NSDate* _lastReceivedCommandDate;
	NSDate* _activeRequestedDate;
	BOOL _pictureInPictureEnabled;
	BOOL _invalidatingPlaybackQueue;
	double _invalidatationTimestamp;
	NSMutableDictionary* _coelscingTransactionPackets;
	NSMutableArray* _transactionSources;
	NSMutableDictionary* _pendingPlaybackSessionMigrateEvents;
	NSMutableDictionary* _cachedContentItemChangedForPendingPlaybackQueueRequest;
	NSMutableArray* _enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;
	MRNowPlayingPlayerClientCallbacks* _clientCallbacks;

}

@property (assign,nonatomic) BOOL invalidatingPlaybackQueue; 
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                     //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork; 
@property (nonatomic,readonly) unsigned playbackState; 
@property (assign,nonatomic) double invalidatationTimestamp; 
@property (nonatomic,retain) MRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic) unsigned long long capabilities; 
@property (nonatomic,readonly) MRContentItem * nowPlayingContentItem; 
@property (nonatomic,readonly) BOOL hasReceivedCommandRecently; 
@property (assign,getter=isPictureInPictureEnabled,nonatomic) BOOL pictureInPictureEnabled; 
@property (nonatomic,retain) NSDate * activeRequestedDate; 
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) MRNowPlayingPlayerClientCallbacks * clientCallbacks;                         //@synthesize clientCallbacks=_clientCallbacks - In the implementation block
-(id)debugDescription;
-(id)description;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(MRNowPlayingPlayerClientCallbacks *)clientCallbacks;
-(MRPlayerPath *)playerPath;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(NSArray *)supportedCommands;
-(BOOL)isPictureInPictureEnabled;
-(void)setPictureInPictureEnabled:(BOOL)arg1 ;
-(void)updatePlayer:(id)arg1 ;
-(unsigned)playbackState;
-(void)updatePlaybackState:(unsigned)arg1 date:(id)arg2 ;
-(MRPlaybackQueue *)playbackQueue;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)restoreNowPlayingClientState;
-(BOOL)hasReceivedCommandRecently;
-(void)addPendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(BOOL)removePendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(unsigned)resolveCommand:(unsigned)arg1 ;
-(id)resolveCommandOptions:(unsigned)arg1 options:(id)arg2 ;
-(void)setInvalidatationTimestamp:(double)arg1 ;
-(void)clearCachedContentItemArtworkForItems:(id)arg1 ;
-(void)sendContentItemChanges:(id)arg1 ;
-(void)transactionDidEnd:(id)arg1 ;
-(void)invalidatePlaybackQueue;
-(void)invalidatePlaybackQueueWithPlaybackQueue:(id)arg1 ;
-(void)setActiveRequestedDate:(NSDate *)arg1 ;
-(NSDate *)activeRequestedDate;
-(MRContentItem *)nowPlayingContentItem;
-(void)flushPendingPlaybackSessionMigrateEvents:(/*^block*/id)arg1 ;
-(void)setInvalidatingPlaybackQueue:(BOOL)arg1 ;
-(double)invalidatationTimestamp;
-(BOOL)invalidatingPlaybackQueue;
-(void)beginSendingTransactions;
-(void)endSendingTransactions;
-(void)addPendingRequest:(id)arg1 ;
-(void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2 ;
-(void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2 ;
@end

