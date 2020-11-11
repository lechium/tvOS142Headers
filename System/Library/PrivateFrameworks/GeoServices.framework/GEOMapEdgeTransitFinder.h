/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {

	unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> >* _piecesConsidered;

}
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE1)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
@end

