/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectContext;

@interface TVCKStoreLookupItemCache : NSObject {

	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)_managedObjectModel;
+(id)_persistentStoreURL;
+(id)defaultCache;
+(id)_entryEntityName;
+(id)_fetchRequestForLookupItemCacheEntry;
+(id)_fetchRequestForEntriesWithExpirationDate:(id)arg1 operatorType:(unsigned long long)arg2 ;
+(id)_batchDeleteRequestWithExpirationDate:(id)arg1 ;
+(id)_fetchRequestForItemsExpiringAfterDate:(id)arg1 ;
+(id)_fetchRequestForEntriesWithAdamIDs:(id)arg1 ;
-(id)init;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)removeAllLookupItems;
-(void)_deleteEntriesWithExpirationDate:(id)arg1 ;
-(id)allLookupItemsByAdamID;
-(id)lookupItemForAdamID:(id)arg1 ;
-(void)setLookupItem:(id)arg1 forAdamID:(id)arg2 ;
-(void)updateBookmarks:(id)arg1 ;
@end

