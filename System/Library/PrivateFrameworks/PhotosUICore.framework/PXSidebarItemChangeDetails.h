/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXArrayChangeDetails, PXDataSection, NSArray, NSIndexSet;

@interface PXSidebarItemChangeDetails : NSObject {

	BOOL _hasContentChanges;
	BOOL _needsReload;
	PXArrayChangeDetails* _arrayChangeDetails;
	PXDataSection* _previousDataSection;
	NSArray* _removedItems;
	NSArray* _changedItems;

}

@property (nonatomic,readonly) PXArrayChangeDetails * arrayChangeDetails;              //@synthesize arrayChangeDetails=_arrayChangeDetails - In the implementation block
@property (nonatomic,readonly) PXDataSection * previousDataSection;                    //@synthesize previousDataSection=_previousDataSection - In the implementation block
@property (nonatomic,readonly) NSArray * removedItems;                                 //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,readonly) NSArray * changedItems;                                 //@synthesize changedItems=_changedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) BOOL hasContentChanges;                                 //@synthesize hasContentChanges=_hasContentChanges - In the implementation block
@property (nonatomic,readonly) BOOL needsReload;                                       //@synthesize needsReload=_needsReload - In the implementation block
+(void)makeArrayIndexMovesIncremental:(NSRange*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)needsReload;
-(id)changedIndexes;
-(NSIndexSet *)insertedIndexes;
-(BOOL)hasMoves;
-(NSIndexSet *)removedIndexes;
-(NSArray *)removedItems;
-(id)initWithArrayChangeDetails:(id)arg1 previousDataSection:(id)arg2 ;
-(void)enumerateMovedIndexesUsingBlock:(/*^block*/id)arg1 ;
-(PXArrayChangeDetails *)arrayChangeDetails;
-(PXDataSection *)previousDataSection;
-(NSArray *)changedItems;
-(BOOL)hasContentChanges;
@end
