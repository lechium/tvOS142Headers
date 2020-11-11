//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

#import "NSUserActivityDelegate-Protocol.h"

@class NSString, NSUserActivity;

@interface MTHandoffController : MTSingleton <NSUserActivityDelegate>
{
    NSUserActivity *_activity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010012e318
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
- (void)continuePlaybackActivity:(id)arg1;	// IMP=0x000000010012dcfc
- (id)supportedActivityTypes;	// IMP=0x000000010012dca8
- (void)continueActivity:(id)arg1;	// IMP=0x000000010012dc04
- (id)init;	// IMP=0x000000010012dbd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
