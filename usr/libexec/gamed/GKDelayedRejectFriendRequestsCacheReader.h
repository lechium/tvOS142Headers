//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKDelayedRejectFriendRequestsCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)readerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000f4254
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f4504
- (id)rejectFriendRequestsDescriptorForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000f43b8
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000f43a4
- (id)getFriendRequestsDescriptorStatement;	// IMP=0x00000001000f434c
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000f42ec
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000f428c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

