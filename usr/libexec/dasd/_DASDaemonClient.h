//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityGroupSchedulingAndIntrospecting-Protocol.h"
#import "_DASActivityMetering-Protocol.h"
#import "_DASActivitySchedulerClient-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, _DASDaemon;

@interface _DASDaemonClient : NSObject <_DASActivitySchedulerClient, _DASActivityGroupSchedulingAndIntrospecting, _DASActivityMetering>
{
    _Bool _isTestModeClient;	// 8 = 0x8
    _Bool _restricted;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_submittedTasks;	// 24 = 0x18
    NSMutableSet *_delayedStartTasks;	// 32 = 0x20
    NSMutableSet *_startedTasks;	// 40 = 0x28
    _DASDaemon *_daemon;	// 48 = 0x30
    NSMutableSet *_runningBGTasks;	// 56 = 0x38
    NSString *_applicationBundleIdentifier;	// 64 = 0x40
    NSString *_mainApplicationBundleIdentifier;	// 72 = 0x48
}

+ (id)clientForDaemon:(id)arg1 withConnection:(id)arg2 isRestricted:(_Bool)arg3;	// IMP=0x000000010006265c
- (void).cxx_destruct;	// IMP=0x0000000100066b14
@property(nonatomic) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *mainApplicationBundleIdentifier; // @synthesize mainApplicationBundleIdentifier=_mainApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) NSMutableSet *runningBGTasks; // @synthesize runningBGTasks=_runningBGTasks;
@property(retain, nonatomic) _DASDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) _Bool isTestModeClient; // @synthesize isTestModeClient=_isTestModeClient;
@property(retain, nonatomic) NSMutableSet *startedTasks; // @synthesize startedTasks=_startedTasks;
@property(retain, nonatomic) NSMutableSet *delayedStartTasks; // @synthesize delayedStartTasks=_delayedStartTasks;
@property(retain, nonatomic) NSMutableSet *submittedTasks; // @synthesize submittedTasks=_submittedTasks;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)activityStoppedWithParameters:(id)arg1;	// IMP=0x0000000100066a44
- (void)activityStartedWithParameters:(id)arg1;	// IMP=0x0000000100066a34
- (void)pauseWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066974
- (void)enterTestModeWithParameters:(id)arg1;	// IMP=0x00000001000668c4
- (void)blockingPoliciesWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066804
- (void)clasStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006675c
- (void)policiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000666b4
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010006660c
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x0000000100066564
- (void)remainingBalanceForBudgetWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000664a4
- (void)allBudgetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000663fc
- (void)statisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066354
- (void)currentPredictionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000662ac
- (void)deferActivities:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000661ec
- (void)forceRunActivities:(id)arg1;	// IMP=0x0000000100066144
- (void)activityRunStatisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006609c
- (void)scoresForActivityWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065fdc
- (void)runningGroupActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065f34
- (void)runningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065e8c
- (void)delayedRunningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065de4
- (void)submittedActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065d3c
- (void)completeTaskRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065b38
- (void)establishConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065a3c
- (void)willExpireBGTaskActivities:(id)arg1;	// IMP=0x00000001000657c8
- (void)handleLaunchFromDaemonForActivities:(id)arg1;	// IMP=0x0000000100065660
- (void)cancelAllTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006556c
- (void)cancelTaskRequestWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010006545c
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065360
- (void)submitTaskRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064f64
- (void)validateCTBGTaskRequestWithActivity:(id)arg1;	// IMP=0x0000000100064f60
- (void)setApplicationURLForActivity:(id)arg1;	// IMP=0x0000000100064f5c
- (id)unsafe_mainApplicationBundleIdentifier;	// IMP=0x0000000100064dc0
- (id)unsafe_applicationBundleIdentifier;	// IMP=0x0000000100064cbc
- (id)bundleIdentifierFromTeamAppTuple:(id)arg1;	// IMP=0x0000000100064a88
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x0000000100064a78
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;	// IMP=0x0000000100064988
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x0000000100064898
- (void)createActivityGroup:(id)arg1;	// IMP=0x000000010006473c
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000001000646a0
- (void)activityCanceled:(id)arg1;	// IMP=0x0000000100064538
- (void)cancelAllActivities;	// IMP=0x0000000100064318
- (void)activityCompleted:(id)arg1;	// IMP=0x00000001000640fc
- (void)activityStarted:(id)arg1;	// IMP=0x0000000100063eb8
- (void)delayedStartActivities:(id)arg1;	// IMP=0x0000000100063d9c
- (void)startedActivities:(id)arg1;	// IMP=0x0000000100063c40
- (void)handleRunningActivities:(id)arg1;	// IMP=0x0000000100063b3c
- (void)handleEligibleActivities:(CDUnknownBlockType)arg1;	// IMP=0x0000000100063b2c
- (void)submitActivities:(id)arg1;	// IMP=0x0000000100063a60
- (void)submitActivity:(id)arg1;	// IMP=0x0000000100063994
- (void)submitActivitiesInternal:(id)arg1;	// IMP=0x00000001000637c0
- (void)submitActivityInternal:(id)arg1;	// IMP=0x0000000100063708
- (void)dealloc;	// IMP=0x00000001000636b8
- (void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2;	// IMP=0x000000010006362c
- (void)activity:(id)arg1 blockedOnPolicies:(id)arg2;	// IMP=0x00000001000635a0
- (void)cancelActivities:(id)arg1;	// IMP=0x0000000100063350
- (void)suspendActivities:(id)arg1;	// IMP=0x0000000100063118
- (void)runActivities:(id)arg1;	// IMP=0x0000000100062eb4
- (void)runActivitiesWithDelayedStart:(id)arg1;	// IMP=0x0000000100062c28
- (id)activityNamesFromActivities:(id)arg1;	// IMP=0x0000000100062a60
- (void)handleClientInterruption;	// IMP=0x0000000100062a08
- (id)unlockedActivitiesWithNames:(id)arg1 inSet:(id)arg2;	// IMP=0x0000000100062850
- (void)removeKnownActivitiesFromSet:(id)arg1;	// IMP=0x00000001000626dc
- (id)initWithDaemon:(id)arg1 withConnection:(id)arg2 isRestricted:(_Bool)arg3;	// IMP=0x0000000100062398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

