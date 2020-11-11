/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPMediaKitEntityRelationshipPayloadProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, MSVSQLDatabase, NSHashTable, NSString;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MSVSQLDatabase* _database;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) MSVSQLDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServerObjectDatabase;
+(BOOL)prefersInMemoryDatabase;
+(void)setPrefersInMemoryDatabase:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(MSVSQLDatabase *)database;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)payloadForRelatedEntityWithIdentifierSet:(id)arg1 ;
-(id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 ;
-(id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 childKey:(id)arg2 ;
-(id)assetsMatchingIdentifierSet:(id)arg1 ;
-(id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg1 ;
-(void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)importAssetsFromRequest:(id)arg1 error:(id*)arg2 ;
-(id)_initWithDatabaseCreationBlock:(/*^block*/id)arg1 ;
-(id)_assetsMatchingIdentifierSet:(id)arg1 query:(id)arg2 ;
-(BOOL)_createDatabaseSchema;
@end

