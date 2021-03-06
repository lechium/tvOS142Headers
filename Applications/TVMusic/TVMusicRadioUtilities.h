//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicRadioUtilities : NSObject
{
}

+ (_Bool)_isUserSubscribed;	// IMP=0x0000000100037a94
+ (id)_playbackIntentForArtistID:(id)arg1;	// IMP=0x0000000100037988
+ (void)playFromMPArtist:(id)arg1;	// IMP=0x0000000100037934
+ (_Bool)canPlayFromMPArtist:(id)arg1;	// IMP=0x0000000100037854
+ (void)playFromMPAlbum:(id)arg1;	// IMP=0x0000000100037800
+ (_Bool)canPlayFromMPAlbum:(id)arg1;	// IMP=0x00000001000377f8
+ (void)playFromMPSong:(id)arg1;	// IMP=0x00000001000377e4
+ (_Bool)canPlayFromMPSong:(id)arg1;	// IMP=0x0000000100037650
+ (void)playFromArtistID:(id)arg1 playActivityFeatureName:(id)arg2 playActivityRecommendationData:(id)arg3 playLater:(_Bool)arg4;	// IMP=0x0000000100037560
+ (_Bool)canPlayFromArtistID:(id)arg1 playLater:(_Bool)arg2;	// IMP=0x0000000100037468
+ (void)playFromStationStringID:(id)arg1 playActivityFeatureName:(id)arg2 playActivityRecommendationData:(id)arg3 playLater:(_Bool)arg4;	// IMP=0x0000000100037310
+ (_Bool)canPlayFromStationStringID:(id)arg1 isFreeRadioStation:(_Bool)arg2 playLater:(_Bool)arg3;	// IMP=0x000000010003720c
+ (_Bool)isRadioPlaying;	// IMP=0x0000000100037190
+ (void)getRecentStationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037104
+ (id)sharedRadioRecentStationsController;	// IMP=0x0000000100037098

@end

