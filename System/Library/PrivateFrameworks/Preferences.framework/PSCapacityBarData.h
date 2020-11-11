/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PSCapacityBarData : NSObject <NSCopying> {

	NSArray* _orderedCategories;
	NSArray* _adjustedCategories;
	BOOL _hideTinyCategories;
	int _sortStyle;
	long long _categoryLimit;
	long long _capacity;
	long long _bytesUsed;
	NSArray* _categories;

}

@property (assign) long long categoryLimit;                     //@synthesize categoryLimit=_categoryLimit - In the implementation block
@property (assign) BOOL hideTinyCategories;                     //@synthesize hideTinyCategories=_hideTinyCategories - In the implementation block
@property (assign) int sortStyle;                               //@synthesize sortStyle=_sortStyle - In the implementation block
@property (assign) long long capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (assign) long long bytesUsed;                         //@synthesize bytesUsed=_bytesUsed - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
@property (readonly) NSArray * orderedCategories; 
@property (readonly) NSArray * adjustedCategories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)capacity;
-(void)setCapacity:(long long)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)orderedCategories;
-(long long)bytesUsed;
-(BOOL)hideTinyCategories;
-(NSArray *)adjustedCategories;
-(long long)categoryLimit;
-(void)setCategoryLimit:(long long)arg1 ;
-(void)setHideTinyCategories:(BOOL)arg1 ;
-(int)sortStyle;
-(void)setSortStyle:(int)arg1 ;
-(void)setBytesUsed:(long long)arg1 ;
@end

