/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
+(id)setWithCapacity:(unsigned long long)arg1 ;
-(void)bs_safeAddObject:(id)arg1 ;
-(void)ax_replaceWithMatchingObject:(id)arg1 updatingWithBlock:(/*^block*/id)arg2 ;
-(Class)classForCoder;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)_mutate;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
@end

