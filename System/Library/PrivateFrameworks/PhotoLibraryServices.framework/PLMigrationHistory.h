/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, NSDate, NSDictionary;

@interface PLMigrationHistory : PLManagedObject

@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) long long modelVersion; 
@property (nonatomic,retain) NSNumber * sourceModelVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (assign,nonatomic) short migrationType; 
@property (nonatomic,retain) NSDate * migrationDate; 
@property (nonatomic,retain) NSNumber * forceRebuildReason; 
@property (nonatomic,retain) NSDictionary * globalKeyValues; 
@property (nonatomic,retain) NSString * storeUUID; 
@property (assign,nonatomic) short origin; 
+(id)entityName;
+(id)insertCreatedWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3 ;
+(id)insertLightweightWithManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(unsigned long long)arg3 migrationDate:(id)arg4 ;
+(id)insertRebuildWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3 forceRebuildReason:(id)arg4 ;
+(id)insertIntoManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(id)arg3 migrationType:(long long)arg4 migrationDate:(id)arg5 forceRebuildReason:(id)arg6 ;
+(id)migrationHistoryWithManagedObjectContext:(id)arg1 ;
+(id)currentMigrationHistoryWithManagedObjectContext:(id)arg1 ;
+(BOOL)currentMigrationHistoryIndex:(long long*)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)migrateLegacyMigrationHistoryWithMetadata:(id)arg1 index:(long long)arg2 outGlobalKeyValues:(id)arg3 managedObjectContext:(id)arg4 ;
+(BOOL)recordCurrentMigrationStateInManagedObjectContext:(id)arg1 withPathManager:(id)arg2 migrationType:(long long)arg3 forceRebuildReason:(id)arg4 sourceModelVersion:(id)arg5 updateLegacyMigrationState:(BOOL)arg6 journalRebuildRequred:(BOOL)arg7 origin:(short)arg8 libraryCreateOptions:(unsigned long long)arg9 ;
+(long long)_rebuildMigrationHistoryWithJournal:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
@end

