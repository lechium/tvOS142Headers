/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGStackLayout.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGSublayoutFaultingDelegate.h>
#import <libobjc.A.dylib/PXAssetSectionLayoutDelegate.h>
#import <libobjc.A.dylib/PXPhotosSectionBodyLayoutProviderInvalidationDelegate.h>

@protocol PXPhotosSectionHeaderLayoutProvider, PXPhotosSectionBodyLayoutProvider;
@class NSIndexSet, PXAssetsDataSource, PXPhotosViewModel, PXPhotosLayoutSpec, NSString;

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _isUpdatingSublayouts;
	SCD_Struct_PX37 _headerProviderRespondsTo;
	unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
	NSIndexSet* _cachedSectionsWithSelectedItems;
	long long _numberOfForcedSections;
	PXAssetsDataSource* _assetsDataSource;
	PXPhotosViewModel* _viewModel;
	PXPhotosLayoutSpec* _spec;
	id<PXPhotosSectionHeaderLayoutProvider> _headerLayoutProvider;
	id<PXPhotosSectionBodyLayoutProvider> _bodyLayoutProvider;
	double _interSectionSpacing;

}

@property (assign,nonatomic) double interSectionSpacing;                                                  //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                                             //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource;                                     //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,retain) PXPhotosLayoutSpec * spec;                                                   //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) id<PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider;              //@synthesize headerLayoutProvider=_headerLayoutProvider - In the implementation block
@property (nonatomic,readonly) id<PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider;                  //@synthesize bodyLayoutProvider=_bodyLayoutProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)update;
-(PXPhotosLayoutSpec *)spec;
-(PXPhotosViewModel *)viewModel;
-(void)setSpec:(PXPhotosLayoutSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)axSpriteIndexes;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(CGSize)arg3 ;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(PXAssetsDataSource *)assetsDataSource;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 type:(unsigned long long)arg2 ;
-(void)setInterSectionSpacing:(double)arg1 ;
-(double)interSectionSpacing;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(id)presentedItemsGeometryForSection:(unsigned long long)arg1 inDataSource:(id)arg2 ;
-(void)enumerateItemsGeometriesInRect:(CGRect)arg1 dataSource:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2 ;
-(void)_updateSublayoutsDataSource;
-(void)enumerateAssetsSectionSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsSectionSublayoutsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)arg1 ;
-(void)assetSectionLayoutDidConfigureLayouts:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 headerProvider:(id)arg2 bodyProvider:(id)arg3 ;
-(id)topmostHeaderSnapshotInRect:(CGRect)arg1 ;
-(id)_createAnimationForChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3 ;
-(void)_performAddActionForSectionLayout:(id)arg1 ;
-(BOOL)_shouldFaultInSection:(long long)arg1 inDataSource:(id)arg2 ;
-(BOOL)_configureSectionLayout:(id)arg1 ;
-(void)_invalidateSublayoutsDataSource;
-(void)_invalidateSublayoutsSpec;
-(void)_updateSublayoutsSpec;
-(void)_updateSublayoutGridConfiguratorForLayout:(id)arg1 ;
-(void)_invalidateSublayoutsConfiguration;
-(void)_updateSublayoutsConfiguration;
-(id<PXPhotosSectionHeaderLayoutProvider>)headerLayoutProvider;
-(id<PXPhotosSectionBodyLayoutProvider>)bodyLayoutProvider;
@end

