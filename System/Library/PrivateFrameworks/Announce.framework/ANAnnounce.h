/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANAnnounceDelegate;
@class NSXPCConnection, NSArray;

@interface ANAnnounce : NSObject {

	id<ANAnnounceDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSArray * unplayedAnnouncements; 
@property (nonatomic,readonly) NSArray * receivedAnnouncements; 
@property (assign,nonatomic,__weak) id<ANAnnounceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<ANAnnounceDelegate>)delegate;
-(void)setDelegate:(id<ANAnnounceDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)sendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)localParticipant:(/*^block*/id)arg1 ;
-(void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)receivedAnnouncementIDs:(/*^block*/id)arg1 ;
-(void)announcementForID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getReceivedAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedAnnouncementInfo:(/*^block*/id)arg1 ;
-(void)getScanningDeviceCandidates:(/*^block*/id)arg1 ;
-(id)announcementForID:(id)arg1 ;
-(NSArray *)unplayedAnnouncements;
-(id)homeNamesForContext:(id)arg1 ;
-(BOOL)isLocalDeviceInRoom:(id)arg1 ;
-(void)sendAnnouncement:(id)arg1 toRoomsWithNames:(id)arg2 andZonesWithNames:(id)arg3 inHomeWithName:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_sendRequestLegacy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAnnouncement:(id)arg1 toRoomsWithIDs:(id)arg2 andZonesWithIDs:(id)arg3 inHomeWithID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)broadcastReply:(id)arg1 forAnnouncementID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendAnnouncement:(id)arg1 toHomeWithName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendAnnouncement:(id)arg1 toHomeWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendReply:(id)arg1 forAnnouncement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)broadcastReply:(id)arg1 forAnnouncement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)broadcastReply:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)receivedAnnouncements;
-(id)contextFromAnnouncement:(id)arg1 ;
-(BOOL)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 ;
-(BOOL)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 ;
-(void)prewarmWithHandler:(/*^block*/id)arg1 ;
-(void)sendAnnouncement:(id)arg1 toRoomsWithNames:(id)arg2 inHomeWithName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendAnnouncement:(id)arg1 toZonesWithNames:(id)arg2 inHomeWithName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendAnnouncement:(id)arg1 toRoomsWithIDs:(id)arg2 inHomeWithID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendAnnouncement:(id)arg1 toZonesWithIDs:(id)arg2 inHomeWithID:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

