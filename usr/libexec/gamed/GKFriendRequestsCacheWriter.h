//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRequestsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000bcc64
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd35c
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000bd13c
- (void)bindParametersForRequestStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000bd088
- (id)requestDetailsUpdateSQL;	// IMP=0x00000001000bd02c
- (id)requestDetailsInsertSQL;	// IMP=0x00000001000bcfd0
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000bcf28
- (id)requestRelationshipUpdateSQL;	// IMP=0x00000001000bcecc
- (id)requestRelationshipInsertSQL;	// IMP=0x00000001000bce70
- (void)bindParametersForRequestingPlayerStatement:(struct sqlite3_stmt *)arg1 player:(id)arg2;	// IMP=0x00000001000bce5c
- (id)requestingPlayerInsertSQL;	// IMP=0x00000001000bce1c
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x00000001000bcdd0
- (id)listExpirationDateUpdateSQL;	// IMP=0x00000001000bcd88
- (id)listExpirationDateInsertSQL;	// IMP=0x00000001000bcd40
- (void)dealloc;	// IMP=0x00000001000bccf8
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000bcc98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

