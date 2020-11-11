/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SpotlightSender : NSObject
+(void)setup;
+(id)clientConnection:(long long)arg1 ;
+(BOOL)jobForTest:(long long)arg1 ;
+(BOOL)jobForDuet:(long long)arg1 ;
+(BOOL)jobForSuggestions:(long long)arg1 ;
+(BOOL)jobForImages:(long long)arg1 ;
+(id)clientConnection:(long long)arg1 jobType:(int)arg2 ;
+(BOOL)enabledForClient:(long long)arg1 ;
+(void)dispatchWithOptions:(long long)arg1 block:(/*^block*/id)arg2 ;
+(void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(long long)arg4 ;
+(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(long long)arg2 ;
+(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
+(void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteAllUserActivities:(id)arg1 client:(long long)arg2 ;
+(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 retainedData:(id)arg4 ;
+(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(long long)arg5 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(long long)arg4 ;
+(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(long long)arg3 ;
+(void)donateRelevantActions:(id)arg1 bundleID:(id)arg2 client:(long long)arg3 ;
@end

