/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {

	unsigned long long _count;
	NSArray* _frozenColumnNames;
	NSArray* _frozenObjects;
	NSArray* _frozenIntegers;
	NSArray* _frozenDoubles;
	NSArray* _frozenStrings;
	NSArray* _frozenDatas;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
@end

