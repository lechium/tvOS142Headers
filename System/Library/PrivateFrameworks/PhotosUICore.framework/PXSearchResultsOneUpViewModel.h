/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXPhotoKitUIMediaProvider, PXAssetsDataSourceManager, PXPhotosDataSource, PXAssetReference;

@interface PXSearchResultsOneUpViewModel : NSObject {

	PXPhotoKitUIMediaProvider* _mediaProvider;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXPhotosDataSource* _dataSource;
	PXAssetReference* _initialAssetReference;

}

@property (nonatomic,retain) PXPhotoKitUIMediaProvider * mediaProvider;                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXAssetReference * initialAssetReference;                   //@synthesize initialAssetReference=_initialAssetReference - In the implementation block
-(PXPhotosDataSource *)dataSource;
-(void)setDataSource:(PXPhotosDataSource *)arg1 ;
-(PXPhotoKitUIMediaProvider *)mediaProvider;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(id)initWithOneUpWithAsset:(id)arg1 atIndex:(unsigned long long)arg2 inAssetCollection:(id)arg3 ;
-(void)updateDataSourceWithFetchResult:(id)arg1 ;
-(void)setMediaProvider:(PXPhotoKitUIMediaProvider *)arg1 ;
-(void)setDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(PXAssetReference *)initialAssetReference;
-(void)setInitialAssetReference:(PXAssetReference *)arg1 ;
@end
