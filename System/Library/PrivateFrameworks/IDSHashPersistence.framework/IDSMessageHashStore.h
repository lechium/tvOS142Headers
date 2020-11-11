/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface IDSMessageHashStore : NSObject {

	unsigned long long _initialProcessTime;
	unsigned long long _initialServerTime;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_source> _databaseCloseTimer;
	double _databaseLastUpdateTime;
	NSMutableArray* _recentlySeenHashes;

}

@property (assign,nonatomic) unsigned long long initialProcessTime;                         //@synthesize initialProcessTime=_initialProcessTime - In the implementation block
@property (assign,nonatomic) unsigned long long initialServerTime;                          //@synthesize initialServerTime=_initialServerTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ivarQueue;                        //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> databaseCloseTimer;              //@synthesize databaseCloseTimer=_databaseCloseTimer - In the implementation block
@property (assign,nonatomic) double databaseLastUpdateTime;                                 //@synthesize databaseLastUpdateTime=_databaseLastUpdateTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentlySeenHashes;                           //@synthesize recentlySeenHashes=_recentlySeenHashes - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)closeDatabase;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(void)_setDatabaseCloseTimerOnIvarQueue;
-(void)setIvarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_performInitialHousekeeping;
-(void)_startCleanupTimer;
-(unsigned long long)_currentLocalTime;
-(unsigned long long)initialProcessTime;
-(unsigned long long)initialServerTime;
-(void)_runCleanup;
-(BOOL)containsMessageHash:(id)arg1 ;
-(void)addMessageHash:(id)arg1 ;
-(void)updateCreationDateForHash:(id)arg1 ;
-(void)setInitialProcessTime:(unsigned long long)arg1 ;
-(void)setInitialServerTime:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)databaseCloseTimer;
-(void)setDatabaseCloseTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)databaseLastUpdateTime;
-(void)setDatabaseLastUpdateTime:(double)arg1 ;
-(NSMutableArray *)recentlySeenHashes;
-(void)setRecentlySeenHashes:(NSMutableArray *)arg1 ;
@end

