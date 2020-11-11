/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BBObserverServerInterface.h>
#import <libobjc.A.dylib/BBObserverClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, BBServer, NSObject, NSMutableDictionary, NSString;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface> {

	NSXPCConnection* _connection;
	BBServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _bulletinIDsToTransaction;
	NSString* _clientBundleIdentifier;

}

@property (assign,nonatomic,__weak) BBServer * server;                                    //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                   //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinIDsToTransaction;              //@synthesize bulletinIDsToTransaction=_bulletinIDsToTransaction - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                             //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
+(id)xpcInterface;
-(id)description;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BBServer *)server;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setServer:(BBServer *)arg1 ;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3 ;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)removeSection:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)noteBulletinsLoadedForSectionID:(id)arg1 ;
-(id)initWithServer:(id)arg1 connection:(id)arg2 calloutQueue:(id)arg3 ;
-(id)currentTransactionForBulletinID:(id)arg1 ;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeTransaction:(id)arg1 ;
-(unsigned long long)incrementedTransactionIDForBulletinID:(id)arg1 ;
-(void)getObserverDebugInfo:(/*^block*/id)arg1 ;
-(id)initWithServer:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4 ;
-(id)transactionBulletinIDs;
-(NSMutableDictionary *)bulletinIDsToTransaction;
-(void)setBulletinIDsToTransaction:(NSMutableDictionary *)arg1 ;
@end

