//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;	// 8 = 0x8
    double _inviteeUILaunchTimestamp;	// 16 = 0x10
    double _connectingDevicesTimestamp;	// 24 = 0x18
    double _programaticInviteTimestamp;	// 32 = 0x20
    double _appLaunchTimestamp;	// 40 = 0x28
    double _totalInviteReceivedTimestamp;	// 48 = 0x30
    double _messageInviteProcessingTimestamp;	// 56 = 0x38
}

+ (id)reporter;	// IMP=0x00000001001ade14
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x00000001001aeaac
- (void)reportTotalInviteReceivedDuration;	// IMP=0x00000001001aea38
- (void)reportAppLaunchDuration;	// IMP=0x00000001001ae9c4
- (void)recordAppLaunchAndTotalTimestamp;	// IMP=0x00000001001ae984
- (void)reportProgramaticInviteDuration;	// IMP=0x00000001001ae910
- (void)recordProgramaticInviteTimestamp;	// IMP=0x00000001001ae8e4
- (void)reportConnectingDevicesDuration;	// IMP=0x00000001001ae870
- (void)recordConnectingDevicesTimestamp;	// IMP=0x00000001001ae844
- (void)reportMessageInviteProcessingDuration;	// IMP=0x00000001001ae7d0
- (void)recordMessageInviteProcessingTimestamp;	// IMP=0x00000001001ae7a4
- (void)reportInviteeUILaunchDuration;	// IMP=0x00000001001ae730
- (void)recordInviteeUILaunchTimestamp;	// IMP=0x00000001001ae704
- (void)reportAuthenticateResponseDuration;	// IMP=0x00000001001ae690
- (void)recordAuthenticateResponseTimestamp;	// IMP=0x00000001001ae664
- (void)reportTournamentAnalyticsWithDomain:(id)arg1 type:(id)arg2 tournamentType:(id)arg3 replayCount:(id)arg4 friendCount:(id)arg5 tournamentID:(id)arg6 bundleID:(id)arg7 inviteeCount:(id)arg8;	// IMP=0x00000001001ae4f0
- (_Bool)isTimeSpanValid:(double)arg1;	// IMP=0x00000001001ae4d0
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;	// IMP=0x00000001001ae42c
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(id)arg3;	// IMP=0x00000001001ae388
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;	// IMP=0x00000001001ae2e4
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;	// IMP=0x00000001001ae21c
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;	// IMP=0x00000001001ae178
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;	// IMP=0x00000001001ae064
- (void)reportEvent:(id)arg1 type:(id)arg2;	// IMP=0x00000001001adfcc
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x00000001001ade78

@end
