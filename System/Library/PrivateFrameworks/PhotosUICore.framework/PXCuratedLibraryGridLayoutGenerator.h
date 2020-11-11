/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCuratedLibraryGridLayoutGenerator : PXLayoutGenerator {

	CGSize _itemSize;
	double _interItemSpacing;
	UIEdgeInsets _insets;
	BOOL _isPrepared;
	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	CGSize _actualSize;
	double _lastFullRowBottomEdge;
	PXCornerSpriteIndexes _cornerSpriteIndexes;

}

@property (nonatomic,readonly) double lastFullRowBottomEdge; 
-(void)dealloc;
-(CGSize)size;
-(void)invalidate;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareIfNeeded;
-(void)_prepareGeometriesBufferForCount:(unsigned long long)arg1 ;
-(double)lastFullRowBottomEdge;
-(NSRange)geometriesRangeCoveringRect:(CGRect)arg1 ;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
@end
