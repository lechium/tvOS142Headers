//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTMediaContentSource.h"

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource
{
    _Bool _iTunesMatchEnabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000c7874
@property(readonly, nonatomic) _Bool iTunesMatchEnabled; // @synthesize iTunesMatchEnabled=_iTunesMatchEnabled;
- (void)determineiTunesMatchEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c78e0

@end

