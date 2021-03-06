/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSArray;

@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _mutableOrderedSet;
	NSArray* _orderedItems;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)orderedObjects;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(BOOL)containsOrderedObject:(id)arg1 ;
@end

