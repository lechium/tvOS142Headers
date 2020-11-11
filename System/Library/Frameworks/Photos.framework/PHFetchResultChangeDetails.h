/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@class PHFetchResult, NSArray, NSIndexSet;

@interface PHFetchResultChangeDetails : NSObject {

	PHFetchResult* _fetchResultBeforeChanges;
	PHFetchResult* _fetchResultAfterChanges;
	NSArray* _previousObjects;
	NSArray* _currentObjects;
	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSArray* _changedOIDs;
	NSIndexSet* _changedIndexes;
	BOOL _skipIncrementalChanges;

}

@property (nonatomic,readonly) NSIndexSet * movedIndexes; 
@property (nonatomic,readonly) const CFArrayRef movedFromIndexes; 
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (readonly) PHFetchResult * fetchResultBeforeChanges; 
@property (readonly) PHFetchResult * fetchResultAfterChanges; 
@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) NSIndexSet * removedIndexes; 
@property (readonly) NSArray * removedObjects; 
@property (readonly) NSIndexSet * insertedIndexes; 
@property (readonly) NSArray * insertedObjects; 
@property (readonly) NSIndexSet * changedIndexes; 
@property (readonly) NSArray * changedObjects; 
@property (readonly) BOOL hasMoves; 
+(id)_identifiersForPHObjects:(id)arg1 ;
+(id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(id)description;
-(void)dealloc;
-(NSArray *)insertedObjects;
-(NSIndexSet *)changedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(BOOL)shouldReload;
-(BOOL)hasMoves;
-(NSArray *)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(NSIndexSet *)movedIndexes;
-(const CFArrayRef)movedFromIndexes;
-(BOOL)hasIncrementalChanges;
-(id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedOIDs:(id)arg3 unknownMergeEvent:(BOOL)arg4 ;
-(id)initWithManualFetchResultAfterChanges:(id)arg1 ;
-(BOOL)hasAnyChanges;
-(PHFetchResult *)fetchResultBeforeChanges;
-(PHFetchResult *)fetchResultAfterChanges;
-(NSIndexSet *)removedIndexes;
-(NSArray *)removedObjects;
-(void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long*)arg1 updatedCount:(unsigned long long*)arg2 deletedCount:(unsigned long long*)arg3 ;
-(void)calculateDiffs;
-(BOOL)hasDiffs;
@end

