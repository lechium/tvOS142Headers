/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXMagazineGrid : NSObject {

	unsigned long long _numberOfColumns;
	long long* _table;
	unsigned long long _tableSizeInBytes;
	long long _maxRows;

}

@property (nonatomic,readonly) unsigned long long currentRowsUsed; 
@property (nonatomic,readonly) unsigned long long endingType; 
-(void)dealloc;
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)currentRowsUsed;
-(void)resetWithSize:(unsigned long long)arg1 ;
-(void)enlargeTable;
-(void)setTileIdentifier:(unsigned long long)arg1 forArea:(PXMagazineRect)arg2 ;
-(void)clearArea:(PXMagazineRect)arg1 ;
-(BOOL)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3 ;
-(BOOL)isPerfectEnding;
-(BOOL)isGoodEnding;
-(BOOL)_hasAnyTilesUsedInArea:(PXMagazineRect)arg1 ;
-(long long)_numberOfEmptyTilesInArea:(PXMagazineRect)arg1 ;
-(BOOL)_hasAnyEmptyTilesInArea:(PXMagazineRect)arg1 ;
-(long long)_numberOfEmptyTilesAtTheEnd;
-(unsigned long long)endingType;
-(unsigned long long)_rowsUsed;
-(BOOL)_isEmptyGrid;
@end

