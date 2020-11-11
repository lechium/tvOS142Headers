/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1;
-(void)setMigratedLocalVersion:(id)arg1;
-(void)setLocalVersion:(id)arg1;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;
-(void)saveTokenObject:(id)arg1;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;

@end
