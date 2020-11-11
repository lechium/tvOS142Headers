/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFArray, NSManagedObjectContext, NSCachingFetchRequest;

@interface _PFBatchFaultingArray : NSArray {

	int _cd_rc;
	unsigned _count;
	_PFArray* _array;
	unsigned* _entryFlags;
	NSManagedObjectContext* _moc;
	NSCachingFetchRequest* _request;
	unsigned _batchSize;
	unsigned* _LRUBatches;
	struct {
		unsigned _LRUIndex : 8;
		unsigned _uniformEntity : 1;
		unsigned _LRUEntryCount : 11;
		unsigned _RESERVED : 12;
	}  _flags;

}
+(void)initialize;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3 ;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
@end

