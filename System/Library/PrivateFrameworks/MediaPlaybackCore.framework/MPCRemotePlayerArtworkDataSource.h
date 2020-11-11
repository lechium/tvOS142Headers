/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource
+(id)sharedDataSource;
+(id)bestArtworkSizes;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)_urlForCatalog:(id)arg1 size:(CGSize)arg2 ;
@end

