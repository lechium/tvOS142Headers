/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSMapTable, NSRecursiveLock;

@interface CLSLRUMemoryCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMapTable* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	CLSLRUMemoryCacheList* _leastRecentUsedList;
	NSMapTable* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(BOOL)writeToURL:(id)arg1 ;
-(void)_promoteListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)_removeListElement:(CLSLRUMemoryCacheListElement*)arg1 ;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(unsigned long long)currentUsedSlots;
-(void)evictSlots:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSlots;
-(BOOL)loadFromURL:(id)arg1 ;
@end

