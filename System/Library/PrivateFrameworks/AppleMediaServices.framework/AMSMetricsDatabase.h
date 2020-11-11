/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSSQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, AMSSQLiteConnection, NSObject;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {

	NSString* _containerId;
	AMSSQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _keepAliveCount;

}

@property (nonatomic,retain) AMSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) long long keepAliveCount;                                //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (nonatomic,retain) NSString * containerId;                                  //@synthesize containerId=_containerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDatabaseWithContainerId:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(AMSSQLiteConnection *)connection;
-(void)setConnection:(AMSSQLiteConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)containerId;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(void)setContainerId:(NSString *)arg1 ;
-(long long)keepAliveCount;
-(void)setKeepAliveCount:(long long)arg1 ;
-(id)initWithContainerId:(id)arg1 ;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(id)_lockedById;
-(long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(void)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(void)dropEvents:(id)arg1 error:(id*)arg2 ;
-(void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(/*^block*/id)arg3 ;
-(void)insertEvents:(id)arg1 error:(id*)arg2 ;
-(id)lockAllEventsWithError:(id*)arg1 ;
-(void)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2 ;
-(void)unlockEvents:(id)arg1 error:(id*)arg2 ;
-(void)cleanupInvalidIdentifiersWithError:(id*)arg1 ;
-(void)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2 ;
-(void)setIdentifier:(id)arg1 forKey:(id)arg2 account:(id)arg3 duration:(double)arg4 error:(id*)arg5 ;
-(id)identifierForKey:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
@end

