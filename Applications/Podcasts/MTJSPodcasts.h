//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "MTJSPodcasts-Protocol.h"

@interface MTJSPodcasts : IKJSObject <MTJSPodcasts>
{
}

- (id)_adjustedOptionsWithOptions:(id)arg1;	// IMP=0x00000001000d89f0
- (id)identifierForDictionary:(id)arg1;	// IMP=0x00000001000d884c
- (void)markWelcomeAsShown;	// IMP=0x00000001000d8838
- (_Bool)shouldShowWelcome;	// IMP=0x00000001000d8824
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;	// IMP=0x00000001000d8660
- (_Bool)isDiagnosticSubmissionAllowed;	// IMP=0x00000001000d860c
- (_Bool)isSubscribed:(id)arg1;	// IMP=0x00000001000d85f8
- (void)unsubscribe:(id)arg1;	// IMP=0x00000001000d85e4
- (void)subscribeWithCallback:(id)arg1:(id)arg2;	// IMP=0x00000001000d8450
- (void)subscribe:(id)arg1;	// IMP=0x00000001000d8440

@end

