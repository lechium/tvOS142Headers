/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {

	NSSQLCore* _sqlCore;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;              //@synthesize filter=_filter - In the implementation block
-(void)dealloc;
-(id)filter;
-(id)sqlCore;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(BOOL)willHandleStoreRequest:(id)arg1 ;
-(id)initializationConnection;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)setFilter:(id)arg1 ;
@end

