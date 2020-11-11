//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFMetrics, AFUserUtteranceSelectionResults, AceObject, NSDictionary, NSString, NSUUID, SABaseClientBoundCommand, SASRequestOptions;
@protocol SAAceCommand;

@protocol AFUISiriSession <NSObject>
- (void)audioRoutePickerWillDismiss;
- (void)audioRoutePickerWillShow;
- (void)recordMetricsContext:(NSString *)arg1 forDisambiguatedAppWIthBundleIdentifier:(NSString *)arg2;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)siriUIDidPresentDynamicSnippetWithInfo:(NSDictionary *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 conflictHandler:(void (^)(void))arg2;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3 turnIdentifier:(NSUUID *)arg4;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)telephonyRequestCompleted;
- (void)endForReason:(long long)arg1;
- (void)end;
- (void)updateRequestOptions:(SASRequestOptions *)arg1;
- (void)stopRequestWithOptions:(SASRequestOptions *)arg1;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRequestWithOptions:(SASRequestOptions *)arg1;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActiveForReason:(long long)arg1;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)setLockState:(unsigned long long)arg1;
- (void)setCarDNDActive:(_Bool)arg1;
- (void)setDeviceInStarkMode:(_Bool)arg1;
@end
