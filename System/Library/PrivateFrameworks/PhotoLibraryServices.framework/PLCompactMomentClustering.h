/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PLCompactMomentClustering : NSObject {

	NSArray* _locationsOfInterest;
	BOOL _routineIsAvailable;

}
-(void)dealloc;
-(id)initWithDataManager:(id)arg1 ;
-(id)newAssetClusterFromAssetsSortedByDate:(id)arg1 ;
-(id)assetsByLocationTypeFromAssets:(id)arg1 locationsOfInterest:(id)arg2 ;
-(id)createAssetClustersForAssetsInDay:(id)arg1 ;
-(id)_runDBSCANClusteringWithAssets:(id)arg1 ;
-(id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2 ;
-(id)_assetClustersFromDataClusters:(id)arg1 ;
-(id)_processedLocationTypeByAssetUUIDFromAssets:(id)arg1 ;
-(id)_clusterAssetsWithUsableLocation:(id)arg1 ;
-(id)_clusterAssetsWithUnusableLocation:(id)arg1 ;
@end

