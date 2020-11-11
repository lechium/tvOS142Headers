/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine {

	SCD_Struct_GE157* _transitLink;
	unsigned long long _lineIndex;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE157* transitLink; 
@property (nonatomic,readonly) NSString * internalLineName; 
-(void)dealloc;
-(GEOTileKey)tileKey;
-(id)initWithTransitLink:(SCD_Struct_GE157*)arg1 lineIndex:(unsigned long long)arg2 ;
-(id)_containingTile;
-(SCD_Struct_GE195*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(NSString *)internalLineName;
-(SCD_Struct_GE157*)transitLink;
@end
