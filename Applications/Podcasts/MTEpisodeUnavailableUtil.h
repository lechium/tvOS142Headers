//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@interface MTEpisodeUnavailableUtil : MTSingleton
{
}

+ (id)longReasonTextForNoInternet;	// IMP=0x00000001000ad0f4
+ (id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2;	// IMP=0x00000001000acdd8
+ (id)stringForUnavailableReason:(unsigned long long)arg1;	// IMP=0x00000001000acce4
+ (unsigned long long)unavailableReasonForEpisode:(id)arg1;	// IMP=0x00000001000acc04
- (void)_presentRestrictedDialogWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ad854
- (void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ad6f0
- (_Bool)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ad2c4

@end

