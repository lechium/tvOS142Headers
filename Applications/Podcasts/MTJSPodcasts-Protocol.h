//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSDictionary, NSString;

@protocol MTJSPodcasts <JSExport>
- (void)markWelcomeAsShown;
- (_Bool)shouldShowWelcome;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (_Bool)isDiagnosticSubmissionAllowed;
- (_Bool)isSubscribed:(NSDictionary *)arg1;
- (void)unsubscribe:(NSDictionary *)arg1;
- (void)subscribeWithCallback:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)subscribe:(NSDictionary *)arg1;
@end

