/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNFavoritesLogger;
@class NSMutableArray, CNContactStore, NSMutableDictionary, NSArray;

@interface CNFavorites : NSObject {

	NSMutableArray* _entries;
	BOOL _dirty;
	BOOL _needsReload;
	CNContactStore* _contactStore;
	NSMutableDictionary* _uidToEntry;
	unsigned long long _postCount;
	id<CNFavoritesLogger> _logger;

}

@property (nonatomic,retain) CNContactStore * contactStore;                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uidToEntry;              //@synthesize uidToEntry=_uidToEntry - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                    //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) unsigned long long postCount;                  //@synthesize postCount=_postCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                              //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) id<CNFavoritesLogger> logger;                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSArray * entries; 
@property (getter=isFull,readonly) BOOL full; 
+(id)sharedInstance;
+(id)favoritesPath;
+(void)flushSingleton;
-(id)init;
-(void)dealloc;
-(void)setDirty:(BOOL)arg1 ;
-(NSArray *)entries;
-(id<CNFavoritesLogger>)logger;
-(void)save;
-(BOOL)dirty;
-(void)addEntry:(id)arg1 ;
-(void)removeAllEntries;
-(BOOL)isFull;
-(void)_postChangeNotification;
-(void)_addEntryToMap:(id)arg1 ;
-(void)recacheIdentitiesSoon;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)saveImmediately;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 logger:(id)arg2 ;
-(BOOL)shouldSimulateCrashReportForError:(id)arg1 ;
-(BOOL)needsReload;
-(void)setNeedsReload:(BOOL)arg1 ;
-(id)_entryDictionaries;
-(void)loadEntriesIfNecessary;
-(NSMutableDictionary *)uidToEntry;
-(id)entriesForContact:(id)arg1 ;
-(id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 ;
-(unsigned long long)postCount;
-(void)setUidToEntry:(NSMutableDictionary *)arg1 ;
-(void)setPostCount:(unsigned long long)arg1 ;
-(BOOL)writeFavoritesToFile:(id)arg1 ;
-(id)_uniqueRematchedEntries:(id)arg1 ;
-(id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1 ;
-(id)entryWithIdentifier:(id)arg1 forContact:(id)arg2 ;
-(id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_entriesChangedExternally;
-(void)rematchEntriesWithOptions:(unsigned long long)arg1 ;
@end

