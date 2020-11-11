/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <Memories/Memories-Structs.h>
@class NSMutableDictionary, NSObject, NSRecursiveLock;

@interface FavoriteManager : NSObject {

	BOOL _migrating;
	NSMutableDictionary* _favoriteDictionary;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _serialQueueGroup;
	NSRecursiveLock* _dictLock;

}

@property (nonatomic,retain) NSMutableDictionary * favoriteDictionary;                   //@synthesize favoriteDictionary=_favoriteDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                   //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> serialQueueGroup;              //@synthesize serialQueueGroup=_serialQueueGroup - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * dictLock;                                 //@synthesize dictLock=_dictLock - In the implementation block
@property (assign,getter=isMigrating,nonatomic) BOOL migrating;                          //@synthesize migrating=_migrating - In the implementation block
+(id)sharedFavoriteManager;
+(id)trimRanges:(id)arg1 toMovie:(id)arg2 ;
+(id)subtractRange:(NSRange)arg1 fromRange:(NSRange)arg2 ;
+(BOOL)favoriteRanges:(id)arg1 containRange:(NSRange)arg2 ;
+(id)collapseRanges:(id)arg1 ;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)migrate;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isMigrating;
-(id)favoriteRangesForMovie:(id)arg1 ;
-(void)loadFavoriteDictionary;
-(id)propertyListFileURL;
-(NSObject*<OS_dispatch_group>)serialQueueGroup;
-(NSRecursiveLock *)dictLock;
-(NSMutableDictionary *)favoriteDictionary;
-(void)_setFavoriteInfo:(id)arg1 forURL:(id)arg2 ;
-(void)_removeFavoriteInfoForURL:(id)arg1 ;
-(BOOL)FAILSAFE_isInvalidRangesArray:(id)arg1 ;
-(void)setMigrating:(BOOL)arg1 ;
-(void)saveFavoriteDictionary;
-(id)_favoriteInfoForURL:(id)arg1 ;
-(void)_setFavoriteRanges:(id)arg1 forURL:(id)arg2 ;
-(void)removeFavoriteRange:(NSRange)arg1 forMovie:(id)arg2 ;
-(void)addFavoriteRange:(NSRange)arg1 forMovie:(id)arg2 shouldCollapse:(BOOL)arg3 ;
-(void)waitForOutstandingWritingToComplete;
-(void)removeAllFavoritesForMovie:(id)arg1 ;
-(void)unfavoriteRange:(NSRange)arg1 forMovie:(id)arg2 ;
-(void)addFavoriteRange:(NSRange)arg1 forMovie:(id)arg2 ;
-(BOOL)favoriteRange:(NSRange)arg1 existsForMovie:(id)arg2 ;
-(BOOL)favoritesExistInRange:(NSRange)arg1 forMovie:(id)arg2 ;
-(id)_favoriteRangesForURL:(id)arg1 ;
-(id)combinedRCRangeArrayFromNSRangeArray:(id)arg1 ;
-(void)setFavoriteDictionary:(NSMutableDictionary *)arg1 ;
-(void)setSerialQueueGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setDictLock:(NSRecursiveLock *)arg1 ;
@end

