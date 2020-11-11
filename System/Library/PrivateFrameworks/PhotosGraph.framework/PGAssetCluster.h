/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, CLCircularRegion;

@interface PGAssetCluster : NSObject {

	NSArray* _assets;
	CLCircularRegion* _region;

}

@property (nonatomic,retain,readonly) NSArray * assets;                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain,readonly) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
-(CLCircularRegion *)region;
-(NSArray *)assets;
-(id)initWithAssets:(id)arg1 region:(id)arg2 ;
@end

