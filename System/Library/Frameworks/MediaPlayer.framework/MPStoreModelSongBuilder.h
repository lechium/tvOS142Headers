/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder, MPPropertySet;

@interface MPStoreModelSongBuilder : MPStoreModelObjectBuilder {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	MPPropertySet* _storeAssetProperties;
	SCD_Struct_MP50 _requestedSongProperties;

}
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
@end

