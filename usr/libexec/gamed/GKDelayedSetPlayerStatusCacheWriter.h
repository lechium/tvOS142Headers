//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPlayerStatusCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x0000000100091294
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100091774
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x0000000100091554
- (void)bindParametersForGetOldStatusesStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x0000000100091540
- (id)getOldStatusesSQL;	// IMP=0x0000000100091500
- (void)bindParametersForDeleteOldStatusesStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00000001000914ec
- (id)deleteOldStatusesSQL;	// IMP=0x00000001000914ac
- (void)bindParametersForStatusStatement:(struct sqlite3_stmt *)arg1 status:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x0000000100091468
- (id)statusInsertSQL;	// IMP=0x0000000100091420
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000913cc
- (id)requestsInsertSQL;	// IMP=0x0000000100091384
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x0000000100091324
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000912c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

