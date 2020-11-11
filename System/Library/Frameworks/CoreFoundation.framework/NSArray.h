/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/ISStackedCompositorResource.h>
#import <libobjc.A.dylib/CUByteCodable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString;

@interface NSArray : NSObject <ISStackedCompositorResource, CUByteCodable, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) NSArray*<ISScalableCompositorResource> resourceStack; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long count; 
+(id)arrayWithValues:(id)arg1 inBlock:(/*^block*/id)arg2 ;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)array;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
-(id)_uikit_complayout_NSArrayAdditions_apiRepresentations;
-(id)_ui_onlyObject;
-(id)_ui_firstObject;
-(id)_filteredArrayOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1 ;
-(CGSize)_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(CGPoint*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5 ;
-(void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(NSRange)arg3 ;
-(NSArray*<ISScalableCompositorResource>)resourceStack;
-(id)_web_lowercaseStrings;
-(id)un_nonEmptyCopy;
-(id)un_safeArrayContainingClass:(Class)arg1 ;
-(id)un_filter:(/*^block*/id)arg1 ;
-(id)un_map:(/*^block*/id)arg1 ;
-(void)un_each:(/*^block*/id)arg1 ;
-(id)un_safeArrayContainingClasses:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)ac_filter:(/*^block*/id)arg1 ;
-(id)ac_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ac_map:(/*^block*/id)arg1 ;
-(id)ac_mapNullable:(/*^block*/id)arg1 ;
-(id)elementsToString:(int)arg1 debug:(BOOL)arg2 ;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)cuFilteredArrayUsingBlock:(/*^block*/id)arg1 ;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)bs_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_map:(/*^block*/id)arg1 ;
-(id)bs_compactMap:(/*^block*/id)arg1 ;
-(id)bs_reduce:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)bs_firstObjectOfClass:(Class)arg1 ;
-(id)bs_flatten;
-(id)bs_differenceWithArray:(id)arg1 ;
-(void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)bs_first:(unsigned long long)arg1 ;
-(id)bs_firstObjectOfClassNamed:(id)arg1 ;
-(id)bs_objectsOfClass:(Class)arg1 ;
-(id)bs_reverse;
-(id)bs_mapNoNulls:(/*^block*/id)arg1 ;
-(id)bs_flattenedDifferenceWithArray:(id)arg1 ;
-(id)_arrayByFilteringEmojiCandidates:(long long)arg1 ;
-(id)_arrayByFilteringCandidatesForNonExtendedView;
-(id)sortedPids;
-(id)ax_mappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_filteredArrayUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)ax_containsObjectUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_flatMappedArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)ax_arrayByRemovingDuplicates;
-(id)cutFirstObject;
-(NSString *)debugDescription;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(/*^block*/id)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)differenceFromArray:(id)arg1 ;
-(id)arrayByApplyingDifference:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allObjects;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithOrderedSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)isNSArray__;
-(id)componentsJoinedByString:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObject;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)lastObject;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)reversedArray;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
@end

