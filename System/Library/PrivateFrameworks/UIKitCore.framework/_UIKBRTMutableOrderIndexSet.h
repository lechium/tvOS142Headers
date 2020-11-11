/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet;

@interface _UIKBRTMutableOrderIndexSet : NSObject {

	BOOL _reversed;
	NSMutableIndexSet* _indexSet;

}

@property (nonatomic,readonly) NSMutableIndexSet * indexSet;              //@synthesize indexSet=_indexSet - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long lowestIndex; 
@property (readonly) unsigned long long highestIndex; 
@property (readonly) unsigned long long beginningIndex; 
@property (readonly) unsigned long long endingIndex; 
@property (assign,nonatomic) BOOL reversed;                               //@synthesize reversed=_reversed - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)addIndex:(unsigned long long)arg1 ;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(NSMutableIndexSet *)indexSet;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)removeIndexes:(id)arg1 ;
-(BOOL)reversed;
-(void)setReversed:(BOOL)arg1 ;
-(unsigned long long)lowestIndex;
-(unsigned long long)highestIndex;
-(unsigned long long)beginningIndex;
-(unsigned long long)endingIndex;
@end

