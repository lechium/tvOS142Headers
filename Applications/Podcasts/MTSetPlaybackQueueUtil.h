//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTSetPlaybackQueueUtil : NSObject
{
}

+ (long long)_automaticCommandStatusForRequestStatus:(long long)arg1;	// IMP=0x0000000100079a4c
+ (void)_setPlaybackQueueFromStoreForPodcastAdamId:(id)arg1 siriAssetInfo:(id)arg2 savePlayHistory:(_Bool)arg3 playbackOrder:(long long)arg4 startPlayback:(_Bool)arg5 reason:(unsigned long long)arg6 interactive:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000100079864
+ (_Bool)_setPlaybackQueueForPodcastAdamId:(id)arg1 siriAssetInfo:(id)arg2 savePlayHistory:(_Bool)arg3 playbackOrder:(long long)arg4 startPlayback:(_Bool)arg5 reason:(unsigned long long)arg6 interactive:(_Bool)arg7 forceLocal:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x00000001000791c4
+ (_Bool)_setManifest:(id)arg1 queueType:(long long)arg2 startPlayback:(_Bool)arg3 forceLocal:(_Bool)arg4 reason:(unsigned long long)arg5 interactive:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100079078
+ (_Bool)_setPlaybackQueueForMyPodcastsWithOrder:(long long)arg1 startPlayback:(_Bool)arg2 forceLocal:(_Bool)arg3 reason:(unsigned long long)arg4 interactive:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100078dcc
+ (long long)subscribeCommandStatusForErrorCode:(long long)arg1;	// IMP=0x0000000100078dac
+ (long long)queueCommandStatusForRequestStatus:(long long)arg1 queueType:(long long)arg2;	// IMP=0x0000000100078d8c
+ (_Bool)setAutoResumePlaybackQueueAndStartPlayback:(_Bool)arg1 forceLocal:(_Bool)arg2 reason:(unsigned long long)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100078d68
+ (_Bool)subscribeWithCommandURL:(id)arg1 siriAssetInfo:(id)arg2 requester:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000786a0
+ (_Bool)setPlaybackQueueForRequest:(id)arg1 siriAssetInfo:(id)arg2 enqueuer:(id)arg3 savePlayHistory:(_Bool)arg4 startPlayback:(_Bool)arg5 forceLocal:(_Bool)arg6 isMagicMoment:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000001000774b8

@end

