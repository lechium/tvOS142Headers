/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGCurator.h>

@class PHPhotoLibrary;

@interface PGCurator_PHAsset : PGCurator {

	PHPhotoLibrary* _photoLibrary;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)bestAssetsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)newSemanticalDeduperWithOptions:(id)arg1 ;
-(id)newMovieDeduperWithOptions:(id)arg1 ;
-(void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5 ;
-(void)addMoviesToAssets:(id)arg1 fromFeeder:(id)arg2 maximumNumberOfAssets:(unsigned long long)arg3 debugInfo:(id)arg4 ;
@end

