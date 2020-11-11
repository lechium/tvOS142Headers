/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class PHAsset, NSArray;

@interface PXAssetVariationsDataSource : PXSectionedDataSource {

	PHAsset* _asset;
	NSArray* _variations;

}

@property (nonatomic,copy,readonly) NSArray * variations;              //@synthesize variations=_variations - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                        //@synthesize asset=_asset - In the implementation block
+(id)emptyDataSource;
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PHAsset *)asset;
-(long long)numberOfSections;
-(NSArray *)variations;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithVariations:(id)arg1 asset:(id)arg2 ;
@end

