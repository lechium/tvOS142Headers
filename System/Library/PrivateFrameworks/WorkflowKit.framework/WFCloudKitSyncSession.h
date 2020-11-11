/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFCloudKitSyncSession : NSObject
+(void)initialize;
+(void)setSyncEnabled:(BOOL)arg1 ;
+(BOOL)isSyncEnabled;
+(void)setDefaultShortcutsVersion:(long long)arg1 ;
+(long long)currentDefaultShortcutsVersion;
+(long long)defaultShortcutsVersion;
+(void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)needsDefaultShortcutUpdate;
+(void)setZoneWasPurged:(BOOL)arg1 ;
+(void)setLastSyncedFlagsHash:(long long)arg1 ;
+(long long)syncedFlagsHash;
+(void)setVoiceShortcutMigrationDidSync:(BOOL)arg1 ;
+(BOOL)voiceShortcutMigrationDidRun;
+(long long)lastSyncedFlagsHash;
+(BOOL)zoneWasPurged;
+(BOOL)ignoresUserDeletedZoneErrors;
+(void)setIgnoresUserDeletedZoneErrors:(BOOL)arg1 ;
+(void)setVoiceShortcutMigrationDidRun:(BOOL)arg1 ;
+(BOOL)voiceShortcutMigrationDidSync;
-(id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2 ;
@end

