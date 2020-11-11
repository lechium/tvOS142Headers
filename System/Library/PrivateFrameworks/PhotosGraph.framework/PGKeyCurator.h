/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject {

	CLSAssetsBeautifier* _beautifier;
	CLSSimilarStacker* _similarStacker;

}
-(id)init;
-(id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 criteria:(id)arg4 curationOptions:(id)arg5 ;
-(id)_keyItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(BOOL)item:(id)arg1 passesCriteria:(id)arg2 score:(double*)arg3 ;
-(id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2 ;
-(BOOL)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2 ;
-(BOOL)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2 ;
-(BOOL)cluster:(id)arg1 isBetterThanCluster:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4 ;
@end

