//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSString;

@interface MTSiriAnalyticsController : MTSingleton
{
    NSString *_pendingRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003d4fc
@property(retain, nonatomic) NSString *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
- (void)playerRateChanged;	// IMP=0x000000010003d22c
- (void)observePlaybackStartEventForRefId:(id)arg1;	// IMP=0x000000010003d1d0
- (id)init;	// IMP=0x000000010003d138

@end
