/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryAssetsSectionGeneratedLayout.h>
#import <libobjc.A.dylib/PXGItemsGeometry.h>
#import <libobjc.A.dylib/PXCuratedLibraryRowBasedLayout.h>

@class PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout <PXGItemsGeometry, PXCuratedLibraryRowBasedLayout> {

	PXDayAssetsSectionBodyLayoutSpec* _spec;
	long long _style;
	long long _numberOfPrecedingAssets;

}

@property (nonatomic,readonly) CGSize minimumItemSize; 
@property (nonatomic,retain) PXDayAssetsSectionBodyLayoutSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long numberOfPrecedingAssets;                    //@synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets - In the implementation block
@property (nonatomic,readonly) CGSize minPlayableSpriteSize; 
@property (nonatomic,readonly) double buildingRowContentHeight; 
@property (nonatomic,readonly) double buildingRowSpacing; 
+(CGSize)estimatedSizeWithReferenceSize:(CGSize)arg1 spec:(id)arg2 style:(long long)arg3 numberOfAssets:(long long)arg4 ;
-(id)init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(PXDayAssetsSectionBodyLayoutSpec *)spec;
-(void)contentSizeDidChange;
-(void)setSpec:(PXDayAssetsSectionBodyLayoutSpec *)arg1 ;
-(void)referenceSizeDidChange;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(CGRect)arg1 ;
-(long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
-(id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2 ;
-(id)itemsInRect:(CGRect)arg1 inLayout:(id)arg2 ;
-(id)itemsGeometry;
-(void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(double)buildingRowContentHeight;
-(double)buildingRowSpacing;
-(void)setNumberOfPrecedingAssets:(long long)arg1 ;
-(long long)numberOfPrecedingAssets;
-(id)newGenerator;
-(id)_inputItemAtIndex:(unsigned)arg1 ;
-(CGSize)minimumItemSize;
-(CGRect)sectionRect;
-(void)enumerateHeroSpritesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)exploreGenerator;
-(CGSize)_minSizeOfDominantSprites;
-(CGSize)minPlayableSpriteSize;
-(long long)_initialItemInDirection:(unsigned long long)arg1 ;
-(long long)_itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2 ;
@end

