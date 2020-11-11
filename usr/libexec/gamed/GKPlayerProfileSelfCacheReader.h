//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileSelfCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x0000000100084c78
- (id)emailForPlayerEmailStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100084b70
- (void)bindParametersForEmailsStatement:(struct sqlite3_stmt *)arg1 playerRowID:(int)arg2;	// IMP=0x0000000100084b20
- (id)playerEmailsSQLString;	// IMP=0x00000001000849e8
- (double)photoPendingTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849dc
- (double)friendRequestsTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849d0
- (double)challengesTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849c4
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849b8
- (int)rowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849ac
- (int)lastPlayedGameRowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000849a0
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100084994
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000842cc
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x0000000100084288
- (id)playerProfileSQLString;	// IMP=0x0000000100084140

@end
