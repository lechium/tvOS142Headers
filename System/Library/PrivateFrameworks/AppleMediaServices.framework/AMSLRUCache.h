/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	AMSDoubleLinkedList* _backingList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedList * backingList;                     //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)_count;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(AMSDoubleLinkedList *)backingList;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)maxSize;
-(id)allObjectsAndKeys;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBackingList:(AMSDoubleLinkedList *)arg1 ;
-(id)objectForKey:(id)arg1 withCreationBlock:(/*^block*/id)arg2 ;
@end

