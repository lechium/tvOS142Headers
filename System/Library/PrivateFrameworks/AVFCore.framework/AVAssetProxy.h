/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
-(BOOL)isProxy;
-(void)dealloc;
-(id)initWithPropertyList:(id)arg1 ;
-(id)tracks;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
@end

