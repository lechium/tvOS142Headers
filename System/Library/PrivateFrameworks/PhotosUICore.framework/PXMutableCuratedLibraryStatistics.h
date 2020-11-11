/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryStatistics.h>

@interface PXMutableCuratedLibraryStatistics : PXCuratedLibraryStatistics {

	long long* _counts;

}
-(id)init;
-(void)dealloc;
-(long long)numberOfAssetsWithPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(void)_incrementCountForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(long long)_coutIndexForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(void)appendStatisticsForSection:(long long)arg1 assetsDataSource:(id)arg2 playbackController:(id)arg3 visibleItems:(id)arg4 heroItems:(id)arg5 keyItem:(long long)arg6 ;
@end
