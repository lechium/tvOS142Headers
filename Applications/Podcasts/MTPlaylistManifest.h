//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTPredicateManifest.h"

@class NSString;

@interface MTPlaylistManifest : MTPredicateManifest
{
    NSString *_playlistUuid;	// 8 = 0x8
}

+ (id)activityTypeSuffix;	// IMP=0x00000001001550b4
+ (void)createManifestForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100154ef0
- (void).cxx_destruct;	// IMP=0x0000000100155514
@property(retain, nonatomic) NSString *playlistUuid; // @synthesize playlistUuid=_playlistUuid;
- (void)_propertyDidChange;	// IMP=0x00000001001554a8
- (_Bool)_updatePlaylistEpisodes;	// IMP=0x0000000100155134
- (void)_load:(CDUnknownBlockType)arg1;	// IMP=0x00000001001550c0
- (id)activitySpotlightIdentifier;	// IMP=0x0000000100154ee8
- (id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2;	// IMP=0x0000000100154bf0

@end

