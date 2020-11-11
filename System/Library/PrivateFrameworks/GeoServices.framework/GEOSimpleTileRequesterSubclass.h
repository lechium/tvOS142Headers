/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOSimpleTileRequesterSubclass
@optional
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(id)editionHeader;
-(BOOL)downloadsDataToDisk;
-(SCD_Struct_GE4*)kindForTileKey:(const GEOTileKey*)arg1;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(id)processTileData:(id)arg1 forKey:(const GEOTileKey*)arg2 error:(id*)arg3;

@required
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end

